using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class COPRealtimeUI : MonoBehaviour
{
    [Header("References")]
    public MeasureCOP measure;              // ลากสคริปต์ MeasureCOP ใส่ช่องนี้
    public RectTransform copBoard;          // แผงพื้นหลัง (ภาพเป้า)
    public RectTransform copDot;            // จุดสีแดง
    public UILineRendererLite trace;        // คอมโพเนนต์วาดเส้นบน Canvas

    [Header("Mapping cm -> px")]
    public float cmToPx = 8f;               // 1 ซม. = 8 พิกเซล (ปรับให้พอดี UI)
    public bool clampToBoard = true;        // ไม่ให้จุดหลุดกรอบ copBoard

    [Header("Smoothing & Update")]
    [Range(0f, 1f)] public float smoothEMA = 0.2f; // 0=ช้า,1=ไม่กรอง
    public float updateHz = 50f;

    [Header("Trace")]
    public int maxTracePoints = 500;

    private float _accum;
    private Vector2 _copFiltered;
    private readonly List<Vector2> _trace = new List<Vector2>();

    [Header("Diagnostics")]
    public bool demoMode = false;          // ✨ โหมดทดสอบไม่ง้อเซนเซอร์
    public bool debugLogEachUpdate = false;
    public float demoRadiusCm = 5f;        // วงกลมรัศมี 5 ซม.
    public float demoSpeedHz = 0.2f;       // ความเร็วหมุน

    [Header("Realtime Readout")]
    public Text copXText;
    public Text copYText;

    [Header("Debug")]
    [SerializeField] private bool enableVerboseDebug = false; // เปิด/ปิด log ละเอียดจาก Inspector
    [SerializeField] private int  debugEveryNSamples = 10;    // ถ้าจะใช้ที่อื่น
    
    void Start()
    {
        if (copBoard != null && copDot != null)
        {
            copDot.SetParent(copBoard, false);
            copDot.anchorMin = copDot.anchorMax = new Vector2(0.5f, 0.5f);
            copDot.pivot = new Vector2(0.5f, 0.5f);
            copDot.anchoredPosition = Vector2.zero;
            copDot.localScale = Vector3.one;
        }

        if (trace != null && copBoard != null)
        {
            var tr = trace.GetComponent<RectTransform>();
            tr.SetParent(copBoard, false);
            tr.anchorMin = tr.anchorMax = new Vector2(0.5f, 0.5f);
            tr.pivot = new Vector2(0.5f, 0.5f);
            tr.anchoredPosition = Vector2.zero;
            tr.sizeDelta = copBoard.sizeDelta; // ให้ขนาดเท่าบอร์ด
            tr.localScale = Vector3.one;
        }
        RecalcScale();
    }

    void Update()
    {
        if (copDot == null) return;

        // frame limiter
        _accum += Time.deltaTime;
        float step = 1f / Mathf.Max(1f, updateHz);
        if (_accum < step) return;
        _accum = 0f;

        float copX_cm, copY_cm;

        // -------- 1) หาค่า COP (demo หรือจริง) --------
        if (demoMode)
        {
            // วาดวงกลมทดสอบ
            float t = Time.time * demoSpeedHz * 2f * Mathf.PI;
            copX_cm = Mathf.Cos(t) * demoRadiusCm;
            copY_cm = Mathf.Sin(t) * demoRadiusCm;
        }
        else
        {
            if (measure == null || measure.Bluetooth == null) return;

            var s1 = measure.Bluetooth.GetSubscribeCharacteristic(1);
            var s2 = measure.Bluetooth.GetSubscribeCharacteristic(2);
            if (s1.Item1 == null || s2.Item1 == null) return;

            if (!TryComputeInstantCop(s1.Item1, s2.Item1, out copX_cm, out copY_cm))
                return;
        }

        // -------- 2) กรองให้ลื่น --------
        Vector2 cur = new Vector2(copX_cm, copY_cm);
        _copFiltered = Vector2.Lerp(_copFiltered, cur, Mathf.Clamp01(smoothEMA));

        // แปะค่าเป็น “cm” (อย่า invert แกนในข้อความ)
        if (copXText) copXText.text = $"COP X: {_copFiltered.x:F2} cm";
        if (copYText) copYText.text = $"COP Y: {_copFiltered.y:F2} cm";

        // -------- 3) map cm -> px และ clamp ลงบอร์ด --------
        Vector2 px = _copFiltered * cmToPx;

        // บังคับให้อยู่ในบอร์ด
        if (clampToBoard && copBoard != null)
        {
            Vector2 half = copBoard.rect.size * 0.5f;
            px.x = Mathf.Clamp(px.x, -half.x, half.x);
            px.y = Mathf.Clamp(px.y, -half.y, half.y);
        }
        copDot.anchoredPosition = px;

        if (clampToBoard && copBoard != null)
        {
            Vector2 half = copBoard.rect.size * 0.5f;
            px.x = Mathf.Clamp(px.x, -half.x, half.x);
            px.y = Mathf.Clamp(px.y, -half.y, half.y);
        }

        // -------- 4) วางดอท --------
        copDot.anchoredPosition = px;

        // -------- 5) วาด trace --------
        if (trace != null)
        {
            _trace.Add(px);
            if (_trace.Count > maxTracePoints) _trace.RemoveAt(0);
            trace.SetPoints(_trace);
        }

        if (debugLogEachUpdate)
            Debug.Log($"[UI] cop_cm=({cur.x:F2},{cur.y:F2})  px=({px.x:F1},{px.y:F1})  tracePts={_trace.Count}");
    }

    // ======= Core: คำนวณ COP จากแพ็กเก็ตเดียว =======
    // แนะนำให้มีพร็อพเพอร์ตี้ public ใน MeasureCOP แทนการใช้รีเฟล็กชัน
    // public bool ClipNegativeAfterBaseline => clipNegativeAfterBaseline;

    private bool TryComputeInstantCop(int[] leftRaw, int[] rightRaw, out float copX_cm, out float copY_cm)
    {
        copX_cm = 0f; copY_cm = 0f;
        if (leftRaw == null || rightRaw == null || leftRaw.Length < 8 || rightRaw.Length < 8)
            return false;

        // 1) โหลดคาลิเบรตจาก PlayerPrefs
        float[] ls = new float[8];
        float[] rs = new float[8];
        for (int j = 0; j < 8; j++)
        {
            ls[j] = PlayerPrefs.GetFloat("LsError" + j, 0f);
            rs[j] = PlayerPrefs.GetFloat("RsError" + j, 0f);
        }

        // 2) Geometry + ปัดตำแหน่งเซ็นเซอร์เหมือน Python
        int shoe = PlayerPrefs.GetInt("ShoeSize", 42);
        var (cx, cy, Xs, Ys) = measure.GetGeometry(shoe);

        float[] posX_L = new float[8];
        float[] posX_R = new float[8];
        float[] posY   = new float[8];
        for (int j = 0; j < 8; j++)
        {
            posX_L[j] = Round2(-cx + Xs[j]);
            posX_R[j] = Round2( cx - Xs[j]);
            posY[j]   = Round2(-cy + (Ys[j] - Ys[7]));   // อ้างอิงส้นเท้า
        }

        // 3) รวมแรง/โมเมนต์ + ดีบั๊ก Heel vs Toe
        float sumF = 0f, sumX = 0f, sumY = 0f;

        float heelSum = 0f;           // รวมแรงที่ส้น (j==7)
        float toeSum  = 0f;           // รวมแรงที่ปลายเท้า (เช่น j==0..2)

        bool clipNeg = measure.ClipNegativeAfterBaseline; // ใช้พร็อพเพอร์ตี้ public

        for (int j = 0; j < 8; j++)
        {
            // baseline
            float l_adc = (float)leftRaw[j]  - ls[j];
            float r_adc = (float)rightRaw[j] - rs[j];

            // ตัดลบหรือไม่ ตามสวิตช์ (ถ้าอยากเหมือน Python ล่าสุด ให้ false)
            if (clipNeg)
            {
                if (l_adc < 0f) l_adc = 0f;
                if (r_adc < 0f) r_adc = 0f;
            }

            // ADC -> Force (ห้ามตัดกรณี vout<=0 ภายใน AdcToForce)
            float lF = measure.AdcToForce(l_adc);
            float rF = measure.AdcToForce(r_adc);

            // รวมแรงรวม/โมเมนต์
            sumF += lF + rF;
            sumX += posX_L[j] * lF + posX_R[j] * rF;
            sumY += posY[j]   * lF + posY[j]   * rF;

            // ดีบั๊ก: ส้น = j==7, ปลาย = j<=2 (ปรับช่วงตามตำแหน่งจริงของคุณ)
            if (j == 7) heelSum += (lF + rF);
            if (j <= 2) toeSum  += (lF + rF);
        }

        if (sumF <= 0f) return false;

        copX_cm = sumX / sumF;
        copY_cm = sumY / sumF;

        if (enableVerboseDebug)
        {
            Debug.Log(
                $"[YDBG] heelSum={heelSum:F3} toeSum={toeSum:F3}  " +
                $"sumY={sumY:F3} sumF={sumF:F3}  COP=({copX_cm:F3},{copY_cm:F3})  " +
                $"cx={cx:F2} cy={cy:F2} shoe={shoe}"
            );
        }

        return true;
    }

    private static float Round2(float x) => Mathf.Round(x * 100f) / 100f;
    // เรียกครั้งแรก หรือถ้ามีการเปลี่ยน ShoeSize/Height ให้เรียกใหม่
    void RecalcScale()
    {
        if (measure == null || copBoard == null) return;

        // centerPointX/Y ที่ MeasureCOP ใช้ (หน่วย cm)
        var g = measure.GetGeometry(PlayerPrefs.GetInt("ShoeSize")); 
        float cx_cm = g.centerPointX;  // ครึ่งไหล่ (ซ้ายไปขวา) ที่ใช้ในสมการ COP
        float cy_cm = g.centerPointY;  // ครึ่งความยาวพื้นรองเท้า (หน้า-หลัง)

        // ครึ่งขนาดบอร์ด (px)
        Vector2 halfPx = copBoard.rect.size * 0.5f;

        // สเกลแกนละตัว (px ต่อ cm)
        float scaleX = halfPx.x / cx_cm;
        float scaleY = halfPx.y / cy_cm;

        // เลือกแบบ isotropic เพื่อไม่ให้วงกลมเพี้ยน
        cmToPx = Mathf.Min(scaleX, scaleY);

        if (debugLogEachUpdate)
            Debug.Log($"[SCALE] cx={cx_cm:F2}cm cy={cy_cm:F2}cm  halfPx=({halfPx.x:F1},{halfPx.y:F1})  cmToPx={cmToPx:F3}");
    }

}
