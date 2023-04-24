using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class ItemSlot : MonoBehaviour
{
    public Item item;
    public Image ItemIcon;
    public Image gradeBackground;
    public GameObject isEquippedImage;
    public TextMeshProUGUI curLevelText;

    //Random Item �Ҵ��ϴ� ���
    //�����ý��� �� ����

    private void Update()
    {

        if (item.isEquipped == true)
        {
            isEquippedImage.SetActive(true);
        }
        else
        {
            isEquippedImage.SetActive(false);
        }

        curLevelText.text = $"Lv.{item.itemCurLevel}";
    }

    public void ItemSlotClicked()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
