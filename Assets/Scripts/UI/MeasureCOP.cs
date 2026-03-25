using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

public class MeasureCOP : MonoBehaviour
{
    public Text txtValueLeftFoot; // ใช้ Text (Legacy) แทน TMP_Text
    public Text txtValueRightFoot; // ใช้ Text (Legacy) แทน TMP_Text
    public Slider progressBar;
    public GameObject hintLeft;
    public GameObject hintRight;
    public GameObject btnCalibrate;
    public GameObject btnHeight;
    public GameObject btnStart;
    public GameObject device1;
    public GameObject device2;
    public InputField heightInputField;
    public GameObject heightPopup; // เพิ่ม GameObject สำหรับ Popup

    public GameObject Picture1;
    public GameObject Picture2;
    public GameObject Picture3;
    public GameObject Picture4;
    public GameObject Picture5;
    public Text txtPopupTitle;
    public Text txtPopupBody;

    public BluetoothManager bluetoothManager;
    public BluetoothManager Bluetooth => bluetoothManager;
    private List<COPData> copDataList = new List<COPData>();

    private string userId;
    private float timerCalibrate = 10f; // ระยะเวลาการวัด
    private float timerCouter = 0f;
    private bool isMeasuring = false; // เพิ่มตัวแปรนี้เพื่อเก็บสถานะการวัด

    private float[] sumValues1 = new float[8]; // ตัวแปรเก็บผลรวมของ _value1[0] ถึง _value1[7]
    private float[] sumValues2 = new float[8]; // ตัวแปรเก็บผลรวมของ _value2[0] ถึง _value2[7]
    private int countValues = 0; // ตัวแปรเก็บจำนวนครั้งที่ทำการวัด

    private List<int[]> leftFootData = new List<int[]>();
    private List<int[]> rightFootData = new List<int[]>();
    private int shoeSize;

    private List<float> sampleTimes = new List<float>(); // เวลา (วินาที) ต่อ sample
    private List<float> ls_errors = new List<float>();
    private List<float> rs_errors = new List<float>();

    private List<string> rawSensorLog = new List<string>();
    private string currentFilePath;

    private float playerHeight;

    private static readonly float[] sensor_positionsX_36 = {7.2f, 1.8f, 7.4f, 4.4f, 2f, 7.4f, 4f, 6.5f};
    private static readonly float[] sensor_positionsX_38 = {7.5f, 1.9f, 7.6f, 4.2f, 2f, 7.6f, 3.8f, 6.7f};
    private static readonly float[] sensor_positionsX_40 = {8f, 2.3f, 8f, 4.4f, 2.3f, 8f, 4f, 7.2f};
    private static readonly float[] sensor_positionsX_42 = {8.1f, 2.2f, 8.2f, 4.4f, 2.2f, 8f, 4f, 7.2f};
    private static readonly float[] sensor_positionsX_44 = {8.6f, 2.2f, 8.3f, 4.6f, 2.2f, 8.2f, 4f, 7.2f};

    private static readonly float[] sensor_positionsY_36 = {20.6f, 18.6f, 16.2f, 16.2f, 14f, 10f, 8.8f, 3f};
    private static readonly float[] sensor_positionsY_38 = {21.4f, 19.4f, 17f, 17f, 14.5f, 11f, 9.7f, 3.2f};
    private static readonly float[] sensor_positionsY_40 = {22.1f, 20.2f, 17.5f, 17.5f, 15f, 11.6f, 10.2f, 3.2f};
    private static readonly float[] sensor_positionsY_42 = {21.1f, 21.3f, 18.3f, 18.4f, 15.9f, 9.7f, 10.6f, 3.3f};
    private static readonly float[] sensor_positionsY_44 = {24.2f, 22.4f, 19.2f, 19.2f, 16.8f, 12.2f, 10.9f, 3.5f};

    [SerializeField] private bool clipNegativeAfterBaseline = false;
    public bool ClipNegativeAfterBaseline => clipNegativeAfterBaseline;  // <— เพิ่มบรรทัดนี้
    // ให้เหมือน Python: .clip(lower=0)

    [SerializeField] private bool useMeanCopOverWindow = true;

    // ==== Debug options ====
    [SerializeField] private bool enableVerboseDebug = true;
    [SerializeField] private int debugEveryNSamples = 25; // log ทุก ๆ กี่ sample (กัน spam)

    // helper แปลง array เป็น string สวย ๆ
    private static string FloatsToString(IEnumerable<float> vals, string fmt = "F4")
    {
        System.Text.StringBuilder sb = new System.Text.StringBuilder();
        bool first = true;
        foreach (var v in vals)
        {
            if (!first) sb.Append(",");
            sb.Append(v.ToString(fmt));
            first = false;
        }
        return sb.ToString();
    }
    private static float Round2(float x) => Mathf.Round(x * 100f) / 100f;

    public (float centerPointX, float centerPointY, float[] Xs, float[] Ys)
    GetGeometry(int shoeSize)
    {
        // ตั้งค่า PlayerHeight เริ่มต้นถ้ายังไม่มี
        if (!PlayerPrefs.HasKey("PlayerHeight"))
        {
            PlayerPrefs.SetFloat("PlayerHeight", 170f);
            PlayerPrefs.Save();
        }

        // อ่านจาก PlayerPrefs (หน่วย: ซม.)
        float height = PlayerPrefs.GetFloat("PlayerHeight", 170f);
        float shoulderWidth = 0.25f * height;

        float[] Xs = GetSensorPositionsX(shoeSize);
        float[] Ys = GetSensorPositionsY(shoeSize);

        // ป้องกันกรณีพลาด (array ไม่ครบ 8)
        if (Ys == null || Ys.Length < 8)
        {
            Debug.LogWarning("GetGeometry: sensor Y positions invalid, returning zeros.");
            return (0f, 0f, Xs ?? new float[8], Ys ?? new float[8]);
        }

        float insoleAbsoluteSize = Ys[0] - Ys[7];   // หัว - ส้น
        float centerPointX = shoulderWidth / 2f;
        float centerPointY = insoleAbsoluteSize / 2f;

        // log ให้ถูกตัวแปร
        Debug.Log($"GetGeometry -> height:{height:F1}cm, cx:{centerPointX:F2}, cy:{centerPointY:F2}, shoe:{shoeSize}");

        // อัปเดตฟิลด์ playerHeight ไว้ด้วย (ถ้าอยากใช้ที่อื่น)
        this.playerHeight = height;


        return (centerPointX, centerPointY, Xs, Ys);
    }

    [SerializeField] private bool allowRunWithoutBluetooth = true; // ใช้ตอน demo

    private void Awake()
    {
        bluetoothManager = FindObjectOfType<BluetoothManager>();
        Debug.Log($"isMeasuring Awake: {isMeasuring}");

        if (bluetoothManager == null)
        {
            if (allowRunWithoutBluetooth)
            {
                Debug.LogWarning("BluetoothManager not found. Running without sensor (demo mode OK).");
                // อย่า return -> ให้สคริปต์ทำงานต่อไป
            }
            else
            {
                Debug.LogError("BluetoothManager is not found.");
                // ถ้าจำเป็นต้องหยุดจริง ๆ ค่อย return; แต่สำหรับ demo ให้คอมเมนต์บรรทัดนี้ไว้
                // return;
            }
        }
    }

    private void Start()
    {
        progressBar.minValue = 0f;
        progressBar.maxValue = timerCalibrate;
        progressBar.value = 0f;
        btnStart.SetActive(false);
        heightPopup.SetActive(false); // ซ่อน Popup ตอนเริ่มต้น
        Picture1.SetActive(false);
        Picture2.SetActive(false);
        Picture3.SetActive(false);
        Picture4.SetActive(false);
        Picture5.SetActive(false);
        LoadData();
    }

    private void LoadData()
    {
        shoeSize = PlayerPrefs.GetInt("ShoeSize");

        int errorsCount = PlayerPrefs.GetInt("ErrorsCount");

      // ดึงค่าของ ls_errors
        for (int i = 0; i < errorsCount; i++)
        {
            ls_errors.Add(PlayerPrefs.GetFloat("LsError" + i));
        }

        // ดึงค่าของ rs_errors
        for (int i = 0; i < errorsCount; i++)
        {
            rs_errors.Add(PlayerPrefs.GetFloat("RsError" + i));
        }
    }

    private void Update()
    {

        if (isMeasuring)
        {
            Debug.Log("Measuring in progress...");
            var sensorData1 = bluetoothManager.GetSubscribeCharacteristic(1);
            var sensorData2 = bluetoothManager.GetSubscribeCharacteristic(2);

            if (sensorData1.Item1 == null || sensorData2.Item1 == null)
            {
                Debug.LogWarning("Sensor values are null");
                return;
            }

            int[] _value1 = sensorData1.Item1;
            int[] _value2 = sensorData2.Item1;

            // ✅ เก็บข้อมูลดิบไว้ใน log (อันนี้โอเค เพราะแปลงเป็นสตริงแล้ว)
            string timestamp = Time.time.ToString("F2");
            string leftRaw = $"{timestamp},Left," + string.Join(",", _value1);
            string rightRaw = $"{timestamp},Right," + string.Join(",", _value2);
            rawSensorLog.Add(leftRaw);
            rawSensorLog.Add(rightRaw);

            // ✅ ต้อง "clone" ก่อนเก็บลงลิสต์ มิฉะนั้นทุก sample จะชี้อาเรย์เดียวกัน
            int[] lClone = (int[])_value1.Clone();
            int[] rClone = (int[])_value2.Clone();
            leftFootData.Add(lClone);
            rightFootData.Add(rClone);
            sampleTimes.Add(Time.time);

            // เก็บสะสมค่า _value1[0] ถึง _value1[7]
            for (int i = 0; i < 8; i++)
            {
                sumValues1[i] += _value1[i];
                sumValues2[i] += _value2[i];
            }
            countValues++;

            // พิมพ์ค่าทั้งหมดจากเซ็นเซอร์ 1
            Debug.Log("Sensor 1 values:");
            for (int i = 0; i < _value1.Length; i++)
            {
                Debug.Log($"_value1[{i}] = {_value1[i]}");
                Debug.Log($"_value2[{i}] = {_value2[i]}");
            }

            progressBar.value = timerCouter;
            timerCouter += Time.deltaTime;

            if (timerCouter >= timerCalibrate)
            {
                CompleteMeasurement();
            }
        }
    }

    private void CompleteMeasurement()
    {
        Debug.Log("CompleteMeasurement called");
        isMeasuring = false;

        // 1) โหลด baseline/errors และ ShoeSize
        int ss = PlayerPrefs.GetInt("ShoeSize");

        List<float> ls_err = new List<float>(8);
        List<float> rs_err = new List<float>(8);
        for (int i = 0; i < 8; i++)
        {
            ls_err.Add(PlayerPrefs.GetFloat("LsError" + i));
            rs_err.Add(PlayerPrefs.GetFloat("RsError" + i));
        }

        // 2) ลบ baseline + clip + แปลง Force (ตรง Python)
        float[,] leftForce, rightForce;
        ApplyBaselineAndFillForces(leftFootData, rightFootData, ls_err, rs_err, out leftForce, out rightForce);

        // 3) บันทึก raw log พร้อม error (หัวตารางไม่มี Battery ให้ตรงข้อมูลจริง)
        SaveRawSensorToCSV(currentFilePath, ls_err, rs_err);
        Debug.Log("Raw sensor data saved to: " + currentFilePath);

        // 4) คำนวณ COP เป็นซีรีส์ (เทียบกับ df['cop_x'], df['cop_y'] ใน Python)
        ComputeCopSeries(leftForce, rightForce, ss, out var copXSeries, out var copYSeries);

        // >>> บันทึกซีรีส์ COP (ไฟล์แยกอีกไฟล์หนึ่ง)
        string copSeriesName = Path.GetFileNameWithoutExtension(currentFilePath) + "_cop_series.csv";
        string copSeriesPath = Path.Combine(Path.GetDirectoryName(currentFilePath), copSeriesName);

        // จำกัดเวลาให้เท่ากับจำนวน sample จริง
        int n = Mathf.Min(leftForce.GetLength(0), rightForce.GetLength(0));
        var timesForN = (sampleTimes.Count >= n) ? sampleTimes.GetRange(0, n) : new List<float>(sampleTimes);

        SaveCopSeriesToCSV(copSeriesPath, timesForN, copXSeries, copYSeries);
        Debug.Log("COP series saved to: " + copSeriesPath);

        // 5) สรุปค่าเดียวสำหรับ UI
        float copX, copY;
        if (copXSeries.Count == 0)
        {
            copX = 0f; copY = 0f;
        }
        else if (useMeanCopOverWindow)
        {
            copX = 0f; copY = 0f;
            for (int i = 0; i < copXSeries.Count; i++)
            {
                copX += copXSeries[i];
                copY += copYSeries[i];
            }
            copX /= copXSeries.Count;
            copY /= copYSeries.Count;
        }
        else
        {
            // ใช้ค่าจาก sample สุดท้าย
            copX = copXSeries[copXSeries.Count - 1];
            copY = copYSeries[copYSeries.Count - 1];
        }

        // 6) แสดงผล
        Debug.Log($"Calculated COP X: {copX}");
        Debug.Log($"Calculated COP Y: {copY}");

        if (txtValueLeftFoot != null)  txtValueLeftFoot.text  = "COP X: " + copX.ToString("F2");
        if (txtValueRightFoot != null) txtValueRightFoot.text = "COP Y: " + copY.ToString("F2");

        // 7) เปิดรูปตามเงื่อนไข
        Picture1.SetActive(false);
        Picture2.SetActive(false);
        Picture3.SetActive(false);
        Picture4.SetActive(false);
        Picture5.SetActive(false);

        if (copX >= -4f && copX <= 4f && copY >= -3f && copY <= 3f) Picture5.SetActive(false);
        else if ( (copX > 4f && copY >= 0f) || (copX >= 0f && copY > 3f) ) Picture1.SetActive(true);
        else if ( (copX < -4f && copY >= 0f) || (copX < 0f && copY > 3f) ) Picture2.SetActive(true);
        else if ( (copX < -4f && copY < 0f) || (copX < 0f && copY < -3f) ) Picture3.SetActive(true);
        else if ( (copX > 4f && copY < 0f) || (copX >= 0f && copY < -3f) ) Picture4.SetActive(true);
        else                                   Picture5.SetActive(false);

        // 8) เก็บค่า
        PlayerPrefs.SetFloat("COPX", copX);
        PlayerPrefs.SetFloat("COPY", copY);
        PlayerPrefs.Save();
        btnStart.SetActive(true);
    }

    private void ComputeCopSeries(
        float[,] leftForce, float[,] rightForce, int shoeSize,
        out List<float> copXSeries, out List<float> copYSeries)
    {
        var (cx, cy, Xs, Ys) = GetGeometry(shoeSize);
        int n = leftForce.GetLength(0);

        copXSeries = new List<float>(n);
        copYSeries = new List<float>(n);

        if (enableVerboseDebug)
        {
            Debug.Log($"[COP] height={PlayerPrefs.GetFloat("PlayerHeight")}, cx={cx:F2}, cy={cy:F2}, shoe={shoeSize}");
            Debug.Log($"[COP] Xs={FloatsToString(Xs, "F2")}  Ys={FloatsToString(Ys, "F2")}");
        }

        // ปัด 2 ตำแหน่งแบบ Python
        float[] posX_L  = new float[8];
        float[] posX_R  = new float[8];
        float[] posY_all= new float[8];
        for (int j = 0; j < 8; j++)
        {
            posX_L[j]   = Round2(-cx + Xs[j]);
            posX_R[j]   = Round2( cx - Xs[j]);
            posY_all[j] = Round2(-cy + (Ys[j] - Ys[7]));
        }

        if (enableVerboseDebug)
        {
            Debug.Log($"[POS] posX_L={FloatsToString(posX_L, "F2")}  posX_R={FloatsToString(posX_R, "F2")}  posY={FloatsToString(posY_all, "F2")}");
        }

        for (int i = 0; i < n; i++)
        {
            float sumForce = 0f;
            float sumX = 0f;
            float sumY = 0f;

            bool doLog = enableVerboseDebug && (i % debugEveryNSamples == 0 || i == 0 || i == n - 1);

            float[] contribLX = doLog ? new float[8] : null;
            float[] contribLY = doLog ? new float[8] : null;
            float[] contribRX = doLog ? new float[8] : null;
            float[] contribRY = doLog ? new float[8] : null;

            // Left
            for (int j = 0; j < 8; j++)
            {
                float F = leftForce[i, j];
                float cxj = posX_L[j]  * F;
                float cyj = posY_all[j]* F;
                sumX += cxj;
                sumY += cyj;
                sumForce += F;

                if (doLog)
                {
                    contribLX[j] = cxj;
                    contribLY[j] = cyj;
                }
            }

            // Right
            for (int j = 0; j < 8; j++)
            {
                float F = rightForce[i, j];
                float cxj = posX_R[j]  * F;
                float cyj = posY_all[j]* F;
                sumX += cxj;
                sumY += cyj;
                sumForce += F;

                if (doLog)
                {
                    contribRX[j] = cxj;
                    contribRY[j] = cyj;
                }
            }

            float copx = 0f, copy = 0f;
            if (sumForce > 0f)
            {
                copx = sumX / sumForce;
                copy = sumY / sumForce;
            }

            copXSeries.Add(copx);
            copYSeries.Add(copy);

            if (doLog)
            {
                float t = (i < sampleTimes.Count) ? sampleTimes[i] - sampleTimes[0] : i;
                Debug.Log($"[SUM][{i}] t={t:F3}s sumForce={sumForce:F6} sumX={sumX:F6} sumY={sumY:F6}");
                Debug.Log($"[CONTRIB-LX][{i}] {FloatsToString(contribLX)}");
                Debug.Log($"[CONTRIB-LY][{i}] {FloatsToString(contribLY)}");
                Debug.Log($"[CONTRIB-RX][{i}] {FloatsToString(contribRX)}");
                Debug.Log($"[CONTRIB-RY][{i}] {FloatsToString(contribRY)}");
                Debug.Log($"[COP][{i}] cop_x={copx:F6}  cop_y={copy:F6}");
            }
        }
    }

    private void SaveRawSensorToCSV(string filePath, List<float> ls_errors, List<float> rs_errors)
    {
        using (StreamWriter writer = new StreamWriter(filePath))
        {
            // เอา Battery ออก เพราะเราไม่ได้เติมค่า Battery ในบรรทัดข้อมูล
            writer.WriteLine("Time,Foot,Sensor1,Sensor2,Sensor3,Sensor4,Sensor5,Sensor6,Sensor7,Sensor8,Battery,Error1,Error2,Error3,Error4,Error5,Error6,Error7,Error8");
            foreach (string line in rawSensorLog)
            {
                if (line.Contains(",Left,"))
                {
                    string errorPart = string.Join(",", ls_errors);
                    writer.WriteLine(line + "," + errorPart);
                }
                else if (line.Contains(",Right,"))
                {
                    string errorPart = string.Join(",", rs_errors);
                    writer.WriteLine(line + "," + errorPart);
                }
            }
        }
    }

    private void SaveCopSeriesToCSV(string filePath, List<float> times, List<float> copX, List<float> copY)
    {
        int n = Mathf.Min(times.Count, Mathf.Min(copX.Count, copY.Count));
        using (var writer = new StreamWriter(filePath))
        {
            writer.WriteLine("Index,Time(s),COP_X(cm),COP_Y(cm)");
            float t0 = (n > 0) ? times[0] : 0f; // อ้างอิงเวลาให้เริ่มที่ 0
            for (int i = 0; i < n; i++)
            {
                float t = times[i] - t0;
                writer.WriteLine($"{i},{t:F3},{copX[i]:F6},{copY[i]:F6}");
            }
        }
    }

    public float[] GetSensorPositionsX(int shoeSize)
    {
        switch (shoeSize)
        {
            case 35:
            case 36:
                return sensor_positionsX_36;
            case 37:
            case 38:
                return sensor_positionsX_38;
            case 39:
            case 40:
                return sensor_positionsX_40;
            case 41:
            case 42:
                return sensor_positionsX_42;
            case 43:
            case 44:
                return sensor_positionsX_44;
            default:
                return new float[8]; // หรือจะใส่ค่าที่เหมาะสมลงไปก็ได้
        }
    }

    public float[] GetSensorPositionsY(int shoeSize)
    {
        switch (shoeSize)
        {
            case 35:
            case 36:
                return sensor_positionsY_36;
            case 37:
            case 38:
                return sensor_positionsY_38;
            case 39:
            case 40:
                return sensor_positionsY_40;
            case 41:
            case 42:
                return sensor_positionsY_42;
            case 43:
            case 44:
                return sensor_positionsY_44;
            default:
                return new float[8]; // หรือจะใส่ค่าที่เหมาะสมลงไปก็ได้
        }
    }

    public float AdcToForce(float adcValue)
    {
        // Python: force = 0 เฉพาะ adc==0 เท่านั้น
        if (adcValue == 0f) return 0f;

        float vout = adcValue * (5f / 1023f);
        // อย่าเช็ค vout <= 0 ตัดทิ้ง — ให้คำนวณต่อเหมือน Python
        float inv = 5f / vout;                         // อาจติดลบได้ถ้า vout ติดลบ (เหมือน Python)
        float oneOverR = 1f / (1000f * (inv - 1f));
        float force = 2.36111f * Mathf.Exp(1428.01995f * oneOverR);
        return force;
    }

    public void StartMeasurement()
    {
        Debug.Log("StartMeasurement called");

        // ✅ สร้างชื่อไฟล์ใหม่พร้อม userId และเวลา เพื่อไม่ให้ซ้ำกัน
        string timestamp = DateTime.Now.ToString("yyyyMMdd_HHmmss");
        string fileName = $"raw_sensor_{userId}_{timestamp}.csv";
        currentFilePath = Path.Combine(Application.persistentDataPath, fileName);

        // ✅ เคลียร์ข้อมูลรอบก่อน เพื่อเริ่มรอบใหม่
        rawSensorLog.Clear();
        leftFootData.Clear();
        rightFootData.Clear();
        sampleTimes.Clear();

        countValues = 0;
        for (int i = 0; i < 8; i++)
        {
            sumValues1[i] = 0f;
            sumValues2[i] = 0f;
        }

        // ✅ เริ่มจับเวลา
        timerCouter = 0f;
        progressBar.value = 0f;
        isMeasuring = true;

        Debug.Log($"Measurement started. Data will be saved to: {currentFilePath}");
    }

    public void ShowHeightPopup()
    {
        Debug.Log("ShowHeightPopup");
        heightPopup.SetActive(true); // แสดง Popup
        Debug.Log("heightPopup isActive: " + heightPopup.activeSelf);

        // ตั้งค่าข้อความใน Popup
        if (txtPopupTitle != null && txtPopupBody != null)
        {
            txtPopupTitle.text = "กรอกความสูงของผู้เล่น";
            txtPopupBody.text = "Height (cm):";
        }
    }

    public void Submit_Height()
    {
        if (float.TryParse(heightInputField.text, out playerHeight))
        {
            Debug.Log("Player Height: " + playerHeight);

            // บันทึกค่า playerHeight ลงใน PlayerPrefs
            PlayerPrefs.SetFloat("PlayerHeight", playerHeight);
            PlayerPrefs.Save();  // บันทึกการเปลี่ยนแปลงลงใน storage

            heightPopup.SetActive(false); // ซ่อน Popup เมื่อได้รับความสูงที่ถูกต้อง
        }
        else
        {
            Debug.Log("Invalid Height");
            // แสดงข้อความผิดพลาด
            if (txtPopupBody != null)
            {
                txtPopupBody.text = "กรุณากรอกค่าความสูงที่ถูกต้อง";
            }
        }
    }

    public void NewSceneAI()
    {
        SceneManager.LoadScene("06_SelecteMissionMaze_AI");
    }

    public void OnCanceltoSelecteGame()
    {
        Debug.Log("OnCancel");
        SceneManager.LoadScene("07_SelecteGame");
    }

    private void ApplyBaselineAndFillForces(
        List<int[]> leftFootData, List<int[]> rightFootData,
        List<float> ls_errors, List<float> rs_errors,
        out float[,] leftForce, out float[,] rightForce)
    {
        int n = Mathf.Min(leftFootData.Count, rightFootData.Count);
        leftForce  = new float[n, 8];
        rightForce = new float[n, 8];

        if (enableVerboseDebug)
        {
            Debug.Log($"[DBG] clipNegativeAfterBaseline={clipNegativeAfterBaseline}, samples={n}");
            Debug.Log($"[DBG] LsErrors={FloatsToString(ls_errors, "F6")}");
            Debug.Log($"[DBG] RsErrors={FloatsToString(rs_errors, "F6")}");
        }

        for (int i = 0; i < n; i++)
        {
            bool doLog = enableVerboseDebug && (i % debugEveryNSamples == 0 || i == 0 || i == n - 1);

            float[] lAfter    = doLog ? new float[8] : null;
            float[] rAfter    = doLog ? new float[8] : null;
            float[] lForceRow = doLog ? new float[8] : null;
            float[] rForceRow = doLog ? new float[8] : null;

            for (int j = 0; j < 8; j++)
            {
                float l_adc = (float)leftFootData[i][j]  - ls_errors[j];
                float r_adc = (float)rightFootData[i][j] - rs_errors[j];

                if (clipNegativeAfterBaseline)
                {
                    if (l_adc < 0f) l_adc = 0f;
                    if (r_adc < 0f) r_adc = 0f;
                }

                float lF = AdcToForce(l_adc);
                float rF = AdcToForce(r_adc);

                leftForce[i, j]  = lF;
                rightForce[i, j] = rF;

                if (doLog)
                {
                    lAfter[j]     = l_adc;
                    rAfter[j]     = r_adc;
                    lForceRow[j]  = lF;
                    rForceRow[j]  = rF;
                }
            }

            if (doLog)
            {
                Debug.Log($"[ADC][{i}] L_raw={string.Join(",", leftFootData[i])}  R_raw={string.Join(",", rightFootData[i])}");
                Debug.Log($"[CAL][{i}] L_after={FloatsToString(lAfter)}  R_after={FloatsToString(rAfter)}");
                Debug.Log($"[FORCE][{i}] L={FloatsToString(lForceRow)}  R={FloatsToString(rForceRow)}");
            }
        }
    }
}
