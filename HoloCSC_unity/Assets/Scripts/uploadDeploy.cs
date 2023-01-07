using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Diagnostics;
using UnityEngine.Networking;

public class uploadDeploy : MonoBehaviour
{
    public static string pcIpAddress = "192.168.8.190"; // Replace with the IP address of the PC
    public static int pcPort = 8080; // Replace with the port number of the PC
    string url = $"http://{pcIpAddress}:{pcPort}/message";
    void Start()
    {
        // Create an HTTPClient instance
        HttpClient client = new HttpClient();

        // Set the target URL for the request


        // Create the request body as a string
        string requestBody = "Hello from the Hololens app!";

        // Set the content of the request to the request body string
        HttpContent content = new StringContent(requestBody);

        // Send an HTTP POST request to the PC
        client.PostAsync(url, content).Wait();
    }

    public void getmodel(string scannedmodel)
    {
        //specify which model is chosen to deploy
        string url = $"http://{pcIpAddress}:{pcPort}/?modelname=scannedmodel";
        UnityWebRequest request = UnityWebRequest.Get(url);
        // Send the request
        request.SendWebRequest();
    }


    public void deploymodel(string scannedmodel)
    {
        //specify which model is chosen to deploy
        string url = $"http://{pcIpAddress}:{pcPort}/?modelname=scannedmodel";
        string requestBody = "request body";
        UnityWebRequest request = UnityWebRequest.Put(url, requestBody);
        // Send the request
        request.SendWebRequest();
    }

    //void Update()
    //{
    //    // Check if the request is complete
    //    if (request.isDone)
    //    {
    //        // Check for any errors
    //        if (request.isHttpError || request.isNetworkError)
    //        {
    //            Debug.LogError(request.error);
    //        }
    //        else
    //        {
    //            // Access the response body
    //            string responseBody = request.downloadHandler.text;

    //            Debug.Log(responseBody);
    //        }
    //    }
    //}
}
