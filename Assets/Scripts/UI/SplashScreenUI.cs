using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SplashScreenUI : MonoBehaviour
{
    public Text txtMessage;
    public GameObject btnLogin;
    public GameObject btnRegister;
    public GameObject btnTerms;
    public GameObject loading;


    // Start is called before the first frame update
    void Start()
    {
        btnLogin.SetActive(false);
        btnRegister.SetActive(false);
        txtMessage.text = "";    
        StartCoroutine("StartLoading");
    }

    IEnumerator StartLoading()
    {
        var isLogin = false;
        txtMessage.text = "กำลังเตรียมข้อมูล...";
        yield return new WaitForSeconds(.3f);
        txtMessage.text = "เช็คข้อมูล...";
        yield return new WaitForSeconds(.3f);
        txtMessage.text = "เช็คข้อมูลเรียบร้อย";
        isLogin = PlayerPrefs.GetInt("$remember", 0) == 1;
        yield return new WaitForSeconds(1);
        Debug.Log(isLogin);
        if (isLogin)
        {            
            StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, "02_Login"));
            Debug.Log("Login 111111");
        }
        else
        {
            btnLogin.SetActive(true);
            btnRegister.SetActive(true);
            txtMessage.text = "";
        }
    }
}
