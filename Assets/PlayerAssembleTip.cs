using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAssembleTip : MonoBehaviour
{
    public GameObject PlayerColliderGameObject;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            PlayerColliderGameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
        }
    }
}
