using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class verifyResult : MonoBehaviour
{
    public GameObject modelSuccess;
    public GameObject modelFailed;
    public void execute()
    {
        // Get the position of the game object
        if (verifyCaptchaKey.EffectCaptchaKey && verifyCaptchaHouse.EffectCaptchaHouse)
        {
            modelSuccess.SetActive(true);
            modelFailed.SetActive(false);
            SceneManager.LoadScene("StartScene");
        }

        else
        {
            modelFailed.SetActive(true);
            modelSuccess.SetActive(false);
        }

    }
}
