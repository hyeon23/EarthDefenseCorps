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
        curMass = curBlockRigid.mass;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            //curBlockRigid.velocity = Vector2.zero;
            curBlockRigid.mass = 0;
            Debug.Log("enter");
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            curBlockRigid.mass = curMass;
            Debug.Log("exit");
        }
    }
}
