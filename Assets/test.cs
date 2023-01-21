using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    void Update()
    {
        gameObject.GetComponent<Rigidbody2D>().AddForce(Vector3.up * 10);
    }
}
