using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Setting : MonoBehaviour
{
    private void OnEnable()
    {
        MainMenuController.Instance.BGMSFXInit();
    }
}
