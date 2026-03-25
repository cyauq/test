using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScanBluetooth : MonoBehaviour
{
    [Header("UI")]
    public Text titleName;
    public Text stateConnect;
    public Text txtBattery;
    public Color statusConnected;
    public Color statusDisconnect;

    public bool isConnected = false;
    public string deviceName = "";
    public string deviceRssi = "";
    public string uuid = "";
    public string characteristic = "";
    public string deviceAddress = "";
    public string deviceMeta = "";
    public int battery = 0;

    private MissionScreenUI mainScreen;

    // Start is called before the first frame update
    void Start()
    {
        if (titleName != null)
        {
            titleName.text = "";
            titleName.color = statusDisconnect;
        }

        if (stateConnect != null)
        {
            stateConnect.text = "";
            stateConnect.color = statusDisconnect;
        }
        if (txtBattery != null)
            txtBattery.text = "";
    }

    void Update()
    {
        if (titleName != null)
        {
            titleName.text = deviceName;
            titleName.color = isConnected ? statusConnected : statusDisconnect;
        }
            
        if (stateConnect != null)
        {
#if UNITY_IOS || UNITY_TVOS
            stateConnect.text = deviceMeta;
#else
            stateConnect.text = deviceAddress;
#endif
            stateConnect.color = isConnected ? statusConnected : statusDisconnect;
        }       
    }

    public void UpdateBattery(int value)
    {
        battery = value;
        if (txtBattery != null)
            txtBattery.text = value.ToString() + "%";
    }

    public void OnClickConfirm()
    {
        if (mainScreen == null)
        {
            mainScreen = GameObject.FindObjectOfType<MissionScreenUI>();
        }        
        mainScreen.OnSelectDevice(deviceName, deviceRssi, deviceAddress, uuid, characteristic);
    }

    private void OnDestroy()
    {
        
    }
}
