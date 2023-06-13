using System.Collections;
using UnityEngine;

public class MovingCamera : MonoBehaviour
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
            // 고정 Ver
            //targetPosition = new Vector3(transform.position.x, target.transform.position.y + cameraOffset, transform.position.z);

            // target 위치 찾기
            targetPosition = new Vector3(0, target.transform.position.y + cameraOffset, transform.position.z);
            // target 위치로 카메라 속도에 맞게 이동
            this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, cameraSpeed * Time.deltaTime);
        }
    }
}
