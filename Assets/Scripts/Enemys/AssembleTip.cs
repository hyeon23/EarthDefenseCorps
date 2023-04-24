using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssembleTip : MonoBehaviour
{
    [SerializeField]
    private Rigidbody2D curBlockRigid;

    [SerializeField]
    private float curMass;
    [SerializeField]
    private float curGravity;
    private void Awake()
    {
        curMass = curBlockRigid.mass;
        curGravity = curBlockRigid.gravityScale;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            //curBlockRigid.velocity = Vector2.zero;
            curBlockRigid.mass = 0;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            curBlockRigid.mass = curMass;
        }
    }
}
