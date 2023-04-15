using UnityEngine;
using UnityEngine.Advertisements;

public class InterstitialAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] string _androidAdUnitId = "Interstitial_Android";
    [SerializeField] string _iOsAdUnitId = "Interstitial_iOS";
    string _adUnitId;

    void Awake()
    {
        // ���� �÷����� ���� ���� ID�� �����ɴϴ�.
        _adUnitId = (Application.platform == RuntimePlatform.IPhonePlayer)
            ? _iOsAdUnitId
            : _androidAdUnitId;
    }

    // ���� ���ֿ� �������� �ε��մϴ�.
    public void LoadAd()
    {
        // �߿�! �ʱ�ȭ �Ŀ��� �������� �ε��մϴ�(�� �������� �ʱ�ȭ�� �ٸ� ��ũ��Ʈ���� ó����).
        Debug.Log("Loading Ad: " + _adUnitId);
        Advertisement.Load(_adUnitId, this);
    }

    // �ε�� �������� ���� ���ֿ� ǥ���մϴ�.
    public void ShowAd()
    {
        // ���� �������� ������ �ε���� ���� ��� �� �޼���� �����մϴ�.
        Debug.Log("Showing Ad: " + _adUnitId);
        Advertisement.Show(_adUnitId, this);
    }

    // Load ������ �� Show ������ �������̽� �޼��带 �����մϴ�. 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        // ���� ������ �������� ���������� �ε��ϴ� ��� �ʿ信 ���� �ڵ带 �����մϴ�.
    }

    public void OnUnityAdsFailedToLoad(string _adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {_adUnitId} - {error.ToString()} - {message}");
        // ���� ������ �ε����� ���ϴ� ���, �ٽ� �õ��ϴ� �� �ʿ信 ���� �ڵ带 �����մϴ�.
    }

    public void OnUnityAdsShowFailure(string _adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");
        // ���� ������ ǥ������ ���ϴ� ���, �� �ٸ� ���� �ε��ϴ� �� �ʿ信 ���� �ڵ带 �����մϴ�.
    }

    public void OnUnityAdsShowStart(string _adUnitId) { }
    public void OnUnityAdsShowClick(string _adUnitId) { }
    public void OnUnityAdsShowComplete(string _adUnitId, UnityAdsShowCompletionState showCompletionState) { }
}