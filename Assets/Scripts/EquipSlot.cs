using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EquipSlot : MonoBehaviour
{
    public enum EquipSlotPart { Weapon, Gloves, Shoes, Sheld, Helmat, Armor }

    public Image ItemIcon;
    public Image gradeBackground; 
    public EquipSlotPart equipSlotPart;
    public TextMeshProUGUI curLevelText;

    public Item item = null;

    private void Update()
    {
        if(item != null)
        {
            curLevelText.gameObject.SetActive(true);
        }
        else
        {
            curLevelText.gameObject.SetActive(false);
        }

        switch (equipSlotPart)
        {
            case EquipSlotPart.Weapon:
                if (DataManager.Instance.playerData.CurEquippedWeapon != null)
                {
                   gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedWeapon;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Gloves:
                if (DataManager.Instance.playerData.CurEquippedGloves != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedGloves;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Shoes:
                if (DataManager.Instance.playerData.CurEquippedShoes != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedShoes;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Sheld:
                if (DataManager.Instance.playerData.CurEquippedSheld != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedSheld;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Helmat:
                if (DataManager.Instance.playerData.CurEquippedHelmat != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedHelmat;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Armor:
                if (DataManager.Instance.playerData.CurEquippedArmor != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.playerData.CurEquippedArmor;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gradeBackground.color = new Color(1, 1, 1, 1);
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
        }
    }

    public void ItemSlotClicked()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
