using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Rendering;

public class LoadingSceneController : MonoBehaviour
{
    static string nextScene;

    [SerializeField]
    Image progressBar;

    [SerializeField]
    Animator anime;

    [SerializeField]
    TextMeshProUGUI tipsTMP;

    private string[] tipStrings;

    private void Start()
    {
        tipStrings = new string[]{
            "Tips. 이동은 좌우 슬라이드입니다.",
            "Tips. 점프는 상 슬라이드입니다.",
            "Tips. 쉴드는 하 슬라이드입니다.",
            "Tips. 어택은 탭 입니다.",
            "Tips. 쉴드를 통해 건물이나 적의 공격을 패링할 수 있습니다.",
            "Tips. 필살기는 점프 상태에서 상 슬라이드입니다.",
            "Tips. 쉴드와 필살기는 게이지가 있습니다.",
        };

        StartCoroutine(LoadSceneProcess());
    }

    public static void LoadScene(string sceneName)
    {
        nextScene= sceneName;
        SceneManager.LoadScene("LoadingScene");
    }

    IEnumerator LoadSceneProcess()
    {
        AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
        op.allowSceneActivation = false;

        float timer = 0f;

        tipsTMP.text = tipStrings[Random.Range(0, tipStrings.Length)];

        while (!op.isDone) {

            yield return null;

            if(op.progress < 0.1f)
            {
                progressBar.fillAmount= op.progress;
            }
            else
            {
                //fake loading
                timer += Time.unscaledDeltaTime / 2;
                progressBar.fillAmount = Mathf.Lerp(0.1f, 1f, timer);

                if(progressBar.fillAmount >= 1f)
                {
                    op.allowSceneActivation= true;
                    yield break;
                }
            }

        }
    }
}
