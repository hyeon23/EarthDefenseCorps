using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AlienState { Idle, HitMove, Pattern, Turn, Dead }

public class Alien : Enemy
{
    protected AlienState alienState = AlienState.Idle;

    [SerializeField]
    protected float maxShotDelay;//공격속도
    [SerializeField]

    protected float curShotDelay;//충전시간

    [SerializeField]
    protected int curPosIndex = 0;

    public GameObject afterEffectObj;

    private int[] followYPos = { 5, 7, 9 };
    private int[] followYSpeed = { 3, 4, 5 };

    protected Quaternion GetRotFromVectors(Vector2 posStart, Vector2 posEnd)
    {
        return Quaternion.Euler(0, 0, -Mathf.Atan2(posEnd.x - posStart.x, posEnd.y - posStart.y) * Mathf.Rad2Deg);
    }

    protected void Dodge()
    {
        //적 회피 기동 시작
        int dodgePosIndex = Random.Range(0, 3);
        curPosIndex = dodgePosIndex;
        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienSideFade, 0.25f);
        StartCoroutine(DodgeMove(PlayerController.Instance.playerPos[curPosIndex].position.x));
        return;
    }

    //플레이어를 따라갈 때,
    //피격당해 이동할 때,
    //Idle 상태 --> 공격 가능
    protected void FollowPlayer()
    {
        // target 위치 찾기
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + followYPos[Random.Range(0, 3)], transform.position.z);
        // target 위치로 카메라 속도에 맞게 이동
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * followYSpeed[Random.Range(0, 3)]);
    }

    protected void FollowPlayerBoss()
    {
        // target 위치 찾기
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 12, transform.position.z);
        // target 위치로 카메라 속도에 맞게 이동
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 4);
    }

    private IEnumerator DodgeMove(float dodgePos)
    {
        afterEffectObj.SetActive(true);

        float start = 0;
        float end = 0.5f;

        float percent = 0;

        Vector3 startPos = transform.position;
        Vector3 targetPos = new Vector3(dodgePos, transform.position.y, transform.position.z);

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            parentGameObject.transform.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }

        yield return new WaitForSeconds(0.15f);

        afterEffectObj.SetActive(false);
    }
}
