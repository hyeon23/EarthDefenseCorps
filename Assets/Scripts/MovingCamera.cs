using UnityEngine;

public class MovingCamera : MonoBehaviour
{
    [SerializeField]
    private GameObject target;
    [SerializeField]
    private float cameraSpeed;
    private Vector3 targetPosition;

    private void Awake()
    {
        FixedCameraResolution();
    }

    private void FixedUpdate()
    {
        if (target.gameObject != null)
        {
            // target 위치 찾기
            targetPosition.Set(transform.position.x, target.transform.position.y, transform.position.z);
            // target 위치로 카메라 속도에 맞게 이동
            this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, cameraSpeed * Time.deltaTime);
        }
    }

    private void FixedCameraResolution()
    {
        //16:9 고정 해상도 구현
        Camera cam = Camera.main;
        Rect rt = cam.rect;

        // 현재 세로 모드 9:16
        float scale_height = ((float)Screen.width / Screen.height) / ((float)9 / 16); // (가로 / 세로)
        float scale_width = 1f / scale_height;

        if (scale_height < 1)
        {
            rt.height = scale_height;
            rt.y = (1f - scale_height) / 2f;
        }
        else
        {
            rt.width = scale_width;
            rt.x = (1f - scale_width) / 2f;
        }

        cam.rect = rt;
    }
}
