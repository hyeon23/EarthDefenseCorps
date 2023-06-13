using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingUICamera : MonoBehaviour
{
    [SerializeField]
    private GameObject target;
    [SerializeField]
    private float cameraSpeed;
    private Vector3 targetPosition;

    [SerializeField]
    private float cameraOffset;

    private void FixedUpdate()
    {
        if (target.gameObject != null)
        {
            // target ��ġ ã��
            targetPosition = new Vector3(transform.position.x, target.transform.position.y + cameraOffset, transform.position.z);
            // target ��ġ�� ī�޶� �ӵ��� �°� �̵�
            this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, cameraSpeed * Time.deltaTime);
        }
    }
}
