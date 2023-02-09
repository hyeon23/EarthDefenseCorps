using UnityEngine;
public class OneToOneBlock : Block
{

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            
        }
        else if (collision.tag == "Sheld")
        {
            parentRigid.velocity = Vector2.zero;
            parentRigid.AddForce(new Vector2(0, PlayerController.Instance.isCrushed ? 10 : 5), ForceMode2D.Impulse);
        }
        else if (collision.tag == "Weapon")
        {
            parentRigid.AddForce(new Vector2(0, PlayerController.Instance.isCrushed ? 10 : 1), ForceMode2D.Impulse);
            StartCoroutine(OnHit(1, collision.transform.position));
        }
    }
}
