using UnityEngine;

public class WeaponTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger" || collision.tag == "BlockBullet" || collision.tag == "AlienTrigger" || collision.tag == "AlienBullet")
        {
            GameManager.Instance.combo += 1;
            PlayerData.Instance.curSpecialMoveGage = (PlayerData.Instance.curSpecialMoveGage >= PlayerData.Instance.maxSpecialMoveGage) ? PlayerData.Instance.maxSpecialMoveGage : PlayerData.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
            StopAllCoroutines();
            StartCoroutine(InGameTextViewer.Instance.FadeInOutText());
        }
    }
}
