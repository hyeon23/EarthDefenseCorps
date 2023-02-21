using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//M: �پ��� ����� �������� �����Ǵ� Ư��
//H: �÷��̾� �ǰݽ� �������� Ư��
//B: ���� Ư��

//���� ���� �ܰ�
//Block1X1H
//Block1X3
//Block1XM

//���� �̱��� �ܰ�
//Block1X1
//Monster
//Monster Boss
public enum EnemyType { Monster, MonsterElite, MonsterBoss, Block1X1, Block1X1H, Block1X3, Block1X3M, Count }

//[�ߤ���]Block1X1 ������ �ϼ��Ǹ� 1X2 Block�� ���� ����

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
        parentGameObject = gameObject.transform.parent.gameObject;
        curHp = maxHp;
    }

    private void OnDestroy()
    {
        GameManager.Instance.curDeadEnemyCount++;
        GameManager.Instance.curLiveEnemyCount--;
    }
}
