using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoginScreenUI : MonoBehaviour
{
    private SuratechAPI suraTechAPI;
    [Header("UI")]
    public InputField username;
    public InputField password;
    public Toggle rememberLogin;
    public Button frogetPassword;
    public Button loginButton;
    public Text msgError;
    public Text txtLog;
    public GameObject panelLogin;
    public GameObject panelStart;
    public GameObject loadingUI;

    public string user_id;
    private string _user = "";
    private string _pass = "";
    private bool autoLogin = false;
    private bool hasStarted = false;

    private void Awake()
    {
        msgError.text = "";
        panelLogin.SetActive(false);
        panelStart.SetActive(false);
    }

    private void Start()
    {
        if (suraTechAPI == null)
        {
            suraTechAPI = FindObjectOfType<SuratechAPI>();
        }
        //txtLog.text = "";
        loadingUI.SetActive(true);
        autoLogin = PlayerPrefs.GetInt("$remember", 0) == 1;
        //txtLog.text += "Start autoLogin ::::: " + autoLogin + "\n";

        _user = PlayerPrefs.GetString("$user", "");
        _pass = PlayerPrefs.GetString("$pass", "");

        PlayerPrefs.DeleteKey("oldC"); // ลบค่าเฉพาะในคีย์ "oldC"
        PlayerPrefs.DeleteKey("playerHeight"); // ลบค่าเฉพาะในคีย์ "oldC"
        PlayerPrefs.Save(); // บันทึกการเปลี่ยนแปลง
        if (!autoLogin) {

            loadingUI.SetActive(false);
            panelLogin.SetActive(true);
            panelStart.SetActive(false);
            loginButton.enabled = false;
            msgError.text = "";
            autoLogin = PlayerPrefs.GetInt("$remember", 0) == 1;
            rememberLogin.isOn = autoLogin;
            username.text = _user;
            password.text = _pass;
            Debug.Log("login state");
        }
        else
        {
            Debug.Log("auto login");
            StartCoroutine(suraTechAPI.GetLogin(_user, _pass, LoginCallback));
        }
       
    }

    private void Update()
    {
        if (_user.Trim() != "" && _pass.Trim() != "") {
            loginButton.enabled = true;
        }
    }

    public void OnCheckLogin()
    {
        //txtLog.text += "OnCheckLogin :::::\n";
        loadingUI.SetActive(true);
        PlayerPrefs.SetString("$user", _user);
        PlayerPrefs.SetString("$pass", _pass);
        hasStarted = false;
        StartCoroutine(suraTechAPI.GetLogin(_user, _pass, LoginCallback));        
    }

    public void OnLogout()
    {
        //txtLog.text += "OnLogout :::::\n";
        loadingUI.SetActive(true);
        msgError.text = "";
        StartCoroutine(suraTechAPI.GetLogout(_user, LgoutCallback));
    }

    public void OnCheckRegister()
    {
        //txtLog.text += "OnCheckRegister :::::\n";
        msgError.text = "";
        StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "01_Register"));
    }

    public void OnChangedUsername()
    {
        _user = username.text;
    }

    public void OnChangedPassword()
    {
        _pass = password.text;
    }

    public void OnToggleRemeber(Toggle isRemeber)
    {
        PlayerPrefs.SetInt("$remember", isRemeber.isOn ? 1 : 0);
        Debug.Log("OnToggleRemeber " + isRemeber.isOn);
        PlayerPrefs.Save();    
    }

    public void OnClickForgetPassword()
    {
        Debug.Log("OnClickForgetPassword");
    }

    public void OnTouchToStart()
    {
        msgError.text = "";
        StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "04_ConnectDevice"));
    }

    void LoginCallback(bool isLogin, LoginModel data, string msg)
        {
            Debug.Log("isLogin " + isLogin);
            loadingUI.SetActive(false);
            if (isLogin)
            {
                panelLogin.SetActive(false);
                panelStart.SetActive(true);
                msgError.text = "";
                Debug.Log("LoginCallback: " + isLogin + ": Data : " + JsonUtility.ToJson(data));
                Debug.Log("Login 11111111111111111111111111111111111");
                string uid = _user; // fallback ที่ปลอดภัย
                SaveUserId(uid);
                // ★ (แนะนำ) หากมี LeaderboardUI อยู่ในซีนนี้/ถัดไป อยากรีเฟรชให้ทันทีหลังเซฟ
                var lb = FindObjectOfType<LeaderboardUI>();
                if (lb != null) lb.Refresh();
            }
            else
            {
                panelLogin.SetActive(true);
                panelStart.SetActive(false);
                loginButton.enabled = false;
                OnChangedUsername();
                OnChangedPassword();
                if (data == null)
                {
                    msgError.text = msg;
                }
                else
                {
                    msgError.text = data.message;
                }
                Debug.Log("LoginCallback: " + isLogin + ": Data : " + JsonUtility.ToJson(data));
            }
        }

    void LgoutCallback(bool isLogout, LogoutModel data)
    {
        loadingUI.SetActive(false);
        if (isLogout)
        {
            panelLogin.SetActive(true);
            panelStart.SetActive(false);
            loginButton.enabled = false;
            OnChangedUsername();
            OnChangedPassword();
            msgError.text = data.message;
        }
        //txtLog.text += "LogoutCallback: " + isLogout + ": Data : " + JsonUtility.ToJson(data) + "\n";
        Debug.Log("LogoutCallback: " + isLogout + ": Data : " + JsonUtility.ToJson(data));
    }

    // ★ ADD: helper เก็บ user_id + Save + Log
    private void SaveUserId(string uid)
    {
        if (string.IsNullOrWhiteSpace(uid)) uid = _user; // เผื่อกรณีว่าง
        PlayerPrefs.SetString("user_id", uid);
        PlayerPrefs.Save();
        Debug.Log("[LOGIN] Save PlayerPrefs user_id = " + uid);
    }

}
