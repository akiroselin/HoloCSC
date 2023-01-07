using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{   
    public static GameManager Instance;

    void Awake()
    {
        Instance = this;
    }

    public GameState State;


    void Start ()
    {
        UpdateGameState(GameState.Start);
    }


    public void UpdateGameState(GameState newstate) { 
        State = newstate; 

        switch (newstate)
        {   
            case GameState.Start:
                break;
            case GameState.Captcha:
                HandleCaptcha();
                break;
            case GameState.Scan:
                HandleScan();
                break;
            case GameState.Upload:
                HandleUpload();
                break;
        }

    }

    private void HandleCaptcha()
    {
        State = GameState.Captcha;
    }

    private void HandleScan()
    {
        State = GameState.Scan;
    }

    private void HandleUpload() 
    {
        State = GameState.Upload;
    }
}

public enum GameState {
    Start,
    Captcha,
    Scan,
    Upload
}