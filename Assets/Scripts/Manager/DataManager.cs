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
        playerATK = 1/*플레이어 기본 공격력*/
            + ((CurEquippedWeapon != null) ? (CurEquippedWeapon.itemATK + ((int)CurEquippedWeapon.itemGrade) * CurEquippedWeapon.itemCurLevel) : 0)
            + ((CurEquippedGloves != null) ? (CurEquippedGloves.itemATK + ((int)CurEquippedGloves.itemGrade) * CurEquippedGloves.itemCurLevel) : 0)
            + ((CurEquippedShoes != null) ? (CurEquippedShoes.itemATK + ((int)CurEquippedShoes.itemGrade) * CurEquippedShoes.itemCurLevel) : 0);
        playerHP = 100/*플레이어 기본 체력*/
            + ((CurEquippedSheld != null) ? (CurEquippedSheld.itemHP + ((int)CurEquippedSheld.itemGrade) * CurEquippedSheld.itemCurLevel) : 0)
            + ((CurEquippedHelmat != null) ? (CurEquippedHelmat.itemHP + ((int)CurEquippedHelmat.itemGrade) * CurEquippedHelmat.itemCurLevel) : 0)
            + ((CurEquippedArmor != null) ? (CurEquippedArmor.itemHP + ((int)CurEquippedArmor.itemGrade) * CurEquippedArmor.itemCurLevel) : 0);
        
        //[수정필요]
        playerCriticalRate = 0;
        playerCriticalDamage = 100;

        playerShledGage = 100;
        playerSpecialMoveGage = 100;
    }
}
