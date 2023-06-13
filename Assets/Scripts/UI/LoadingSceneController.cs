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
            "Tips. �̵��� �¿� �����̵��Դϴ�.",
            "Tips. ������ �� �����̵��Դϴ�.",
            "Tips. ����� �� �����̵��Դϴ�.",
            "Tips. ������ �� �Դϴ�.",
            "Tips. ���带 ���� �ǹ��̳� ���� ������ �и��� �� �ֽ��ϴ�.",
            "Tips. �ʻ��� ���� ���¿��� �� �����̵��Դϴ�.",
            "Tips. ����� �ʻ��� �������� �ֽ��ϴ�.",
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
