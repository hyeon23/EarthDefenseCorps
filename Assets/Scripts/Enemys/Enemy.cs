using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//M: �پ��� ����� �������� �����Ǵ� Ư��
//H: �÷��̾� �ǰݽ� �������� Ư��
//B: ���� Ư��

public enum EnemyType { Block1X1, Block1X1H, Block1X3, Block1X3M, AlienNormal, AlienElite, AlienBoss, AlienBullet, Count }

//[�ߤ���]Block1X1 ������ �ϼ��Ǹ� 1X2 Block�� ���� ����

public class Enemy : MonoBehaviour
{
    public EnemyType enemyType;
    public string enemyName;
    public float curHp;
    public float maxHp;
    public float dmg;
    public int gold;

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
        GameManager.Instance.curDeadEnemyCount++;
        GameManager.Instance.curLiveEnemyCount--;
    }
}
