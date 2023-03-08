using System.Collections;
using UnityEngine;
using TMPro;

public class DamageText : MonoBehaviour
{
    private TextMeshProUGUI damageTextHUD;

    private void Awake()
    {
        damageTextHUD = GetComponent<TextMeshProUGUI>();
    }

    public void Play(string text, Color color, Vector2 onHitPosition)
    {
        damageTextHUD.text = text;
        damageTextHUD.color = color;

        StartCoroutine(OndamageTextHUD(onHitPosition));
    }

    private IEnumerator OndamageTextHUD(Vector2 onHitPosition)
    {
        transform.position = onHitPosition + new Vector2(Random.Range(-0.5f, 0.5f), 2f);
        gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(Random.Range(-1f, 1f) * 3, 10f), ForceMode2D.Impulse);
        yield return null;
        Destroy(gameObject, 2);
    }
}

