using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    private static DataManager instance = null;

    public int playerATK = 1;
    public float playerHP = 100;
    public float playerShledGage = 100;
    public float playerSpecialMoveGage = 100;
    public float playerCriticalRate = 0;
    public float playerCriticalDamage = 100;

    public float curHp;
    public float curSheldGage;
    public float curSpecialMoveGage;

    public int playerZam;
    public int playerGold;

    public Item curEquippedWeapon = null;
    public Item curEquippedGloves = null;
    public Item curEquippedShoes = null;
    public Item curEquippedSheld = null;
    public Item curEquippedHelmat = null;
    public Item curEquippedArmor = null;

    //Player Item
    public List<Item> playerItems = new List<Item>();
    //Item Data
    public List<Item> items = new List<Item>();

    public static DataManager Instance
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

    public int PlayerATK { get => playerATK; set => playerATK = value; }
    public float PlayerHP { get => playerHP; set => playerHP = value; }
    public float PlayerShledGage { get => playerShledGage; set => playerShledGage = value; }
    public float PlayerSpecialMoveGage { get => playerSpecialMoveGage; set => playerSpecialMoveGage = value; }
    public float PlayerCriticalRate { get => playerCriticalRate; set => playerCriticalRate = value; }
    public float PlayerCriticalDamage { get => playerCriticalDamage; set => playerCriticalDamage = value; }
    public int PlayerZam { get => playerZam; set => playerZam = value; }
    public int PlayerGold { get => playerGold; set => playerGold = value; }
    public Item CurEquippedWeapon { get => curEquippedWeapon; set => curEquippedWeapon = value; }
    public Item CurEquippedGloves { get => curEquippedGloves; set => curEquippedGloves = value; }
    public Item CurEquippedShoes { get => curEquippedShoes; set => curEquippedShoes = value; }
    public Item CurEquippedSheld { get => curEquippedSheld; set => curEquippedSheld = value; }
    public Item CurEquippedHelmat { get => curEquippedHelmat; set => curEquippedHelmat = value; }
    public Item CurEquippedArmor { get => curEquippedArmor; set => curEquippedArmor = value; }

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        //여기서 기존에 가진 장비 불러와야 함
        curEquippedWeapon = null;
        curEquippedGloves = null;
        curEquippedShoes = null;
        curEquippedSheld = null;
        curEquippedHelmat = null;
        curEquippedArmor = null;

        DataUpdate();
    }
    public void GameStartDataUpdate()
    {
        DataUpdate();

        curHp = playerHP;
        curSheldGage = playerShledGage;
        curSpecialMoveGage = 100;
    }

    public void DataUpdate()
    {
        //ATK
        playerATK = 1/*플레이어 기본 공격력*/
            + ((CurEquippedWeapon != null) ? (CurEquippedWeapon.itemATK + ((int)CurEquippedWeapon.itemGrade) * CurEquippedWeapon.itemCurLevel) : 0)
            + ((CurEquippedGloves != null) ? (CurEquippedGloves.itemATK + ((int)CurEquippedGloves.itemGrade) * CurEquippedGloves.itemCurLevel) : 0)
            + ((CurEquippedShoes != null) ? (CurEquippedShoes.itemATK + ((int)CurEquippedShoes.itemGrade) * CurEquippedShoes.itemCurLevel) : 0);

        //HP
        playerHP = 100/*플레이어 기본 체력*/
            + ((CurEquippedSheld != null) ? (CurEquippedSheld.itemHP + ((int)CurEquippedSheld.itemGrade) * CurEquippedSheld.itemCurLevel) : 0)
            + ((CurEquippedHelmat != null) ? (CurEquippedHelmat.itemHP + ((int)CurEquippedHelmat.itemGrade) * CurEquippedHelmat.itemCurLevel) : 0)
            + ((CurEquippedArmor != null) ? (CurEquippedArmor.itemHP + ((int)CurEquippedArmor.itemGrade) * CurEquippedArmor.itemCurLevel) : 0);

        //CR
        playerCriticalRate = 10/*플레이어 기본 크확[신발]*/
            + ((CurEquippedWeapon != null) ? CurEquippedWeapon.itemCriticalRate : 0)
            + ((CurEquippedGloves != null) ? CurEquippedGloves.itemCriticalRate : 0)
            + ((CurEquippedShoes != null) ? CurEquippedShoes.itemCriticalRate : 0);

        //CD
        playerCriticalDamage = 150/*플레이어 기본 크뎀[장갑]*/
            + ((CurEquippedWeapon != null) ? CurEquippedWeapon.itemCriticalDamage : 0)
            + ((CurEquippedGloves != null) ? CurEquippedGloves.itemCriticalDamage : 0)
            + ((CurEquippedShoes != null) ? CurEquippedShoes.itemCriticalDamage : 0);

        //SG
        playerShledGage = 100/*플레이어 기본 쉴드게이지[방패]*/
            + ((CurEquippedSheld != null) ? CurEquippedSheld.itemSheldGager : 0)
            + ((CurEquippedHelmat != null) ? CurEquippedHelmat.itemSheldGager : 0)
            + ((CurEquippedArmor != null) ? CurEquippedArmor.itemSheldGager : 0);

        //SMG
        playerSpecialMoveGage = 100/*플레이어 기본 필살기게이지[투구]*/
            + ((CurEquippedSheld != null) ? CurEquippedSheld.itemSpecialMoveGager : 0)
            + ((CurEquippedHelmat != null) ? CurEquippedHelmat.itemSpecialMoveGager : 0)
            + ((CurEquippedArmor != null) ? CurEquippedArmor.itemSpecialMoveGager : 0);
    }
}
