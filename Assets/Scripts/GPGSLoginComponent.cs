using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SigninClass
{
    public bool state;
    [SerializeField] string name;
    [SerializeField] string email;

    public SigninClass(bool _state = false, string _name = null, string _email = null)
    {
        state = _state;
        name = _name;
        email = _email;
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

//public class MonetaryClass
//{
//    public int gem;
//    public int gold;

//    public MonetaryClass(int _gem = 0, int _gold = 0)
//    {
//        gem = _gem;
//        gold = _gold;
//    }
//}

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

public class ItemSave
{
    int memberId;
    bool isEquipped;
    string name;
    string itemGrade;
    int price;
    int itemUpgrade;
    int attackDamage;
    int criticalDamageProbability;
    int criticalDamage;
    int strength;
    int defenseStrength;

    public ItemSave()
    {

    }

    public ItemSave(int memberId, bool isEquipped, string name, string itemGrade, int price, int itemUpgrade, int attackDamage, int criticalDamageProbability, int criticalDamage, int strength, int defenseStrength)
    {
        this.memberId = memberId;
        this.isEquipped = isEquipped;
        this.name = name;
        this.itemGrade = itemGrade;
        this.price = price;
        this.itemUpgrade = itemUpgrade;
        this.attackDamage = attackDamage;
        this.criticalDamageProbability = criticalDamageProbability;
        this.criticalDamage = criticalDamage;
        this.strength = strength;
        this.defenseStrength = defenseStrength;
    }

    public ItemSave(Item _item)
    {
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
        //DBLogin();
    }

    public void OnClickLoginBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        //=1. 로그인 성공 => 시작버튼 등장
        //=2. 로그인 실패 => 3. 회원가입 수행 => 0. 로그인 수행

        //=3. 회원가입 성공
        //=4. 회원가입 실패

        if (!DataManager.Instance.loginSuccessed || !DataManager.Instance.signinDBSuccessed)//2. 로그인 실패
        {
            Debug.Log($"{DataManager.Instance.loginSuccessed} {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("로그인은 필수입니다.");

            //회원가입

            GPGSLogin();

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

    public void DBLogin()
    {
        //0-2. DB 로그인 수행
        if (!DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest 함수 성공 시, 플레이어 데이터 로드[post 함수 내부에 포함]
            Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
            StartCoroutine(DataManager.Instance.PostSignupRequest(DataManager.Instance.postSigninPath, new SignupClass(DataManager.Instance.localUserName, DataManager.Instance.localUserID)));
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

        //StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, new Item()));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}