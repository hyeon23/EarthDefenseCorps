using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField]
    public string enemyName;

    [SerializeField]
    public float curHp;

    [SerializeField]
    public float maxHp;

    [SerializeField]
    public float dmg;

    [SerializeField]
    protected Rigidbody2D parentRigid;

    [SerializeField]
    protected GameObject parentGameObject;

    private void Awake()
    {
        parentGameObject = gameObject.transform.parent.gameObject;
        curHp = maxHp;
    }
}
