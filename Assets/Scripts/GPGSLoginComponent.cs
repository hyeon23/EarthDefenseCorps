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
    public string characterName;
    public List<Item> items;
}

[Serializable]
public class Stage
{
    public int id;
    public Member member;
    public string phase;
    public int stage;
    public bool clear;
}

public class GETResStage
{
    //이부분 POST MAN JSON 형식 수정 가능한지 요청
    public List<Stage> stages;
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
    public string gpgsId;//gpgsId로 후에 바뀔 예정
    public bool isEquipped;
    public string name;
    public int itemSN;//같은 종류의 아이템마다 필요한 변수[추가요망]
    public string itemType;//아이템 파트[헤더에서 없애고 바디에 넣도록 수정요망]
    public string itemGrade;
    public string itemDesc;//아이템 설명[추가 요망]

    public int itemUpgrade;//현재레벨
    public int price;//아이템 판매 가격: 내가 최총 판매 가격 계산해서 보내는 걸로]
    public int upgradePrice;//아이템 업글 가격[내가 최총 판매 가격 계산해서 보내는 걸로]
    public int attackDamage;
    public float criticalDamageProbability;//크확 float임 수정 요망
    public float criticalDamage;//크뎀 float임 수정 요망
    public float strength;//HP float임 수정 요망
    public float defenseStrength;//방어 추가 게이지 float임 수정 요망
    public float specialMoveGage;//필살기 추가 게이지 float임[추가요망]

    public POSTReqItemSave(bool _isEquipped, string _name, int _itemSN, string _itemType, string _itemGrade, /*string _itemDesc,*/ int _itemUpgrade, int _price, int _upgradePrice, int _attackDamage, float _criticalDamageProbability, float _criticalDamage, float _strength, float _defenseStrength, float _specialMoveGage)
    {
        gpgsId = DataManager.Instance.localUserID;
        isEquipped = _isEquipped;
        name = _name;
        itemSN = _itemSN;
        itemType = _itemType;
        itemGrade = _itemGrade;
        //itemDesc = _itemDesc; //[Question]아이템 설명
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
        //itemDesc = _item.itemDesc;
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
    Header header;
    public int itemId;//아이템마다 고유하게 가지고 있는 아이디
}

public class GETResItemList
{
    Header header;
    List<Item> items;
}

public class PUTReqItemUpgrade
{
    public int price;//판매가격
    /*public int upgradePrice*/
    //[Question]없는 이유
    public int itemUpgrade;
    public int attackDamage;
    public float criticalDamageProbability;
    public float criticalDamage;
    public float strength;
    public float defenseStrength;
    /*public float specialMoveGage*/
    //[Question]없는 이유

    public PUTReqItemUpgrade()
    {

    }

    public PUTReqItemUpgrade(int _price, int _itemUpgrade, int _upgradePrice, int _attackDamage, float _criticalDamageProbability, float _criticalDamage, float _strength, float _defenseStrength, float _specialMoveGage)
    {
        price = _price;
        itemUpgrade = _itemUpgrade;
        /*upgradePrice = _upgradePrice;*/
        attackDamage = _attackDamage;
        criticalDamageProbability = _criticalDamageProbability;
        criticalDamage = _criticalDamage;
        strength = _strength;
        defenseStrength = _defenseStrength;
        /*specialMoveGage = _specialMoveGage;*/
    }

    public PUTReqItemUpgrade(Item _item)
    {
        itemUpgrade = _item.itemCurLevel;
        price = _item.itemPrice;
        /*upgradePrice = _upgradePrice;*/
        attackDamage = _item.itemATK;
        criticalDamageProbability = _item.itemCriticalRate;
        criticalDamage = _item.itemCriticalDamage;
        strength = _item.itemHP;
        defenseStrength = _item.itemSheldGager;
        /*specialMoveGage = _item.itemSpecialMoveGager;*/
    }
}

public class PUTResItemUpgrade
{

}

public class DELResItemSell
{

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
    public string character_name;
    public int possesing_gold;
    public int possesing_gem;
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
    public string email;
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
    public string character_name;
    public int possesing_gold;
    public int possesing_gem;
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
    public string character_name;
    public int possesing_gold;
    public int possesing_gem;
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
            Debug.Log($"GPGS Login: {DataManager.Instance.loginSuccessed} DB Login: {DataManager.Instance.signinDBSuccessed}");

            //GPGS 재로그인
            GPGSLogin();
        }
        else if (!DataManager.Instance.signinDBSuccessed)
        {
            Debug.Log($"GPGS Login: {DataManager.Instance.loginSuccessed} DB Login: {DataManager.Instance.signinDBSuccessed}");

            loginTMP.text = "데이터 로드를 위해 탭하세요";

            //DB 재로그인
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
        StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.postSigninPath, new POSTReqSignin(DataManager.Instance.localUserID)));
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

        StartCoroutine(DataManager.Instance.PutStageClearRequest(DataManager.Instance.putStageClearPath, new PUTReqStageClear(2, "gpgsIdTest")));
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

    public void OnClickItemSaveBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, new Item()));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}