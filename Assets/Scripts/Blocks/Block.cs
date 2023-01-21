using UnityEngine;
using System.Collections;

public enum BlockState { Falling, Assembled, PlayerReached, FloorReached, PlayerFloorReached, OnHit, Broken, Count }

public class Block : MonoBehaviour
{
    [SerializeField]
    protected BlockState blockState;

    [SerializeField]
    protected float hp;
    [SerializeField]
    protected float mass;
    [SerializeField]
    protected float speed;
    [SerializeField]
    protected string blockName;

    protected SpriteRenderer spriteRenderer = null;

    //[SerializeField]
    //public bool isAssembled = false;


    //public AssembleTip assembleUpTip;
    //public AssembleTip assembleDownTip;


    //public void ChangeState(BlockState newState)
    //{
    //    StopCoroutine(blockState.ToString());
    //    blockState = newState;
    //    StartCoroutine(blockState.ToString());
    //}

    //public IEnumerator Falling()
    //{
    //    yield return null;
    //}

    //public IEnumerator Assembled()
    //{
    //    yield return null;
    //}

    //public IEnumerator PlayerReached()
    //{
    //    yield return null;
    //}

    //public IEnumerator FloorReached()
    //{
    //    yield return null;
    //}

    //public IEnumerator PlayerFloorReached()
    //{
    //    yield return null;
    //}



    //public IEnumerator Broken()
    //{
    //    yield return null;
    //}
}
