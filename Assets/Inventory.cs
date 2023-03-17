using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using UnityEngine;

public class Inventory : MonoBehaviour
{

    public List<GameObject> slotGameObject;
    public List<ItemSlot> slots;
    public List<Item> items;

    public Transform slotParent;
    public GameObject slotPrefab;

    private void OnValidate()
    {
        slots = slotParent.GetComponentsInChildren<ItemSlot>().ToList<ItemSlot>();
    }

    private void Awake()
    {
        initSlot();
    }

    public void initSlot()
    {
        int i = 0;
        for (; i < items.Count && i < slots.Count; i++)
        {
            slots[i].GetComponent<ItemSlot>().item = items[i];
        }
        for (; i < slots.Count; i++)
        {
            slots[i].GetComponent<ItemSlot>().item = null;
        }
    }

    public void AddItem(Item _item) {
        items.Add(_item);
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = _item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = _item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(_item);
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObject.Add(cloneSlot);
    }

    public void AddRandItem()
    {
        Item nI = DataManager.Instance.items[Random.Range(0, DataManager.Instance.items.Count)];

        Item newItem = new Item(nI.itemPart, nI.itemGrade, nI.isEquipped, nI.itemID, nI.itemName, nI.itemDesc, nI.itemImage, nI.itemATK, nI.itemLevel, nI.itemHP, nI.itemSheldGager, nI.itemSpecialMoveGager, nI.itemCriticalDamage, nI.itemCriticalDamage, nI.itemPrice, nI.itemUpgradeCost, nI.itemProbability);

        items.Add(newItem);
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = newItem;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = newItem.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(newItem);
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObject.Add(cloneSlot);
    }
}
