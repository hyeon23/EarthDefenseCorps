using UnityEngine;
using UnityEngine.Advertisements;

public class InterstitialAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] string _androidAdUnitId = "Interstitial_Android";
    [SerializeField] string _iOsAdUnitId = "Interstitial_iOS";
    string _adUnitId;

    void Awake()
    {
        // 현재 플랫폼의 광고 유닛 ID를 가져옵니다.
        _adUnitId = (Application.platform == RuntimePlatform.IPhonePlayer)
            ? _iOsAdUnitId
            : _androidAdUnitId;
    }

    // 광고 유닛에 콘텐츠를 로드합니다.
    public void LoadAd()
    {
        // 중요! 초기화 후에만 콘텐츠를 로드합니다(이 예제에서 초기화는 다른 스크립트에서 처리함).
        Debug.Log("Loading Ad: " + _adUnitId);
        Advertisement.Load(_adUnitId, this);
    }

    // 로드된 콘텐츠를 광고 유닛에 표시합니다.
    public void ShowAd()
    {
        // 광고 콘텐츠가 이전에 로드되지 않은 경우 이 메서드는 실패합니다.
        Debug.Log("Showing Ad: " + _adUnitId);
        Advertisement.Show(_adUnitId, this);
    }

    // Load 리스너 및 Show 리스너 인터페이스 메서드를 구현합니다. 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        // 광고 유닛이 콘텐츠를 성공적으로 로드하는 경우 필요에 따라 코드를 실행합니다.
    }

    public void OnUnityAdsFailedToLoad(string _adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {_adUnitId} - {error.ToString()} - {message}");
        // 광고 유닛이 로드하지 못하는 경우, 다시 시도하는 등 필요에 따라 코드를 실행합니다.
    }

    public void OnUnityAdsShowFailure(string _adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");
        // 광고 유닛이 표시하지 못하는 경우, 또 다른 광고를 로드하는 등 필요에 따라 코드를 실행합니다.
    }

    public void OnUnityAdsShowStart(string _adUnitId) { }
    public void OnUnityAdsShowClick(string _adUnitId) { }
    public void OnUnityAdsShowComplete(string _adUnitId, UnityAdsShowCompletionState showCompletionState) { }
}