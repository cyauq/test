using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HospitalController : MonoBehaviour
{
    private HospitalManager hospitalManager;

    public GameObject tagHospitalName;

    // Start is called before the first frame update
    void Start()
    {
        hospitalManager = GameObject.FindObjectOfType<HospitalManager>();
        if (hospitalManager != null)
        {
            Material _mat = hospitalManager.GetMaterials();
            tagHospitalName.GetComponent<MeshRenderer>().material = _mat;
        }
    }
}
