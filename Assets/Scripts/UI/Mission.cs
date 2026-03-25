using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Mission : MonoBehaviour
{
    [Header("UI")]
    public GameObject missionLock;
    public GameObject buttonClick;
    public Image imageScene;
    public Text txtScore;
    public Text txtSceneName;
    [Header("Audio")]
    public AudioSource audio;
    public AudioClip audioClip;
    
    [SerializeField]
    public MapDataModel data = new MapDataModel();

    private bool isSetValue = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void OnRedner()
    {
        missionLock.SetActive(data.isLock);
        buttonClick.SetActive(data.isLock);
        txtSceneName.text = data.sceneName;
        txtScore.text = "คะแนน : " + data.heightScore.ToString("#,##0");
        imageScene.sprite = Resources.Load<Sprite>(data.imagePath);
        isSetValue = true;
    }

    public void SelectMission()
    {
        Debug.Log("sceneName: " + data.sceneName);
        if (!data.isLock) {
            string _user = PlayerPrefs.GetString("$user", "");
            PlayerPrefs.SetString("$currentScene", data.pathScene);
            PlayerPrefs.SetInt("$currentSceneID", data.id);            
            PlayerPrefs.SetString("$mapType_" + data.id, data.type.ToString());
            audio.PlayOneShot(audioClip);
            //SceneManager.LoadScene(data.pathScene, LoadSceneMode.Single);
            StartCoroutine(GameObject.FindObjectOfType<SceneFader>().FadeAndLoadScene(SceneFader.FadeDirection.In, data.pathScene));
        }        
    }

    public void SelectMissionInfo()
    {
        Debug.Log("sceneName: " + data.sceneName);
        if (!data.isLock)
        {
            PlayerPrefs.SetString("$currentScene", data.pathScene);
            PlayerPrefs.SetInt("$currentSceneID", data.id);
            PlayerPrefs.SetString("$mapType_" + data.id, data.type.ToString());
            SceneManager.LoadScene("05_Analytic", LoadSceneMode.Single);
            audio.PlayOneShot(audioClip);
        }
    }
}