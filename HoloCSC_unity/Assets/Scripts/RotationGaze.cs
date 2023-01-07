using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;

public class RotationGaze : MonoBehaviour
{
    // Field for the GazeProvider instance
    private GazeProvider gazeProvider;

    // Field for the rotation speed
    public float rotationSpeed = 5.0f;

    // Use this for initialization
    void Start()
    {

    }

    void Update()
    {
        // Get the gaze direction from the GazeProvider instance
        Vector3 gazeDirection = gazeProvider.GazeDirection;

        // Rotate the game object based on the gaze direction and the rotation speed
        transform.Rotate(gazeDirection * rotationSpeed * Time.deltaTime);
    }
}
