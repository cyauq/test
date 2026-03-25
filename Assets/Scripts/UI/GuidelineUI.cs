using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Xeemu.PathAutoGen;

public class GuidelineUI : MonoBehaviour
{
    public Sprite[] sprites;
    public Image guildeIcon;
    public GameObject maskPos;
    public OBSTACLESPAWNDIRECTION direction;

    private string state = "idle";

    public void OnStartSprite(SINGLEROWBLOCKER obsctacleType)
    {
        state = "idle";
        
        int index = 0;
        switch (obsctacleType)
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
        
        guildeIcon.sprite = sprites[index];
        if (direction == OBSTACLESPAWNDIRECTION.LEFT) {
            iTween.MoveTo(maskPos, iTween.Hash("x", -100f, "y", 0f, "z", 0f, "time", 0.1f, "islocal", true));
            //iTween.MoveTo(maskPos, iTween.Hash("x", -50f, "y", 0f, "z", 0f, "time", 0.3f, "delay", 0.1f, "islocal", true));
            iTween.MoveTo(maskPos, iTween.Hash("x", 100f, "y", 0f, "z", 0f, "time", 0.5f, "delay", 0.5f, "islocal", true));
        }
        if (direction == OBSTACLESPAWNDIRECTION.RIGHT)
        {
            iTween.MoveTo(maskPos, iTween.Hash("x", 100f, "y", 0f, "z", 0f, "time", 0.1f, "islocal", true));
            //iTween.MoveTo(maskPos, iTween.Hash("x", 50f, "y", 0f, "z", 0f, "time", 0.3f, "delay", 0.1f, "islocal", true));
            iTween.MoveTo(maskPos, iTween.Hash("x", -100f, "y", 0f, "z", 0f, "time", 0.5f, "delay", 0.5f, "islocal", true));
        }
    }

    public void OnDistorySprite()
    {
        if (direction == OBSTACLESPAWNDIRECTION.LEFT)
        {            
            iTween.MoveTo(maskPos, iTween.Hash("x", -200f, "y", 0f, "z", 0f, "time", 0.5f, "islocal", true));
        }
        if (direction == OBSTACLESPAWNDIRECTION.RIGHT)
        {            
            iTween.MoveTo(maskPos, iTween.Hash("x", 200f, "y", 0f, "z", 0f, "time", 0.5f, "islocal", true));
        }
    }
}
