using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HospitalManager : MonoBehaviour
{

    public List<Material> materials;
    private List<Material> _materials;

    public void Start()
    {
        _materials = new List<Material>();
        for (int i=0; i < materials.Count; i++)
        {
            _materials.Add(materials[i]);
        }        
        Debug.Log("_materials : " + _materials.Count);
    }


    public Material GetMaterials()
    {
        if (_materials == null || _materials.Count == 0)
        {
            _materials = new List<Material>();
            for (int i = 0; i < materials.Count; i++)
            {
                _materials.Add(materials[i]);
            }
            Debug.Log("_materials : " + _materials.Count);
        }
        int random = UnityEngine.Random.Range(0, _materials.Count);
        Debug.Log("_mat index : " + random);
        Material _mat = _materials[random];
        _materials.RemoveAt(random);
        Debug.Log("removed _materials : " + _materials.Count);
        return _mat;
    }
}
