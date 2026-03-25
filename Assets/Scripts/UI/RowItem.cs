using TMPro;
using UnityEngine;

public class RowItem : MonoBehaviour
{
    public TextMeshProUGUI rankText;
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI scoreText;

    public void Set(int rank, string name, long score)
    {
        if (rankText)  rankText.text  = rank.ToString() + ".";
        if (nameText)  nameText.text  = name;
        if (scoreText) scoreText.text = score.ToString("N0");
    }
}
