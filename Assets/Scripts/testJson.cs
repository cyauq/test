using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testJson : MonoBehaviour
{
    private DataInfo listData = new DataInfo();
    public SuratechAPI suraTechAPI;

    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.DeleteKey("$dataTableScore_" + 1 + "_caomus2");
        //string _dataTableScore = PlayerPrefs.GetString("$dataTableScore_" + 1 + "_caomus2");
        //listData = JsonUtility.FromJson<DataInfo>(_dataTableScore);


        //if (listData == null)
        //{
        //    Debug.Log("new json ");
        //    listData = new DataInfo();
        //    listData.dataList = new List<AnalyticModel>();
        //} else
        //{
        //    string json1 = JsonUtility.ToJson(listData);
        //    Debug.Log("string json " + json1);

        //}

        ///// Create Dava save
        /////
        //for (int i = 1; i < 2; i++)
        //{
        //    AnalyticModel saveData = new AnalyticModel();
        //    saveData.id = 1;
        //    saveData.currentScore = UnityEngine.Random.RandomRange(1, 100);
        //    saveData.distance = UnityEngine.Random.RandomRange(100, 1000); ;
        //    saveData.lastPlay = DateTime.Now.ToLocalTime();
        //    listData.dataList.Add(saveData);
        //}

        //AnalyticModel saveData = new AnalyticModel();
        //saveData.id = 1;
        //saveData.currentScore = UnityEngine.Random.RandomRange(1, 100);
        //saveData.distance = UnityEngine.Random.RandomRange(100, 1000); ;
        //saveData.lastPlay = DateTime.Now.ToLocalTime();        
        //listData.dataList.Add(saveData);

        //AnalyticModel saveData2 = new AnalyticModel();
        //saveData2.id = 2;
        //saveData2.currentScore = 200;
        //saveData2.distance = 222;
        //saveData2.lastPlay = DateTime.Now.ToLocalTime();

        //listData.dataList.Add(saveData2);

        //string json = JsonUtility.ToJson(listData);

        //Debug.Log("string json "+json);


        //DataInfo convertListData = new DataInfo();

        //convertListData = JsonUtility.FromJson<DataInfo>(json);

        //for (int i = 0; i < convertListData.dataList.Count; i++)
        //{
        //    //Debug.Log("score " + convertListData.dataList[i].currentScore + ", timesttamp " + convertListData.dataList[i].lastPlay.ToString("yyyy-MM-dd h:mm:ss tt"));
        //}

        ///
        /// Save data list into local storage
        ///

        //PlayerPrefs.SetString("$dataTableScore_" + 1 + "_caomus2", json);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnSaveData()
    {
        Debug.Log("on save data");
        var save = new SaveDataModel();
        save.game_id = 1;
        save.user_id = "12";
        save.total_score = 12;
        save.distance = 10.2f;
        save.timer_gameplay = 120f;
        save.timestamp = DateTime.Now.ToLocalTime().ToString();
        save.bonus_fail = 10;
        save.bonus_success = 11;
        save.mission_id = 12;
        save.mission_name = "mission 1";

        StartCoroutine(suraTechAPI.SeveDataGame(save, saveDataCallback));
    }
    
    void saveDataCallback(bool isSuccess, SaveDataModelResponse? data)
    {
        if (isSuccess)
        {
            Debug.Log("data : " + data.ToString());
        }
    }

    public void OnLoadData()
    {
        Debug.Log("on load data");
        var load = new GetDataModel();
        load.user_id = "12";
        load.game_id = 1;
        load.limit = 3;
        load.start_date = "2021-08-05 04:24:34";
        load.end_date = "2021-08-08 7:24:34";

        StartCoroutine(suraTechAPI.GetDataGame(load, getDataCallback));
    }


    void getDataCallback(bool isSuccess, GetDataModelResponse? data)
    {
        if (isSuccess)
        {
            Debug.Log("data : " + data.ToString());
        }
    }
}
