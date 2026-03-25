using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DataInfoItemUI : MonoBehaviour
{
    public Text scoreLabel;
    public Text distanceLabel;
    public Text speedLabel;
    public Text dateTimeLabel;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void SetDescription(SaveDataModel? dataInfo)
    {
        scoreLabel.text = "คะแนนที่ได้รับ " + dataInfo?.total_score.ToString();
        if (dataInfo?.game_id == 1) {
            distanceLabel.text = "ระยะทางที่เล่นได้ " + dataInfo?.distance.ToString("0");
            speedLabel.text = "โบนัสที่ได้" + dataInfo?.bonus_success.ToString();
        } else
        {
            distanceLabel.text = "เวลาที่เล่นได้ " + dataInfo?.timer_gameplay.ToString("0.00") + "s.";
            speedLabel.text = "";
        }
        
        
        dateTimeLabel.text = "วันที่เล่น " + dataInfo?.timestamp;
    }
}
