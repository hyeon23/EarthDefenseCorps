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
    [SerializeField] bool isEquipped;
    [SerializeField] string name;
    [SerializeField] string itemGrade;
    [SerializeField] int price;
    [SerializeField] int itemUpgrade;
    [SerializeField] int attackDamage;
    [SerializeField] int criticalDamageProbability;
    [SerializeField] int criticalDamage;
    [SerializeField] int strength;
    [SerializeField] int defenseStrength;

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
        memberId = 0;
        isEquipped = _item.isEquipped;
        name = _item.itemName;
        itemGrade = _item.itemGrade.ToString();
        price = _item.itemPrice;
        itemUpgrade = 
        attackDamage = 
        criticalDamageProbability = 
        criticalDamage = 
        strength = 
        defenseStrength = 
    }
}

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
        //0. GPGS �ڵ� �α��� ����
        GPGSLogin();

        //1. DB �ڵ� �α��� ����
        //DBLogin();
    }

    public void OnClickLoginBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        //=1. �α��� ���� => ���۹�ư ����
        //=2. �α��� ���� => 3. ȸ������ ���� => 0. �α��� ����

        //=3. ȸ������ ����
        //=4. ȸ������ ����

        if (!DataManager.Instance.loginSuccessed || !DataManager.Instance.signinDBSuccessed)//2. �α��� ����
        {
            Debug.Log($"{DataManager.Instance.loginSuccessed} {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("�α����� �ʼ��Դϴ�.");

            //ȸ������

            GPGSLogin();

            DBLogin();
        }
        else//1. �α��� ����
        {
            startButton.gameObject.SetActive(true);
            loginButton.gameObject.SetActive(false);
        }
    }

    public void GPGSLogin()
    {
        //0-1. GPGS �α��� ����
        if (!DataManager.Instance.loginSuccessed)
            GPGSBinder.Inst.Login((success, localUser) => {
                DataManager.Instance.loginSuccessed = success;
                DataManager.Instance.localUserID = localUser.id;
                DataManager.Instance.localUserName = localUser.userName;
            });
    }

    public void DBLogin()
    {
        //0-2. DB �α��� ����
        if (!DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest �Լ� ���� ��, �÷��̾� ������ �ε�[post �Լ� ���ο� ����]
            Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
            StartCoroutine(DataManager.Instance.PostSignupRequest(DataManager.Instance.postSigninPath, new SignupClass(DataManager.Instance.localUserName, DataManager.Instance.localUserID)));
        }
    }

    public void OnClickStartBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        LoadingSceneController.LoadScene("MainMenuScene");

        //if (�α��� ���� ��)
        //{
        //   ȭ�� ��ȯ
        //   LoadingSceneController.LoadScene("MainMenuScene");
        //}
        //else (�α��� ���� ��)
        //{
        //   ��� ���
        //   TriggerPopUp("�α����� �����߽��ϴ�.");
        //}
    }

    public void OnClickLogoutBtn()
    {
        TriggerPopUp("�α׾ƿ� �Ǿ����ϴ�.");

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

        StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, ));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}