using System.Collections;
using UnityEngine;
using TMPro;

public class DamageText : MonoBehaviour
{
    private RectTransform rectTransform;
    private TextMeshProUGUI damageTextHUD;

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
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
        Vector2 start = /*onHitPosition;*/Camera.main.WorldToScreenPoint(onHitPosition);
        rectTransform.position = start + Vector2.up * 100;
        gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(Random.Range(-150f, 150f), 1000f)/*Random.Range(-1f, 1f), 5f)*/, ForceMode2D.Impulse);
        yield return null;
        Destroy(gameObject, 2);
    }
}

