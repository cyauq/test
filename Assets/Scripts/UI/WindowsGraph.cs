using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;

public class WindowsGraph : MonoBehaviour
{

    [SerializeField] private Sprite circleSprite;
    public RectTransform graphContainer;

    public Text messageLabel;
    public RectTransform dataContainer;
    public GameObject itemInfoObject;
    public GameObject itemGraph;
    public GameObject scrollBar;

    // Start is called before the first frame update
    void Awake()
    {
        //graphContainer = transform.Find("graphContainer").GetComponent<RectTransform>();
        messageLabel.text = "";
        Debug.Log("Check player on Script WindowsGraph //////////////////////////////////////////// ");
    }

    public void ShowGraph(DataModelResponse? dataSave)
    {
        ClearGraph();
        Debug.Log("Check player on Script WindowsGraph เริ่ม ลูป ShowGraph //////////////////////////////////////////// ");
        
        // ตรวจสอบข้อมูลที่ได้รับมา
        List<SaveDataModel> revertData = dataSave?.data;

        if (revertData == null)
        {
            Debug.LogError("Check player revertData is null! No data received.");
            return; // ถ้าข้อมูลเป็น null ให้หยุดการทำงาน
        }
        else if (revertData.Count == 0)
        {
            Debug.LogWarning("Check player revertData is empty! Data list has no entries.");
        }
        else
        {
            Debug.Log($"Check player revertData contains {revertData.Count} entries.");
            foreach (var entry in revertData)
            {
                Debug.Log($"Check player Entry: game_id={entry.game_id}, total_score={entry.total_score}, timer_gameplay={entry.timer_gameplay}");
            }
        }

        revertData.Reverse();
        float graphHeight = graphContainer.sizeDelta.y;
        float yMaximun = 100f;
        float xSize = 50f;

        if (revertData.Count == 0)
        {
            Debug.Log("no data!!!");
            messageLabel.text = "ยังไม่มีข้อมูล";
            Debug.Log("Check player รูปไม่มีข้อมูล //////////////////////////////////////////// ");
        }
        else
        {
            Debug.Log(" Check player_size " + revertData.Count + 1 * xSize);
            //scrollBar.GetComponent<Scrollbar>().onValueChanged.Invoke(revertData.Count * xSize);
            float width = (revertData.Count + 1) * xSize;
            float height = 300f;
            graphContainer.GetComponent<RectTransform>().sizeDelta = new Vector2(width, height);
            GameObject lastCircleGameObject = null;
            messageLabel.text = "";
            
            for (int i = 0; i < revertData.Count; i++)
            {
                Debug.Log($"Check player Processing entry {i}: game_id={revertData[i].game_id}, total_score={revertData[i].total_score}, timer_gameplay={revertData[i].timer_gameplay}");
                
                int _score = 0;
                if (revertData[i].game_id == 1)
                {
                    // runner game
                    _score = (int)(revertData[i].total_score);
                    Debug.Log($"Check player Game ID 1 (runner game), Score: {_score}");
                }
                else
                {
                    // maze game
                    _score = (int)(revertData[i].timer_gameplay);
                    Debug.Log($"Check player Game ID not 1 (maze game), Time: {_score}");
                }
                
                float xPosition = xSize + i * xSize;
                float yPosition = (_score / yMaximun) * graphHeight;           
                GameObject circleGameObject = CreateCircle(new Vector2(xPosition, yPosition), _score.ToString("#.##"));
                
                Debug.Log($"Check player Circle created at: x={xPosition}, y={yPosition}, Score: {_score}");

                if (revertData.Count == 1)
                {
                    lastCircleGameObject = circleGameObject;
                    CreateDotConnection(lastCircleGameObject.GetComponent<RectTransform>().anchoredPosition, circleGameObject.GetComponent<RectTransform>().anchoredPosition);
                }
                else
                {
                    if (lastCircleGameObject != null)
                    {
                        CreateDotConnection(lastCircleGameObject.GetComponent<RectTransform>().anchoredPosition, circleGameObject.GetComponent<RectTransform>().anchoredPosition);
                        Debug.Log("Check player Dot connection created between last and current circle.");
                    }
                }
                lastCircleGameObject = circleGameObject;
                CreateLabelInfo(revertData[i]);
            }
        }
        Debug.Log("Check player on Script WindowsGraph จบ ลูป ShowGraph //////////////////////////////////////////// ");
    }

    private void ClearGraph()
    {
        foreach (Transform t in graphContainer)
        {
            Destroy(t.gameObject);
        }

        foreach (Transform t in dataContainer)
        {
            Destroy(t.gameObject);
        }
    }

    GameObject CreateCircle(Vector2 anchoredPosition, string data)
    {
        GameObject gameObject = Instantiate(itemGraph);
        gameObject.transform.SetParent(graphContainer, false);
        gameObject.GetComponent<ItemGraph>().txtInfo.text = data;
        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = anchoredPosition;
        rectTransform.sizeDelta = new Vector2(20, 20);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(0, 0);        
        return gameObject;
    }

    void CreateLabelInfo(SaveDataModel? info)
    {        
        GameObject item = Instantiate(itemInfoObject);
        item.transform.SetParent(dataContainer, false);
        item.GetComponent<DataInfoItemUI>().SetDescription(info);
    }

    void CreateDotConnection(Vector2 dotPositionA, Vector2 dotPositionB)
    {
        GameObject gameObject = new GameObject("gotConnection", typeof(Image));
        gameObject.transform.SetParent(graphContainer, false);
        gameObject.GetComponent<Image>().color = new Color(1, 1, 1, 0.5f);
        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        Vector2 dir = (dotPositionB - dotPositionA).normalized;
        float distance = Vector2.Distance(dotPositionA, dotPositionB);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(0, 0);
        rectTransform.sizeDelta = new Vector2(distance, 3);
        rectTransform.anchoredPosition = dotPositionA + dir * distance * 0.5f;
        rectTransform.localEulerAngles = new Vector3(0, 0, UtilsClass.GetAngleFromVectorFloat(dir));

    }

    public void OnChangedValue()
    {

    }
}
