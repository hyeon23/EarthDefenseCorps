using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Xml.Schema;
using Unity.VisualScripting;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    private static Inventory instance = null;

    public List<GameObject> slotGameObjects;
    public List<ItemSlot> slots;
    public List<Item> items;

    public Transform slotParent;
    public GameObject slotPrefab;
    public static Inventory Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        initSlot();
    }

    private void OnValidate()
    {
        slots = slotParent.GetComponentsInChildren<ItemSlot>().ToList<ItemSlot>();
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

    public void AddItem(Item item)
    {
        items.Add(item);
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObjects.Add(cloneSlot);
    }

    public void deleteItem(Item item)
    {
        Destroy(slotGameObjects[items.IndexOf(item)]);
        slotGameObjects.RemoveAt(items.IndexOf(item));
        slots.RemoveAt(items.IndexOf(item));
        items.Remove(item);
    }
}
