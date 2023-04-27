using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundSystem : MonoBehaviour
{
    //Parallax Background
    [SerializeField] private Vector2 parallaxEffectMultiplier;
    private Transform cameraTransform;
    private Vector3 lastCameraPosition;
    
    [SerializeField] float speed;
    [SerializeField] Transform[] backgrounds;

    float leftPosX = 0f;
    float rightPosX = 0f;
    float xScreenHalfSize;
    float yScreenHalfSize;

    private void Start()
    {
        //Parallax
        cameraTransform = Camera.main.transform;
        lastCameraPosition= cameraTransform.position;

        //Scrolling
        yScreenHalfSize = Camera.main.orthographicSize;
        xScreenHalfSize = yScreenHalfSize * Camera.main.aspect;

        leftPosX = -(xScreenHalfSize * 2) * backgrounds.Length;
        rightPosX = xScreenHalfSize * 2;
    }

    private void LateUpdate()
    {
        //Parallax
        Vector3 deltaMovement = cameraTransform.position - lastCameraPosition;
        transform.position += new Vector3(deltaMovement.x * parallaxEffectMultiplier.x, deltaMovement.y * parallaxEffectMultiplier.y, 0);
        lastCameraPosition= cameraTransform.position;
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

    //Scrolling Background
}
