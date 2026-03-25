using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RegisterButton : MonoBehaviour {
    // Start is called before the first frame update
    public void RegisterPage () {
        SceneManager.LoadScene ("01_Register", LoadSceneMode.Single);
    }
}