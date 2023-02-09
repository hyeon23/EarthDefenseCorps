using UnityEngine;
public class OneToOneHBlock : Block
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "PlayerTrigger")
        {
            Destroy(gameObject);
        }
        else if(collision.tag == "Sheld")
        {
            Destroy(gameObject);
        }
        else if(collision.tag == "Floor")
        {
            Destroy(gameObject);
        }
        else if(collision.tag == "Weapon")
        {  
            //Hit
            StartCoroutine(OnHit(1, collision.transform.position));
        }
    }
}
