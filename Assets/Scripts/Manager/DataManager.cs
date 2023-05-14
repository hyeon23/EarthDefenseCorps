using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

[System.Serializable]
public class PlayerData
{
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
    public int playerZen;

    public Item curEquippedWeapon = null;
    public Item curEquippedGloves = null;
    public Item curEquippedShoes = null;
    public Item curEquippedSheld = null;
    public Item curEquippedHelmat = null;
    public Item curEquippedArmor = null;

    public bool[] isStageClear;
    public int curStage;

    public bool isBGMOn;
    public bool isSFXOn;

    public int[] Frames;
    public int curFrameIndex;

    public DateTime supplyZamCoolTime;
    public DateTime supplyZenCoolTime;
    public DateTime supplyItem1CoolTime;
    public DateTime supplyItem2CoolTime;
    public DateTime zenCoolTime;

    public DateTime watchAdsCoolTime;

    public DateTime playerLastConnectionTime;

    //Player Item
    public List<Item> playerItems = new List<Item>();

    public int PlayerATK { get => playerATK; set => playerATK = value; }
    public float PlayerHP { get => playerHP; set => playerHP = value; }
    public float PlayerShledGage { get => playerShledGage; set => playerShledGage = value; }
    public float PlayerSpecialMoveGage { get => playerSpecialMoveGage; set => playerSpecialMoveGage = value; }
    public float PlayerCriticalRate { get => playerCriticalRate; set => playerCriticalRate = value; }
    public float PlayerCriticalDamage { get => playerCriticalDamage; set => playerCriticalDamage = value; }

    public int PlayerZen { get => playerZen; set => playerZen = value; }
    public int PlayerZam { get => playerZam; set => playerZam = value; }
    public int PlayerGold { get => playerGold; set => playerGold = value; }
    public Item CurEquippedWeapon { get => curEquippedWeapon; set => curEquippedWeapon = value; }
    public Item CurEquippedGloves { get => curEquippedGloves; set => curEquippedGloves = value; }
    public Item CurEquippedShoes { get => curEquippedShoes; set => curEquippedShoes = value; }
    public Item CurEquippedSheld { get => curEquippedSheld; set => curEquippedSheld = value; }
    public Item CurEquippedHelmat { get => curEquippedHelmat; set => curEquippedHelmat = value; }
    public Item CurEquippedArmor { get => curEquippedArmor; set => curEquippedArmor = value; }
}

[System.Serializable]
public class ItemPartList
{
    public Sprite[] itemSrpites;
}

[System.Serializable]
public class DataManager : MonoBehaviour
{
    private static DataManager instance = null;
    public PlayerData playerData = new PlayerData();

    //Item DB
    List<Dictionary<string, object>> ItemDB;

    //Item Template
    public List<Item> items = new List<Item>();

    //Item Sprites
    public ItemPartList[] itemParts;

    public int spawnZenTime;

    public string[] localPlayerInfo;

    public static DataManager Instance
    {
        get
        {
            if (instance == null)
            {
                return null;
            }
            return instance;
        }
    }

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

        playerData.isStageClear = new bool[3] { false, false, false };
        playerData.Frames = new int[3] { 30, 60, 120 };

        spawnZenTime = 300;//300

        ItemDB = CSVReader.Read("ItemDB");

        for (int i = 0; i < ItemDB.Count; i++)
        {
            items.Add(new Item(int.Parse(ItemDB[i]["itemID"].ToString()), (ItemPart)Enum.Parse(typeof(ItemPart), ItemDB[i]["itemPart"].ToString()), (ItemGrade)Enum.Parse(typeof(ItemGrade), ItemDB[i]["itemGrade"].ToString()), bool.Parse(ItemDB[i]["isEquipped"].ToString()),
                ItemDB[i]["itemName"].ToString(), ItemDB[i]["itemDesc"].ToString(), int.Parse(ItemDB[i]["itemATK"].ToString()), float.Parse(ItemDB[i]["itemCriticalRate"].ToString()),
                float.Parse(ItemDB[i]["itemCriticalDamage"].ToString()), float.Parse(ItemDB[i]["itemHP"].ToString()), float.Parse(ItemDB[i]["itemSheldGager"].ToString()), float.Parse(ItemDB[i]["itemSpecialMoveGager"].ToString())));
        }

        //PlayerPrefsDataDelete
        PlayerPrefs.DeleteAll();

        //DataLoad
        PlayerPrefsLoad();

        //Target Frame Rate 설정
        Application.targetFrameRate = playerData.Frames[playerData.curFrameIndex];

        GPGSBinder.Inst.Login((success, localUser) =>
            localPlayerInfo = $"{success}, {localUser.userName}, {Social.localUser.id}, {localUser.state}, {localUser.underage}".Split(','));
    }

    private void LoadedsceneEvent(Scene scene, LoadSceneMode mode)
    {
        //여기서 기존 장비 불러와야 함
        //if (장비 존재시) {}
        //else {}
        //playerData.curEquippedWeapon = null;
        //playerData.curEquippedGloves = null;
        //playerData.curEquippedShoes = null;
        //playerData.curEquippedSheld = null;
        //playerData.curEquippedHelmat = null;
        //playerData.curEquippedArmor = null;
        //DataUpdate();
    }

    private void Start()
    {
        //여기서 기존에 가진 장비 불러와야 함
        //기존 장착 데이터 존재 시, 기존 데이터, 없으면 없는 데이터 사용
        //playerData.curEquippedWeapon = null;
        //playerData.curEquippedGloves = null;
        //playerData.curEquippedShoes = null;
        //playerData.curEquippedSheld = null;
        //playerData.curEquippedHelmat = null;
        //playerData.curEquippedArmor = null;

        if (localPlayerInfo[0] == "True")//성공시, 
        {
            MainMenuController.Instance.TriggerPopUp("구글 로그인 성공");


        }
        else
        {
            Invoke("AppQuit", 1f);
        }

        DataUpdate();
    }

    public void AppQuit()
    {
        Application.Quit();
    }

    public void GameStartDataUpdate()
    {
        DataUpdate();

        playerData.curHp = playerData.PlayerHP;
        playerData.curSheldGage = playerData.PlayerShledGage;
        playerData.curSpecialMoveGage = playerData.PlayerSpecialMoveGage;
    }

    public void DataUpdate()
    {
        //ATK
        playerData.playerATK = 1/*플레이어 기본 공격력*/
            + ((playerData.CurEquippedWeapon != null) ? (playerData.CurEquippedWeapon.itemATK + ((int)playerData.CurEquippedWeapon.itemGrade) * playerData.CurEquippedWeapon.itemCurLevel) : 0)
            + ((playerData.CurEquippedGloves != null) ? (playerData.CurEquippedGloves.itemATK + ((int)playerData.CurEquippedGloves.itemGrade) * playerData.CurEquippedGloves.itemCurLevel) : 0)
            + ((playerData.CurEquippedShoes != null) ? (playerData.CurEquippedShoes.itemATK + ((int)playerData.CurEquippedShoes.itemGrade) * playerData.CurEquippedShoes.itemCurLevel) : 0);

        //HP
        playerData.playerHP = 100/*플레이어 기본 체력*/
            + ((playerData.CurEquippedSheld != null) ? (playerData.CurEquippedSheld.itemHP + ((int)playerData.CurEquippedSheld.itemGrade) * playerData.CurEquippedSheld.itemCurLevel) : 0)
            + ((playerData.CurEquippedHelmat != null) ? (playerData.CurEquippedHelmat.itemHP + ((int)playerData.CurEquippedHelmat.itemGrade) * playerData.CurEquippedHelmat.itemCurLevel) : 0)
            + ((playerData.CurEquippedArmor != null) ? (playerData.CurEquippedArmor.itemHP + ((int)playerData.CurEquippedArmor.itemGrade) * playerData.CurEquippedArmor.itemCurLevel) : 0);

        //CR
        playerData.playerCriticalRate = 10/*플레이어 기본 크확[신발]*/
            + ((playerData.CurEquippedWeapon != null) ? playerData.CurEquippedWeapon.itemCriticalRate : 0)
            + ((playerData.CurEquippedGloves != null) ? playerData.CurEquippedGloves.itemCriticalRate : 0)
            + ((playerData.CurEquippedShoes != null) ? playerData.CurEquippedShoes.itemCriticalRate : 0);

        //CD
        playerData.playerCriticalDamage = 120/*플레이어 기본 크뎀[장갑]*/
            + ((playerData.CurEquippedWeapon != null) ? playerData.CurEquippedWeapon.itemCriticalDamage : 0)
            + ((playerData.CurEquippedGloves != null) ? playerData.CurEquippedGloves.itemCriticalDamage : 0)
            + ((playerData.CurEquippedShoes != null) ? playerData.CurEquippedShoes.itemCriticalDamage : 0);

        //SG
        playerData.playerShledGage = 100/*플레이어 기본 쉴드게이지[방패]*/
            + ((playerData.CurEquippedSheld != null) ? playerData.CurEquippedSheld.itemSheldGager : 0)
            + ((playerData.CurEquippedHelmat != null) ? playerData.CurEquippedHelmat.itemSheldGager : 0)
            + ((playerData.CurEquippedArmor != null) ? playerData.CurEquippedArmor.itemSheldGager : 0);

        //SMG
        playerData.playerSpecialMoveGage = 100/*플레이어 기본 필살기게이지[투구]*/
            + ((playerData.CurEquippedSheld != null) ? playerData.CurEquippedSheld.itemSpecialMoveGager : 0)
            + ((playerData.CurEquippedHelmat != null) ? playerData.CurEquippedHelmat.itemSpecialMoveGager : 0)
            + ((playerData.CurEquippedArmor != null) ? playerData.CurEquippedArmor.itemSpecialMoveGager : 0);
    }

    public void PlayerPrefsSave()
    {
        PlayerPrefs.SetInt("PlayerZen", playerData.playerZen);

        PlayerPrefs.SetInt("CurStage", playerData.curStage);
        PlayerPrefs.SetInt("CurFrameIndex", playerData.curFrameIndex);

        PlayerPrefs.SetString("IsBGMOn", playerData.isBGMOn.ToString());
        PlayerPrefs.SetString("IsSFXOn", playerData.isSFXOn.ToString());

        PlayerPrefs.SetString("SupplyItem1CoolTime", playerData.supplyItem1CoolTime.ToString());
        PlayerPrefs.SetString("SupplyItem2CoolTime", playerData.supplyItem2CoolTime.ToString());
        PlayerPrefs.SetString("SupplyZamCoolTime", playerData.supplyZamCoolTime.ToString());
        PlayerPrefs.SetString("SupplyZenCoolTime", playerData.supplyZenCoolTime.ToString());
        PlayerPrefs.SetString("ZenCoolTime", playerData.zenCoolTime.ToString());

        PlayerPrefs.SetString("PlayerLastConnectionTime", playerData.playerLastConnectionTime.ToString());

        PlayerPrefs.SetString("WatchAdsCoolTime", playerData.watchAdsCoolTime.ToString());
    }

    public void PlayerPrefsLoad()
    {
        if(PlayerPrefs.HasKey("CurStage"))
            playerData.curStage = PlayerPrefs.GetInt("CurStage");
        else
            playerData.curStage = 1;

        if (PlayerPrefs.HasKey("CurFrameIndex"))
            playerData.curFrameIndex = PlayerPrefs.GetInt("CurFrameIndex");
        else
            playerData.curFrameIndex = 1;

        if (PlayerPrefs.HasKey("IsBGMOn"))
            Boolean.TryParse(PlayerPrefs.GetString("IsBGMOn"), out playerData.isBGMOn);
        else
            playerData.isBGMOn = true;

        if (PlayerPrefs.HasKey("IsSFXOn"))
            Boolean.TryParse(PlayerPrefs.GetString("IsSFXOn"), out playerData.isSFXOn);
        else
            playerData.isSFXOn = true;

        if (PlayerPrefs.HasKey("SupplyItem1CoolTime"))
            DateTime.TryParse(PlayerPrefs.GetString("SupplyItem1CoolTime"), out playerData.supplyItem1CoolTime);
        else
            playerData.supplyItem1CoolTime = DateTime.Now.AddHours(-3);

        if (PlayerPrefs.HasKey("SupplyItem2CoolTime"))
            DateTime.TryParse(PlayerPrefs.GetString("SupplyItem2CoolTime"), out playerData.supplyItem2CoolTime);
        else
            playerData.supplyItem2CoolTime = DateTime.Now.AddHours(-3);

        if (PlayerPrefs.HasKey("SupplyZamCoolTime"))
            DateTime.TryParse(PlayerPrefs.GetString("SupplyZamCoolTime"), out playerData.supplyZamCoolTime);
        else
            playerData.supplyZamCoolTime = DateTime.Now.AddHours(-3);

        if (PlayerPrefs.HasKey("SupplyZenCoolTime"))
            DateTime.TryParse(PlayerPrefs.GetString("SupplyZenCoolTime"), out playerData.supplyZenCoolTime);
        else
            playerData.supplyZenCoolTime = DateTime.Now.AddHours(-3);

        if (PlayerPrefs.HasKey("PlayerLastConnectionTime"))
            DateTime.TryParse(PlayerPrefs.GetString("PlayerLastConnectionTime"), out playerData.playerLastConnectionTime);
        else
            playerData.playerLastConnectionTime = DateTime.Now;

        DateTime tempDate;

        if (PlayerPrefs.HasKey("ZenCoolTime"))
        {
            DateTime.TryParse(PlayerPrefs.GetString("ZenCoolTime"), out playerData.zenCoolTime);

            tempDate = playerData.zenCoolTime;

            if(DateTime.Compare(tempDate, DateTime.Now) <= 0)
            {
                playerData.zenCoolTime = tempDate.Add(new TimeSpan(0, 0, spawnZenTime * ((spawnZenTime + (int)DateTime.Now.Subtract(tempDate).TotalSeconds) / spawnZenTime)));
            }
        }
        else
        {
            playerData.zenCoolTime = DateTime.Now.Add(new TimeSpan(0, 0, spawnZenTime));
            tempDate = playerData.zenCoolTime;
        }

        if (PlayerPrefs.HasKey("PlayerZen"))
        {
            int tempZen;

            if (DateTime.Compare(tempDate, DateTime.Now) <= 0)
            {
                tempZen = PlayerPrefs.GetInt("PlayerZen") + ((spawnZenTime + (int)DateTime.Now.Subtract(tempDate).TotalSeconds) / spawnZenTime);
            }
            else
            {
                tempZen = PlayerPrefs.GetInt("PlayerZen");
            }

            playerData.playerZen = tempZen >= 30 ? 30 : tempZen;
        }
        else
        {
            playerData.playerZen = 30;
        }

        if (PlayerPrefs.HasKey("WatchAdsCoolTime"))
            DateTime.TryParse(PlayerPrefs.GetString("WatchAdsCoolTime"), out playerData.watchAdsCoolTime);
        else
            playerData.watchAdsCoolTime = DateTime.Now.Add(new TimeSpan(0, 0, 10));
    }

    public Sprite IDtoSprite(int _itemID)
    {
        switch ((_itemID)
)
        {
            case 1000:
                return itemParts[0].itemSrpites[0];
            case 1001:
                return itemParts[0].itemSrpites[1];
            case 1002:
                return itemParts[0].itemSrpites[2];
            case 1003:
                return itemParts[0].itemSrpites[3];
            case 1004:
                return itemParts[0].itemSrpites[4];
            case 1005:
                return itemParts[0].itemSrpites[5];
            case 1006:
                return itemParts[0].itemSrpites[6];
            case 1007:
                return itemParts[0].itemSrpites[7];
            case 1008:
                return itemParts[0].itemSrpites[8];
            case 1009:
                return itemParts[0].itemSrpites[9];
            case 1010:
                return itemParts[0].itemSrpites[10];
            case 1011:
                return itemParts[0].itemSrpites[11];
            case 1012:
                return itemParts[0].itemSrpites[12];
            case 1013:
                return itemParts[0].itemSrpites[13];
            case 1014:
                return itemParts[0].itemSrpites[14];
                           
            case 2000:     
                return itemParts[1].itemSrpites[0];
            case 2001:
                return itemParts[1].itemSrpites[1];
            case 2002:      
                return itemParts[1].itemSrpites[2];
            case 2003:     
                return itemParts[1].itemSrpites[3];
            case 2004:         
                return itemParts[1].itemSrpites[4];
            case 2005:        
                return itemParts[1].itemSrpites[5];
            case 2006:         
                return itemParts[1].itemSrpites[6];
            case 2007:         
                return itemParts[1].itemSrpites[7];
            case 2008:        
                return itemParts[1].itemSrpites[8];
            case 2009:        
                return itemParts[1].itemSrpites[9];
            case 2010:        
                return itemParts[1].itemSrpites[10];
            case 2011:       
                return itemParts[1].itemSrpites[11];
            case 2012:         
                return itemParts[1].itemSrpites[12];
            case 2013:        
                return itemParts[1].itemSrpites[13];
            case 2014:        
                return itemParts[1].itemSrpites[14];
                             
            case 3000:      
                return itemParts[2].itemSrpites[0];
            case 3001:
                return itemParts[2].itemSrpites[1];
            case 3002:      
                return itemParts[2].itemSrpites[2];
            case 3003:         
                return itemParts[2].itemSrpites[3];
            case 3004:        
                return itemParts[2].itemSrpites[4];
            case 3005:       
                return itemParts[2].itemSrpites[5];
            case 3006:       
                return itemParts[2].itemSrpites[6];
            case 3007:       
                return itemParts[2].itemSrpites[7];
            case 3008:       
                return itemParts[2].itemSrpites[8];
            case 3009:       
                return itemParts[2].itemSrpites[9];
            case 3010:        
                return itemParts[2].itemSrpites[10];
            case 3011:        
                return itemParts[2].itemSrpites[11];
            case 3012:         
                return itemParts[2].itemSrpites[12];
            case 3013:        
                return itemParts[2].itemSrpites[13];
            case 3014:           
                return itemParts[2].itemSrpites[14];

            case 4000:       
                return itemParts[3].itemSrpites[0];
            case 4001:
                return itemParts[3].itemSrpites[1];
            case 4002:       
                return itemParts[3].itemSrpites[2];
            case 4003:       
                return itemParts[3].itemSrpites[3];
            case 4004:       
                return itemParts[3].itemSrpites[4];
            case 4005:         
                return itemParts[3].itemSrpites[5];
            case 4006:        
                return itemParts[3].itemSrpites[6];
            case 4007:        
                return itemParts[3].itemSrpites[7];
            case 4008:        
                return itemParts[3].itemSrpites[8];
            case 4009:        
                return itemParts[3].itemSrpites[9];
            case 4010:        
                return itemParts[3].itemSrpites[10];
            case 4011:         
                return itemParts[3].itemSrpites[11];
            case 4012:        
                return itemParts[3].itemSrpites[12];
            case 4013:        
                return itemParts[3].itemSrpites[13];
            case 4014:        
                return itemParts[3].itemSrpites[14];
                             
            case 5000:        
                return itemParts[4].itemSrpites[0];
            case 5001:
                return itemParts[4].itemSrpites[1];
            case 5002:         
                return itemParts[4].itemSrpites[2];
            case 5003:         
                return itemParts[4].itemSrpites[3];
            case 5004:         
                return itemParts[4].itemSrpites[4];
            case 5005:        
                return itemParts[4].itemSrpites[5];
            case 5006:        
                return itemParts[4].itemSrpites[6];
            case 5007:         
                return itemParts[4].itemSrpites[7];
            case 5008:        
                return itemParts[4].itemSrpites[8];
            case 5009:        
                return itemParts[4].itemSrpites[9];
            case 5010:        
                return itemParts[4].itemSrpites[10];
            case 5011:       
                return itemParts[4].itemSrpites[11];
            case 5012:       
                return itemParts[4].itemSrpites[12];
            case 5013:       
                return itemParts[4].itemSrpites[13];
            case 5014:         
                return itemParts[4].itemSrpites[14];
                                
            case 6000:        
                return itemParts[5].itemSrpites[0];
            case 6001:
                return itemParts[5].itemSrpites[1];
            case 6002:        
                return itemParts[5].itemSrpites[2];
            case 6003:       
                return itemParts[5].itemSrpites[3];
            case 6004:       
                return itemParts[5].itemSrpites[4];
            case 6005:       
                return itemParts[5].itemSrpites[5];
            case 6006:       
                return itemParts[5].itemSrpites[6];
            case 6007:        
                return itemParts[5].itemSrpites[7];
            case 6008:       
                return itemParts[5].itemSrpites[8];
            case 6009:       
                return itemParts[5].itemSrpites[9];
            case 6010:        
                return itemParts[5].itemSrpites[10];
            case 6011:        
                return itemParts[5].itemSrpites[11];
            case 6012:        
                return itemParts[5].itemSrpites[12];
            case 6013:        
                return itemParts[5].itemSrpites[13];
            case 6014:        
                return itemParts[5].itemSrpites[14];
        }
        return null;
    }

    private void OnApplicationQuit()
    {
        playerData.playerLastConnectionTime = DateTime.Now;

        PlayerPrefsSave();
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause)//정지 시작
        {
            playerData.playerLastConnectionTime = DateTime.Now;

            PlayerPrefsSave();
        }
        else//정지 중단
        {

        }
    }
}
