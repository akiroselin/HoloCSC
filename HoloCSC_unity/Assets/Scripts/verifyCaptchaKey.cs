using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class verifyCaptchaKey : MonoBehaviour
{
    // Start is called before the first frame update
    public static Boolean EffectCaptchaKey = false;
    public Text positionText;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Vector3 position = transform.position;

        if (position.x > -1.2f && position.x < 0 &&
           position.y > 0.045f &&
           position.z > 0.4f && position.z < 1.25f
           )
        {
            EffectCaptchaKey = true;
            positionText.text = positionText.text = string.Format("({0:0.00}, {1:0.00}, {2:0.00})", position.x, position.y, position.z) + "Verified success";
        }
        else
        {
            EffectCaptchaKey = false;
            positionText.text = positionText.text = string.Format("({0:0.00}, {1:0.00}, {2:0.00})", position.x, position.y, position.z) + "Verified failed";
        }
    }


}
