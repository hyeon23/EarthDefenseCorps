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

    public enum SFX { Button, GameOver, GameStart }

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
            case SFX.GameOver:
                sfxPlayer[sfxCursor].clip = sfxClip[1];
                break;
            case SFX.GameStart:
                sfxPlayer[sfxCursor].clip = sfxClip[2];
                break;
        }

        sfxPlayer[sfxCursor].Play();
        sfxCursor = (sfxCursor + 1) % sfxPlayer.Length;
    }
}