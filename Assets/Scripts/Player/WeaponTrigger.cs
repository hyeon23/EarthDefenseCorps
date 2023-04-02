using UnityEngine;

public class WeaponTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger" || collision.tag == "BlockBullet" || collision.tag == "AlienTrigger")
        {
            GameManager.Instance.combo += 1;
            DataManager.Instance.curSpecialMoveGage = (DataManager.Instance.curSpecialMoveGage >= DataManager.Instance.PlayerSpecialMoveGage) ? DataManager.Instance.PlayerSpecialMoveGage : DataManager.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
            SoundManager.Instance.SFXPlay(SoundManager.SFX.EnemyHit);
            StopAllCoroutines();
            StartCoroutine(InGameTextViewer.Instance.FadeInOutText());
        }
        else if (collision.tag == "AlienBullet")
        {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBulletHit);

        }
    }
}
