using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultScreenUI : MonoBehaviour
{
    public Text txtTitle;
    public Text txtScore;
    public GameObject objWin;
    public GameObject objLoss;

    private void Start()
    {
    }

    public void OnShowRsult(int score)
    {
        if (score == 0)
        {
            Debug.Log("OnShowRsult fail " + score);
            txtTitle.text = "เสียใจด้วยคุณตอบผิด";
            txtScore.text = "ไม่ได้รับคะแนน";
            objWin.SetActive(false);
            objLoss.SetActive(true);
        }
        else
        {
            Debug.Log("OnShowRsult pass " + score);
            txtTitle.text = "ยินดีด้วยคุณตอบถูก";
            txtScore.text = "ได้รับ " + score.ToString("###,##0") + " คะแนน";
            objWin.SetActive(true);
            objLoss.SetActive(false);
        }
    }
}
