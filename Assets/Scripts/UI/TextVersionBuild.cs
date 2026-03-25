using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextVersionBuild : MonoBehaviour
{

    public Text txtVersion;
    // Start is called before the first frame update
    void Start()
    {
        txtVersion.text = BuildVersoin.buildVersion;
    }
}
