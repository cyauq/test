using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AnalyticSceneUI_AI : MonoBehaviour
{
    public GameObject graphWindows;
    public GameObject[] buttinsScene;

    public Text txtLog;
    private WindowsGraph graphContainer;
    private int sceneId;
    private string sceneType;

    private SuratechAPI suraTechAPI = null;

    private string name_map;

    void Start()
    {
        if (suraTechAPI == null)
        {
            suraTechAPI = FindObjectOfType<SuratechAPI>();
        }
        graphContainer = graphWindows.GetComponent<WindowsGraph>();
        // ดึงค่า sceneId จาก PlayerPrefs
        sceneId = PlayerPrefs.GetInt("$currentSceneID", 1);
        
        // ดีบั๊กค่า sceneId
        Debug.Log($"check_Q Debug sceneId: {sceneId}");

        sceneType = PlayerPrefs.GetString("$mapType_" + sceneId, "");

        // ตรวจสอบการบันทึกตำแหน่งการเคลื่อนที่ของผู้เล่น
        // CheckPlayerPath();

        OnSelectedMission(sceneId);
    }

    public void CheckPlayerPath()
    {
        // ดึงข้อมูลชื่อ Scene และตำแหน่งล่าสุดจาก PlayerPrefs
        string lastLevel = PlayerPrefs.GetString("LastLevel", "NoLevel");
        int pathCount = PlayerPrefs.GetInt("PlayerPathCount", 0); // จำนวนเส้นทางที่บันทึกไว้

        List<Vector3> playerPath = new List<Vector3>();
        for (int i = 0; i < pathCount; i++)
        {
            float x = PlayerPrefs.GetFloat("PlayerPathX_" + i, 0);
            float y = PlayerPrefs.GetFloat("PlayerPathY_" + i, 0);
            float z = PlayerPrefs.GetFloat("PlayerPathZ_" + i, 0);
            playerPath.Add(new Vector3(x, y, z));
        }

        // แสดงข้อมูลใน Debug Log
        Debug.Log("Check player ตรวจสอบผู้เล่น เลเวลล่าสุดที่บันทึก: " + lastLevel);
        Debug.Log("Check player ตรวจสอบผู้เล่น จำนวนเส้นทางที่บันทึกไว้: " + pathCount);

        // เปรียบเทียบกับชื่อด่านปัจจุบัน
        string currentLevelName = SceneManager.GetActiveScene().name;
        Debug.Log("Check player ตรวจสอบผู้เล่น ชื่อเลเวลปัจจุบันใน AnalyticSceneUI_AI: " + currentLevelName);

        if (lastLevel == currentLevelName)
        {
            Debug.Log("Check player เลเวลปัจจุบันตรงกับเลเวลที่บันทึกล่าสุด");
            ShowPlayerPath(playerPath); // แสดงเส้นทางที่บันทึกไว้
        }
        else
        {
            Debug.Log("Check player เลเวลล่าสุดที่บันทึกไม่ตรงกับเลเวลปัจจุบัน");
        }
    }

    public void ShowPlayerPath(List<Vector3> playerPath)
    {
        // แสดงเส้นทางผู้เล่น
        foreach (Vector3 position in playerPath)
        {
            Debug.Log("Check player ตำแหน่งผู้เล่น: " + position);
            // คุณสามารถวาดกราฟหรือแสดงตำแหน่งบน UI ตามที่ต้องการ
        }
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
        dataLoad.start_date = startData;
        dataLoad.end_date = endDate;

        // เพิ่ม Debug.Log เพื่อตรวจสอบว่าพารามิเตอร์แต่ละตัวมีค่าถูกต้องหรือไม่
        Debug.Log($"Check player user_id: {dataLoad.user_id}");
        Debug.Log($"Check player game_id: {dataLoad.game_id}");
        Debug.Log($"Check player mission_id: {dataLoad.mission_id}");
        Debug.Log($"Check player limit: {dataLoad.limit}");
        Debug.Log($"Check player start_date: {dataLoad.start_date}");
        Debug.Log($"Check player end_date: {dataLoad.end_date}");

        // Debug.Log เพื่อดีบักค่าต่าง ๆ
        Debug.Log("Check player startData : " + startData);
        Debug.Log("Check player endDate : " + endDate);

        StartCoroutine(suraTechAPI.GetDataGame(dataLoad, getDataCallback));
    }

    void getDataCallback(bool isSuccess, GetDataModelResponse? resp)
    {
        Debug.Log("Check player resp: " + resp);

        // ตรวจสอบว่า API ตอบกลับเป็น null หรือไม่
        if (resp == null)
        {
            Debug.LogError("Check player API response is null!");
            return;  // ออกจากฟังก์ชันเพราะ resp ไม่มีข้อมูล
        }

        if (isSuccess)
        {
            Debug.Log($"Check player Response received: {JsonUtility.ToJson(resp, true)}");

            // ตรวจสอบฟิลด์ที่ถูกต้องจาก resp และแทนที่ resp.data ด้วยฟิลด์ที่มีอยู่จริงในโครงสร้าง GetDataModelResponse
            // ตัวอย่างเช่น resp.correctFieldName

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
            graphContainer.ShowGraph(resp?.data);
            Debug.Log("Check player Go ShowGraph");
            // ตรวจสอบว่าคุณใช้ฟิลด์ที่ถูกต้องเมื่อทำการแสดงกราฟ
            // เช่น graphContainer.ShowGraph(resp?.correctFieldName);
        }
        else
        {
            Debug.LogError("Check player Failed to retrieve data from the API.");
        }
    }

    public void OnExit()
    {       
        SceneManager.LoadScene("07_SelecteGame", LoadSceneMode.Single);
    }

    public void GoShowGraph()
    {       
        SceneManager.LoadScene("06_Showgraphplayer", LoadSceneMode.Single);
    }
}
