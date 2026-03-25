using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Linq;
using Newtonsoft.Json;

public class ReceiveCOPData : MonoBehaviour
{
    public Text copXText; // UI Text component for displaying COP X
    public Text copYText; // UI Text component for displaying COP Y
    private string userId;

    public int stateSize;
    public int actionSize;
    public float learningRate = 0.001f;
    public float discountFactor = 0.5f;
    public float explorationRate = 0.4f;
    public float explorationDecay = 0.99f;
    public float minExplorationRate = 0.05f;

    private Dictionary<string, float> qValues = new Dictionary<string, float>();
    private Dictionary<string, float> actionRewards = new Dictionary<string, float>();
    private HashSet<string> actionsToAvoid = new HashSet<string>();

    [Header("Log Test")]
    public Text txtLog;

    public GameObject panelSelectMission;

    [Header("Dialog")]
    public GameObject panelMessage;

    [Header("Audio")]
    public AudioSource audioSource;

    [Header("Maps")]
    public List<MapDataModel> mapList;

    [Header("Maps Setup")]
    public List<MapSetupModel> mapSetup;

    private BluetoothManager bluetoothManager;
    private int sceneId;
    private float A;
    private float B;
    private float C;
    private static System.Random rng = new System.Random();
    private float oldValues_A = float.NaN;
    private float oldValues_B = float.NaN;
    private float oldValues_C = float.NaN;
    private float REWARD;
    private SuratechAPI suraTechAPI = null;
    private void Set_oldValues(float A, float B, string action)
    
    {
        oldValues_A = A;
        oldValues_B = B;
        oldValues_C = C;
        Debug.Log($"check_Q Loaded_oldValues_A: {oldValues_A}");
        Debug.Log($"check_Q Loaded_oldValues_B: {oldValues_B}");
        Debug.Log($"check_Q Loaded_oldValues_C: {oldValues_C}");
    }

    private void Awake()
    {
        userId = PlayerPrefs.GetString("$user_id", ""); // ดึง user_id จาก PlayerPrefs
        Debug.Log($"check_Q User ID Sorasole_check Script ReceiveCOPData: {userId}");
        
        if (suraTechAPI == null)
        {
            suraTechAPI = FindObjectOfType<SuratechAPI>();
        }
        LoadQValuesFromFile(); // โหลดจาก Resources
    }

    void Start()
    {
        float copX = PlayerPrefs.GetFloat("COPX", 0.0f);
        float copY = PlayerPrefs.GetFloat("COPY", 0.0f);
        float oldC = PlayerPrefs.GetFloat("oldC", 0.0f);

        Debug.Log("//////////////////////____Calculated Start check_Q____///////////////////////////");
        Debug.Log($"Calculated check_Q Loaded_COP X_check: {copX}");
        Debug.Log($"Calculated check_Q Loaded_COP Y_check: {copY}");
        Debug.Log($"Calculated check_Q Loaded_oldC_check: {oldC}");
        Debug.Log("//////////////////////____Calculated Start check_Q____///////////////////////////");

        
        A = copX;
        B = copY;

        // ตัวอย่างการแสดงผลใน UI
        if (copXText != null)
        {
            copXText.text = copX.ToString("F2"); // แสดงค่า COP X ด้วยทศนิยม 2 ตำแหน่ง
        }
        if (copYText != null)
        {
            copYText.text = copY.ToString("F2"); // แสดงค่า COP Y ด้วยทศนิยม 2 ตำแหน่ง
        }

        (int, int) state = (0, 0);

        // เลือก Action เมื่อเริ่มต้นการทำงานของสคริปต์
        // 1) สมดุลดี (อยู่ในช่วงกลาง)
        if (A >= -4 && A <= 4 && B >= -3 && B <= 3)
        {
            state = (0, 0);
        }
        // 2) มุมขวาบน
        else if ((A > 4 && B >= 0) || (A >= 0 && B > 3))
        {
            state = (1, 1);
        }
        // 3) มุมขวาล่าง
        else if ((A > 4 && B < 0) || (A >= 0 && B < -3))
        {
            state = (1, -1);
        }
        // 4) มุมซ้ายล่าง
        else if ((A < -4 && B < 0) || (A < 0 && B < -3))
        {
            state = (-1, -1);
        }
        // 5) มุมซ้ายบน
        else if ((A < -4 && B >= 0) || (A < 0 && B > 3))
        {
            state = (-1, 1);
        }
        else
        {
            state = (0, 0);  // ✅ กันไว้
        }

        int gridSize = 3; // กำหนดค่าตามที่ต้องการ

        // ตรวจสอบเงื่อนไข oldC ถ้าไม่เท่ากับ 0 ก็ให้คำนวณ Reward
        if (oldC != 0.0f)
        {
            string lastChosenAction = PlayerPrefs.GetString("LastChosenAction");

            float reward = CalculateReward(A, B, state, lastChosenAction);
            Debug.Log($"Calculated Reward: {reward}");
            Debug.Log("//////////////////////____Calculated loop oldC !=0____///////////////////////////");
            // คุณสามารถดำเนินการอื่นๆ ที่ต้องทำตามหลังการคำนวณ Reward ได้ที่นี่
        }
        else
        {
            Debug.Log("//////////////////////____Calculated loop oldC == 0____///////////////////////////");
            oldC = Mathf.Sqrt(A * A + B * B); // เก็บค่าในตัวแปร oldC
            // บันทึกค่า oldC ใหม่ลงใน PlayerPrefs
            PlayerPrefs.SetFloat("oldC", oldC); // เก็บค่า oldC ในคีย์ "oldC"
            PlayerPrefs.Save(); // บันทึกการเปลี่ยนแปลงลงใน storage
            Debug.Log($"Calculated oldC: {oldC}");
        }

        var (action, isRandom) = ChooseAction(state, gridSize);
        Debug.Log($"Calculated check_Q Selected Action in Start[chosen action_check]: {action}, isRandom: {isRandom}");
        Debug.Log("//////////////////////____Start check_Q____///////////////////////////");
    }

    public class KeyValuePairList
    {
        public List<KeyValuePair<string, float>> items;
    }

    void LoadQValuesFromFile()
    {
        Debug.Log("//////////////////////____LoadQValuesFromFile check_Q____///////////////////////////");

        // ดึงค่า user_id จาก suraTechAPI
        string userId = suraTechAPI.memberInfo.user_member; 
        Debug.Log($"check_Q User ID: {userId}");

        // กำหนดชื่อไฟล์ตาม user_id
        string userFileName = $"Q_Table_Value_Final_{userId}.json";
        string defaultFileName = "Q_values_table.json";

        // กำหนด path ของไฟล์ที่ต้องการโหลด
        string userFilePath = Path.Combine(Application.persistentDataPath, userFileName);
        string defaultFilePath = Path.Combine(Application.persistentDataPath, defaultFileName);
        Debug.Log(Application.persistentDataPath);
        Debug.Log($"check_Q Looking for user file at: {userFilePath}");
        Debug.Log($"check_Q Looking for default file at: {defaultFilePath}");

        // ตรวจสอบว่ามีไฟล์ของ user หรือไม่
        string filePathToLoad;
        if (File.Exists(userFilePath))
        {
            filePathToLoad = userFilePath;
            Debug.Log($"check_Q Loading Q-values from user-specific file: {filePathToLoad}");
        }
        else
        {
            filePathToLoad = defaultFilePath;
            Debug.Log($"check_Q User-specific file not found. Loading default Q-values file: {filePathToLoad}");
        }

        // โหลดไฟล์ JSON
        if (File.Exists(filePathToLoad))
        {
            string json = File.ReadAllText(filePathToLoad);
            Debug.Log("load check_Q Raw JSON content: " + json);

            try
            {
                if (string.IsNullOrEmpty(json))
                {
                    Debug.LogError("load check_Q JSON file is empty or null.");
                    return;
                }

                // ใช้ตัวแปร qValues ของคลาสในการเก็บผลลัพธ์
                qValues = JsonConvert.DeserializeObject<Dictionary<string, float>>(json);

                if (qValues == null || qValues.Count == 0)
                {
                    Debug.LogError("load check_Q Failed to parse JSON or no data found.");
                    return;
                }

                Debug.Log("load check_Q Q Values successfully.");
                foreach (var kvp in qValues)
                {
                    Debug.Log($"load check_Q Key: {kvp.Key}, Value: {kvp.Value}");
                }
            }
            catch (Exception e)
            {
                Debug.LogError("load check_Q Error while parsing JSON: " + e.Message);
            }
        }
        else
        {
            Debug.LogError("load check_Q File not found: " + filePathToLoad);
        }
        Debug.Log("//////////////////////____LoadQValuesFromFile check_Q____///////////////////////////");
    }

    private void SaveQValuesToFile(float avgReward, float oldAvgReward)
    {
        try
        {
            // เพิ่ม avg_reward และ Old_avg_reward เข้าไปใน qValues dictionary
            qValues["New_avg_reward"] = avgReward;
            qValues["Old_avg_reward"] = oldAvgReward;

            // แปลง qValues dictionary เป็น JSON string
            string json = JsonConvert.SerializeObject(qValues, Formatting.Indented);

            // ดึงค่า user_id จาก dataLoad หรือจาก suraTechAPI
            string userId = suraTechAPI.memberInfo.user_member; // หรือ dataLoad.user_id ถ้าต้องการใช้ dataLoad

            // กำหนดชื่อไฟล์เป็น Q_Table_Value_Final + user_id
            string fileName = $"Q_Table_Value_Final_{userId}.json";

            // กำหนด path ของไฟล์โดยใช้ Application.persistentDataPath
            string path = Path.Combine(Application.persistentDataPath, fileName);

            // เขียน JSON string ลงในไฟล์ (จะเขียนทับไฟล์เดิมถ้ามีอยู่แล้ว)
            File.WriteAllText(path, json);
            Debug.Log($"Calculate Q-values saved to {path}");  // พิมพ์ตำแหน่งของไฟล์ออกมาดู
        }
        catch (Exception e)
        {
            Debug.LogError($"Calculate Failed to save Q-values to file: {e.Message}");
        }
    }

    private float GetQValue((float, float) state, string action)
    {
        // แปลง state.Item1 และ state.Item2 ให้เป็นจำนวนเต็มก่อนนำมาใช้เป็นคีย์
        int stateA = (int)state.Item1;
        int stateB = (int)state.Item2;

        // สร้างคีย์ที่ใช้ค้นหาใน qValues
        string generatedKey = $"{stateA}_{stateB}_{action}";

        // ตรวจสอบค่าของ state และ action ก่อนที่จะสร้างคีย์
        Debug.Log($"/////////////////////////////Calculate check_Q GetQValue/////////////////////////////");
        Debug.Log($"Calculate check_Q GetQValue: StateA = {stateA}");
        Debug.Log($"Calculate check_Q GetQValue: StateB = {stateB}");
        Debug.Log($"Calculate check_Q GetQValue: Action = {action}");
        Debug.Log($"Calculate check_Q GetQValue: Generated key_check: {generatedKey}");
        Debug.Log($"/////////////////////////////Calculate check_Q GetQValue/////////////////////////////");

        // ค้นหาคีย์ใน qValues
        if (qValues.ContainsKey(generatedKey))
        {
            Debug.Log($"*************************************check_Q loop_ContainsKey*************************************");
            float qValue = qValues[generatedKey];
            Debug.Log($"check_Q GetQValue: Q-value_check found for key {generatedKey}: {qValue}");
            return qValue;
        }
        else
        {
            Debug.Log($"*************************************check_Q loop_ContainsKey*************************************");
            Debug.LogWarning($"check_Q GetQValue: Q-value_check not found for key {generatedKey}. Returning default value 0.0.");
            return 0.0f;
        }
        Debug.Log($"/////////////////////////////check_Q GetQValue Endloop/////////////////////////////");
    }

    public List<string> Actions((float, float) state, int gridSize, float timerTotal)
    {
        List<string> actionsList = new List<string>();

        // Debug ค่า state
        Debug.Log($"Calculate check_Q GetQValue State: {state}, Item1: {state.Item1}, Item2: {state.Item2}");

        if (state != (0, 0))
        {
            if (state.Item1 > 0 && state.Item2 > 0) // (1,1)
                actionsList.AddRange(new List<string> { "AQ1", "BQ1", "CQ1", "DQ1", "EQ1", "FQ1", "GQ1", "HQ1", "IQ1" });
            else if (state.Item1 < 0 && state.Item2 > 0) // (-1,1)
                actionsList.AddRange(new List<string> { "AQ2", "BQ2", "CQ2", "DQ2", "EQ2", "FQ2", "GQ2", "HQ2", "IQ2" });
            else if (state.Item1 < 0 && state.Item2 < 0) // (-1,-1)
                actionsList.AddRange(new List<string> { "AQ3", "BQ3", "CQ3", "DQ3", "EQ3", "FQ3", "GQ3", "HQ3", "IQ3" });
            else // (1,-1)
                actionsList.AddRange(new List<string> { "AQ4", "BQ4", "CQ4", "DQ4", "EQ4", "FQ4", "GQ4", "HQ4", "IQ4" });
        }
        else 
        {
            // ถ้า state เป็น (0, 0)
            actionsList.AddRange(new List<string> { "AQ0", "BQ0", "CQ0", "DQ0" });
        }

        // สุ่มการเรียงลำดับของด่าน
        Shuffle(actionsList);

        return actionsList;
    }

    public (string, bool) ChooseAction((float, float) state, int gridSize)
    {
        // ดึงค่าของ timerTotal จาก PlayerPrefs
        float timerTotal = PlayerPrefs.GetFloat("LastTime", 0f); // ถ้าไม่มีค่าให้ใช้ 0 เป็นค่าเริ่มต้น

        // เรียกฟังก์ชัน Actions โดยส่งค่า timerTotal
        var actions = Actions(state, gridSize, timerTotal);
        var availableActions = new List<string>();
        foreach (var action in actions)
        {
            if (!actionsToAvoid.Contains(action))
                availableActions.Add(action);
        }
        if (availableActions.Count == 0)
        {
            availableActions = actions;
            actionsToAvoid.Clear();
        }
        bool isRandom = UnityEngine.Random.value < explorationRate;
        string chosenAction;
        float chosenActionQValue = 0.0f;
        Debug.Log("//////////////////////____ChooseActionGetQ____///////////////////////////");
        if (isRandom)
        {
            chosenAction = availableActions[UnityEngine.Random.Range(0, availableActions.Count)];
            chosenActionQValue = GetQValue(state, chosenAction);
            Debug.Log($"ChooseActionGetQ_Randomly _check chosen action: {chosenAction} with Q-value: {chosenActionQValue}");
        }
        else
        {
            var qValues = new Dictionary<string, float>();
            foreach (var action in availableActions)
            {
                qValues[action] = GetQValue(state, action);
                Debug.Log($"ChooseActionGetQ__State: {state}, Action: {action}, Q-value: {GetQValue(state, action)}");
            }
            chosenAction = GetMaxQValueAction(qValues);
            chosenActionQValue = GetQValue(state, chosenAction);
            Debug.Log($"ChooseActionGetQ_Best chosen action based on Q-values _check: {chosenAction} with Q-value: {chosenActionQValue}");
        }
        Debug.Log($"ChooseActionGetQ_Exploration_check: {isRandom}, chosen action: {chosenAction} with Q-value: {chosenActionQValue}");
        Debug.Log("//////////////////////____ChooseActionGetQ____///////////////////////////");


        // บันทึกค่า Action ที่ถูกเลือกลงใน PlayerPrefs
        PlayerPrefs.SetString("LastChosenAction", chosenAction);
        PlayerPrefs.Save();
        // เรียก Showmap หลังจากเลือก Action แล้ว
        Showmap(chosenAction);

        return (chosenAction, isRandom);
    }

    private string GetMaxQValueAction(Dictionary<string, float> qValues)
    {
        float maxQValue = float.MinValue;
        string bestAction = null;
        foreach (var kvp in qValues)
        {
            if (kvp.Value > maxQValue)
            {
                maxQValue = kvp.Value;
                bestAction = kvp.Key;
            }
        }
        return bestAction;
    }

    private void Shuffle<T>(IList<T> list)
    {
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = rng.Next(n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }

    public float CalculateReward(float A, float B, (int, int) currentState, string lastChosenAction)
    {

        float reward = 0;
        float oldC = PlayerPrefs.GetFloat("oldC", 0.0f);
        C = Mathf.Sqrt(A * A + B * B);
        Debug.Log($"check_value C_CalculateReward: {C}");
        Debug.Log($"check_value oldC_CalculateReward: {oldC}");
        Debug.Log($"check_value currentState: ({currentState.Item1}, {currentState.Item2})");

        if (lastChosenAction == "AQ0" || lastChosenAction == "BQ0" || lastChosenAction == "CQ0" || lastChosenAction == "DQ0")
        {
            reward = 1 / C;;
        }
        else if (float.IsNaN(oldC) || C < oldC)
        {
            reward = GetRewardForAction(lastChosenAction, C);
        }
        else if (C > oldC && oldC != 0)
        {
            reward = GetRewardForAction(lastChosenAction, C);
        }
        else
        {
            reward = GetRewardForAction(lastChosenAction, C);
        }
        
        REWARD += reward;

        // บันทึก reward ใหม่ไปยัง totalReward และ rewardCount
        float totalReward = PlayerPrefs.GetFloat("totalReward", 0.0f) + reward;
        float Old_totalReward = PlayerPrefs.GetFloat("Old_totalReward", 0.0f) + reward;
        int rewardCount = PlayerPrefs.GetInt("rewardCount", 0) + 1;

        // ตรวจสอบว่าจำนวน rewardCount มากกว่า 0 เพื่อหลีกเลี่ยงการหารด้วย 0
        float avg_reward = (rewardCount > 0) ? (totalReward / rewardCount) : 0.0f;
        float Old_avg_reward = (rewardCount > 0) ? (Old_totalReward / rewardCount) : 0.0f;

        PlayerPrefs.SetFloat("totalReward", totalReward);
        PlayerPrefs.SetInt("rewardCount", rewardCount);
        PlayerPrefs.SetFloat("Old_avg_reward", Old_avg_reward);
        PlayerPrefs.SetFloat("Old_totalReward", Old_totalReward); // ควรเพิ่มบรรทัดนี้เพื่อบันทึก Old_totalReward

        Debug.Log($"Check player_Calculate_AvG_Reward: {avg_reward}");
        Debug.Log($"Check player TotalReward: {totalReward}, OldTotalReward: {Old_totalReward}, RewardCount: {rewardCount}");
        Debug.Log($"Check player New_avg_reward: {avg_reward}, Old_avg_reward: {Old_avg_reward}");

        if (reward > 0)
        {
            actionsToAvoid.Remove(lastChosenAction);
        }
        else
        {
            actionsToAvoid.Add(lastChosenAction);
        }

        // อัปเดตค่า Q-value
        UpdateQValue(currentState, lastChosenAction, reward);
        SaveQValuesToFile(avg_reward, Old_avg_reward); // บันทึก Q-values เมื่อคุณต้องการ
        oldC = C;  // อัปเดตค่า oldC ด้วย C ก่อน
        PlayerPrefs.SetFloat("oldC", C);  // บันทึกค่า C ลงใน PlayerPrefs ด้วยคีย์ "oldC"
        PlayerPrefs.Save();  // บันทึกการเปลี่ยนแปลง
        Debug.Log($"check_oldC_AfterUpdateQValue_CalculateReward: {oldC}");

        return reward;
    }

    private float GetRewardForAction(string action, float C)
    {
        float reward = 0;
        if (action == "AQ1" || action == "BQ1" || action == "CQ1" || action == "DQ1" ||
            action == "EQ1" || action == "FQ1" || action == "GQ1" || action == "HQ1" || action == "IQ1" ||
            action == "AQ2" || action == "BQ2" || action == "CQ2" || action == "DQ2" ||
            action == "EQ2" || action == "FQ2" || action == "GQ2" || action == "HQ2" || action == "IQ2" ||
            action == "AQ3" || action == "BQ3" || action == "CQ3" || action == "DQ3" ||
            action == "EQ3" || action == "FQ3" || action == "GQ3" || action == "HQ3" || action == "IQ3" ||
            action == "AQ4" || action == "BQ4" || action == "CQ4" || action == "DQ4" ||
            action == "EQ4" || action == "FQ4" || action == "GQ4" || action == "HQ4" || action == "IQ4")
        {
            reward = 1 / C;
        }
        Debug.Log($"reward_CalculateReward: {reward}");
        return reward;
    }

    private void UpdateQValue((float, float) state, string action, float reward)
    {
        // สร้างคีย์โดยใช้ state (int, int) แทน copX และ copY
        string currentKey = $"{state.Item1}_{state.Item2}_{action}";
        // ดึง Q-value ปัจจุบันจาก qValues dictionary
        float currentQValue = qValues.ContainsKey(currentKey) ? qValues[currentKey] : 0.0f;

        // คำนวณ Q-value ที่ดีที่สุดสำหรับสถานะถัดไป
        float maxNextQValue = GetMaxQValueForNextState(state);

        // อัปเดต Q-value ด้วยสูตร Q-learning
        float updatedQValue = currentQValue + learningRate * (reward + discountFactor * maxNextQValue - currentQValue);

        // เก็บ Q-value ที่อัปเดตลงใน qValues dictionary
        qValues[currentKey] = updatedQValue;
        Debug.Log("CalculateReward_Updated Q-value for");
        Debug.Log($"CalculateReward_Updated Q-value for {currentKey}: {updatedQValue}");
    }

    private float GetMaxQValueForNextState((float, float) currentState)
    {
        float maxQValue = float.MinValue;

        // ดึงค่าของ timerTotal จาก PlayerPrefs หรือใช้ตัวแปรที่เก็บไว้
        float timerTotal = PlayerPrefs.GetFloat("LastTime", 0f);
        // เรียกฟังก์ชัน Actions โดยส่ง timerTotal เข้าไปด้วย
        var possibleActions = Actions(currentState, 3, timerTotal);

        foreach (var action in possibleActions)
        {
            string key = $"{currentState.Item1}_{currentState.Item2}_{action}";
            if (qValues.ContainsKey(key))
            {
                float qValue = qValues[key];
                if (qValue > maxQValue)
                {
                    maxQValue = qValue;
                }
            }
        }

        // ถ้าไม่มีค่า Q-value สำหรับสถานะถัดไป ให้ใช้ค่าเริ่มต้น 0
        return maxQValue == float.MinValue ? 0.0f : maxQValue;
    }

    public void Showmap(string chosenAction)
    {
        Debug.Log("//////////////////////____Check player Showmap____///////////////////////////");
        Debug.Log($"Check player Showmap Chosen Action: {chosenAction}");
        Debug.Log($"Check player Showmap mapList.Count: {mapList.Count}");
        if (txtLog == null)
        {
            Debug.LogError("Check player Showmap txtLog is not assigned!");
            return;
        }

        if (panelSelectMission == null)
        {
            Debug.LogError("Check player Showmap panelSelectMission is not assigned!");
            return;
        }

        if (panelMessage == null)
        {
            Debug.LogError("Check player Showmap panelMessage is not assigned!");
            return;
        }

        if (mapList == null || mapList.Count == 0)
        {
            Debug.LogError("Check player Showmap mapList is either not assigned or empty!");
            return;
        }

        txtLog.text = "";
        panelSelectMission.transform.localPosition = new Vector3(0, 0, 0);
        panelMessage.transform.localPosition = new Vector3(720, 0, 0);

        // กำหนด sceneId โดยตรงตามชื่อ chosenAction
        if (chosenAction.Equals("AQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 7;
        }
        else if (chosenAction.Equals("BQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 8;
        }
        else if (chosenAction.Equals("CQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 9;
        }
        else if (chosenAction.Equals("DQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 10;
        }
        else if (chosenAction.Equals("EQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 11;
        }
        else if (chosenAction.Equals("FQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 12;
        }
        else if (chosenAction.Equals("GQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 13;
        }
        else if (chosenAction.Equals("HQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 14;
        }
        else if (chosenAction.Equals("IQ1", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 15;
        }
        else if (chosenAction.Equals("AQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 16;
        }
        else if (chosenAction.Equals("BQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 17;
        }
        else if (chosenAction.Equals("CQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 18;
        }
        else if (chosenAction.Equals("DQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 19;
        }
        else if (chosenAction.Equals("EQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 20;
        }
        else if (chosenAction.Equals("FQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 21;
        }
        else if (chosenAction.Equals("GQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 22;
        }
        else if (chosenAction.Equals("HQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 23;
        }
        else if (chosenAction.Equals("IQ2", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 24;
        }
        else if (chosenAction.Equals("AQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 25;
        }
        else if (chosenAction.Equals("BQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 26;
        }
        else if (chosenAction.Equals("CQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 27;
        }
        else if (chosenAction.Equals("DQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 28;
        }
        else if (chosenAction.Equals("EQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 29;
        }
        else if (chosenAction.Equals("FQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 30;
        }
        else if (chosenAction.Equals("GQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 31;
        }
        else if (chosenAction.Equals("HQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 32;
        }
        else if (chosenAction.Equals("IQ3", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 33;
        }
        else if (chosenAction.Equals("AQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 34;
        }
        else if (chosenAction.Equals("BQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 35;
        }
        else if (chosenAction.Equals("CQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 36;
        }
        else if (chosenAction.Equals("DQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 37;
        }
        else if (chosenAction.Equals("EQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 38;
        }
        else if (chosenAction.Equals("FQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 39;
        }
        else if (chosenAction.Equals("GQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 40;
        }
        else if (chosenAction.Equals("HQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 41;
        }
        else if (chosenAction.Equals("IQ4", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 42;
        }
        else if (chosenAction.Equals("AQ0", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 43;
        }
        else if (chosenAction.Equals("BQ0", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 44;
        }
        else if (chosenAction.Equals("CQ0", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 45;
        }
        else if (chosenAction.Equals("DQ0", StringComparison.OrdinalIgnoreCase))
        {
            sceneId = 46;
        }

        else
        {
            sceneId = 0; // ค่าเริ่มต้นถ้าไม่พบ match
            Debug.LogError("Check player No matching sceneId found for chosenAction.");
            return;
        }

        // ตรวจสอบว่า SceneName ตรงกับ chosenAction ที่ RL เลือก
        for (int i = 0; i < mapList.Count; i++)
        {
            Debug.Log($"Check player Showmap Loop[{i}]: sceneName = {mapList[i].sceneName}, chosenAction = {chosenAction}");
            Debug.Log($"Check player 'pathScene' = '{mapList[i].pathScene}' | 'chosenAction' = '{chosenAction}'");

            if (mapList[i].sceneName.Trim().Equals(chosenAction.Trim(), StringComparison.OrdinalIgnoreCase))
            {
                mapList[i].sceneId = sceneId;
                Debug.Log($"Check player Match found! Scene Name: {mapList[i].sceneName}, SceneID: {mapList[i].sceneId}");

                PlayerPrefs.SetString("$currentScene", mapList[i].pathScene); // บันทึก path ของ Scene ใน PlayerPrefs
                PlayerPrefs.SetInt("$currentSceneID", mapList[i].sceneId);    // บันทึก Scene ID ใน PlayerPrefs
                PlayerPrefs.Save();

                Debug.Log($"Check player After Saved CurrentLevelName: {mapList[i].sceneName}");
                Debug.Log($"Check player After Saved currentSceneID: {mapList[i].sceneId}");

                Debug.Log($"Attempting to load Scene: {mapList[i].pathScene}");
                SceneManager.LoadScene(mapList[i].pathScene); // โหลด Scene ตาม pathScene ที่ถูกตั้งค่าไว้
                return;
            }
        }

        Debug.Log("//////////////////////____Check player Showmap____///////////////////////////");
    }

    public void OnCancel()
    {
        SceneManager.LoadScene("07_SelecteGame", LoadSceneMode.Single);
    }
}
