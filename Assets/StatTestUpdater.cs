using System.Collections;
using TMPro;
using UnityEngine;

public class StatTestUpdater : MonoBehaviour
{
    public enum STATTYPE { ATK, HP, Gold, ZAM }

    public STATTYPE type;
    public TextMeshProUGUI statText;

    // Update is called once per frame
    void Update()
    {
        TextViewer(type);
    }

    public void TextViewer(STATTYPE statType)
    {
        switch (statType)
        {
            case STATTYPE.ATK:
                //Cur ATK Stat Text
                StartCoroutine(Count(statText, DataManager.Instance.playerATK, DataManager.Instance.playerATK + 1));
                break;
            case STATTYPE.HP:
                //Cur HP Stat Text
                StartCoroutine(Count(statText, DataManager.Instance.playerHP, DataManager.Instance.playerHP + 1));
                break;
            case STATTYPE.Gold:
                //Cur Gold Text
                StartCoroutine(Count(statText, DataManager.Instance.playerGold, DataManager.Instance.playerGold + 1));
                break;
            case STATTYPE.ZAM:
                //Cur Zam Text
                StartCoroutine(Count(statText, DataManager.Instance.playerZam, DataManager.Instance.playerZam + 1));
                break;
            default:
                break;
        }
    }

    public IEnumerator Count(TextMeshProUGUI _Text, float _Target, float _Current)
    {
        float duration = 0.5f; // 카운팅에 걸리는 시간 설정. 
        float offset = (_Target - _Current) / duration;

        while (_Current < _Target)
        {
            _Current += offset * Time.deltaTime;
            _Text.text = ((int)_Current).ToString();
            yield return null;
        }

        _Current = _Target;

        _Text.text = ((int)_Current).ToString();
    }
}
