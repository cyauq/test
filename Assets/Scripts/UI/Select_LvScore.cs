using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Select_LvScore : MonoBehaviour
{

    public Text txtTitle;
    public GameObject panelGames;
    public GameObject panelPopup;
    public GameObject btnGame1;
    public GameObject btnGame2;
    public GameObject btnGame3;
    public GameObject btnGame4;
    public GameObject btnGame5;
    // Start is called before the first frame update
    void Start()
    {
        txtTitle.text = "เลือกเกมส์";
        panelPopup.SetActive(false);
        btnGame1.SetActive(true);
        btnGame2.SetActive(true);
        btnGame3.SetActive(true);
        btnGame4.SetActive(true);
        btnGame5.SetActive(true);
    }

    public void OnSelectGamePlay(int index)
    {
        if (index == 1)
        {
            SceneManager.LoadScene("06_Show scor_AI_Q1", LoadSceneMode.Single);
        } else if(index == 2) {
            SceneManager.LoadScene("06_Show scor_AI_Q2", LoadSceneMode.Single);
        } else if(index == 3) {
            SceneManager.LoadScene("06_Show scor_AI_Q3", LoadSceneMode.Single);
        } else if(index == 4) {
            SceneManager.LoadScene("06_Show scor_AI_Q4", LoadSceneMode.Single);
        } else if(index == 5) {
            SceneManager.LoadScene("06_Show scor_AI_Q0", LoadSceneMode.Single);
        }                                  
    }

    public void OnCancel()
    {     
        SceneManager.LoadScene("07_SelecteGame", LoadSceneMode.Single);
    }
}
