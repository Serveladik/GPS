using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using ARLocation.MapboxRoutes;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Android;
using TMPro;
using UnityEngine.Networking;
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARFoundation;
using SimpleJSON;
using Unity.VisualScripting;

public class GPS : MonoBehaviour
{
    public static GPS Instance;

    [Header("Geospatial")] [SerializeField]
    private ARAnchorManager _arAnchorManager;

    [SerializeField] public const string apiKey = "AIzaSyCXBBKmcWn_l8dVHl7pwZcZoN4C-2WeGzQ";
    public static string lang = "en";
    public string searchInput;
    public int searchRadius = 500;
    string queryURL;

    public enum SearchType
    {
        keyword = 0,
        name = 1
    }

    public SearchType searchType;
    public Language language;
    public TMP_Dropdown searchTypeDropdown;
    public GameObject arrowPrefab;
    private CancellationTokenSource _ct;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }

        searchTypeDropdown.onValueChanged.AddListener(delegate { OnDropdownValueChanged(searchTypeDropdown); });

        FillSeacrhTypeDropdown();
        StartCoroutine(GetLanguage());
    }

    public async void SendQuery()
    {
        var altitude = Input.location.lastData.altitude;
        var latitude = Input.location.lastData.latitude;
        var longitude = Input.location.lastData.longitude;
        // queryURL =
        //     $"https://maps.googleapis.com/maps/api/place/nearbysearch/json?key={apiKey}&location={latitude},{longitude}&radius={searchRadius}&searchType={searchInput}&language={lang}";
        // Debug.Log("URL:" + queryURL);
        var token = this._ct.Token;
        var placesData = await RequestPlacesDataAsync(latitude, longitude, token);
        if (placesData.ok)
        {
            //StartCoroutine(GetQuery(queryURL));
            await PlaceAnchorAsync(placesData.waypoints, altitude, token);
        }
        
    }
    
    public async UniTask<(bool ok, List<PlacesData> waypoints)> RequestPlacesDataAsync(double lat, double lng, CancellationToken ct)
    {
        var url = $"https://maps.googleapis.com/maps/api/place/nearbysearch/json?" +
                  $"key={apiKey}" +
                  $"&location={lat}," +
                  $"{lng}" +
                  $"&radius={searchRadius}" +
                  $"&searchType={searchInput}" +
                  $"&language={lang}";
        try
        {
            var request = await UnityWebRequest.Get(url).SendWebRequest().WithCancellation(ct);
            if (request.result != UnityWebRequest.Result.Success) return (false, default);
            var json = request.downloadHandler.text;
            var response = JsonUtility.FromJson<PlaceSDKResponse>(json);
            return (response.status == "OK", response.results);
        }
        catch (Exception e)
        {
            Debug.LogError(e);
            return (false, default);
        }
    }
    

    private async Task PlaceAnchorAsync(List<PlacesData> placesData, double altitude, CancellationToken ct) 
    {
        Debug.Log(placesData.Count);
        float timeoutSeconds = 10f;
        for (var i = 0; i < placesData.Count; i++)
        {
            Debug.Log("placing anchors");
            var point = placesData[i];
            Debug.Log("point");
            var placed = Place(arrowPrefab, new GeospatialPose
            {
                Latitude = point.geometry.location.lat,
                Longitude = point.geometry.location.lng,
                Altitude = altitude,
            }, true);
            Debug.Log("placing");
            if (placed == null) continue;
            placed.gameObject.SetActive(false);
            var timeoutTokenSource = new CancellationTokenSource();
            timeoutTokenSource.CancelAfterSlim(TimeSpan.FromSeconds(timeoutSeconds));
            var linkedTokenSource = CancellationTokenSource.CreateLinkedTokenSource(ct, timeoutTokenSource.Token);
            try
            {
                await UniTask.WaitUntil(() => placed.terrainAnchorState == TerrainAnchorState.Success,
                    cancellationToken: linkedTokenSource.Token);
                placed.gameObject.SetActive(true);
            }
            catch (OperationCanceledException)
            {
                if (timeoutTokenSource.IsCancellationRequested)
                {
                    Debug.Log("Terrain Anchor Creation timed out.");
                }

                Debug.Log($"Canceled Terrain Anchor State: {placed.terrainAnchorState}");
                Destroy(placed.gameObject);
            }
        }
    }


    double _Latitude;
    double _Longitude;
    double _Altitude;

    IEnumerator GetQuery(string URL)
    {

        using (UnityWebRequest www = UnityWebRequest.Get(URL))
        {
            yield return www.SendWebRequest();
            //Debug.Log(www.downloadHandler.text);

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
                Debug.LogError("Request error");
            }
            else
            {
                //JSONNode root = JSONNode.Parse(www.downloadHandler.text);
                //JSONArray nodes = root["results"].AsArray;
                ////JSONObject LAT = nodes;
                //foreach(JSONNode n in root)
                //{
                //    foreach(JSONNode j in n)
                //    {
                //        string geo = j["lat"];
                //        string country = j["lng"];
                //        Debug.LogError(geo);
                //        Debug.LogError(country);
                //    }
                //    // [ ... ]
                //}
                //JSONObject node2 = (JSONObject)JSON.Parse(nodes);
                //foreach (JSONNode node in nodes)
                //{
                //	pin.id = node["id"];
                //	pin.name = node["name"];
                //	pin.description = node["description"];
                //	pin.image = node["image"];
                //	pin.type = node["type_id"];
                //	pin.difficulty = node["difficulty_id"];
                //	pin.rarity = node["rarity_id"];
                //	pin.creator = node["creator_username"];
                //	JSONObject location = node["location"].AsObject;
                //	pin.lat = location["lat"];
                //	pin.lon = location["lon"];
//
                //	PinInstantiate.Instance.SpawnPinAR(pin);
                //	Debug.LogError("Spawned: " + pin.name);
                //}
                //_Latitude = root["lat"].AsDouble;
                //_Longitude = root["lng"].AsDouble;
                //_Altitude = 3;
            }
        }
    }

    private ARGeospatialAnchor Place(GameObject obj, GeospatialPose pose, bool b)
    {
        var quaternion = Quaternion.AngleAxis(180f - (float) pose.Heading, Vector3.up);

        var anchor = _arAnchorManager.AddAnchor(pose.Latitude, pose.Longitude, pose.Altitude, quaternion);
        if (anchor == null) return null;
        Instantiate(obj, anchor.transform);
        Debug.LogError("PLACED:" + anchor.transform);
        return anchor;
    }

    #region Search Type Filter

    public void FillSeacrhTypeDropdown()
    {
        for (int i = 0; i < System.Enum.GetValues(typeof(SearchType)).Length; i++)
        {
            string enumName = (Enum.GetName(typeof(SearchType), i));
            searchTypeDropdown.options.Add(new TMP_Dropdown.OptionData() {text = enumName});
        }
    }

    void OnDropdownValueChanged(TMP_Dropdown change)
    {
        searchType = (SearchType) change.value;
    }

    #endregion

    #region Language

    IEnumerator GetLanguage()
    {
        foreach (var item in Languages)
        {
            Debug.Log(language.ToString() + " : " + item.Value.ToString().Trim());
            if (language.ToString().Contains(item.Value.ToString().Trim()))
            {
                lang = item.Key.ToString();
                Debug.LogError(lang);
                yield break;
            }
        }
    }

    public enum Language
    {
        Arabic,
        Albanian,
        Azerbaijan,
        Bengali,
        Bosnian,
        Burmese,
        Czech,
        Chinese,
        Castilian,
        CentralKhmer,
        Danish,
        Dutch,
        English,
        French,
        Finnish,
        German,
        Georgian,
        Greek,
        Gujarati,
        Hebrew,
        Hindi,
        Hungarian,
        Indonesian,
        Icelandic,
        Italian,
        Irish,
        Japanese,
        Kazakh,
        Korean,
        Lao,
        Latvian,
        Lithuanian,
        Mongolian,
        Moldovan,
        Norwegian,
        Polish,
        Portuguese,
        Persian,
        Slovak,
        Serbian,
        Swedish,
        Tagalog,
        Thai,
        Telugu,
        Turkmen,
        Turkish,
        Valencian,
        Vietnamese,
        TraditionalChinese,
        SimplifiedChinese,
        TaiwaneseMandarin,
    };

    public static Dictionary<string, string> Languages = new Dictionary<string, string>()
    {
        {"ar", "Arabic	        "},
        {"sq", "Albanian        "},
        {"az", "Azerbaijani     "},
        {"bn", "Bengali         "},
        {"bs", "Bosnian	        "},
        {"my", "Burmese         "},
        {"cs", "Czech           "},
        {"zh", "Chinese         "},
        {"es", "Castilian       "},
        {"km", "CentralKhmer   "},
        {"da", "Danish          "},
        {"nl", "Dutch           "},
        {"en", "English         "},
        {"fr", "French          "},
        {"fi", "Finnish         "},
        {"de", "German          "},
        {"ka", "Georgian        "},
        {"el", "Greek           "},
        {"gu", "Gujarati        "},
        {"he", "Hebrew	        "},
        {"hi", "Hindi           "},
        {"hu", "Hungarian       "},
        {"id", "Indonesian      "},
        {"is", "Icelandic       "},
        {"it", "Italian         "},
        {"ga", "Irish           "},
        {"ja", "Japanese        "},
        {"kk", "Kazakh	        "},
        {"ko", "Korean          "},
        {"lo", "Lao             "},
        {"lv", "Latvian         "},
        {"lt", "Lithuanian      "},
        {"mn", "Mongolian       "},
        {"ro", "Moldovan        "},
        {"nb", "Norwegian       "},
        {"pl", "Polish          "},
        {"pt", "Portuguese      "},
        {"fa", "Persian         "},
        {"sk", "Slovak          "},
        {"sr", "Serbian	        "},
        {"sv", "Swedish	        "},
        {"tl", "Tagalog         "},
        {"th", "Thai            "},
        {"te", "Telugu          "},
        {"tk", "Turkmen	        "},
        {"tr", "Turkish	        "},
        {"ca", "Valencian       "},
        {"vi", "Vietnamese      "},
        {"zh_Hant", "TraditionalChinese    "},
        {"zh_Hans", "SimplifiedChinese     "},
        {"zh_TW", "TaiwaneseMandarin       "},
    };

    #endregion

    public TextMeshProUGUI gpsStatus;
    public TextMeshProUGUI gpsData;

    void Start()
    {
        _ct = new CancellationTokenSource();
        
        if (!Permission.HasUserAuthorizedPermission(Permission.CoarseLocation) ||
            !Permission.HasUserAuthorizedPermission(Permission.FineLocation))
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
        if (Input.location.status == LocationServiceStatus.Running)
        {
            gpsStatus.text = "" + "\n" +
                             "Latitude/Longitude: " + Input.location.lastData.latitude + "\u00B0" + ", " +
                             Input.location.lastData.longitude + "\u00B0";
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
                             "Latitude/Longitude: " + Input.location.lastData.latitude + ", " +
                             Input.location.lastData.longitude + "\n" +
                             "Horizontal Accuracy: " + Input.location.lastData.horizontalAccuracy + "\n" +
                             "Altitude: " + Input.location.lastData.altitude + "\n" +
                             "Horizontal Accuracy: " + Input.location.lastData.verticalAccuracy + "\n" +
                             "Heading: " + Input.compass.trueHeading.ToString("#.#") + "\n" +
                             "Heading Accuracy: " + Input.compass.headingAccuracy;
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " +
                  Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " +
                  Input.location.lastData.timestamp);
        }
    }
}

[Serializable]
public struct Geometry
{
    public Location location;
    public Viewport viewport;
}

[Serializable]
public struct Location
{
    public double lat;
    public double lng;
}

[Serializable]
public struct Northeast
{
    public double lat;
    public double lng;
}

[Serializable]
public struct OpeningHours
{
    public bool open_now;
}

[Serializable]
public struct Photo
{
    public int height;
    public List<string> html_attributions;
    public string photo_reference;
    public int width;
}

[Serializable]
public struct PlusCode
{
    public string compound_code;
    public string global_code;
}

[Serializable]
public struct PlacesData
{
    public string business_status;
    public Geometry geometry;
    public string icon;
    public string icon_background_color;
    public string icon_mask_base_uri;
    public string name;
    public OpeningHours opening_hours;
    public List<Photo> photos;
    public string place_id;
    public PlusCode plus_code;
    public double rating;
    public string reference;
    public string scope;
    public List<string> types;
    public int user_ratings_total;
    public string vicinity;
}

[Serializable]
public struct PlaceSDKResponse
{
    public List<object> html_attributions;
    public List<PlacesData> results;
    public string status;
}

[Serializable]
public struct Southwest
{
    public double lat;
    public double lng;
}

[Serializable]
public struct Viewport
{
    public Northeast northeast;
    public Southwest southwest;
}