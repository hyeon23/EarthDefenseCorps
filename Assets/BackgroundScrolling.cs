using UnityEngine;

public class BackgroundScrolling : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] Transform[] backgrounds;

    float leftPosX = 0f;
    float rightPosX = 0f;
    float xScreenHalfSize;
    float yScreenHalfSize;

    void Start()
    {
        //Scrolling
        yScreenHalfSize = Camera.main.orthographicSize;
        xScreenHalfSize = yScreenHalfSize * Camera.main.aspect;

        leftPosX = -(xScreenHalfSize * 2) * backgrounds.Length;
        rightPosX = xScreenHalfSize * 2;
    }
    private void Update()
    {
        //Scrolling
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
