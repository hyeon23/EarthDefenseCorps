using UnityEngine;

public class WeaponTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger" || collision.tag == "BlockBullet" || collision.tag == "AlienTrigger")
        {
            GameManager.Instance.combo += 1;
            DataManager.Instance.curSpecialMoveGage = (DataManager.Instance.curSpecialMoveGage >= DataManager.Instance.PlayerSpecialMoveGage) ? DataManager.Instance.PlayerSpecialMoveGage : DataManager.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
            StopAllCoroutines();
            StartCoroutine(InGameTextViewer.Instance.FadeInOutText());
        }
    }
}
