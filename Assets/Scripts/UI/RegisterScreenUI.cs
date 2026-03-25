using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RegisterScreenUI : MonoBehaviour
{
    private SuratechAPI suraTechAPI;
    [Header("UI")]
    public InputField username;
    public InputField password;
    public InputField password2;
    public InputField email;
    public InputField mobile;
    public Toggle male;
    public Toggle female;
    public Text msgError;
    public GameObject loadingUI;

    public Button registerButton;

    private string _user = "";
    private string _pass = "";
    private string _pass2 = "";
    private string _email = "";
    private string _mobile = "";

    // Start is called before the first frame update
    void Start()
    {
        if (suraTechAPI == null)
        {
            suraTechAPI = FindObjectOfType<SuratechAPI>();
        }
        registerButton.enabled = false;
        msgError.text = "";
        loadingUI.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (username.text.Trim() != "" &&
            password.text.Trim() != "" &&
            password2.text.Trim() != "" &&
            email.text.Trim() != "")
        {
            registerButton.enabled = true;
        }
    }

    public void OnCheckRegister()
    {
        Debug.Log("OnCheckRegister");
        loadingUI.SetActive(true);
        StartCoroutine(suraTechAPI.GetRegister(_user, _pass, _pass2, _email, _mobile, RegisterCallback));        
    }

    public void OnChangedUsername()
    {
        Debug.Log("OnChangedUsername " + username.text);
        _user = username.text.Trim();
    }

    public void OnChangedPassword()
    {
        Debug.Log("OnChangedPassword " + password.text);
        _pass = password.text.Trim();
    }

    public void OnChangedPassword2()
    {
        Debug.Log("OnChangedPassword2 " + password2.text);
        _pass2 = password2.text.Trim();
    }

    public void OnChangedEmail()
    {
        Debug.Log("OnChangedEmail " + email.text);
        _email = email.text.Trim();
    }

    public void OnChangedMobile()
    {
        Debug.Log("OnChangedMobile " + mobile.text);
        _mobile = mobile.text.Trim();
    }

    public void OnToggleMale(Toggle gender)
    {
        female.isOn = !gender.isOn;
    }

    public void OnToggleFemale(Toggle gender)
    {
        male.isOn = !gender.isOn;      
    }

    void RegisterCallback(bool isLogin, RegisterModel data)
    {
        loadingUI.SetActive(false);
        if (isLogin)
        {
            Debug.Log("LoginCallback: " + isLogin + ": Data : " + JsonUtility.ToJson(data));
            PlayerPrefs.SetString("$user", _user);
            PlayerPrefs.SetString("$pass", _pass);
            PlayerPrefs.SetString("$email", _email);
            PlayerPrefs.SetString("$mobile", _mobile);
            
            StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "04_ConnectDevice"));
        }
        else
        {           
            Debug.Log("LoginCallback: " + isLogin + ": Data : " + JsonUtility.ToJson(data));
            msgError.text = data.message;
        }
    }
}
