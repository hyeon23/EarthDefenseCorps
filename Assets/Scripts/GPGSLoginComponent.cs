using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[Serializable]
public class Header
{
    public int status;
    public string message;

    Header(int _status, string _message)
    {
        status = _status;
        message = _message;
    }

    Header(Header _header)
    {
        status = _header.status;
        message = _header.message;
    }
}

[Serializable]
public class Member//[Question]Get Stage에 멤버가 존재하는 이유가 궁금?
{
    public int id;
    public string gpgsId;
    public string name;
    public int possessingGold;
    public int possessingGem;
}

[Serializable]
public class DBStage
{
    public string phase;
    public int stage;
    public bool clear;
}

[Serializable]
public class DBItem
{
    public int id;//Item ID
    public int itemSN;
    public string itemDesc;
    public string name;
    public int price;
    public int upgradePrice;
    public string itemGrade;
    public string type;
    public int itemUpgrade;
    public Member member;
    public int attackDamage;
    public float criticalDamageProbability;
    public float criticalDamage;
    public float strength;
    public float defenseStrength;
    public float specialMoveGage;
    public bool equipped;
}

public class GETResStage
{
    public Header header;
    public List<DBStage> stageList;
}

public class PUTReqStageClear
{
    public int stage;
    public string gpgsId;

    public PUTReqStageClear(int _stage = -1, string _gpgsId = null)
    {
        stage = _stage;
        gpgsId = _gpgsId;
    }
}

public class PUTResStageClear
{
    public int id;
    public Header header;
}

public class POSTReqItemSave
{
    public string gpgsId;
    public bool isEquipped;
    public string name;
    public int itemSN;
    public string itemType;
    public string itemGrade;
    public string itemDesc;//아이템 설명[추가 요망]
    public int price;
    public int itemUpgrade;
    public int upgradePrice;
    public int attackDamage;
    public float criticalDamageProbability;
    public float criticalDamage;
    public float strength;
    public float defenseStrength;
    public float specialMoveGage;

    public POSTReqItemSave()
    {
        gpgsId = "gpgsIdTest";
        isEquipped = false;
        name = "NONE";
        itemSN = 0;
        itemType = "WEAPON";
        itemGrade = "RARE";
        itemDesc = "My Desc";
        price = 0;
        itemUpgrade = 1;
        upgradePrice = 0;
        attackDamage = 0;
        criticalDamageProbability = 0;
        criticalDamage = 0;
        strength = 0;
        defenseStrength = 0;
        specialMoveGage = 0;
    }

    public POSTReqItemSave(bool _isEquipped, string _name, int _itemSN, string _itemType, string _itemGrade, string _itemDesc, int _itemUpgrade, int _price, int _upgradePrice, int _attackDamage, float _criticalDamageProbability, float _criticalDamage, float _strength, float _defenseStrength, float _specialMoveGage)
    {
        gpgsId = DataManager.Instance.localUserID;
        isEquipped = _isEquipped;
        name = _name;
        itemSN = _itemSN;
        itemType = _itemType;
        itemGrade = _itemGrade;
        itemDesc = _itemDesc; //[Question]아이템 설명
        itemUpgrade = _itemUpgrade;
        price = _price;//수정 필요[판매 비용 수식 적용]
        upgradePrice = _upgradePrice;//수정 필요[업그레이드 비용 수식 적용]
        attackDamage = _attackDamage;
        criticalDamageProbability = _criticalDamageProbability;
        criticalDamage = _criticalDamage;
        strength = _strength;
        defenseStrength = _defenseStrength;
        specialMoveGage = _specialMoveGage;
    }

    public POSTReqItemSave(Item _item)
    {
        gpgsId = DataManager.Instance.localUserID;//아이템의 아이디가 아니였다?
        isEquipped = _item.isEquipped;
        name = _item.itemName;
        itemSN = _item.itemID;
        itemType = _item.itemPart.ToString();
        itemGrade = _item.itemGrade.ToString();
        itemDesc = _item.itemDesc;
        itemUpgrade = _item.itemCurLevel;
        price = _item.itemPrice;//수정 필요[판매 비용 수식 적용]
        upgradePrice = _item.itemUpgradeCost;//수정 필요[업그레이드 비용 수식 적용]
        attackDamage = _item.itemATK;
        criticalDamageProbability = _item.itemCriticalRate;
        criticalDamage = _item.itemCriticalDamage;
        strength = _item.itemHP;
        defenseStrength = _item.itemSheldGager;
        specialMoveGage = _item.itemSpecialMoveGager;
    }
}

public class POSTResItemSave
{
    public Header header;
    public int itemId;
}


public class GETResItemList
{
    public Header header;
    public List<DBItem> items;
}

public class DELResItemDelete
{
    public Header header;
}

public class PUTResItemEquipUnEquip
{
    public DBItem item;
}

public class PUTReqItemUpgrade
{
    public int price;//판매가격
    public int itemUpgrade;
    public int upgradePrice;
    public int attackDamage;
    public float criticalDamageProbability;
    public float criticalDamage;
    public float strength;
    public float defenseStrength;
    public float specialMoveGage;

    public PUTReqItemUpgrade()
    {
        price = 300;
        itemUpgrade = 300;
        upgradePrice = 300;
        attackDamage = 300;
        criticalDamageProbability = 300;
        criticalDamage = 300;
        strength = 300;
        defenseStrength = 300;
        specialMoveGage = 300;
    }

    public PUTReqItemUpgrade(int _price, int _itemUpgrade, int _upgradePrice, int _attackDamage, float _criticalDamageProbability, float _criticalDamage, float _strength, float _defenseStrength, float _specialMoveGage)
    {
        price = _price;
        itemUpgrade = _itemUpgrade;
        upgradePrice = _upgradePrice;
        attackDamage = _attackDamage;
        criticalDamageProbability = _criticalDamageProbability;
        criticalDamage = _criticalDamage;
        strength = _strength;
        defenseStrength = _defenseStrength;
        specialMoveGage = _specialMoveGage;
    }

    public PUTReqItemUpgrade(Item _item)
    {
        price = _item.itemPrice;
        itemUpgrade = _item.itemCurLevel;
        upgradePrice = _item.itemUpgradeCost;
        attackDamage = _item.itemATK;
        criticalDamageProbability = _item.itemCriticalRate;
        criticalDamage = _item.itemCriticalDamage;
        strength = _item.itemHP;
        defenseStrength = _item.itemSheldGager;
        specialMoveGage = _item.itemSpecialMoveGager;
    }
}

public class PUTResItemUpgrade
{
    public Header header;
    public int itemId;

}

public class DELResItemSell
{
    public Header header;
}

public class PUTResItemEquipUnequip
{
    public int id;//Item ID
    public int itemSN;
    public string itemDesc;
    public string name;
    public int price;
    public int upgradePrice;
    public string itemGrade;
    public string type;
    public int itemUpgrade;
    public Member member;
    public int attackDamage;
    public float criticalDamageProbability;
    public float criticalDamage;
    public float strength;
    public float defenseStrength;
    public float specialMoveGage;
    public bool equipped;

    //or DBItem item;
}

public class POSTReqSignup
{
    public string name;
    public string gpgsId;

    public POSTReqSignup(string _name = null, string _gpgsId = null)
    {
        name = _name;
        gpgsId = _gpgsId;
    }
}

public class POSTResSignup
{
    public string name;
    public string gpgsId;//[Question]gpgsId로 통일 가능한지
    public Header header;
}

public class GETResUserInfo//[Question]PUT Gold & PUT Gem에도 사용할지, 아니면 별도로 생성해 사용할지
{
    public int id;
    public string name;
    public string gpgsId;
    public string characterName;
    public int possesingGold;
    public int possesingGem;
    public Header header;
}

public class POSTReqSignin
{
    public string gpgsId;

    public POSTReqSignin(string _gpgsId = null)
    {
        gpgsId = _gpgsId;
    }
}

public class POSTResSignin
{
    public string gpgsId;
    public Header header;
}

public class PUTReqZam
{
    public int gem;

    public PUTReqZam(int _gem = 0)
    {
        gem = _gem;
    }
}

public class PUTResZam
{
    public int id;
    public string name;
    public string gpgsId;
    public string characterName;
    public int possesingGold;
    public int possesingGem;
    public Header header;
}

public class PUTReqGold
{
    public int gold;

    public PUTReqGold(int _gold = 0)
    {
        gold = _gold;
    }
}

public class PUTResGold
{
    public int id;
    public string name;
    public string gpgsId;
    public string characterName;
    public int possesingGold;
    public int possesingGem;
    public Header header;
}


public class GPGSLoginComponent : MonoBehaviour
{
    public Button startButton;
    public Button loginButton;

    public TextMeshProUGUI popupTMP;

    public TextMeshProUGUI loginTMP;

    public Animator popupAnime;

    private void Start()
    {
        //0. GPGS 자동 로그인 수행
        GPGSLogin();

        //1. DB 자동 로그인 수행
        //DBLogin();
    }

    public void OnClickLoginBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        //=1. 로그인 성공 => 시작버튼 등장
        //=2. 로그인 실패 => 3. 회원가입 수행 => 0. 로그인 수행

        //=3. 회원가입 성공
        //=4. 회원가입 실패

        if (!DataManager.Instance.loginSuccessed)//2. 로그인 실패
        {
            //GPGS 재로그인
            GPGSLogin();
        }
        else if (!DataManager.Instance.signinDBSuccessed)
        {
            loginTMP.text = "데이터 로드를 위해 탭하세요";

            //DB 재로그인
            if (DataManager.Instance.signinDBSuccessing)
                TriggerPopUp("DB 로그인 진행중입니다.");
            else
                DBLogin();
        }
        else//1. 로그인 성공
        {
            loginTMP.text = "게임을 시작하기 위해 탭하세요";
            Debug.Log("시작");
            startButton.gameObject.SetActive(true);
            loginButton.gameObject.SetActive(false);
        }
    }

    public void GPGSLogin()
    {
        //0-1. GPGS 로그인 수행
        if (!DataManager.Instance.loginSuccessed)
            GPGSBinder.Inst.Login((success, localUser) => {
                DataManager.Instance.loginSuccessed = success;
                DataManager.Instance.localUserID = localUser.id;
                DataManager.Instance.localUserName = localUser.userName;
            });
    }

    public void DBLogin()
    {
        //0-2. DB 로그인 수행
        StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.postSigninPath, new POSTReqSignin("gpgsIdTest")));
    }

    public void OnClickStartBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        LoadingSceneController.LoadScene("MainMenuScene");
    }

    public void OnClickLogoutBtn()
    {
        TriggerPopUp("로그아웃 되었습니다.");

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        DataManager.Instance.signinDBSuccessed = false;
        DataManager.Instance.loginSuccessed = false;
        DataManager.Instance.localUserName = null;
        DataManager.Instance.localUserID = null;

        startButton.gameObject.SetActive(false);
        loginButton.gameObject.SetActive(true);

        GPGSBinder.Inst.Logout();
    }

    public void OnClickGetUserInfoBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.GetUserInfoRequest(DataManager.Instance.getUserInfoPath));
    }

    public void OnClickGetStageListBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.GetStageListRequest(DataManager.Instance.getStageListPath));
    }

    public void OnClickPutStageClearBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutStageClearRequest(DataManager.Instance.putStageClearPath, new PUTReqStageClear(1, "gpgsIdTest")));
    }

    public void OnClickPutZamUpdateBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(500)));
    }

    public void OnClickPutGoldUpdateBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutGoldUpdateRequest(DataManager.Instance.putGoldUpdatePath, new PUTReqGold(2000)));
    }

    public void OnClickPostItemSaveBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, new POSTReqItemSave()));
    }

    public void OnClickGetItemListBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.GetItemListRequest(DataManager.Instance.getItemListPath));
    }

    public void OnClickItemUpgradeBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutItemUpgradeRequest(DataManager.Instance.putItemUpgradePath, new PUTReqItemUpgrade()));
    }

    public void OnClickItemDeleteBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.DelItemDeleteRequest(DataManager.Instance.delItemDeletePath));
    }

    public void OnClickItemEquipUnequipBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}