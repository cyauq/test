using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


public class SuratechAPI : MonoBehaviour
{
    public MemberInfoModel memberInfo;
    public LoginModel loginData; 
    public RegisterModel registerData; 
    public SaveDataModelResponse saveDataList; 
    public GetDataModelResponse getDataList;

    public IEnumerator GetLogin(string username, string password, Action<bool, LoginModel, string> callback)
    {
        WWWForm formData = new WWWForm();
        formData.AddField("username", username);
        formData.AddField("password", password);
        Debug.Log("Login API ");
        using (UnityWebRequest www = UnityWebRequest.Post(ConfigDomain.api_login, formData))
        {
            yield return www.SendWebRequest();

            loginData = JsonUtility.FromJson<LoginModel>(www.downloadHandler.text);
            memberInfo = loginData.member_info;
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);              
                callback(false, loginData, www.error);
            }
            else
            {
                Debug.Log("Form login completed!");
                loginData.message = www.result.ToString();
                callback(true, loginData, loginData.message);
            }
        }
    }

    public IEnumerator GetLogout(string username, Action<bool, LogoutModel> callback)
    {
        WWWForm formData = new WWWForm();
        formData.AddField("id_member", username);
        using (UnityWebRequest www = UnityWebRequest.Post(ConfigDomain.api_logout, formData))
        {
            yield return www.SendWebRequest();

            LogoutModel data = JsonUtility.FromJson<LogoutModel>(www.downloadHandler.text);
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
                callback(false, data);
            }
            else
            {
                Debug.Log("Form login completed!");
                data.message = www.result.ToString();
                callback(true, data);
            }
        }
    }

    public IEnumerator GetRegister(string username, string password1, string password2, string email, string mobile, Action<bool, RegisterModel> callback)    
    {
        WWWForm formData = new WWWForm();
        formData.AddField("username", username);
        formData.AddField("password", password1);
        formData.AddField("email", email);
        formData.AddField("confirm_password", password2);
        formData.AddField("customer_no", "RKR");
        formData.AddField("gender", "0");

        using (UnityWebRequest www = UnityWebRequest.Post(ConfigDomain.api_register, formData))
        {
            // Request and wait for the desired page.
            yield return www.SendWebRequest();
            registerData = JsonUtility.FromJson<RegisterModel>(www.downloadHandler.text);
            memberInfo = registerData.member_info;
            switch (www.result)
            {
                case UnityWebRequest.Result.ConnectionError:
                case UnityWebRequest.Result.DataProcessingError:
                case UnityWebRequest.Result.ProtocolError:                    
                    callback(false, registerData);
                    break;
                case UnityWebRequest.Result.Success:
                    callback(true, registerData);
                    break;
            }
        }
    }

    public IEnumerator SeveDataGame(SaveDataModel param, Action<bool, SaveDataModelResponse?> callback)
    {
        WWWForm formData = new WWWForm();
        formData.AddField("user_id", param.user_id);
        formData.AddField("game_id", param.game_id);
        formData.AddField("total_score", param.total_score.ToString());
        formData.AddField("distance", param.distance.ToString());
        formData.AddField("timer_gameplay", param.timer_gameplay.ToString());
        formData.AddField("timestamp", param.timestamp);
        formData.AddField("bonus_fail", param.bonus_fail);
        formData.AddField("bonus_success", param.bonus_success);
        formData.AddField("mission_id", param.mission_id);
        formData.AddField("mission_name", param.mission_name);
        formData.AddField("COP_X", param.COP_X.ToString());
        formData.AddField("COP_Y", param.COP_Y.ToString());
        

        using (UnityWebRequest www = UnityWebRequest.Post(ConfigDomain.api_save_data_game, formData))
        {
            // Request and wait for the desired page.
            yield return www.SendWebRequest();
            Debug.Log("save data : " + www.downloadHandler.text);
            saveDataList = JsonUtility.FromJson<SaveDataModelResponse>(www.downloadHandler.text);
            switch (www.result)
            {
                case UnityWebRequest.Result.ConnectionError:
                case UnityWebRequest.Result.DataProcessingError:
                case UnityWebRequest.Result.ProtocolError:                    
                    callback(false, saveDataList);
                    break;
                case UnityWebRequest.Result.Success:
                    callback(true, saveDataList);
                    break;
            }
        }
    }   

    public IEnumerator GetDataGame(GetDataModel param, Action<bool, GetDataModelResponse?> callback)
    {
        WWWForm formData = new WWWForm();
        formData.AddField("user_id", param.user_id);
        formData.AddField("game_id", param.game_id);
        formData.AddField("mission_id", param.mission_id);
        formData.AddField("start_date", param.start_date);
        formData.AddField("end_date", param.end_date);
        formData.AddField("limit", param.limit);

        using (UnityWebRequest www = UnityWebRequest.Post(ConfigDomain.api_get_data_game, formData))
        {
            // Request and wait for the desired page.
            yield return www.SendWebRequest();
            Debug.Log("load data : "+www.downloadHandler.text);
            getDataList = JsonUtility.FromJson<GetDataModelResponse>(www.downloadHandler.text);
            switch (www.result)
            {
                case UnityWebRequest.Result.ConnectionError:
                case UnityWebRequest.Result.DataProcessingError:
                case UnityWebRequest.Result.ProtocolError:                    
                    callback(false, getDataList);
                    break;
                case UnityWebRequest.Result.Success:
                    callback(true, getDataList);
                    break;
            }
        }
    }

    public string _AddDays(DateTime date, int days_to_add)
    {
        DateTime unixYear0 = new DateTime(1970, 1, 1);
        long ticks = date.Ticks - unixYear0.Ticks;
        ticks = ticks + (days_to_add * 864000000000);
        DateTime dtUnix = new DateTime(unixYear0.Ticks + ticks);        
        return dtUnix.Year + "-" + dtUnix.Month.ToString("0#") + "-" + dtUnix.Day.ToString("0#") + " " + dtUnix.Hour.ToString("0#") + ":" + dtUnix.Minute.ToString("0#") + ":" + dtUnix.Second.ToString("0#");
    }

    public string _GetDate(DateTime date)
    {        
        return date.Year + "-" + date.Month.ToString("0#") + "-" + date.Day.ToString("0#") + " " + date.Hour.ToString("0#") + ":" + date.Minute.ToString("0#") + ":" + date.Second.ToString("0#"); ;
    }
}
