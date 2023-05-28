using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Xml.Schema;
using Unity.VisualScripting;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public List<GameObject> slotGameObjects;
    public List<ItemSlot> slots;

    public Transform slotParent;
    public GameObject slotPrefab;

    public void AddItem(Item item)
    {
        DataManager.Instance.playerData.playerItems.Add(item);
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObjects.Add(cloneSlot);
    }

    public void InitItem(Item item)
    {
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObjects.Add(cloneSlot);
    }

    public void deleteItem(Item item)
    {
        Destroy(slotGameObjects[DataManager.Instance.playerData.playerItems.IndexOf(item)]);
        slotGameObjects.RemoveAt(DataManager.Instance.playerData.playerItems.IndexOf(item));
        slots.RemoveAt(DataManager.Instance.playerData.playerItems.IndexOf(item));
        DataManager.Instance.playerData.playerItems.Remove(item);
    }

    //아이템 초기화
    //1. 게임 시작 시[게임 매니저?], 자신이 가지고 있는 아이템을 초기화.
    //-진행
}
