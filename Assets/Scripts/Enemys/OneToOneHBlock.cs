using UnityEngine;
public class OneToOneHBlock : Block
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "PlayerTrigger")
        {
            Debug.Log("PlayerHitted");
            Destroy(gameObject);
        }
        else if(collision.tag == "Sheld")
        {
            Destroy(gameObject);
        }
        else if(collision.tag == "Floor")
        {
            Debug.Log("OnFloor");
            Destroy(gameObject);
        }
        else if(collision.tag == "Weapon")
        {  
            //Hit
            Debug.Log("Smashed");
            StartCoroutine(OnHit(1, collision.transform.position));
        }
    }
}
