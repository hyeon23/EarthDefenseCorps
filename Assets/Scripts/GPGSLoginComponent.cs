using TMPro;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class StageClearClass
{
    [SerializeField] int stage;
    [SerializeField] string email;

    public StageClearClass(int _stage = -1, string _email = null)
    {
        stage = _stage;
        email = _email;
    }
}

public class ItemSave
{

    [SerializeField] int memberId;
    [SerializeField] int itemSN;//같은 종류의 아이템마다 필요한 변수[추가요망]
    [SerializeField] bool isEquipped;
    [SerializeField] string name;
    [SerializeField] string itemPart;//아이템 파트[헤더에서 없애고 바디에 넣도록 수정요망]
    [SerializeField] string itemGrade;
    [SerializeField] string itemDesc;//아이템 설명[추가 요망]

    [SerializeField] int itemUpgrade;//현재레벨
    [SerializeField] int price;//아이템 판매 가격: 내가 최총 판매 가격 계산해서 보내는 걸로]
    [SerializeField] int upgradePrice;//아이템 업글 가격[내가 최총 판매 가격 계산해서 보내는 걸로]
    [SerializeField] int attackDamage;
    [SerializeField] float criticalDamageProbability;//크확 float임 수정 요망
    [SerializeField] float criticalDamage;//크뎀 float임 수정 요망
    [SerializeField] float strength;//HP float임 수정 요망
    [SerializeField] float defenseStrength;//방어 추가 게이지 float임 수정 요망
    [SerializeField] float specialMoveGage;//필살기 추가 게이지 float임[추가요망]

    public ItemSave()
    {

    }

    public ItemSave(int _memberId, bool _isEquipped, string _name, string _itemGrade, int _price, int _itemUpgrade, int _attackDamage, int _criticalDamageProbability, int _criticalDamage, int _strength, int _defenseStrength)
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

    public ItemSave(Item _item)
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

public class SignupClass
{
    [SerializeField] string name;
    [SerializeField] string email;

    public SignupClass(string _name = null, string _email = null)
    {
        name = _name;
        email = _email;
    }
}

public class SigninClass
{
    [SerializeField] string email;

    public SigninClass(string _email = null)
    {
        email = _email;
    }
}

public class ZamClass
{
    [SerializeField] int gem;

    public ZamClass(int _gem = 0)
    {
        gem = _gem;
    }
}

public class GoldClass
{
    [SerializeField] int gold;

    public GoldClass(int _gold = 0)
    {
        gold = _gold;
    }
}


public class GPGSLoginComponent : MonoBehaviour
{
    public Button startButton;
    public Button loginButton;

    public TextMeshProUGUI popupTMP;
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
            Debug.Log($"{DataManager.Instance.loginSuccessed} {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("Google 로그인은 필수입니다.");

            //GPGS 재로그인
            GPGSLogin();
        }
        else if (!DataManager.Instance.signinDBSuccessed)
        {
            Debug.Log($"GPGS Login: {DataManager.Instance.loginSuccessed} DB Login: {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("DB 로그인은 필수입니다.");

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

    public void DBSingup()
    {
        //PostRequest 함수 성공 시, 플레이어 데이터 로드[post 함수 내부에 포함]
        Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
        StartCoroutine(DataManager.Instance.PostSignupRequest(DataManager.Instance.postSignupPath, new SignupClass(DataManager.Instance.localUserName, DataManager.Instance.localUserID)));
    }

    public void DBLogin()
    {
        //0-2. DB 로그인 수행
        if (!DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest 함수 성공 시, 플레이어 데이터 로드[post 함수 내부에 포함]
            Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
            StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.postSigninPath, new SigninClass(DataManager.Instance.localUserID)));
        }
    }

    public void OnClickStartBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        LoadingSceneController.LoadScene("MainMenuScene");

        //if (로그인 성공 시)
        //{
        //   화면 전환
        //   LoadingSceneController.LoadScene("MainMenuScene");
        //}
        //else (로그인 실패 시)
        //{
        //   경고 출력
        //   TriggerPopUp("로그인을 실패했습니다.");
        //}
    }

    public void OnClickLogoutBtn()
    {
        TriggerPopUp("로그아웃 되었습니다.");

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        DataManager.Instance.signinDBSuccessed = false;
        DataManager.Instance.loginSuccessed = false;
        DataManager.Instance.localUserName = null;
        DataManager.Instance.localUserInfo = null;
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

        StartCoroutine(DataManager.Instance.PutStageClearRequest(DataManager.Instance.putStageClearPath, new StageClearClass(2, "paramtest")));
    }

    public void OnClickPutZamUpdateBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new ZamClass(500)));
    }

    public void OnClickPutGoldUpdateBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutGoldUpdateRequest(DataManager.Instance.putGoldUpdatePath, new GoldClass(2000)));
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