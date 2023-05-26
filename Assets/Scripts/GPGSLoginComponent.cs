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

    Header() { 
        
    }

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
public class Member
{
    public int id;
    public string gpgsId;
    public string name;
    public int possessingGold;
    public int possessingJem;//스펠링?
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
    public string email;

    public PUTReqStageClear(int _stage = -1, string _email = null)
    {
        stage = _stage;
        email = _email;
    }
}

public class PUTResStageClear
{
    public int id;
    public Header header;

    public PUTResStageClear(int id, Header header)
    {
        this.id = id;
        this.header = header;
    }
}

public class POSTReqItemSave
{
    public int memberId;
    public int itemSN;//같은 종류의 아이템마다 필요한 변수[추가요망]
    public bool isEquipped;
    public string name;
    public string itemPart;//아이템 파트[헤더에서 없애고 바디에 넣도록 수정요망]
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

    public POSTReqItemSave()
    {

    }

    public POSTReqItemSave(int _memberId, bool _isEquipped, string _name, string _itemGrade, int _price, int _itemUpgrade, int _attackDamage, int _criticalDamageProbability, int _criticalDamage, int _strength, int _defenseStrength)
    {
        memberId = _memberId;
        isEquipped = _isEquipped;
        name = _name;
        itemGrade = _itemGrade;
        price = _price;
        itemUpgrade = _itemUpgrade;
        attackDamage = _attackDamage;
        criticalDamageProbability = _criticalDamageProbability;
        criticalDamage = _criticalDamage;
        strength = _strength;
        defenseStrength = _defenseStrength;
    }

    public POSTReqItemSave(Item _item)
    {
        memberId = _item.ID;
        itemSN = _item.itemID;
        isEquipped = _item.isEquipped;
        name = _item.itemName;
        itemGrade = _item.itemGrade.ToString();
        price = _item.itemPrice;
        itemUpgrade = _item.itemCurLevel;
        attackDamage = _item.itemATK;
        criticalDamageProbability = _item.itemCriticalRate;
        criticalDamage = _item.itemCriticalDamage;
        strength = _item.itemHP;
        defenseStrength = _item.itemSheldGager;
        specialMoveGage = _item.itemSpecialMoveGager;
    }
}

public class POSTReqSignup
{
    public string name;
    public string email;

    public POSTReqSignup(string _name = null, string _email = null)
    {
        name = _name;
        email = _email;
    }
}

public class POSTReqSignin
{
    public string email;

    public POSTReqSignin(string _email = null)
    {
        email = _email;
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

public class PUTReqGold
{
    public int gold;

    public PUTReqGold(int _gold = 0)
    {
        gold = _gold;
    }
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
        DBLogin();
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

    public void DBSignup()
    {
        //PostRequest 함수 성공 시, 플레이어 데이터 로드[post 함수 내부에 포함]
        Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
        StartCoroutine(DataManager.Instance.PostSignupRequest(DataManager.Instance.postSignupPath, new POSTReqSignup(DataManager.Instance.localUserName, DataManager.Instance.localUserID)));
    }

    public void DBLogin()
    {
        //0-2. DB 로그인 수행
        if (DataManager.Instance.loginSuccessed && !DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest 함수 성공 시, 플레이어 데이터 로드[post 함수 내부에 포함]
            Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
            StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.postSigninPath, new POSTReqSignin(DataManager.Instance.localUserID)));
        }
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