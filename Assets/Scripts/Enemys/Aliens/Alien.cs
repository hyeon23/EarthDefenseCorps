using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AlienState { Idle, HitMove, Pattern, Turn, Dead }

public class Alien : Enemy
{
    protected AlienState alienState = AlienState.Idle;

    [SerializeField]
    protected float maxShotDelay;//���ݼӵ�
    [SerializeField]

    protected float curShotDelay;//�����ð�

    [SerializeField]
    protected int curPosIndex = 0;

    public GameObject afterEffectObj;

    protected Quaternion GetRotFromVectors(Vector2 posStart, Vector2 posEnd)
    {
        return Quaternion.Euler(0, 0, -Mathf.Atan2(posEnd.x - posStart.x, posEnd.y - posStart.y) * Mathf.Rad2Deg);
    }

    protected void Dodge()
    {
        //�� ȸ�� �⵿ ����
        int dodgePosIndex = Random.Range(0, 3);
        curPosIndex = dodgePosIndex;
        StartCoroutine(DodgeMove(PlayerController.Instance.playerPos[curPosIndex].position.x));
        return;
    }

    //�÷��̾ ���� ��,
    //�ǰݴ��� �̵��� ��,
    //Idle ���� --> ���� ����
    protected void FollowPlayer()
    {
        // target ��ġ ã��
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 6, transform.position.z);
        // target ��ġ�� ī�޶� �ӵ��� �°� �̵�
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 3);
    }

    protected void FollowPlayerBoss()
    {
        // target ��ġ ã��
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 12, transform.position.z);
        // target ��ġ�� ī�޶� �ӵ��� �°� �̵�
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 3);
    }

    private IEnumerator DodgeMove(float dodgePos)
    {
        afterEffectObj.SetActive(true);

        float start = 0;
        float end = 1;

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

        yield return new WaitForSeconds(0.3f);

        afterEffectObj.SetActive(false);
    }

    public bool CriticalCheck(int damage, float percent)
    {
        float r = Random.Range(0f, 100f) % 100;
        //percent ������ �����ϸ� ũ��Ƽ�� �ߵ�
        if (r < percent)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
