using UnityEngine;

public class SpecialTrigger : MonoBehaviour
{
    [SerializeField] private SpriteRenderer specialImage;

    private void Start()
    {
        specialImage.sprite = DataManager.Instance.playerData.CurEquippedWeapon != null ? DataManager.Instance.playerData.CurEquippedWeapon.itemImage : null;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger" || collision.tag == "BlockBullet" || collision.tag == "AlienTrigger")
        {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.EnemyHit);
            StopAllCoroutines();
        }
        else if (collision.tag == "AlienBullet")
        {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBulletHit);
        }
    }
}
