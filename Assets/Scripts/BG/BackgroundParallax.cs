using UnityEngine;

public class BackgroundParallax : MonoBehaviour
{
    //Parallax Backgrounds
    [SerializeField] private Vector2 parallaxEffectMultiplier;
    private Transform cameraTransform;
    private Vector3 lastCameraPosition;

    private void Start()
    {
        //Parallax Backgrounds
        cameraTransform = Camera.main.transform;
        lastCameraPosition= cameraTransform.position;
    }

    private void LateUpdate()
    {
        //Parallax Backgrounds
        Vector3 deltaMovement = cameraTransform.position - lastCameraPosition;
        transform.position += new Vector3(deltaMovement.x * parallaxEffectMultiplier.x, deltaMovement.y * parallaxEffectMultiplier.y, 0);
        lastCameraPosition= cameraTransform.position;
    }
}
