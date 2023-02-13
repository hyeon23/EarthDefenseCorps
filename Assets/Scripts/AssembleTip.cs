using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssembleTip : MonoBehaviour
{
    [SerializeField]
    private Rigidbody2D curBlockRigid;

    [SerializeField]
    private float curMass;

    private void Awake()
    {
        curMass = curMass = curBlockRigid.mass;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Block")
        {
            curBlockRigid.velocity = Vector2.zero;
            curBlockRigid.mass = 0;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Block")
        {
            curBlockRigid.mass = curMass;
        }
    }
}
