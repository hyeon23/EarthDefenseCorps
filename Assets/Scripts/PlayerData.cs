using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData : MonoBehaviour
{
    private static PlayerData instance = null;

    ////Player Data
    public int atk;//���ݷ�

    public float attackSpeed;//���ݼӵ�
    public float criticalRate;//ũ��Ƽ�� Ȯ��
    public float criticalDamage;//ũ��Ƽ�� ������

    public float curHp;
    public float maxHp;

    public float curSheldGage;
    public float maxSheldGage;

    public float curSpecialMoveGage;
    public float maxSpecialMoveGage;


    public int def;//����: ���� ������ �氨
    public float tec;//��ũ��: ���� �����ð� & ���� �������� ä������ �ӵ� & �и� �Ŀ�


    //CurEquip Series
    //string curHelmet... etc

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            //DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

        curHp = maxHp;
        curSheldGage = maxSheldGage;/*maxSheldGage;*/
        curSpecialMoveGage = 0;
    }

    private void FixedUpdate()
    {
        if (!PlayerController.Instance.isSheld)
        {
            curSheldGage = curSheldGage >= maxSheldGage ? maxSheldGage : curSheldGage + 0.5f;
        }
    }

    public static PlayerData Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }
}
