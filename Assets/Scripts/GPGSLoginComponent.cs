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
    [SerializeField] int itemSN;//���� ������ �����۸��� �ʿ��� ����[�߰����]
    [SerializeField] bool isEquipped;
    [SerializeField] string name;
    [SerializeField] string itemPart;//������ ��Ʈ[������� ���ְ� �ٵ� �ֵ��� �������]
    [SerializeField] string itemGrade;
    [SerializeField] string itemDesc;//������ ����[�߰� ���]

    [SerializeField] int itemUpgrade;//���緹��
    [SerializeField] int price;//������ �Ǹ� ����: ���� ���� �Ǹ� ���� ����ؼ� ������ �ɷ�]
    [SerializeField] int upgradePrice;//������ ���� ����[���� ���� �Ǹ� ���� ����ؼ� ������ �ɷ�]
    [SerializeField] int attackDamage;
    [SerializeField] float criticalDamageProbability;//ũȮ float�� ���� ���
    [SerializeField] float criticalDamage;//ũ�� float�� ���� ���
    [SerializeField] float strength;//HP float�� ���� ���
    [SerializeField] float defenseStrength;//��� �߰� ������ float�� ���� ���
    [SerializeField] float specialMoveGage;//�ʻ�� �߰� ������ float��[�߰����]

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
        //0. GPGS �ڵ� �α��� ����
        GPGSLogin();

        //1. DB �ڵ� �α��� ����
        DBLogin();
    }

    public void OnClickLoginBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        //=1. �α��� ���� => ���۹�ư ����
        //=2. �α��� ���� => 3. ȸ������ ���� => 0. �α��� ����

        //=3. ȸ������ ����
        //=4. ȸ������ ����

        if (!DataManager.Instance.loginSuccessed)//2. �α��� ����
        {
            Debug.Log($"{DataManager.Instance.loginSuccessed} {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("Google �α����� �ʼ��Դϴ�.");

            //GPGS ��α���
            GPGSLogin();
        }
        else if (!DataManager.Instance.signinDBSuccessed)
        {
            Debug.Log($"GPGS Login: {DataManager.Instance.loginSuccessed} DB Login: {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("DB �α����� �ʼ��Դϴ�.");

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

    public void DBSingup()
    {
        //PostRequest �Լ� ���� ��, �÷��̾� ������ �ε�[post �Լ� ���ο� ����]
        Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
        StartCoroutine(DataManager.Instance.PostSignupRequest(DataManager.Instance.postSignupPath, new SignupClass(DataManager.Instance.localUserName, DataManager.Instance.localUserID)));
    }

    public void DBLogin()
    {
        //0-2. DB �α��� ����
        if (!DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest �Լ� ���� ��, �÷��̾� ������ �ε�[post �Լ� ���ο� ����]
            Debug.Log($"{DataManager.Instance.localUserName} : {DataManager.Instance.localUserID}");
            StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.postSigninPath, new SigninClass(DataManager.Instance.localUserID)));
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

        StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, new Item()));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}