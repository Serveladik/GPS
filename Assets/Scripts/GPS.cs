using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using TMPro;

public class GPS : MonoBehaviour
{
    public TextMeshProUGUI gpsStatus;
    public TextMeshProUGUI gpsData;
    void Start()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.CoarseLocation) || !Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
          Permission.RequestUserPermission(Permission.CoarseLocation);
          Permission.RequestUserPermission(Permission.FineLocation);
        }
        StartCoroutine(StartGPS());
    }

    void Update()
    {
        UpdateGPS();
    }

    void UpdateGPS()
    {
        Debug.Log("GOIN1");
        if(Input.location.status == LocationServiceStatus.Running)
        {
            Debug.Log("GOIN2");
            gpsStatus.text = "" + "\n" +
            "Latitude/Longitude: " + Input.location.lastData.latitude + "\u00B0" + ", " + Input.location.lastData.longitude + "\u00B0";
            gpsData.text = "Horizontal Accuracy: " + Input.location.lastData.horizontalAccuracy + "m" + "\n" +
            "Altitude: " + Input.location.lastData.altitude + "m" + "\n" +
            "Vertical Accuracy: " + Input.location.lastData.verticalAccuracy + "m" + "\n" +
            "Heading: " + Input.compass.trueHeading.ToString("#.#") + "\u00B0" + "\n" +
            "Heading Accuracy: " + Input.compass.headingAccuracy + "\u00B0";
        }
    }
    IEnumerator StartGPS()
    {
        Input.compass.enabled = true;
        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
        {
            gpsStatus.text = "GPS stauts: GPS is not enabled";
            Debug.LogError("GPS is not enabled");
            yield break;
        }

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            gpsStatus.text = "GPS stauts: Timed out";
            print("Timed out");
            yield return StartCoroutine(StartGPS());
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            gpsStatus.text = "GPS stauts: Unable to determine device location";
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            gpsStatus.text = "" + "\n" +
            "Latitude/Longitude: " + Input.location.lastData.latitude + ", " + Input.location.lastData.longitude + "\n" +
            "Horizontal Accuracy: " + Input.location.lastData.horizontalAccuracy + "\n" +
            "Altitude: " + Input.location.lastData.altitude + "\n" +
            "Horizontal Accuracy: " + Input.location.lastData.verticalAccuracy + "\n" +
            "Heading: " + Input.compass.trueHeading.ToString("#.#") + "\n" +
            "Heading Accuracy: " + Input.compass.headingAccuracy;
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }
    }
}
