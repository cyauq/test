using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AnalyticSceneUI : MonoBehaviour
{
    public GameObject graphWindows;
    public GameObject[] buttinsScene;

    public Text txtLog;
    private WindowsGraph graphContainer;
    private int sceneId;
    private string sceneType;

    private SuratechAPI suraTechAPI = null;

    // Start is called before the first frame update
    void Start()
    {
        if (suraTechAPI == null)
        {
            suraTechAPI = FindObjectOfType<SuratechAPI>();
            //txtLog.text = "get suraTechAPI not found\n";
        }
        graphContainer = graphWindows.GetComponent<WindowsGraph>();

        sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
        sceneType = PlayerPrefs.GetString("$mapType_" + sceneId, "");

        OnSelectedMission(sceneId);

        //StartCoroutine(suraTechAPI.GetDataGame(dataLoad, getDataCallback));
        
    }

    public void OnSelectedMission(int _sceneId)
    {
        //txtLog.text += "OnSelectedMission "+_sceneId+"\n";
        sceneId = _sceneId;
        var dataLoad = new GetDataModel();
        dataLoad.user_id = suraTechAPI.memberInfo.user_member;        
        dataLoad.game_id = (sceneType == MapType.Runner.ToString()) ? 1 : 2;        
        dataLoad.mission_id = _sceneId;        
        dataLoad.limit = 40;        
        string startData = suraTechAPI._AddDays(DateTime.Now.ToUniversalTime().AddHours(7), -14);        
        string endDate = suraTechAPI._GetDate(DateTime.Now.ToUniversalTime().AddHours(7));                
        Debug.Log("userID : " + dataLoad.user_id);
        dataLoad.start_date = startData;
        Debug.Log("startData : " + startData);
        dataLoad.end_date = endDate;
        Debug.Log("endDate : " + endDate);
        StartCoroutine(suraTechAPI.GetDataGame(dataLoad, getDataCallback));
    }

    void getDataCallback(bool isSuccess, GetDataModelResponse? resp)
    {
        Debug.Log("resp : " + resp);
        if (isSuccess)
        {
            Debug.Log($"Check player Response received: {JsonUtility.ToJson(resp, true)}");

            for (int i = 0; i < buttinsScene.Length; i++)
            {
                if (i == sceneId - 1)
                {
                    buttinsScene[i].transform.Find("Image").gameObject.SetActive(true);
                }
                else
                {
                    buttinsScene[i].transform.Find("Image").gameObject.SetActive(false);
                }
            }

            //txtLog.text += "get data success\n";
            graphContainer.ShowGraph(resp?.data);
        }
        else
        {
            //txtLog.text += "get data failed\n";
        }
    }

    public void OnExit()
    {       
        if (sceneType == MapType.Runner.ToString())
        {
            SceneManager.LoadScene("06_SelecteMissionRuner", LoadSceneMode.Single);
        } else
        {
            SceneManager.LoadScene("06_SelecteMissionMaze", LoadSceneMode.Single);
        }
        
    }
}