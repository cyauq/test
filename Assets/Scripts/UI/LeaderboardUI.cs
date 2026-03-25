using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

[System.Serializable]
public class LeaderItem {
    public string user_id;
    public long total_score;
    public string last_played;
    public int rank_no;
}

[System.Serializable]
public class LeaderResponse {
    public List<LeaderItem> data;
}

[System.Serializable]
public class ApiLeaderboardItem {
    public string user_id;
    public string sum_total_score;
    public string rank;
}
[System.Serializable]
public class ApiMe {
    public string user_id;
    public string sum_total_score;
    public string rank;
}

[System.Serializable]
public class ApiLeaderboardResponse {
    public string status;
    public List<ApiLeaderboardItem> leaderboard;
    public ApiMe me;
    public string message;
}

public class LeaderboardUI : MonoBehaviour
{
    [Header("API")]
    public string endpoint = "https://api1.suratec.co.th/top5SumTotalScore";
    public string userIdFilter = "cop";
    public float requestTimeout = 10f;

    [Header("Highlight")]
    public string highlightUserId = "cop7";                    // user ที่อยากเน้น (จะอัปเดตจาก API/me ให้เอง)
    public Color highlightTextColor = new Color(1f, 0.85f, 0.1f, 1f); // สีเหลืองทองนุ่มๆ
    public Color normalTextColor    = Color.white;                   // สีปกติของแถวอื่น
    public Color myRowBgColor       = new Color(0.80f, 1f, 0.80f, 0.35f); // สีพื้นหลังเวลาบอก (You)

    [Header("Demo / Test Mode")]
    [Tooltip("เปิดเพื่อใช้ข้อมูลจำลอง (จะไม่เรียก API)")]
    public bool demoMode = false;
    [Tooltip("สุ่มคะแนนเล็กน้อยทุกครั้งเพื่อดูการเปลี่ยนแปลง")]
    public bool demoJitter = true;

    [Header("Behavior")]
    public bool autoLoadOnStart = true;

    [Header("UI References")]
    public Transform content;        // ชี้ไปที่ Content
    public GameObject rowPrefab;     // Prefab "Row"
    public TextMeshProUGUI title;    // หัวข้อ (optional)

    void Awake()
    {
        // ถ้า PlayerPrefs มีค่า user_id ให้โหลดมาใช้
        userIdFilter = PlayerPrefs.GetString("user_id", "cop");
        highlightUserId = PlayerPrefs.GetString("user_id", highlightUserId);
        Debug.Log("[LB] ใช้ user_id จาก PlayerPrefs => " + userIdFilter);
    }

    void Start()
    {
        Debug.Log("[LB] Start()");
        if (autoLoadOnStart) Refresh();
    }

    public void Refresh()
    {
        userIdFilter = PlayerPrefs.GetString("user_id", "cop");
        Debug.Log("[LB] Refresh user_id = " + userIdFilter);
        StartCoroutine(LoadLeaderboard());
    }

    IEnumerator LoadLeaderboard()
    {
        Debug.Log("[LB] LoadLeaderboard() demoMode=" + demoMode);

        // ล้างของเก่า
        if (content != null)
        {
            for (int i = content.childCount - 1; i >= 0; i--)
                Destroy(content.GetChild(i).gameObject);
            yield return null; // รอ 1 เฟรม
        }

        if (title) title.text = demoMode ? "DEMO: กำลังสร้างข้อมูล..." : "กำลังโหลด Top 5...";

        // ---------- DEMO ----------
        if (demoMode)
        {
            yield return new WaitForSeconds(0.15f);
            var demo = BuildDemoData();
            RenderRows(demo);
            if (title) title.text = "Scoreboard Top 5 (Demo)";
            yield break;
        }

        // ---------- LIVE ----------
        // ดึง user_id สดๆ ก่อนยิง (กันใช้ค่าเก่า)
        userIdFilter = PlayerPrefs.GetString("user_id", "cop");
        WWWForm form = new WWWForm();
        form.AddField("user_id", userIdFilter);
        Debug.Log($"[LB] POST => user_id={userIdFilter}");

        using (UnityWebRequest www = UnityWebRequest.Post(endpoint, form))
        {
            www.timeout = Mathf.CeilToInt(requestTimeout);
            Debug.Log("[LB] ส่ง Request ไปที่: " + endpoint);

            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Leaderboard error: " + www.error);
                ShowEmpty("โหลดอันดับไม่ได้");
                yield break;
            }

            var json = www.downloadHandler.text;
            Debug.Log("[LB] Raw JSON: " + json);

            // 1) parse ตามรูปแบบใหม่
            ApiLeaderboardResponse api = null;
            try
            {
                api = JsonUtility.FromJson<ApiLeaderboardResponse>(json);
            }
            catch (Exception e)
            {
                Debug.LogError("[LB] JSON parse error: " + e.Message);
                ShowEmpty("รูปแบบข้อมูลผิดพลาด");
                yield break;
            }

            // 2) ตรวจข้อมูล
            if (api == null || api.leaderboard == null || api.leaderboard.Count == 0)
            {
                Debug.LogWarning("[LB] API OK แต่ไม่มี leaderboard");
                ShowEmpty("ไม่มีข้อมูล");
                yield break;
            }

            Debug.Log($"[LB] status={api.status}, count={api.leaderboard.Count}, me={(api.me != null ? api.me.user_id : "null")}");

            // 3) map -> LeaderItem ที่ UI ใช้
            var items = new List<LeaderItem>();
            foreach (var it in api.leaderboard)
            {
                long score = 0; long.TryParse(it.sum_total_score, out score);
                int r = 0; int.TryParse(it.rank, out r);

                items.Add(new LeaderItem
                {
                    user_id = it.user_id,
                    total_score = score,
                    rank_no = r,
                    last_played = "" // ไม่มีใน API
                });

                Debug.Log($"[LB] item: rank={r}, user={it.user_id}, score={score}");
            }

            // 4) เรนเดอร์ Top 5
            RenderRows(items);
            if (title) title.text = "Scoreboard Top 5";

            // 5) แสดงอันดับของเรา
            if (api.me != null && !string.IsNullOrEmpty(api.me.user_id))
            {
                highlightUserId = api.me.user_id;   // <-- ใช้ me จากเซิร์ฟเวอร์เป็นหลัก
                long meScoreVal = 0; long.TryParse(api.me.sum_total_score, out meScoreVal);
                int meRankVal = 0; int.TryParse(api.me.rank, out meRankVal);

                // ⬇️ เพิ่ม: ใช้ me จากเซิร์ฟเวอร์เป็นตัวไฮไลต์
                highlightUserId = api.me.user_id;

                bool meInTop5 = items.Exists(x =>
                    string.Equals(x.user_id, api.me.user_id, System.StringComparison.OrdinalIgnoreCase));

                if (meInTop5)  HighlightMyRowInTop5(api.me.user_id);
                else          AppendMeRow(meRankVal, api.me.user_id, meScoreVal);

                // ใช้ตัวแปรในบล็อคนี้เท่านั้น จะไม่หลุดสโคป
                if (title) title.text = $"Scoreboard Top 5   •   You: #{meRankVal} ({meScoreVal:N0})";

                Debug.Log($"[LB] ME => user={api.me.user_id}, rank={meRankVal}, score={meScoreVal}, meInTop5={meInTop5}");
            }
        }
    }
    // ============ DEMO DATA ============
    List<LeaderItem> BuildDemoData()
    {
        // กำหนดให้มี cop7 แน่นอน
        var baseNow = DateTime.Now;

        // ชุดคะแนนตัวอย่าง
        long s1 = 12540, s2 = 11320, s3 = 9820, s4 = 9175, s5 = 9040;

        if (demoJitter)
        {
            // ขยับคะแนนเล็กน้อยทุกครั้งเพื่อเห็นการเปลี่ยนแปลง
            System.Random r = new System.Random();
            s1 += r.Next(-50, 51);
            s2 += r.Next(-50, 51);
            s3 += r.Next(-50, 51);
            s4 += r.Next(-50, 51);
            s5 += r.Next(-50, 51);
        }

        // สร้างรายการโดยให้ cop7 อยู่ในชุดเสมอ
        var list = new List<LeaderItem> {
            new LeaderItem { user_id = "cop7",       total_score = s2, last_played = baseNow.AddMinutes(-15).ToString("yyyy-MM-dd HH:mm:ss") },
            new LeaderItem { user_id = "cop_master", total_score = s1, last_played = baseNow.AddMinutes(-5).ToString("yyyy-MM-dd HH:mm:ss") },
            new LeaderItem { user_id = "cop_alpha",  total_score = s3, last_played = baseNow.AddMinutes(-45).ToString("yyyy-MM-dd HH:mm:ss") },
            new LeaderItem { user_id = "cop_beta",   total_score = s4, last_played = baseNow.AddHours(-1).ToString("yyyy-MM-dd HH:mm:ss") },
            new LeaderItem { user_id = "cop_gamma",  total_score = s5, last_played = baseNow.AddHours(-3).ToString("yyyy-MM-dd HH:mm:ss") },
        };

        // จัดอันดับ (คะแนนมากก่อน)
        list.Sort((a, b) => b.total_score.CompareTo(a.total_score));
        int rank = 0; long? prev = null;
        for (int i = 0; i < list.Count; i++)
        {
            if (prev == null || list[i].total_score != prev) rank++;
            list[i].rank_no = rank;
            prev = list[i].total_score;
        }
        return list;
    }

    // ============ RENDER ============
    void RenderRows(List<LeaderItem> items)
    {
        // กันพลาดพื้นฐาน
        if (content == null) { Debug.LogError("[LB] content is null"); return; }
        if (rowPrefab == null) { Debug.LogError("[LB] rowPrefab is null"); return; }

        int targetCount = 5;
        int max = Mathf.Min(targetCount, items != null ? items.Count : 0);

        for (int i = 0; i < max; i++)
        {
            var item = items[i];

            // สร้างแถว
            var go = Instantiate(rowPrefab, content);
            go.name = $"Row_{i + 1}";

            // บังคับสเกล/เลย์เอาต์ไม่ให้เพี้ยน
            var goRT = go.transform as RectTransform;
            if (goRT) { goRT.localScale = Vector3.one; }

            var le = go.GetComponent<LayoutElement>();
            if (!le) le = go.AddComponent<LayoutElement>();
            le.minHeight = 120f;
            le.preferredHeight = 120f;
            le.flexibleHeight = 0f;

            // ดึงตัวช่วยจากพรีแฟบ
            var rowItem = go.GetComponent<RowItem>();

            // ---------- Fallback: เตรียมช่องเก็บ TMP และหาเมื่อไม่มี RowItem ----------
            TMP_Text rankTMP = null, nameTMP = null, scoreTMP = null;
            if (rowItem == null)
            {
                foreach (var t in go.GetComponentsInChildren<TMP_Text>(true))
                {
                    var n = t.name;
                    if (rankTMP == null  && n.IndexOf("Rank",  StringComparison.OrdinalIgnoreCase) >= 0) rankTMP  = t;
                    else if (nameTMP == null && n.IndexOf("Name",  StringComparison.OrdinalIgnoreCase) >= 0) nameTMP  = t;
                    else if (scoreTMP == null && n.IndexOf("Score", StringComparison.OrdinalIgnoreCase) >= 0) scoreTMP = t;
                }
            }

            // ---------- คำนวณค่า ----------
            int rank = (item != null && item.rank_no > 0) ? item.rank_no : (i + 1);
            string name = (item != null && !string.IsNullOrEmpty(item.user_id)) ? item.user_id : "-";
            if (name.Length > 18) name = name.Substring(0, 18) + "…";
            string scoreStr = (item != null) ? item.total_score.ToString("N0") : "-";

            // ---------- เซ็ตข้อความ ----------
            if (rowItem != null)
            {
                rowItem.Set(rank, name, item.total_score);
                if (rowItem.rankText)  { rowItem.rankText.enableAutoSizing = true;  rowItem.rankText.fontSizeMin = 24; rowItem.rankText.fontSizeMax = 80; rowItem.rankText.alignment = TextAlignmentOptions.MidlineLeft; }
                if (rowItem.nameText)  { rowItem.nameText.enableAutoSizing = true;  rowItem.nameText.fontSizeMin = 24; rowItem.nameText.fontSizeMax = 80; rowItem.nameText.alignment = TextAlignmentOptions.MidlineLeft; }
                if (rowItem.scoreText) { rowItem.scoreText.enableAutoSizing = true; rowItem.scoreText.fontSizeMin = 24; rowItem.scoreText.fontSizeMax = 80; rowItem.scoreText.alignment = TextAlignmentOptions.MidlineRight; }
            }
            else
            {
                if (rankTMP)  { rankTMP.text  = rank.ToString() + "."; rankTMP.enableAutoSizing = true; rankTMP.fontSizeMin = 24; rankTMP.fontSizeMax = 80; rankTMP.alignment = TextAlignmentOptions.MidlineLeft; }
                if (nameTMP)  { nameTMP.text  = name;                nameTMP.enableAutoSizing = true; nameTMP.fontSizeMin = 24; nameTMP.fontSizeMax = 80; nameTMP.alignment = TextAlignmentOptions.MidlineLeft; }
                if (scoreTMP) { scoreTMP.text = scoreStr;            scoreTMP.enableAutoSizing = true; scoreTMP.fontSizeMin = 24; scoreTMP.fontSizeMax = 80; scoreTMP.alignment = TextAlignmentOptions.MidlineRight; }
            }

            // ---------- ไฮไลต์พื้นหลัง top3 แล้วค่อย override ถ้าเป็นเรา ----------
            bool isMe = !string.IsNullOrEmpty(highlightUserId) &&
                        string.Equals(item.user_id, highlightUserId, StringComparison.OrdinalIgnoreCase);

            Image bg = go.GetComponent<Image>();          // ✅ ใช้ตัวเดียว ห้ามประกาศซ้ำชื่อ
            if (bg)
            {
                switch (rank)
                {
                    case 1: bg.color = new Color(1f, 0.92f, 0.50f, 0.35f); break;
                    case 2: bg.color = new Color(0.85f, 0.88f, 0.95f, 0.35f); break;
                    case 3: bg.color = new Color(0.95f, 0.85f, 0.75f, 0.35f); break;
                    default: bg.color = new Color(1f, 1f, 1f, 0.12f); break;
                }
                if (isMe) bg.color = myRowBgColor;        // override ถ้าเป็นเรา
            }

            // ---------- สีตัวอักษร (รองรับทั้ง RowItem และ fallback TMP) ----------
            if (rowItem != null)
            {
                if (rowItem.rankText)  rowItem.rankText.color  = isMe ? highlightTextColor : normalTextColor;
                if (rowItem.nameText)  rowItem.nameText.color  = isMe ? highlightTextColor : normalTextColor;
                if (rowItem.scoreText) rowItem.scoreText.color = isMe ? highlightTextColor : normalTextColor;
            }
            else
            {
                if (rankTMP)  rankTMP.color  = isMe ? highlightTextColor : normalTextColor;
                if (nameTMP)  nameTMP.color  = isMe ? highlightTextColor : normalTextColor;
                if (scoreTMP) scoreTMP.color = isMe ? highlightTextColor : normalTextColor;
            }

            Debug.Log($"[LB] Row {i + 1} set OK => {rank}. {name} {scoreStr}");

        }
        // เติมแถวว่างให้ครบ targetCount
        for (int i = max; i < targetCount; i++)
        {
            var go = Instantiate(rowPrefab, content);
            go.name = $"Row_{i + 1} (empty)";

            var goRT = go.transform as RectTransform;
            if (goRT) goRT.localScale = Vector3.one;

            var le = go.GetComponent<LayoutElement>();
            if (!le) le = go.AddComponent<LayoutElement>();
            le.minHeight = 120f;
            le.preferredHeight = 120f;
            le.flexibleHeight = 0f;

            var rowItem = go.GetComponent<RowItem>();
            if (rowItem != null) rowItem.Set(i + 1, "-", 0);
            else
            {
                // fallback
                var tmps = go.GetComponentsInChildren<TMP_Text>(true);
                foreach (var t in tmps)
                {
                    var n = t.name;
                    if (n.IndexOf("Rank", System.StringComparison.OrdinalIgnoreCase) >= 0) t.text = (i + 1) + ".";
                    else if (n.IndexOf("Name", System.StringComparison.OrdinalIgnoreCase) >= 0) t.text = "-";
                    else if (n.IndexOf("Score", System.StringComparison.OrdinalIgnoreCase) >= 0) t.text = "-";
                }
            }
        }
        // รีเฟรชเลย์เอาต์ให้จัดตำแหน่ง/ขนาดทันที
        var crt = content as RectTransform;
        if (crt)
        {
            Canvas.ForceUpdateCanvases();
            LayoutRebuilder.ForceRebuildLayoutImmediate(crt);
        }
    }

    void ShowEmpty(string msg)
    {
        if (title) title.text = msg;
        for (int i = 0; i < 5; i++)
        {
            var go = Instantiate(rowPrefab, content);
            go.name = $"Row_{i + 1}";

            var texts = go.GetComponentsInChildren<TextMeshProUGUI>(true);
            foreach (var t in texts)
            {
                if (t.name.Contains("Rank"))  t.text = (i + 1) + ".";
                else if (t.name.Contains("Name"))  t.text = "-";
                else if (t.name.Contains("Score")) t.text = "-";
            }

            // ✅ ใส่ log ตรงนี้ ใช้ค่าที่เรามีได้
            Debug.Log($"[ShowEmpty] Row {i+1}: Rank={(i+1)}, Name=-, Score=-");
        }
    }

    // เติมแถวพิเศษของเรา (me) ต่อท้าย Top 5
    void AppendMeRow(int rank, string name, long score)
    {
        if (content == null || rowPrefab == null) return;

        var go = Instantiate(rowPrefab, content);
        go.name = $"Row_Me_#{rank}";

        // ขนาด/เลย์เอาต์
        var goRT = go.transform as RectTransform;
        if (goRT) goRT.localScale = Vector3.one;
        var le = go.GetComponent<LayoutElement>();
        if (!le) le = go.AddComponent<LayoutElement>();
        le.minHeight = 120f;
        le.preferredHeight = 120f;
        le.flexibleHeight = 0f;

        // ชื่อให้มี (You)
        string dispName = string.IsNullOrEmpty(name) ? "-" : name;
        if (!dispName.Contains("(You)")) dispName += "  (You)";

        var rowItem = go.GetComponent<RowItem>();

        // ประกาศไว้ระดับเมธอด เพื่อใช้ได้ทั้งบล็อค
        TMP_Text rankTMP = null, nameTMP = null, scoreTMP = null;

        if (rowItem != null)
        {
            rowItem.Set(rank, dispName, score);
            // ทำตัวหนา
            if (rowItem.rankText)  rowItem.rankText.fontStyle  = TMPro.FontStyles.Bold;
            if (rowItem.nameText)  rowItem.nameText.fontStyle  = TMPro.FontStyles.Bold;
            if (rowItem.scoreText) rowItem.scoreText.fontStyle = TMPro.FontStyles.Bold;
        }
        else
        {
            // fallback หา TMP ตามชื่อ Rank/Name/Score
            var tmps = go.GetComponentsInChildren<TMPro.TMP_Text>(true);
            foreach (var t in tmps)
            {
                var n = t.name;
                if (rankTMP == null && n.IndexOf("Rank", System.StringComparison.OrdinalIgnoreCase) >= 0) rankTMP = t;
                else if (nameTMP == null && n.IndexOf("Name", System.StringComparison.OrdinalIgnoreCase) >= 0) nameTMP = t;
                else if (scoreTMP == null && n.IndexOf("Score", System.StringComparison.OrdinalIgnoreCase) >= 0) scoreTMP = t;
            }
            if (rankTMP)  rankTMP.text  = rank.ToString() + ".";
            if (nameTMP)  nameTMP.text  = dispName;
            if (scoreTMP) scoreTMP.text = score.ToString("N0");
        }

        // เซ็ตสีไฮไลต์ (รองรับทั้งแบบมี RowItem และ fallback)
        if (rowItem != null)
        {
            if (rowItem.rankText)  rowItem.rankText.color  = highlightTextColor;
            if (rowItem.nameText)  rowItem.nameText.color  = highlightTextColor;
            if (rowItem.scoreText) rowItem.scoreText.color = highlightTextColor;
        }
        else
        {
            if (rankTMP)  rankTMP.color  = highlightTextColor;
            if (nameTMP)  nameTMP.color  = highlightTextColor;
            if (scoreTMP) scoreTMP.color = highlightTextColor;
        }

        var bg = go.GetComponent<UnityEngine.UI.Image>();
        if (bg) bg.color = myRowBgColor;

        // รีบิลด์เลย์เอาท์
        var crt = content as RectTransform;
        if (crt)
        {
            Canvas.ForceUpdateCanvases();
            LayoutRebuilder.ForceRebuildLayoutImmediate(crt);
        }

        Debug.Log($"[LB] AppendMeRow OK => rank={rank}, name={dispName}, score={score}");
    }

    // ถ้าเราติด Top5 แล้ว ให้ไฮไลต์แถวที่เป็นเรา
    void HighlightMyRowInTop5(string myUserId)
    {
        if (string.IsNullOrEmpty(myUserId) || content == null) return;

        for (int i = 0; i < content.childCount; i++)
        {
            var row = content.GetChild(i).gameObject;
            var rowItem = row.GetComponent<RowItem>();
            bool isMe = false;

            if (rowItem != null && rowItem.nameText != null)
                isMe = string.Equals(rowItem.nameText.text, myUserId, System.StringComparison.OrdinalIgnoreCase)
                    || rowItem.nameText.text.StartsWith(myUserId + " ");

            if (!isMe)
            {
                // fallback: หา TMP ชื่อ Name
                var tmps = row.GetComponentsInChildren<TMPro.TMP_Text>(true);
                foreach (var t in tmps)
                {
                    if (t.name.IndexOf("Name", System.StringComparison.OrdinalIgnoreCase) >= 0)
                    {
                        if (string.Equals(t.text, myUserId, System.StringComparison.OrdinalIgnoreCase)
                            || t.text.StartsWith(myUserId + " "))
                        {
                            isMe = true;
                        }
                        break;
                    }
                }
            }

            if (isMe)
            {
                var bg = row.GetComponent<UnityEngine.UI.Image>();
                if (bg) bg.color = new Color(0.80f, 1f, 0.80f, 0.35f); // เขียวอ่อน
                // ทำตัวหนา
                var tmps = row.GetComponentsInChildren<TMPro.TMP_Text>(true);
                foreach (var t in tmps) t.fontStyle = TMPro.FontStyles.Bold;
                Debug.Log($"[LB] Highlight row for ME at index {i}");
                break;
            }
        }
    }

    public void OnCanceltoSelecteGame()
    {
        Debug.Log("OnCancel");
        SceneManager.LoadScene("07_SelecteGame");
    }
}
