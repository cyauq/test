using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Linq;
using System.IO;

public class MissionScreenUI : MonoBehaviour
{
    enum STATE
    {
        NONE,
        IDLE,
        SEARCH,
        MISSION,
        WAITING,
        SUBSCRIBE,
        CALIBRATE
    }

    private BluetoothManager bluetoothManager;   

    [Header("UI")]
    public GameObject panelSearchDevice;
    public GameObject panelConfirmDevice;
    public GameObject panelDisconnectDevice;
    public GameObject panelConnectDevice;

    public GameObject searchView;
    public GameObject itemSearch;
    public GameObject btnAdd1;
    public GameObject btnAdd2;

    public GameObject device1;
    public GameObject device2;
    public GameObject popupConfirm;
    public GameObject buttonDone;
    public GameObject buttonCancel;
    public Text txtLoading;

    [Header("UILoading")]
    public GameObject uiLoading;
    [Header("UISettingSensor")]
    public GameObject btnCalibrate;
    public GameObject btnNextCalibrate;
    public Slider progressBar;
    public GameObject hintLeft;
    public GameObject hintRight;

    public Text txtValueDownDevice;    
    [Header("Title Find bluetooth")]
    public Text txtFindDevice;
    [Header("Title Filter bluetooth")]
    public InputField txtSearch;

    private ScanBluetooth ble1;
    private ScanBluetooth ble2;
    private STATE state = STATE.IDLE;
    private float sumValueDevice1 = 0f;
    private float sumValueDevice2 = 0f;
    private int selectIndex = 0;
    private int selectIndexDisconnect = 0;
    private float _timeout;
    private float _startScanTimeout = 10f;
    private float _startScanDelay = 2f;
    private bool _startScan = true;
    private bool _search = false;

    private float timerCalibrate = 10f;
    private float timerCouter = 0f;
    private float avgValueDevice1 = 0f;
    private float avgValueDevice2 = 0f;

    [Header("Bar sensor")]
    public GameObject barSencorLeft;
    public GameObject barSencorRight;
    public GameObject LogLeft;
    public GameObject LogRight;
    private float DEFAULT_VALUE = 100f;

    private Dictionary<string, ScanBluetooth> DeviceAddressFilterList;

    private List<float> ls_errors = new List<float>();
    private List<float> rs_errors = new List<float>();

    private List<int[]> leftFootData = new List<int[]>();
    private List<int[]> rightFootData = new List<int[]>();
    private int shoeSize; // เพิ่มการประกาศตัวแปร shoeSize

    // เก็บเวลาเริ่มของแต่ละข้าง
    private float footStartTime = 0f;

    // เก็บ timestamp ต่อ sample (หน่วยวินาที นับจาก footStartTime)
    private List<float> leftTimes = new List<float>();
    private List<float> rightTimes = new List<float>();

    // โฟลเดอร์ปลายทาง
    private string calibrationFolder;

    // ชื่อ session สำหรับตั้งชื่อไฟล์ให้อ่านง่าย
    private string sessionStamp;
    private bool phaseSaved = false;

    private void Awake()
    {
        bluetoothManager = FindObjectOfType<BluetoothManager>();
        if (ble1 == null)
            ble1 = device1.GetComponent<ScanBluetooth>();
        if (ble2 == null)
            ble2 = device2.GetComponent<ScanBluetooth>();
    }

    void Start()
    {
        state = STATE.IDLE;
        panelSearchDevice.transform.localPosition = new Vector3(0, 0, 0);
        panelConfirmDevice.transform.localPosition = new Vector3(720, 0, 0);
        panelDisconnectDevice.transform.localPosition = new Vector3(720, 0, 0);

        device1.SetActive(false);
        device2.SetActive(false);

        uiLoading.SetActive(false);        
        buttonDone.SetActive(false);
        buttonCancel.SetActive(true);

        btnCalibrate.SetActive(true);
        btnNextCalibrate.SetActive(false);
        hintLeft.SetActive(false);
        hintRight.SetActive(false);
        txtValueDownDevice.text = "";        

        PlayerPrefs.SetString("$currentScene", "");
        selectIndex = 0;
        selectIndexDisconnect = 0;

        uiLoading.SetActive(false);
        progressBar.minValue = 0f;
        progressBar.maxValue = timerCalibrate;
        progressBar.value = 0f;
        progressBar.gameObject.SetActive(false);

        if (barSencorLeft != null)
        {
            barSencorLeft.GetComponent<Slider>().maxValue = 1023 * 3;
        }
        if (barSencorRight != null)
        {
            barSencorRight.GetComponent<Slider>().maxValue = 1023 * 3;
        }

        //ตั้งค่าโฟลเดอร์/ชื่อไฟล์ตอน Start()
        sessionStamp = System.DateTime.Now.ToString("yyyyMMdd_HHmmss");
        calibrationFolder = Path.Combine(Application.persistentDataPath, "CalibrationLogs", sessionStamp);
        Directory.CreateDirectory(calibrationFolder);

    }

    void Update()
    {
        if (device1.activeInHierarchy &&
            device2.activeInHierarchy &&
            !btnCalibrate.activeInHierarchy && state != STATE.CALIBRATE)
        {
            btnCalibrate.SetActive(true);
        }
                
        if (state == STATE.CALIBRATE)
        {            
            int[] _value1 = bluetoothManager.GetSubscribeCharacteristic(1).Item1;
            int[] _value2 = bluetoothManager.GetSubscribeCharacteristic(2).Item1;
            Debug.Log(progressBar.value);
            if (progressBar.value < timerCalibrate)
            {
                leftFootData.Add((int[])_value1.Clone());
                rightFootData.Add((int[])_value2.Clone());

                // เก็บ timestamp ของแต่ละข้าง (นับจาก footStartTime)
                float t = Time.time - footStartTime;
                leftTimes.Add(t);
                rightTimes.Add(t);

                if ((int)progressBar.value <= 1 && timerCouter == 0) {
                    avgValueDevice1 = 0f;
                    avgValueDevice2 = 0f;
                    timerCouter = 1;
                }
                else if ((int)progressBar.value > 3 && timerCouter == 3) {
                    timerCouter = 4;
                    avgValueDevice1 += _value1[1] + _value1[2] + _value1[4];
                    avgValueDevice2 += _value2[1] + _value2[2] + _value2[4];
                }
                else if ((int)progressBar.value > 2 && timerCouter == 2) {
                    timerCouter = 3;
                    avgValueDevice1 += _value1[1] + _value1[2] + _value1[4];
                    avgValueDevice2 += _value2[1] + _value2[2] + _value2[4];
                }
                else if ((int)progressBar.value > 1 && timerCouter == 1) {
                    timerCouter = 2;
                    avgValueDevice1 += _value1[1] + _value1[2] + _value1[4];
                    avgValueDevice2 += _value2[1] + _value2[2] + _value2[4];
                }                
                btnNextCalibrate.SetActive(false);                                   
            }

            else
            {
                if (!phaseSaved)
                {
                    state = STATE.IDLE;
                    sumValueDevice1 = avgValueDevice1 / 3;
                    sumValueDevice2 = avgValueDevice2 / 3;
                    btnNextCalibrate.SetActive(true);
                    OnSettingCalibrateDown(calibrateDevieIndex);
                    timerCouter = 0;
                    
                    Debug.Log($"calibrateDevieIndex_check: {calibrateDevieIndex}");

                    if (calibrateDevieIndex == 1)
                    {
                        Debug.Log("calibrateDevieIndex = 1_check (Actually Right Foot)");

                        // เขียนไฟล์ฝั่งขวา (สลับ)
                        string rightPath = Path.Combine(
                            calibrationFolder,
                            $"Right_{sessionStamp}_size{shoeSize}.csv"
                        );
                        WriteCalibrationCsv(rightPath, leftTimes, rightFootData, "Right");

                        rs_errors.Clear();
                        for (int i = 0; i < 8; i++)
                        {
                            float avgSensorRight = (float)rightFootData.Select(data => data[i]).Average();
                            rs_errors.Add(avgSensorRight);
                        }
                        Debug.Log($"rs_errors_check: {string.Join(", ", rs_errors)}");
                        rightFootData.Clear();
                        rightTimes.Clear();
                    }
                    else if (calibrateDevieIndex == 2)
                    {
                        Debug.Log("calibrateDevieIndex = 2_check (Actually Left Foot)");

                        // เขียนไฟล์ฝั่งซ้าย (สลับ)
                        string leftPath = Path.Combine(
                            calibrationFolder,
                        $"Left_{sessionStamp}_size{shoeSize}.csv");
                        WriteCalibrationCsv(leftPath, rightTimes, leftFootData, "Left");

                        ls_errors.Clear();
                        for (int i = 0; i < 8; i++)
                        {
                            float avgSensorLeft = (float)leftFootData.Select(data => data[i]).Average();
                            ls_errors.Add(avgSensorLeft);
                        }
                        Debug.Log($"ls_errors_check: {string.Join(", ", ls_errors)}");
                        leftFootData.Clear();
                        leftTimes.Clear();
                    }
                    phaseSaved = true;
                }
            progressBar.value += Time.deltaTime;
            }

            txtValueDownDevice.text = (avgValueDevice1 / 3) + "\n"+ (avgValueDevice2 / 3);
            int _sum1, _sum2;
            if (StaticStrings.is8Device)
            {
                _sum1 = _value1[1] + _value1[3] + _value1[7];
                _sum2 = _value2[1] + _value2[3] + _value2[7];
            }
            else
            {
                _sum1 = _value1[1] + _value1[2] + _value1[4];
                _sum2 = _value2[1] + _value2[2] + _value2[4];
            }
           
            barSencorLeft.GetComponent<Slider>().value = _sum1;
            barSencorRight.GetComponent<Slider>().value = _sum2;

            if (ble1 != null)
            {
                if (StaticStrings.is8Device)
                    ble1.battery = _value2[8];
                else
                    ble1.battery = _value2[5];
            }
            if (ble2 != null)
            {
                if (StaticStrings.is8Device)
                    ble2.battery = _value2[8];
                else
                    ble2.battery = _value2[5];
            }
            
            progressBar.value += Time.deltaTime;
        }

        if (state == STATE.IDLE)
        {            
            if (ble1 != null)
            {
                if (bluetoothManager.GetService(1) != null)
                {                   
                    int[] _value1 = bluetoothManager.GetSubscribeCharacteristic(1).Item1;
                    int _sum = _value1[1] + _value1[2] + _value1[4];
                    Debug.Log("left value : " + _sum);
                    barSencorLeft.GetComponent<Slider>().value = _sum;

                    if (StaticStrings.is8Device)
                        ble1.UpdateBattery(_value1[8]);
                    else
                        ble1.UpdateBattery(_value1[5]);

                    DeviceObject dv = bluetoothManager.GetService(1);
                    ble1.deviceName = dv.deviceName;
                    ble1.deviceAddress = dv.deviceAddress;
                    ble1.uuid = dv.uuid;
                    ble1.characteristic = dv.characteristic;
                    btnAdd1.SetActive(false);
                    device1.SetActive(true);                                                      
                }
                else
                {
                    btnAdd1.SetActive(true);
                }
            }

            if (ble2 != null)
            {
                if (bluetoothManager.GetService(2) != null)
                {          
                    int[] _value2 = bluetoothManager.GetSubscribeCharacteristic(2).Item1;
                    int _sum = _value2[1] + _value2[2] + _value2[4];
                    Debug.Log("Right value : " + _sum);
                    barSencorRight.GetComponent<Slider>().value = _sum;

                    if (StaticStrings.is8Device)
                        ble2.UpdateBattery(_value2[8]);
                    else
                        ble2.UpdateBattery(_value2[5]);

                    DeviceObject dv = bluetoothManager.GetService(2);
                    ble2.deviceName = dv.deviceName;
                    ble2.deviceAddress = dv.deviceAddress;
                    ble2.uuid = dv.uuid;
                    ble2.characteristic = dv.characteristic;
                    btnAdd2.SetActive(false);
                    device2.SetActive(true);                                   
                }
                else
                {
                    btnAdd2.SetActive(true);
                }
            }
        }
        if (state == STATE.SEARCH)
        {
            if (_search)
            {
                foreach (KeyValuePair<string, ScanBluetooth> item in DeviceAddressFilterList)
                {
                    if (!bluetoothManager.DeviceAddressList.ContainsKey(item.Key))
                    {
                        GameObject newItem = Instantiate(itemSearch);
                        if (newItem != null)
                        {
                            ScanBluetooth scannedItem = newItem.GetComponent<ScanBluetooth>();
                            if (scannedItem != null)
                            {
                                scannedItem.deviceAddress = item.Value.deviceAddress;
                                scannedItem.deviceName = item.Value.deviceName;
                                scannedItem.deviceRssi = item.Value.deviceRssi;
                                scannedItem.characteristic = item.Value.characteristic;
                                scannedItem.deviceMeta = item.Value.deviceMeta;
                                bluetoothManager.DeviceAddressList[item.Key] = scannedItem;
                            }
                            newItem.transform.SetParent(searchView.transform, false);
                        }
                    }
                }
            }
            else if (_timeout > 0f)
            {
                _timeout -= Time.deltaTime;
                if (_timeout <= 0f)
                {
                    if (_startScan)
                    {
                        _startScan = false;
                        _timeout = _startScanTimeout;

                        BluetoothLEHardwareInterface.BluetoothScanMode(BluetoothLEHardwareInterface.ScanMode.Balanced);

                        BluetoothLEHardwareInterface.ScanForPeripheralsWithServices(null, null, (address, name, rssi, bytes) =>
                        {
                            if (bluetoothManager.DeviceAddressList.ContainsKey(address))                                    
                            {
                                ScanBluetooth scannedItem = bluetoothManager.DeviceAddressList[address];                                    
                                scannedItem.deviceRssi = rssi.ToString();
                                if (scannedItem.deviceName.ToLower().Trim() == "no name" || scannedItem.deviceName.ToLower().Trim() == "noname")
                                {
                                    scannedItem.deviceName = name;
                                }                                
                            }
                            else
                            {
                                if (!name.ToLower().Contains("sura"))
                                    return;

                                GameObject newItem = Instantiate(itemSearch);
                                if (newItem != null)
                                {
                                    string metaAddress = "";
                                    string[] arrStr = BitConverter.ToString(bytes).Split('-');                                    
#if UNITY_IOS || UNITY_TVOS
                                    for (int i=4; i < arrStr.Length; i++) 
                                    {
                                        if (i < arrStr.Length - 1)
                                        {
                                            metaAddress += arrStr[i] + ":";
                                        } else {
                                            metaAddress += arrStr[i];
                                        }
                                    }
#endif
                                    ScanBluetooth scannedItem = newItem.GetComponent<ScanBluetooth>();
                                    if (scannedItem != null)
                                    {
                                        scannedItem.deviceAddress = address;
                                        scannedItem.deviceName = name;
                                        scannedItem.deviceRssi = rssi.ToString();
                                        scannedItem.deviceMeta = metaAddress;
                                        bluetoothManager.DeviceAddressList[address] = scannedItem;                                            
                                    }
                                    newItem.transform.SetParent(searchView.transform, false);
                                }
                            }
                        }, true, false);                        
                    }
                    else
                    {
                        BluetoothLEHardwareInterface.StopScan();
                        _startScan = true;
                        _timeout = _startScanDelay;
                    }
                }
            }
        }  
    }

    public void OnRefresh()
    {
        _timeout = _startScanDelay;
        _search = false;
        txtSearch.text = "";
        DeviceAddressFilterList = new Dictionary<string, ScanBluetooth>();
        bluetoothManager.DeviceAddressList = new Dictionary<string, ScanBluetooth>();
        ClearListItemSearch();
    }

    public void OnSelectSearch(int index)
    {
        _search = false;
        txtSearch.text = "";
        selectIndex = index;
        DeviceAddressFilterList = new Dictionary<string, ScanBluetooth>();
        bluetoothManager.DeviceAddressList = new Dictionary<string, ScanBluetooth>();
        ClearListItemSearch();
        state = STATE.SEARCH;
        Debug.Log("OnSelectSearch");
        
        panelSearchDevice.SetActive(true);
        panelSearchDevice.transform.localPosition = new Vector3(720, 0, 0);
        panelConfirmDevice.transform.localPosition = new Vector3(0, 0, 0);
        txtFindDevice.text = selectIndex == 1 ? "ค้นหาอุปกรณ์ฝัั่งซ้าย" : "ค้นหาอุปกรณ์ฝัั่งขวา";        
        if (!bluetoothManager.isIntialDevice)
        {
            BluetoothLEHardwareInterface.Initialize(true, true, () => {
                _timeout = _startScanDelay;
                BluetoothLEHardwareInterface.Log("Initialize.....");
                bluetoothManager.isIntialDevice = true;
            }, (error) => {
                BluetoothLEHardwareInterface.Log("Error: " + error);

                if (error.Contains("Bluetooth LE Not Enabled"))
                    BluetoothLEHardwareInterface.BluetoothEnable(true);
            });
        }
        else
        {
            _timeout = _startScanDelay;            
        }
        
        StopCoroutine("SessionTimeout");
        uiLoading.SetActive(true);
        StartCoroutine(SessionTimeout(3));
    }

    IEnumerator SessionTimeout(float timer)
    {
        yield return new WaitForSeconds(timer);
        uiLoading.SetActive(false);
    }

    public void OnCancelSearch()
    {
        ClearListItemSearch();
        state = STATE.IDLE;
        panelSearchDevice.transform.localPosition = new Vector3(0, 0, 0);
        panelConfirmDevice.transform.localPosition = new Vector3(720, 0, 0);
        panelConnectDevice.transform.localPosition = new Vector3(720, 0, 0);

        BluetoothLEHardwareInterface.Log("**************** stopping");
        BluetoothLEHardwareInterface.StopScan();        
    }

    public void OnSelectDevice(string deviceName, string deviceRssi, string deviceAddress, string uuid, string characteristic)
    {
        StopCoroutine("SubScription");
        txtLoading.text = "กำลังเชื่อมต่อ\n" + deviceName;
        panelConnectDevice.transform.localPosition = new Vector3(0, 0, 0);
        popupConfirm.SetActive(false);
        buttonDone.SetActive(false);
        buttonCancel.SetActive(true);
        state = STATE.WAITING;

        BluetoothLEHardwareInterface.ConnectToPeripheral(deviceAddress, (address) => {
            BluetoothLEHardwareInterface.Log("**************** connected address: " + address);
        }, null, (address, service, characteristic) =>
        {
            if (bluetoothManager.GetService(selectIndex) == null)
            {
                StartCoroutine(SubScription(3, address));             
            }
            BluetoothLEHardwareInterface.Log("**************** connected characteristic: " + address + ", " + service + ", " + characteristic);
            var device = bluetoothManager.DeviceAddressList[deviceAddress];

            // เก็บค่าหมายเลขรองเท้าจาก deviceName
            Debug.Log("Shoe size_check: " + deviceAddress + " | device name: " + deviceName + " | rssi: " + deviceRssi);
            string[] nameParts = deviceName.Split(' ');
            string shoeSize = nameParts[nameParts.Length - 1].Substring(0, 2); // ดึงค่าหมายเลขรองเท้า
            Debug.Log("Shoe size_errors_check: " + shoeSize);

            int shoeSizeNumber;
            if (int.TryParse(shoeSize, out shoeSizeNumber))
            {
                // เก็บค่า shoeSizeNumber ใน MissionScreenUI
                SetShoeSize(shoeSizeNumber);
                Debug.Log("Parsed shoe size_check: " + shoeSizeNumber);
            }
            else
            {
                Debug.LogWarning("Failed to parse shoe size from device name: " + deviceName);
            }

#if UNITY_ANDROID
            bluetoothManager.SetService(selectIndex, new DeviceObject(true, device.deviceName, device.deviceRssi, bluetoothManager.FullUUID(service), bluetoothManager.FullUUID(characteristic), address, device.battery));
#endif

#if UNITY_IOS || UNITY_TVOS
            bluetoothManager.SetService(selectIndex, new DeviceObject(true, device.deviceName, device.deviceRssi, service, characteristic, address, device.battery));
#endif	            
            txtLoading.text = "กรุณารอสักครู่\n" + address;
            state = STATE.SUBSCRIBE;
        }, (disconnectedAddress) =>
        {
            BluetoothLEHardwareInterface.Log("Device disconnected: " + disconnectedAddress);
            txtLoading.text = "เกิดความผิดพลาดในเชื่อมต่อ\nกรุณาลองใหม่";
            state = STATE.SEARCH;
            uiLoading.SetActive(false);
        });     
    }

    IEnumerator SubScription(float timer, string address)
    {        
        yield return new WaitForSeconds(timer);
        txtLoading.text = "เชื่อมต่อ\n" + address;
        bluetoothManager.SubscribeCharacteristic(selectIndex, (subscripted) => {
            txtLoading.text = "";
            popupConfirm.SetActive(true);
            buttonDone.SetActive(true);
            buttonCancel.SetActive(false);            

            if (selectIndex == 1)
            {
                ble1.isConnected = true;
            }
            if (selectIndex == 2)
            {
                ble2.isConnected = true;
            }
        });        
        StopCoroutine("SubScription");
    }

    public void OnDiscontentDevice(int index)
    {
        selectIndexDisconnect = index;
        panelDisconnectDevice.transform.localPosition = new Vector3(0, 0, 0);
        panelDisconnectDevice.GetComponent<PopupMessageUI>().txtTitle.text = "ยืนยันเลิกจับคู่";

#if UNITY_IOS || UNITY_TVOS
        if (index == 1)
        {
            panelDisconnectDevice.GetComponent<PopupMessageUI>().txtBody.text = "ต้องการเลิกจับคู่กับ\n" + ble1.deviceMeta;
        }
        if (index == 2)
        {
            panelDisconnectDevice.GetComponent<PopupMessageUI>().txtBody.text = "ต้องการเลิกจับคู่กับ\n" + ble2.deviceMeta;
        }
#else
        if (index == 1)
        {
            panelDisconnectDevice.GetComponent<PopupMessageUI>().txtBody.text = "ต้องการเลิกจับคู่กับ\n" + ble1.deviceAddress;
        }
        if (index == 2)
        {
            panelDisconnectDevice.GetComponent<PopupMessageUI>().txtBody.text = "ต้องการเลิกจับคู่กับ\n" + ble2.deviceAddress;
        }
#endif

    }

    public void OnCancelDisconnect()
    {
        panelDisconnectDevice.transform.localPosition = new Vector3(720, 0, 0);
    }

    public void OnConfirmDisconnect()
    {
        StopCoroutine("OnDisconnect");
        panelDisconnectDevice.transform.localPosition = new Vector3(720, 0, 0);
        uiLoading.SetActive(true);
        if (selectIndexDisconnect == 1)
        {
#if UNITY_ANDROID
            BluetoothLEHardwareInterface.UnSubscribeCharacteristic(ble1.deviceAddress, ble1.uuid, ble1.characteristic, (characteristic) =>
            {                
                bluetoothManager.SetService(selectIndexDisconnect, null);                
            });
#endif
            StartCoroutine(OnDisconnect(2f, ble1.deviceAddress));
        }
        if (selectIndexDisconnect == 2)
        {
#if UNITY_ANDROID
            BluetoothLEHardwareInterface.UnSubscribeCharacteristic(ble2.deviceAddress, ble2.uuid, ble2.characteristic, (characteristic) =>
            {
                bluetoothManager.SetService(selectIndexDisconnect, null);                
            });
#endif
            StartCoroutine(OnDisconnect(2f, ble2.deviceAddress));
        }
    }

    IEnumerator OnDisconnect(float timer, string address)
    {
        yield return new WaitForSeconds(timer);
        if (!string.IsNullOrEmpty(address))
        {
            BluetoothLEHardwareInterface.DisconnectPeripheral(address, (disconnectAddress) => {  });
        }
        yield return new WaitForSeconds(timer);
        if (selectIndexDisconnect == 1)
        {
            ResetUI(1);
            ble1.isConnected = false;
        }
        if (selectIndexDisconnect == 2)
        {
            ResetUI(2);
            ble2.isConnected = false;
        }
        uiLoading.SetActive(false);
        selectIndexDisconnect = 0;
        StopCoroutine("OnDisconnect");
    }

    private void ResetUI(int index)
    {
        if (index == 1)
        {
            ble1.isConnected = false;
            btnAdd1.SetActive(true);
            device1.SetActive(false);           
        }
        if (index == 2)
        {
            ble2.isConnected = false;
            btnAdd2.SetActive(true);
            device2.SetActive(false);                        
        }

        bluetoothManager.SetService(index, null);
        bluetoothManager.SubscribeCharacteristicList[index] = (new int[6], "");
        selectIndex = 0;
        selectIndexDisconnect = 0;
        uiLoading.SetActive(false);
        state = STATE.IDLE;
    }

    public void OnBackSearch()
    {
        ClearListItemSearch();        
        state = STATE.IDLE;
        panelSearchDevice.transform.localPosition = new Vector3(0, 0, 0);
        panelConfirmDevice.transform.localPosition = new Vector3(720, 0, 0);
        panelConnectDevice.transform.localPosition = new Vector3(720, 0, 0);

        BluetoothLEHardwareInterface.Log("**************** stopping");
        BluetoothLEHardwareInterface.StopScan();
    }

    public void OnCancel()
    {
        Debug.Log("OnCancel");
        StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "02_Login"));            
    }

    public void OnConfirm()
    {
        Debug.Log("OnConfirm");
        state = STATE.IDLE;
        panelSearchDevice.transform.localPosition = new Vector3(0, 0, 0);
        panelConfirmDevice.transform.localPosition = new Vector3(720, 0, 0);
        panelConnectDevice.transform.localPosition = new Vector3(720, 0, 0);        
    }

    public void OnSelectMission()
    {        
        // ถ้า rs_errors ยังไม่มีค่า → ใส่ 0 จำนวน 8 ช่อง
        if (rs_errors == null || rs_errors.Count == 0)
        {
            rs_errors = Enumerable.Repeat(0f, 8).ToList();
        }

        // ถ้า ls_errors ยังไม่มีค่า → ใส่ 0 จำนวน 8 ช่อง
        if (ls_errors == null || ls_errors.Count == 0)
        {
            ls_errors = Enumerable.Repeat(0f, 8).ToList();
        }

        Debug.Log($"rs_errors_check: {string.Join(", ", rs_errors)}");
        Debug.Log($"ls_errors_check: {string.Join(", ", ls_errors)}");

        SaveData();

        // ไปหน้า Scene ต่อไป
        SceneManager.LoadScene("07_SelecteGame", LoadSceneMode.Single);
    }

    public void OnStartCalibrate()
    {        
        btnCalibrate.SetActive(false);
        progressBar.gameObject.SetActive(true);
        progressBar.value = 0f;
        calibrateDevieIndex = 0;
        NextCalibrate();
        if (calibrateDevieIndex == 1)
        {
            state = STATE.CALIBRATE;
            hintLeft.SetActive(true);
            hintRight.SetActive(false);
        }
        else if (calibrateDevieIndex == 2)
        {
            state = STATE.CALIBRATE;
            hintLeft.SetActive(false);
            hintRight.SetActive(true);
        }
    }

    private int calibrateDevieIndex = 0;
    public void NextCalibrate()
    {
        calibrateDevieIndex += 1;
        progressBar.value = 0f;
        phaseSaved = false;
        Debug.Log("NextCalibrate_check");
        if (calibrateDevieIndex == 1)
        {
            state = STATE.CALIBRATE;
            hintLeft.SetActive(true);
            hintRight.SetActive(false);

            footStartTime = Time.time; // เริ่มจับเวลาใหม่
            rightTimes.Clear();
            rightFootData.Clear();
            Debug.Log($"calibrateDevieIndex_check_hintRight: {calibrateDevieIndex}");  
        }

        else if (calibrateDevieIndex == 2)
        {
            state = STATE.CALIBRATE;
            hintLeft.SetActive(false);
            hintRight.SetActive(true);

            footStartTime = Time.time; // เริ่มจับเวลาใหม่
            leftTimes.Clear();
            leftFootData.Clear();
            Debug.Log($"calibrateDevieIndex_check_hintLeft: {calibrateDevieIndex}");
        }

        else
        {
            state = STATE.IDLE;
            hintLeft.SetActive(false);
            hintRight.SetActive(false);
            progressBar.gameObject.SetActive(false);
            btnNextCalibrate.SetActive(false);
        }
    }

    public void OnSettingCalibrateDown(int deviceId)
    {
        if (deviceId == 1)
        {
            PlayerPrefs.SetFloat("$calibrateUpDevice1", sumValueDevice1 < DEFAULT_VALUE ? DEFAULT_VALUE : sumValueDevice1);            
            PlayerPrefs.SetFloat("$calibrateDownDevice2", sumValueDevice2 < DEFAULT_VALUE ? DEFAULT_VALUE : sumValueDevice2);            
        }
        if (deviceId == 2)
        {
            PlayerPrefs.SetFloat("$calibrateDownDevice1", sumValueDevice1 < DEFAULT_VALUE ? DEFAULT_VALUE : sumValueDevice1);
            PlayerPrefs.SetFloat("$calibrateUpDevice2", sumValueDevice2 < DEFAULT_VALUE ? DEFAULT_VALUE : sumValueDevice2);            
        }
    }

    private void ClearListItemSearch()
    {        
        foreach (Transform child in searchView.transform)
        {
            Destroy(child.gameObject);
        }
    }

    public void OnEndSearch()
    {        
        string search = txtSearch.text;
        if (string.IsNullOrEmpty(search) && DeviceAddressFilterList.Count <= 0)
        {
            _search = false;
            return;
        }

        _search = !string.IsNullOrEmpty(search);
        Debug.Log("search text " + txtSearch.text + ", isSearch " + _search);        
        if (_search)
        {
            BluetoothLEHardwareInterface.Log("**************** stopping");
            BluetoothLEHardwareInterface.StopScan();
            Dictionary<string, ScanBluetooth> _filterList = new Dictionary<string, ScanBluetooth>();            
            foreach (KeyValuePair<string, ScanBluetooth> item in bluetoothManager.DeviceAddressList)
            {
                Debug.Log("check text " + item.Value.deviceName.ToLower() + " == " + search.ToLower());
                
                if (item.Value.deviceName.ToLower().Contains(search.ToLower()))
                {
                    Debug.Log("add item ");
                    _filterList[item.Key] = item.Value;
                }
            }
            DeviceAddressFilterList = _filterList;                  
        }
        else
        {
            DeviceAddressFilterList = new Dictionary<string, ScanBluetooth>();
        }

        bluetoothManager.DeviceAddressList = new Dictionary<string, ScanBluetooth>();
        ClearListItemSearch();
        _startScan = true;
        _timeout = _startScanDelay;        
    }
    
    // ฟังก์ชันในการตั้งค่า ls_errors, rs_errors และ shoeSize
    public void SetErrorsAndShoeSize(List<float> ls, List<float> rs, int size)
    {
        ls_errors = ls;
        rs_errors = rs;
        shoeSize = size;
    }

    public List<float> GetLsErrors()
    {
        return ls_errors;
    }

    public List<float> GetRsErrors()
    {
        return rs_errors;
    }
    public int GetShoeSize()
    {
        return shoeSize;
    }
    // เพิ่มการตั้งค่า shoeSize
    public void SetShoeSize(int size)
    {
        shoeSize = size;
    }

    public void SaveData()
    {
        PlayerPrefs.SetInt("ShoeSize", shoeSize);

        // บันทึกค่าของ ls_errors
        for (int i = 0; i < ls_errors.Count; i++)
        {
            PlayerPrefs.SetFloat("LsError" + i, ls_errors[i]);
        }

        // บันทึกค่าของ rs_errors
        for (int i = 0; i < rs_errors.Count; i++)
        {
            PlayerPrefs.SetFloat("RsError" + i, rs_errors[i]);
        }

        // บันทึกจำนวนของ errors
        PlayerPrefs.SetInt("ErrorsCount", ls_errors.Count);
        
        // ต้องเรียกใช้ Save เพื่อบันทึกค่าใน PlayerPrefs
        PlayerPrefs.Save();
    }

    private void WriteCalibrationCsv(string path, List<float> times, List<int[]> raw, string footTag)
    {
        try
        {
            int n = Mathf.Min(times.Count, raw.Count);
            if (n == 0) return;

            using (var sw = new StreamWriter(path, false, System.Text.Encoding.UTF8))
            {
                // Header
                sw.Write("time_s,foot");
                for (int i = 1; i <= 8; i++) // Sensor1 ถึง Sensor8
                    sw.Write($",sensor{i}");
                sw.Write(",Battery");
                sw.Write(",sumUsed");
                sw.WriteLine();

                for (int k = 0; k < n; k++)
                {
                    var arr = raw[k];
                    float t = times[k];

                    sw.Write($"{t:F4},{footTag}");

                    // เขียน Sensor1..Sensor8
                    for (int i = 0; i < 8; i++)
                        sw.Write($",{SafeGet(arr, i)}");

                    // Battery คือค่าล่าสุดใน array
                    int batteryVal = SafeGet(arr, arr.Length - 1);
                    sw.Write($",{batteryVal}");

                    // sumUsed ตามเงื่อนไข is8Device
                    int sumUsed;
                    if (StaticStrings.is8Device)
                    {
                        sumUsed = SafeGet(arr, 1) + SafeGet(arr, 3) + SafeGet(arr, 7);
                    }
                    else
                    {
                        sumUsed = SafeGet(arr, 1) + SafeGet(arr, 2) + SafeGet(arr, 4);
                    }
                    sw.Write($",{sumUsed}");

                    sw.WriteLine();
                }
            }
            Debug.Log($"Saved calibration CSV: {path}");
        }
        catch (System.Exception ex)
        {
            Debug.LogError($"WriteCalibrationCsv error: {ex.Message}");
        }
    }

    private int SafeGet(int[] arr, int idx)
    {
        return (idx >= 0 && idx < arr.Length) ? arr[idx] : 0;
    }

}
