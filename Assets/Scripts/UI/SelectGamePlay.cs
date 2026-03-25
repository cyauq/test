using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SelectGamePlay : MonoBehaviour
{

    public Text txtTitle;
    public GameObject panelGames;
    public GameObject panelPopup;
    public GameObject btnGame1;
    public GameObject btnGame2;
    public GameObject btnGame3;
    public GameObject btnGame4;
    public GameObject btnGame5;
    public GameObject btnGame6;
    public GameObject Popupgameplay;
    public GameObject btnPopup;

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
        btnGame6.SetActive(true);
        Popupgameplay.SetActive(true); 
    }

    public void OnSelectGamePlay(int index)
    {
        if (index == 1)
        {
            SceneManager.LoadScene("06_SelecteMissionRuner", LoadSceneMode.Single);
        } else if(index == 2) {
            SceneManager.LoadScene("06_SelecteMissionMaze", LoadSceneMode.Single);
        } else if(index == 3) {
            SceneManager.LoadScene("11_CalibationMaze_AI 1", LoadSceneMode.Single);
        } else if(index == 4) {
            SceneManager.LoadScene("07_Selecte_lvScore", LoadSceneMode.Single);
        } else if(index == 5) {
            SceneManager.LoadScene("06_SelecteMissionMaze_MazeAI", LoadSceneMode.Single);
        } else if(index == 6) {
            SceneManager.LoadScene("11_leaderboardUI", LoadSceneMode.Single);
        }                                      
    }

    public void OnCancel()
    {     
        SceneManager.LoadScene("04_ConnectDevice", LoadSceneMode.Single);
    }

    public void HidePopup()
    {
        Popupgameplay.SetActive(false);
    }
}
