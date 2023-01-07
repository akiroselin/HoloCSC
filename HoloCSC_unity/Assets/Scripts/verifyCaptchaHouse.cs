using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class verifyCaptchaHouse : MonoBehaviour
{
    public static Boolean EffectCaptchaHouse = false;
    // Start is called before the first frame update
    public Text rotationText;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Quaternion rotation = transform.rotation;
        Vector3 checkAngles  = rotation.eulerAngles;
        float yAngle = Math.Abs(checkAngles.y % 360);

        if (yAngle< 195 && yAngle> 165)
        {
            EffectCaptchaHouse = true;
            rotationText.text =  string.Format("({0:0.00}, {1:0.00}, {2:0.00})", checkAngles.x, checkAngles.y, checkAngles.z) + "Verified success";
        }
        else
        {
            EffectCaptchaHouse = false;
            rotationText.text = string.Format("({0:0.00}, {1:0.00}, {2:0.00})", checkAngles.x, checkAngles.y, checkAngles.z) + "Verified failed";
        }
    }
}
