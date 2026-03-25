using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetupSceneScreenUI : MonoBehaviour
{

    [Header("UI")]
    public GameObject btnBack;
    public Text txtTitle;
    public Text txtCoinAmount;
    public Text txtSpeed;
    public Text txtCoin;
    public Text txtBonus;
    public Text txtTimer;
    public InputField inputCoinAmount;
    public InputField inputSpeed;
    public InputField inputCoin;
    public InputField inputBonus;
    public InputField inputTimer;


    [Header("Scene Setting")]
    public GameObject[] buttinsScene;

    private int sceneIndex = 0;

    private int _coinAmount;
    private float _speed;
    private int _coin;
    private int _bonus;
    private int _timer;
    private string _user;

    // Start is called before the first frame update
    void Start()
    {
        sceneIndex = 1;
        OnSelecteSceen(sceneIndex);
    }

    public void OnServerInit(List<MapSetupModel> mapSetup)
    {
        _user = PlayerPrefs.GetString("$user", "");
        for (int i=0; i<mapSetup.Count;i++)
        {
            int index = i + 1;

            _coinAmount = PlayerPrefs.GetInt("$sceneRun" + index + "_coinAmount" + _user, 0);            
            if (_coinAmount == 0)
            {
                Debug.Log(mapSetup[i].amountCoin);
                PlayerPrefs.SetInt("$sceneRun" + index + "_coinAmount" + _user, mapSetup[i].amountCoin);
            }

            _speed = PlayerPrefs.GetFloat("$sceneRun" + index + "_speed" + _user, 0);
            if (_speed == 0)
            {
                PlayerPrefs.SetFloat("$sceneRun" + index + "_speed" + _user, mapSetup[i].speed);
            }

            _coin = PlayerPrefs.GetInt("$sceneRun" + index + "_coin" + _user, 0);
            if (_coin == 0)
            {
                PlayerPrefs.SetInt("$sceneRun" + index + "_coin" + _user, mapSetup[i].scoreCoin);
            }

            _bonus = PlayerPrefs.GetInt("$sceneRun" + index + "_bonus" + _user, 0);
            if (_bonus == 0)
            {
                PlayerPrefs.SetInt("$sceneRun" + index + "_bonus" + _user, mapSetup[i].scoreBonus);
            }

            _timer = PlayerPrefs.GetInt("$sceneRun" + index + "_timer" + _user, 0);
            if (_timer == 0)
            {
                PlayerPrefs.SetInt("$sceneRun" + index + "_timer" + _user, mapSetup[i].timer);
            }
        }   
    }

    public void OnUpdateSetting()
    {
        _user = PlayerPrefs.GetString("$user", "");
        _coinAmount = PlayerPrefs.GetInt("$sceneRun" + sceneIndex + "_coinAmount" + _user, 3);
        _speed = PlayerPrefs.GetFloat("$sceneRun" + sceneIndex + "_speed" + _user, 10f);
        _coin = PlayerPrefs.GetInt("$sceneRun" + sceneIndex + "_coin" + _user, 1);
        _bonus = PlayerPrefs.GetInt("$sceneRun" + sceneIndex + "_bonus" + _user, 5);
        _timer = PlayerPrefs.GetInt("$sceneRun" + sceneIndex + "_timer" + _user, 60);

        if (inputCoinAmount != null) inputCoinAmount.text = _coinAmount.ToString();
        if (inputSpeed != null) inputSpeed.text = _speed.ToString();
        if (inputCoin != null) inputCoin.text = _coin.ToString();
        if (inputBonus != null) inputBonus.text = _bonus.ToString();
        if (inputTimer != null) inputTimer.text = _timer.ToString();
    }

    public void OnSelecteSceen(int sceneIndex)
    {
        this.sceneIndex = sceneIndex;

        for (int i = 0; i < buttinsScene.Length; i++)
        {
            if (i == sceneIndex - 1)
            {
                buttinsScene[i].transform.Find("Image").gameObject.SetActive(true);
            }
            else
            {
                buttinsScene[i].transform.Find("Image").gameObject.SetActive(false);
            }
        }
        OnUpdateSetting();
    }

    public void OnSaveSetting()
    {
        _user = PlayerPrefs.GetString("$user", "");
        _coinAmount = int.Parse(inputCoinAmount.text);
        _speed = float.Parse(inputSpeed.text);
        _coin = int.Parse(inputCoin.text);
        _bonus = int.Parse(inputBonus.text);
        _timer = int.Parse(inputTimer.text);

        
        PlayerPrefs.SetInt("$sceneRun" + sceneIndex + "_coinAmount" + _user, _coinAmount);
        PlayerPrefs.SetFloat("$sceneRun" + sceneIndex + "_speed" + _user, _speed);
        PlayerPrefs.SetInt("$sceneRun" + sceneIndex + "_coin" + _user, _coin);
        PlayerPrefs.SetInt("$sceneRun" + sceneIndex + "_bonus" + _user, _bonus);
        PlayerPrefs.SetInt("$sceneRun" + sceneIndex + "_timer" + _user, _timer);
    }
}
