using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BONUS_TYPE
{
    LEFT,
    RIGHT    
}

public class BonusModel : MonoBehaviour
{

    public BONUS_TYPE type;
    public int score;

    // Start is called before the first frame update
    void Start()
    {
        
    }
}
