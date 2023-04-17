using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadingSceneController : MonoBehaviour
{
    static string nextScene;

    [SerializeField]
    Image progressBar;

    [SerializeField]
    Animator anime;

    private void Start()
    {
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

        while(!op.isDone) {

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
