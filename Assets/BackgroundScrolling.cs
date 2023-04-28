using UnityEngine;

public class BackgroundScrolling : MonoBehaviour
{
    [SerializeField] Transform[] backgrounds;
    [SerializeField] float speed;

    float leftPosX = 0f;
    float rightPosX = 0f;

    float xScreenHalfSize;
    float yScreenHalfSize;

    void Start()
    {
        //Scrolling
        //세로의 절반
        //-Camera.main.orthographicSize는 카메라 뷰의 세로 절반 영역을 나타냄
        yScreenHalfSize = Camera.main.orthographicSize;
        //가로의 절반
        //-Camera.main.aspect는 가로 세로비를 나타냄
        //-세로의 절반에 곱했으므로 가로의 절반이 됨
        xScreenHalfSize = yScreenHalfSize * Camera.main.aspect;

        leftPosX = -(xScreenHalfSize * 2) * backgrounds.Length;
        rightPosX = xScreenHalfSize * 2;
    }
    private void Update()
    {
        for (int i = 0; i < backgrounds.Length; i++)
        {
            backgrounds[i].position += new Vector3(-speed, 0, 0) * Time.deltaTime;

            if (backgrounds[i].position.x >= rightPosX)
            {
                Vector3 nextPos = backgrounds[i].position;
                nextPos = new Vector3(nextPos.x + leftPosX, nextPos.y, nextPos.z);
                backgrounds[i].position = nextPos;
            }
        }
    }
}
