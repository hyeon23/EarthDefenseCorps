using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using Unity.VisualScripting;
using System;

public class RewardedAdsButton : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] Button _showAdButton;
    [SerializeField] string _androidAdUnitId = "Rewarded_Android";
    [SerializeField] string _iOSAdUnitId = "Rewarded_iOS";
    [SerializeField] string _RewardType;
    string _adUnitId = null; // 지원되지 않는 플랫폼의 경우 값은 null로 남아 있습니다.

    void Awake()
    {
        // 현재 플랫폼의 광고 유닛 ID를 가져옵니다.
#if UNITY_IOS
        _adUnitId = _iOSAdUnitId;
#elif UNITY_ANDROID
        _adUnitId = _androidAdUnitId;
#endif

        //광고가 표시될 준비가 될 때까지 버튼을 비활성화합니다.
        //_showAdButton.interactable = false;

        LoadRewardedAd();
    }

    // 광고 유닛에 콘텐츠를 로드합니다.
    public void LoadRewardedAd()
    {
        // 중요! 초기화 후에만 콘텐츠를 로드합니다(이 예제에서 초기화는 다른 스크립트에서 처리함).
        Debug.Log("Loading Ad: " + _adUnitId);
        Advertisement.Load(_adUnitId, this);
    }

    // 광고가 성공적으로 로드되면 버튼에 리스너를 추가하고 활성화합니다.
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        Debug.Log("Ad Loaded: " + adUnitId);

        if (adUnitId.Equals(_adUnitId))
        {
            // 클릭 시 ShowAd() 메서드를 호출하도록 버튼을 설정합니다.
            _showAdButton.onClick.AddListener(ShowAd);
            // 유저가 클릭할 수 있도록 버튼을 활성화합니다.
            //_showAdButton.interactable = true;
        }
    }

    // 유저가 버튼을 클릭할 때 실행할 메서드를 구현합니다.
    public void ShowAd()
    {
        // 버튼을 비활성화합니다.
        //_showAdButton.interactable = false;
        // 그런 다음 광고를 표시합니다.

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        Advertisement.Show(_adUnitId, this);

        LoadRewardedAd();
    }

    // Show Listener의 OnUnityAdsShowComplete 콜백 메서드를 구현하여 유저가 보상을 받을지 결정합니다.
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
    {
        if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            Debug.Log("Unity Ads Rewarded Ad Completed");
            // 보상을 줍니다.

            switch (_RewardType)
            {
                case "Item":
                    MainMenuController.Instance.SupplyItemButton();
                    DataManager.Instance.playerData.supplyItemCoolTime = DateTime.Now;
                    break;
                case "Zam":
                    MainMenuController.Instance.SupplyZamButton();
                    DataManager.Instance.playerData.supplyZamCoolTime = DateTime.Now;
                    break;
            }
        }
    }

    // Load 및 Show 리스너 오류 콜백을 구현합니다.
    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // 오류 세부 정보를 사용하여 또 다른 광고를 로드할지 여부를 결정합니다.
    }

    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // 오류 세부 정보를 사용하여 또 다른 광고를 로드할지 여부를 결정합니다.
    }

    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }

    void OnDestroy()
    {
        // 버튼 리스너를 제거합니다.
        _showAdButton.onClick.RemoveAllListeners();
    }
}