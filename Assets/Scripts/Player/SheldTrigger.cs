using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheldTrigger : MonoBehaviour
{
    [SerializeField] private SpriteRenderer sheldImage;

    private void Start()
    {
        sheldImage.sprite = DataManager.Instance.playerData.CurEquippedSheld != null ? DataManager.Instance.playerData.CurEquippedSheld.itemImage : null;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Block" || collision.transform.tag == "Alien")
        {
            PlayerController.Instance.parryingSheld = true;
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Parrying);
        }
        else if (collision.transform.tag == "BlockBullet" || collision.transform.tag == "AlienBullet")
        {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.bulletParrying, 0.2f);
        }
    }
}
