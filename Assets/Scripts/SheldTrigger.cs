using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheldTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Block" || collision.transform.tag == "BlockBullet")
        {
            Debug.Log("SheldGetTouched");
            PlayerController.Instance.parryingSheld = true;
        }
    }
}
