using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlienBullet : MonoBehaviour
{
    [SerializeField]
    private GameObject enemyBulletObj_1;
    [SerializeField]
    private GameObject enemyBulletObj_2;

    [SerializeField]
    public float curHp;

    [SerializeField]
    public float maxHp;

    [SerializeField]
    public float dmg;

    private void Awake()
    {
        curHp = maxHp;
    }

    public bool isRotate;

    private void Update()//Auto Rotation Bullet
    {
        if (isRotate)
            transform.Rotate(Vector3.forward * 10);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Bullet 없애는법
        if (collision.gameObject.tag == "PlayerTrigger")
        {
            //Type1
            Destroy(gameObject);
        }
        else if(collision.gameObject.tag == "BlockTrigger")
        {
            Destroy(gameObject);
        }
        else if (collision.gameObject.tag == "Weapon" || collision.gameObject.tag == "Special")
        {
            StartCoroutine(OnHit(1, collision.transform.position));
        }
        else if (collision.gameObject.tag == "Sheld")
        {

        }
        else if (collision.gameObject.tag == "Boundary")
        {
            Destroy(gameObject);
        }
    }

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        bool isCritical = CriticalCheck(damage, 33f);

        if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);
        curHp -= damage;

        InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

        if (curHp <= 0)
        {
            OnDead();
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    public bool CriticalCheck(int damage, float percent)
    {
        float r = Random.Range(0f, 100f) % 100;
        //percent 조건을 충족하면 크리티컬 발동
        //percent에 현재 플레이어의 크리티컬 확률 대입
        if (r < percent)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void OnDead()
    {
        Destroy(gameObject);
    }
}
