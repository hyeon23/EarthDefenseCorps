using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private static SoundManager instance = null;

    public static SoundManager Instance
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

    public AudioSource bgmPlayer;
    public AudioSource[] sfxPlayer;
    public AudioClip[] sfxClip;

    public enum SFX { Button, SellButton, PopUP, GetItemNormal, GetItemRare, GetItemEpic, GetItemUnique, GetItemLegendary, Equip, UnEquip, Upgrade, GameStart }

    int sfxCursor;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {   
            Destroy(this.gameObject);
        }
    }

    private void Start()
    {
        bgmPlayer.Play();
    }

    public void SFXPlay(SFX sfxType)
    {
        switch (sfxType)
        {
            case SFX.Button:
                sfxPlayer[sfxCursor].clip = sfxClip[0];
                break;
            case SFX.SellButton:
                sfxPlayer[sfxCursor].clip = sfxClip[1];
                break;
            case SFX.PopUP:
                sfxPlayer[sfxCursor].clip = sfxClip[2];
                break;
            case SFX.GetItemNormal:
                sfxPlayer[sfxCursor].clip = sfxClip[3];
                break;
            case SFX.GetItemRare:
                sfxPlayer[sfxCursor].clip = sfxClip[4];
                break;
            case SFX.GetItemEpic:
                sfxPlayer[sfxCursor].clip = sfxClip[5];
                break;
            case SFX.GetItemUnique:
                sfxPlayer[sfxCursor].clip = sfxClip[6];
                break;
            case SFX.GetItemLegendary:
                sfxPlayer[sfxCursor].clip = sfxClip[7];
                break;
            case SFX.Equip:
                sfxPlayer[sfxCursor].clip = sfxClip[8];
                break;
            case SFX.UnEquip:
                sfxPlayer[sfxCursor].clip = sfxClip[9];
                break;
            case SFX.Upgrade:
                sfxPlayer[sfxCursor].clip = sfxClip[10];
                break;
        }

        sfxPlayer[sfxCursor].Play();
        sfxCursor = (sfxCursor + 1) % sfxPlayer.Length;
    }
}