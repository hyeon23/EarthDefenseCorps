using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private static SoundManager instance = null;

    public enum SMType { MainMenu, InGame }

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

    public SMType smType;
    public AudioSource bgmPlayer;
    public AudioSource[] sfxPlayer;
    public AudioClip[] sfxClip;

    public enum SFX 
    { 
        //MainMenu
        Button,
        SellButton,
        PopUP,
        GetItemNormal,
        GetItemRare,
        GetItemEpic,
        GetItemUnique,
        GetItemLegendary,
        Equip,
        UnEquip,
        Upgrade,
        BuyGold,
        BuyZam,
        RollPlanet,
        GameStart,

        //InGame
        SideWalk,
        Attack,
        Jump,
        SheldOn,
        SheldOff,
        Parrying,
        SpecialMove,
        EnemyHit,
        Collapse,
        ReadyFight,
        BlockDead,
        AlienDead, 
        AlienSideFade,
        AlienNormalShoot,
        AlienEliteShoot,
        AlienBulletHit,
        AlienBossTurn,
        AlienBossTakingUp,
        AlienBossTakingDown,
        GameOver,
        GameClear,
    }

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

        BGMMuteOnOff();
        SFXMuteOnOff();
    }

    public void BGMMuteOnOff()
    {
        bgmPlayer.mute = !DataManager.Instance.isBGMOn;

        if (DataManager.Instance.isBGMOn)
        {
            Debug.Log("Test");
            bgmPlayer.UnPause();
        }
        else
        {
            bgmPlayer.Pause();
        }
    }

    public void SFXMuteOnOff()
    {
        for (int i = 0; i < sfxPlayer.Length; i++)
        {
            sfxPlayer[i].mute = !DataManager.Instance.isSFXOn;
        }
    }

    public void SFXPlay(SFX sfxType, float volume = -1)
    {
        switch (smType)
        {
            case SMType.MainMenu:
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
                    case SFX.BuyGold:
                        sfxPlayer[sfxCursor].clip = sfxClip[11];
                        break;
                    case SFX.BuyZam:
                        sfxPlayer[sfxCursor].clip = sfxClip[12];
                        break;
                    case SFX.RollPlanet:
                        sfxPlayer[sfxCursor].clip = sfxClip[13];
                        break;
                }
                break;
            case SMType.InGame:
                switch (sfxType)
                {
                    //0,1 Side Walk
                    case SFX.SideWalk:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(0, 2)];
                        break;
                    case SFX.Attack:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(2, 5)];
                        break;
                    case SFX.Jump:
                        sfxPlayer[sfxCursor].clip = sfxClip[5];
                        break;
                    case SFX.SheldOn:
                        sfxPlayer[sfxCursor].clip = sfxClip[6];
                        break;
                    case SFX.SheldOff:
                        sfxPlayer[sfxCursor].clip = sfxClip[7];
                        break;
                    case SFX.Parrying:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(8, 10)];
                        break;
                    case SFX.SpecialMove:
                        sfxPlayer[sfxCursor].clip = sfxClip[10];
                        break;
                    case SFX.EnemyHit:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(11, 15)];
                        break;
                    case SFX.Collapse:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(15, 17)];
                        break;
                    case SFX.ReadyFight:
                        sfxPlayer[sfxCursor].clip = sfxClip[17];
                        break;
                    case SFX.BlockDead:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(18, 22)];
                        break;
                    case SFX.AlienDead:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(22, 24)];
                        break;
                    case SFX.AlienSideFade:
                        sfxPlayer[sfxCursor].clip = sfxClip[24];
                        break;
                    case SFX.AlienNormalShoot:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(25, 27)];
                        break;
                    case SFX.AlienEliteShoot:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(27, 29)];
                        break;
                    case SFX.AlienBulletHit:
                        sfxPlayer[sfxCursor].clip = sfxClip[29];
                        break;
                    case SFX.AlienBossTurn:
                        sfxPlayer[sfxCursor].clip = sfxClip[Random.Range(30, 32)];
                        break;
                    case SFX.AlienBossTakingUp:
                        sfxPlayer[sfxCursor].clip = sfxClip[32];
                        break;
                    case SFX.AlienBossTakingDown:
                        sfxPlayer[sfxCursor].clip = sfxClip[33];
                        break;
                    case SFX.GameOver:
                        sfxPlayer[sfxCursor].clip = sfxClip[34];
                        break;
                    case SFX.GameClear:
                        sfxPlayer[sfxCursor].clip = sfxClip[35];
                        break;
                    case SFX.Button:
                        sfxPlayer[sfxCursor].clip = sfxClip[36];
                        break;
                }
                break;
        }

        if(volume != -1)
            sfxPlayer[sfxCursor].volume = volume;
        else
            sfxPlayer[sfxCursor].volume = 0.5f;

        sfxPlayer[sfxCursor].Play();
        sfxCursor = (sfxCursor + 1) % sfxPlayer.Length;
    }
}