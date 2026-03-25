using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Xeemu.PathAutoGen;

public class BonusSceneUI : MonoBehaviour
{
    public Image answerRight;
    public Image answerLeft;
    public Text countDown;
    public Text title;
    public Text description;
    public Text alerm;
    public Text readyTimer;

    public float timer = 60f;
    public GameObject resultGameObject;

    public Sprite[] sprites;

    private STATE_BONUS state;
    private PlayerController _playerController;
    private GameObject _playerControllerObject;
    private SCHOOSE _anwserChooes;
    private SCHOOSE _anwserCorrect;
    private int _score = 0;

    // Start is called before the first frame update
    void Start()
    {
        readyTimer.text = "3";
        countDown.text = "";
        state = STATE_BONUS.IDLE;
        gameObject.transform.localScale = new Vector3(1, 1, 1);
        answerLeft.transform.localScale = new Vector3(1, 1, 1);
        answerRight.transform.localScale = new Vector3(1, 1, 1);
        FindPlayerControllerObject();
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

    public void WaitForStart(SINGLEROWBLOCKER typeBonus)
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

        int anwserCorrect = GetIndexBonus(typeBonus);
        int randomCorrect = Random.Range(0, 2);
        if (randomCorrect == 0)
        {            
            int _index = GiveMeANumber(anwserCorrect);
            Debug.Log("anserCorrect : " + anwserCorrect + " _index " + _index);
            if (_index == anwserCorrect)
            {
                answerLeft.sprite = sprites[_index];
                answerRight.sprite = sprites[anwserCorrect];
                _anwserCorrect = SCHOOSE.RIGHT;
            }                
            else
            {
                answerLeft.sprite = sprites[anwserCorrect];
                answerRight.sprite = sprites[_index];
                _anwserCorrect = SCHOOSE.LEFT;                
            }
        }
        else
        {
            int _index = GiveMeANumber(anwserCorrect);
            Debug.Log("anserCorrect : " + anwserCorrect + " _index " + _index);
            if (_index == anwserCorrect)
            {
                answerRight.sprite = sprites[_index];
                answerLeft.sprite = sprites[anwserCorrect];
                _anwserCorrect = SCHOOSE.LEFT;
            }
            else
            {
                answerRight.sprite = sprites[anwserCorrect];
                answerLeft.sprite = sprites[_index];
                _anwserCorrect = SCHOOSE.RIGHT;
            }                
        }
        

        iTween.ScaleFrom(gameObject, iTween.Hash("x", 0f, "y", 0f, "z", 0f, "time", 0.3f, "oncomplete", "StartGame", "oncompletetarget", gameObject));
    }

    private int GiveMeANumber(int excludeNumber)
    {
        var exclude = new HashSet<int>() { excludeNumber };
        var maximum = 5;
        var range = Enumerable.Range(0, maximum).Where(i => !exclude.Contains(i));        

        var rand = new System.Random();
        int index = rand.Next(0, maximum - exclude.Count);
        return range.ElementAt(index);
    }

    private int GetIndexBonus(SINGLEROWBLOCKER type)
    {
        int index = 0;
        switch (type)
        {
            case SINGLEROWBLOCKER.SINGLEROWBLOCKER_1:
                index = 0;
                break;
            case SINGLEROWBLOCKER.SINGLEROWBLOCKER_2:
                index = 1;
                break;
            case SINGLEROWBLOCKER.SINGLEROWBLOCKER_3:
                index = 2;
                break;
            case SINGLEROWBLOCKER.SINGLEROWBLOCKER_4:
                index = 3;
                break;
            case SINGLEROWBLOCKER.SINGLEROWBLOCKER_5:
                index = 4;
                break;
        }
        return index;
    }

    public void SelectAnswer(SCHOOSE sChoose, ref Text coinLabel, ref int coinValue)
    {
        if (state == STATE_BONUS.PLAY)
        {
            _anwserChooes = sChoose;
            if (sChoose == SCHOOSE.LEFT)
                iTween.ScaleTo(answerLeft.gameObject, iTween.Hash("x", 2f, "y", 2f, "z", 2f, "time", 0.3f, "oncomplete", "ResultBonus", "oncompletetarget", gameObject));
            else if (sChoose == SCHOOSE.RIGHT)
                iTween.ScaleTo(answerRight.gameObject, iTween.Hash("x", 2f, "y", 2f, "z", 2f, "time", 0.3f, "oncomplete", "ResultBonus", "oncompletetarget", gameObject));

            string _user = PlayerPrefs.GetString("$user", "");
            int mapid = PlayerPrefs.GetInt("$currentSceneID", 1);
            int passBunusCount = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonusPass" + _user, 0);
            int failBunusCount = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonusFail" + _user, 0);
            if (_anwserChooes == _anwserCorrect) {
                _score = PlayerPrefs.GetInt("$sceneRun" + mapid + "_bonus" + _user, 5);
                coinValue += _score;
                coinLabel.text = coinValue.ToString();
                Debug.Log("SelectAnswer : " + sChoose + " total score " + _score);
                passBunusCount += 1;
                PlayerPrefs.SetInt("$sceneRun" + mapid + "_bonusPass" + _user, passBunusCount);
            } else
            {
                failBunusCount += 1;
                PlayerPrefs.SetInt("$sceneRun" + mapid + "_bonusFail" + _user, failBunusCount);
            }

            state = STATE_BONUS.END;
        }
    }

    private void StartGame()
    {
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
