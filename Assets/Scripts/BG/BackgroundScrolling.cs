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
        //������ ����
        //-Camera.main.orthographicSize�� ī�޶� ���� ���� ���� ������ ��Ÿ��
        yScreenHalfSize = Camera.main.orthographicSize;
        //������ ����
        //-Camera.main.aspect�� ���� ���κ� ��Ÿ��
        //-������ ���ݿ� �������Ƿ� ������ ������ ��
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
