using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Xeemu.PathAutoGen;

public class BonusMatchSceneUI : MonoBehaviour
{
    public Image answerRight;
    public Image answerLeft;
    public Text countDown;
    public Text title;
    public Text txtQuestion;
    public Text description;
    public Text alerm;
    public Text readyTimer;

    public float timer = 60f;
    public GameObject resultGameObject;

    private STATE_BONUS state;
    private PlayerController _playerController;
    private GameObject _playerControllerObject;
    private SCHOOSE _anwserChooes;
    private SCHOOSE _anwserCorrect;
    private int _score = 0;
    private int hidePosition = 0;
    private string anwserLeft, anwserRight, anwserPass = "";

    // Start is called before the first frame update
    void Start()
    {
        txtQuestion.text = "";
        readyTimer.text = "3";
        countDown.text = "";
        state = STATE_BONUS.IDLE;
        gameObject.transform.localScale = new Vector3(1, 1, 1);
        answerLeft.transform.localScale = new Vector3(1, 1, 1);
        answerRight.transform.localScale = new Vector3(1, 1, 1);
        answerLeft.GetComponentInChildren<Text>().text = "";
        answerRight.GetComponentInChildren<Text>().text = "";
        FindPlayerControllerObject();
        //WaitForStart();
    }

    // Update is called once per frame
    void Update()
    {
        if (state == STATE_BONUS.PLAY)
        {
            countDown.text = Mathf.FloorToInt(timer).ToString();
            if (timer <= 0)
            {
                state = STATE_BONUS.END;
                _score = 0;
                ResultBonus();
                return;
            }
            timer -= Time.deltaTime;
        }
    }

    void FindPlayerControllerObject()
    {
        _playerControllerObject = GameObject.FindWithTag("Player");
        if (_playerControllerObject != null)
        {
            _playerController = _playerControllerObject.GetComponent<PlayerController>();
        }
    }

    public void WaitForStart()
    {       
        readyTimer.text = "3";
        countDown.text = "";
        state = STATE_BONUS.IDLE;
        string _user = PlayerPrefs.GetString("$user", "");
        int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);        
        timer = PlayerPrefs.GetInt("$sceneRun" + mapid + "_timer" + _user, 60);
        _score = 0;
        _anwserChooes = SCHOOSE.NONE;

        gameObject.transform.localScale = new Vector3(1, 1, 1);
        answerLeft.transform.localScale = new Vector3(1, 1, 1);
        answerRight.transform.localScale = new Vector3(1, 1, 1);

        iTween.ScaleFrom(gameObject, iTween.Hash("x", 0f, "y", 0f, "z", 0f, "time", 0.3f, "oncomplete", "StartGame", "oncompletetarget", gameObject));
    }

    private (string, string, string, string) CreateQuestionNumber()
    {
        hidePosition = Random.Range(1, 2);
        int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);
        var questionStr = "";
        int x = Random.Range(1, 10);
        int y = Random.Range(1, 10);
        double anwser = 0;
        int operation = Random.Range(1, mapid <= 4 ? 2 : 4);
        string operationStr = "";
        Debug.Log("random operation" + operation);
        if (operation == 1)
        {
            anwser = x + y;
            operationStr = " + ";
        }
        else if (operation == 2)
        {
            anwser = x - y;
            operationStr = " - ";
        }
        else if (operation == 3)
        {
            anwser = x * y;
            operationStr = " x ";
        }
        else if (operation == 4)
        {
            anwser = x / y;
            operationStr = " / ";
        }
        
        Debug.Log("random hidePosition" + hidePosition);
        switch (hidePosition)
        {
            case 1:
                Debug.Log("first");
                questionStr = "?" + operationStr + y + " = " + anwser;
                anwserPass = x.ToString();
                break;
            case 2:
                Debug.Log("second");
                questionStr = x + operationStr + "?" + " = " + anwser;
                anwserPass = y.ToString();
                break;
            case 3:
                Debug.Log("anwser");
                questionStr = x + operationStr + y + " = ?";
                anwserPass = anwser.ToString();
                break;
            default:
                break;
        }

        int randomCorrect = Random.Range(0, 10);
        if (randomCorrect % 2 == 0)
        {
            anwserLeft = anwserPass;
            anwserRight = Random.Range(1, int.Parse(anwserPass)).ToString();
        }
        else
        {
            anwserLeft = Random.Range(1, int.Parse(anwserPass)).ToString();
            anwserRight = anwserPass.ToString();
        }

        return (questionStr, anwserLeft, anwserRight, anwserPass);
    }

    public void SelectAnswer(SCHOOSE sChoose, ref Text coinLabel, ref int coinValue)
    {
        if (state == STATE_BONUS.PLAY)
        {
            string _user = PlayerPrefs.GetString("$user", "");
            int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);
            int passBunusCount = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonusPass" + _user, 0);
            int failBunusCount = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonusFail" + _user, 0);
            _score = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonus" + _user, 5);
            _anwserChooes = sChoose;
            if (sChoose == SCHOOSE.LEFT)
            {
                if (anwserLeft == anwserPass)
                {
                    coinValue += _score;
                    coinLabel.text = coinValue.ToString();
                    Debug.Log("SelectAnswer : " + sChoose + " total score " + _score);
                    passBunusCount += 1;
                    PlayerPrefs.SetInt("$sceneRun"+ mapid + "_bonusPass" + _user, passBunusCount);
                }
                else
                {
                    failBunusCount += 1;
                    PlayerPrefs.SetInt("$sceneRun" + mapid + "_bonusFail" + _user, failBunusCount);
                }
                iTween.ScaleTo(answerLeft.gameObject, iTween.Hash("x", 2f, "y", 2f, "z", 2f, "time", 0.3f, "oncomplete", "ResultBonus", "oncompletetarget", gameObject));
            }                
            else if (sChoose == SCHOOSE.RIGHT)
            {
                if (anwserRight == anwserPass)
                {
                    coinValue += _score;
                    coinLabel.text = coinValue.ToString();
                    Debug.Log("SelectAnswer : " + sChoose + " total score " + _score);
                    passBunusCount += 1;
                    PlayerPrefs.SetInt("$sceneRun" + mapid + "_bonusPass" + _user, passBunusCount);
                }
                else
                {
                    failBunusCount += 1;
                    PlayerPrefs.SetInt("$sceneRun" + mapid + "_bonusFail" + _user, failBunusCount);
                }
                iTween.ScaleTo(answerRight.gameObject, iTween.Hash("x", 2f, "y", 2f, "z", 2f, "time", 0.3f, "oncomplete", "ResultBonus", "oncompletetarget", gameObject));
            }                
            state = STATE_BONUS.END;
        }
    }

    private void StartGame()
    {
        (string, string, string, string) value = CreateQuestionNumber();
        txtQuestion.text = value.Item1;
        answerLeft.GetComponentInChildren<Text>().text = value.Item2;
        answerRight.GetComponentInChildren<Text>().text = value.Item3;
        StartCoroutine(WaitAndTimer());
    }

    private void ResultBonus()
    {
        if (_anwserChooes == SCHOOSE.LEFT && _anwserChooes == _anwserCorrect)
        {
            iTween.ScaleTo(answerLeft.gameObject, iTween.Hash("x", 5f, "y", 5f, "z", 5f, "time", 0.3f));
        }
        else if (_anwserChooes == SCHOOSE.RIGHT && _anwserChooes == _anwserCorrect)
        {
            iTween.ScaleTo(answerRight.gameObject, iTween.Hash("x", 5f, "y", 5f, "z", 5f, "time", 0.3f));
        }

        resultGameObject.SetActive(true);
        resultGameObject.GetComponent<ResultScreenUI>().OnShowRsult(_score);
        iTween.ScaleFrom(resultGameObject.gameObject, iTween.Hash("x", 0f, "y", 0f, "z", 0f, "time", 0.3f, "oncompletetarget", gameObject));

        StartCoroutine(WaitForResult());
    }

    private IEnumerator WaitForResult()
    {
        yield return new WaitForSeconds(3);
        state = STATE_BONUS.IDLE;
        string _user = PlayerPrefs.GetString("$user", "");
        int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);
        timer = PlayerPrefs.GetInt("$sceneRun" + mapid + "_timer" + _user, 60);
        _playerController.isBonus = false;
        readyTimer.text = "3";
        countDown.text = "";
        state = STATE_BONUS.IDLE;
        gameObject.transform.localScale = new Vector3(1, 1, 1);
        answerLeft.transform.localScale = new Vector3(1, 1, 1);
        answerRight.transform.localScale = new Vector3(1, 1, 1);
        _anwserChooes = SCHOOSE.NONE;
        _score = 0;
        resultGameObject.transform.localScale = new Vector3(1, 1, 1);
        resultGameObject.SetActive(false);
        gameObject.SetActive(false);
    }

    private IEnumerator WaitAndTimer()
    {
        readyTimer.text = "2";
        yield return new WaitForSeconds(1f);
        readyTimer.text = "1";
        yield return new WaitForSeconds(1f);
        readyTimer.text = "";
        yield return new WaitForSeconds(0.5f);
        countDown.text = Mathf.FloorToInt(timer).ToString();
        yield return new WaitForSeconds(1f);
        state = STATE_BONUS.PLAY;
    }
}
