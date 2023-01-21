using UnityEngine;
using System.Collections;
public class OneToOneBlock : Block
{
    private void FixedUpdate()
    {

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        //if (collision.transform.tag == "Player")
        //{
        //    isCollidePlayer = true;
        //}
        //else if (collision.transform.tag == "Weapon")
        //{
        //    hp -= 1;
        //    isTriggeredWeapon = true;
        //    rigidParent.AddForce(new Vector2(0, 5f), ForceMode2D.Impulse);
        //    StopCoroutine(OnHit());
        //    StartCoroutine(OnHit());
        //}
        //else if (collision.transform.tag == "Sheld")
        //{
        //    rigidParent.velocity = Vector2.zero;
        //    rigidParent.AddForce(new Vector2(0, 30f), ForceMode2D.Impulse);
        //    pc.isSheld = false;
        //}
    }

    private void OnCollisionStay2D(Collision2D collision)
    {

    }

    private void OnCollisionExit2D(Collision2D collision)
    {

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {

    }

    private void OnTriggerStay2D(Collider2D collision)
    {

    }

    private void OnTriggerExit(Collider other)
    {

    }
}
