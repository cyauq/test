using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Analytic_Graphplayer : MonoBehaviour
{
    public GameObject graphWindows;
    public GameObject background; // ประกาศตัวแปร background
    public Canvas canvas; // อ้างอิงถึง Canvas เพื่อใช้ในการแปลงพิกัด

    void Start()
    {
        RectTransform rectTransform = background.GetComponent<RectTransform>();
        Debug.Log($"เช็คเส้นทาง Width: {rectTransform.rect.width}, Height: {rectTransform.rect.height}");
        Debug.Log($"เช็คเส้นทาง Position X: {rectTransform.localPosition.x}, Position Y: {rectTransform.localPosition.y}");
        string levelName = PlayerPrefs.GetString("CurrentLevelName", "");
        ShowPlayerPath(levelName);  // เรียกฟังก์ชันเพื่อแสดงเส้นทางของผู้เล่น
    }

    public void ShowPlayerPath(string levelName)
    {
        Debug.Log($"เช็คเส้นทาง Checking for player path data in level: {levelName}");

        if (RollerBall.levelPaths.ContainsKey(levelName))
        {
            List<List<Vector3>> pathsForLevel = RollerBall.levelPaths[levelName];
            Debug.Log($"เช็คเส้นทาง Found {pathsForLevel.Count} recorded paths for level: {levelName}");

            if (pathsForLevel != null && pathsForLevel.Count > 0)
            {
                Debug.Log($"เช็คเส้นทาง Displaying player paths for level: {levelName}");
                ShowPlayerPathGraph(pathsForLevel);
            }
            else
            {
                Debug.LogWarning($"เช็คเส้นทาง No path data found for level: {levelName}");
            }
        }
        else
        {
            Debug.LogWarning($"เช็คเส้นทาง No path data found for level: {levelName}");
        }
    }

    public void ShowPlayerPathGraph(List<List<Vector3>> playerPaths)
    {
        Debug.Log($"เช็คเส้นทาง Displaying {playerPaths.Count} player paths...");

        foreach (var path in playerPaths)
        {
            if (path.Count == 0)
            {
                Debug.LogWarning("เช็คเส้นทาง Empty path encountered. Skipping.");
                continue;
            }

            Debug.Log($"เช็คเส้นทาง Drawing path with {path.Count} points.");
            for (int i = 0; i < path.Count - 1; i++)
            {
                Debug.Log($"เช็คเส้นทาง Drawing line from {path[i]} to {path[i + 1]}.");
                
                // วาดเส้นใน World Space
                DrawLine(path[i], path[i + 1], Color.blue);
            }
        }

        Debug.Log("เช็คเส้นทาง Finished displaying all paths.");
    }

    private void DrawLine(Vector3 start, Vector3 end, Color color)
    {
        Debug.Log($"เช็คเส้นทาง Creating line from {start} to {end} with color {color}.");

        GameObject line = new GameObject("Line");
        LineRenderer lr = line.AddComponent<LineRenderer>();
        lr.useWorldSpace = true; // ใช้ World Space
        lr.material = new Material(Shader.Find("Sprites/Default"));
        lr.startColor = color;
        lr.endColor = color;
        lr.startWidth = 0.1f;
        lr.endWidth = 0.1f;
        lr.SetPosition(0, start);
        lr.SetPosition(1, end);

        Debug.Log("เช็คเส้นทาง Line created successfully.");
    }

    public void OnExit()
    {
        SceneManager.LoadScene("06_Show scor_AI_Q1", LoadSceneMode.Single);
    }
}
