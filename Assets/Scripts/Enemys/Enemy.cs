using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//M: 다양한 블록의 조합으로 구성되는 특성
//H: 플레이어 피격시 없어지는 특성
//B: 보스 특성

public enum EnemyType { Block1X1, Block1X1H, Block1X3, Block1X3M, AlienNormal, AlienElite, AlienBoss, AlienBullet, Count }

//[중ㅇ요]Block1X1 구현이 완성되면 1X2 Block도 구현 가능

public class Enemy : MonoBehaviour
{
    [SerializeField]
    public EnemyType enemyType;

    [SerializeField]
    public string enemyName;

    [SerializeField]
    public float curHp;

    [SerializeField]
    public float maxHp;

    [SerializeField]
    public float dmg;

    [SerializeField]
    protected GameObject ancestorGameObject;

    [SerializeField]
    protected Rigidbody2D parentRigid;
    protected GameObject parentGameObject;

    private void Awake()
    {
        curHp = maxHp;
        GameManager.Instance.curLiveEnemyCount++;
        parentGameObject = gameObject.transform.parent.gameObject;
    }

    private void OnDisable()
    {
        //GameManager.Instance.curDeadEnemyCount++;
        GameManager.Instance.curLiveEnemyCount--;
    }
}
