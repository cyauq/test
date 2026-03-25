using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SelecteMissionScreenUI : MonoBehaviour
{
    [Header("Log Test")]
    public Text txtLog;

    public GameObject panelSelectMission;
    public GameObject panelSetupMission;

    [Header("Dialog")]
    public GameObject panelMessage;

    [Header("Audio")]
    public AudioSource audioSource;

    [SerializeField]
    public Transform contentList;
    [SerializeField]
    public GameObject itemMission;

    [Header("Maps")]
    public List<MapDataModel> mapList;

    [Header("Maps Setup")]
    public List<MapSetupModel> mapSetup;

    private BluetoothManager bluetoothManager;
    
    private void Awake()
    {
        bluetoothManager = FindObjectOfType<BluetoothManager>();
    }

    // Start is called before the first frame update
    void Start()
    {
        txtLog.text = "";
        panelSelectMission.transform.localPosition = new Vector3(0, 0, 0);
        panelSetupMission.transform.localPosition = new Vector3(720, 0, 0);
        panelMessage.transform.localPosition = new Vector3(720, 0, 0);

        /// Show mission game
        foreach (MapDataModel map in mapList)
        {
            GameObject item = Instantiate(itemMission);
            string _user = PlayerPrefs.GetString("$user", "");
            string _typeMap = PlayerPrefs.GetString("$mapType_" + map.id, "");
            int _bestScore = PlayerPrefs.GetInt("$bestScore_"+ _typeMap + "_" + map.id + "_" + _user, 0);
            //int _lastscore = PlayerPrefs.GetInt("$currentScore_" + _typeMap + "_" + map.id + "_" + _user, 0);
            item.transform.SetParent(contentList, false);
            item.GetComponent<Mission>().data = map;

            if (map.id > 1)
            {               
                int _previoueScore = PlayerPrefs.GetInt("$bestScore_" + _typeMap + "_" + (map.id - 1) + "_" + _user, 0);
                item.GetComponent<Mission>().data.isLock = (_previoueScore <= 0);
            }
            else
            {
                item.GetComponent<Mission>().data.isLock = false;
            }
            /// Hacktest
            ///            
            item.GetComponent<Mission>().data.isLock = false;
            item.GetComponent<Mission>().data.heightScore = _bestScore;
            item.GetComponent<Mission>().OnRedner();
            item.GetComponent<Mission>().audio = audioSource;
            
        }
    }

    private void Update()
    {
        //if (bluetoothManager != null)
        //{
        //    //int[] _value = bluetoothManager.GetSubscribeCharacteristic(1).Item1;
        //    //string log1 = "[" + _value[1].ToString("0000") + " , " + _value[2].ToString("0000") + _value[4].ToString("0000") + "]";
        //    //int[] _value1 = bluetoothManager.GetSubscribeCharacteristic(2).Item1;
        //    //string log2 = "[" + _value1[1].ToString("0000") + " , " + _value1[2].ToString("0000") + _value1[4].ToString("0000") + "]";
        //    txtLog.text = "";// log1 + "\n" + log2;
        //}
    }

    public void OnSetupMission()
    {        
        panelSelectMission.transform.localPosition = new Vector3(720, 0, 0);
        panelSetupMission.transform.localPosition = new Vector3(0, 0, 0);
        panelSetupMission.GetComponent<SetupSceneScreenUI>().OnServerInit(mapSetup);
    }

    public void OnConfirm()
    {
        Debug.Log("On Confirm Setup");
        panelSelectMission.transform.localPosition = new Vector3(0, 0, 0);
        panelSetupMission.transform.localPosition = new Vector3(720, 0, 0);
    }

    public void OnCancel()
    {
        Debug.Log("OnCancel");  
        SceneManager.LoadScene("07_SelecteGame", LoadSceneMode.Single);
    }

}
