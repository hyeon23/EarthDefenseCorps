using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData : MonoBehaviour
{
    private static PlayerData instance = null;

    ////Player Data
    public int atk;//공격력

    public float attackSpeed;//공격속도
    public float criticalRate;//크리티컬 확률
    public float criticalDamage;//크리티컬 데미지

    public float curHp;
    public float maxHp;

    public float curSheldGage;
    public float maxSheldGage;

    public float curSpecialMoveGage;
    public float maxSpecialMoveGage;


    public int def;//방어력: 고정 데미지 경감
    public float tec;//테크닉: 방패 유지시간 & 방패 게이지가 채워지는 속도 & 패링 파워


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
