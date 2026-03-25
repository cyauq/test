using UnityEngine;
using System;
using System.Collections;

public class PopupCanvasMessage : MonoBehaviour
{
    public static PopupCanvasMessage I;

    [Header("Root & Container")]
    public GameObject popupCanvasRoot;    // ← ลากตัว PopupCanvas มาวาง
    public Transform popupContainer;      // ← จุดวาง popup

    [Header("Prefabs (1..8)")]
    public GameObject popup1, popup2, popup3, popup4, popup5, popup6, popup7, popup8;

    [Header("UX")]
    [Tooltip("จำนวน 'นาที' ที่ถือว่าใกล้เป้าหมาย เช่น 1 = 9–<10, 14–<15, 19–<20, 29–<30")]
    public float nearWindowMinutes = 1f;
    public CanvasGroup blocker;           // (ถ้ามี) ใช้บังคลิกพื้นหลัง
    public float blockerFade = 0.15f;
    public bool autoHideCanvasWhenEmpty = true; // ปิด Canvas เมื่อไม่มี popup

    int _openCount = 0;

    void Awake(){
        if (I != null){ Destroy(gameObject); return; }
        I = this;
        // อยากคงข้ามซีนก็ปลดคอมเมนต์:
        // DontDestroyOnLoad(gameObject);

        // เริ่มต้นซ่อนทั้ง Canvas ถ้าต้องการ
        if (popupCanvasRoot) popupCanvasRoot.SetActive(false);
        if (blocker){ blocker.alpha = 0; blocker.blocksRaycasts = false; }
    }

    // ====== ใช้เรียกแสดง prefab ใด ๆ ที่มี SimplePopupUI ======
    public void ShowPrefab(GameObject prefab, string title, string body, Action onOk){
        if (prefab == null){
            Debug.LogError("[PopupCanvasMessage] prefab is NULL");
            return;
        }

        // เปิด Canvas ก่อน
        if (popupCanvasRoot && !popupCanvasRoot.activeSelf)
            popupCanvasRoot.SetActive(true);

        StartCoroutine(FadeBlocker(0f, 0.4f, true));

        var go = Instantiate(prefab, popupContainer);
        Debug.Log("[PopupCanvasMessage] Instantiated: " + go.name + " under " + popupContainer.name);
        _openCount++;

        // บังคับจัดตำแหน่งให้อยู่กลางและขนาดถูก
        var rt = go.transform as RectTransform;
        if (rt != null)
        {
            rt.anchorMin = new Vector2(0.5f, 0.5f);
            rt.anchorMax = new Vector2(0.5f, 0.5f);
            rt.pivot     = new Vector2(0.5f, 0.5f);
            rt.anchoredPosition = Vector2.zero;
            rt.localScale = Vector3.one;
            rt.SetAsLastSibling(); // ให้อยู่บนสุด
        }
        else
        {
            Debug.LogWarning("[PopupCanvasMessage] Prefab root is not RectTransform (not a UI object?)");
        }

        var ui = go.GetComponent<SimplePopupUI>();
        if (ui == null){
            Debug.LogError("[PopupCanvasMessage] Prefab ไม่มี SimplePopupUI ติดอยู่");
            return;
        }

        ui.Show(title, body, () => {
            onOk?.Invoke();
            ClosePopup(go);
        });
    }

    void ClosePopup(GameObject go){
        if (go) Destroy(go);
        _openCount = Mathf.Max(0, _openCount - 1);

        if (_openCount == 0){
            StartCoroutine(FadeBlocker(blocker? blocker.alpha:0f, 0f, false));
            if (autoHideCanvasWhenEmpty && popupCanvasRoot)
                popupCanvasRoot.SetActive(false); // ซ่อนทั้ง Canvas เมื่อไม่มีอะไรแสดง
        }
    }

    IEnumerator FadeBlocker(float a, float b, bool enableRaycast){
        if (!blocker) yield break;
        blocker.blocksRaycasts = enableRaycast;
        float t=0f;
        while (t < blockerFade){
            t += Time.unscaledDeltaTime;
            blocker.alpha = Mathf.Lerp(a,b,t/blockerFade);
            yield return null;
        }
        blocker.alpha = b;
        blocker.blocksRaycasts = enableRaycast;
    }

    // ====== เลือก popup ตอนเกมจบ แล้วค่อยเปิดผลลัพธ์ ======
    public void ShowPopupBeforeResult(GameObject resultGame, string titleForResult, int score, string unit)
    {
        if (resultGame.activeSelf) resultGame.SetActive(false);

        double min = TimerManager.Instance ?
                    TimerManager.Instance.GetElapsedTime().TotalMinutes : 0.0;

        GameObject prefabToShow = null;

        // ===== Debug เวลาปัจจุบัน =====
        //Debug.Log($"[PopupCanvasMessage] Elapsed Minutes = {min:F2}");

        if      (min >= 30.0)       { prefabToShow = PopupCanvasMessage.I.popup7; Debug.Log("[PopupCanvasMessage] Selected = popup7 (ครบ 30 นาที)"); }
        else if (IsNear(min, 30.0)) { prefabToShow = PopupCanvasMessage.I.popup5; Debug.Log("[PopupCanvasMessage] Selected = popup5 (ใกล้ 30 นาที)"); }
        else if (min >= 20.0)       { prefabToShow = PopupCanvasMessage.I.popup4; Debug.Log("[PopupCanvasMessage] Selected = popup4 (หลัง 20 นาที)"); }
        else if (IsNear(min, 20.0)) { prefabToShow = PopupCanvasMessage.I.popup2; Debug.Log("[PopupCanvasMessage] Selected = popup2 (ใกล้ 20 นาที)"); }
        else if (IsNear(min, 15.0)) { prefabToShow = PopupCanvasMessage.I.popup6; Debug.Log("[PopupCanvasMessage] Selected = popup6 (ใกล้ 15 นาที)"); }
        else if (IsNear(min, 10.0)) { prefabToShow = PopupCanvasMessage.I.popup2; Debug.Log("[PopupCanvasMessage] Selected = popup2 (ใกล้ 10 นาที)"); }
        else {
            prefabToShow = ChooseAnytimePopup();
            Debug.Log("[PopupCanvasMessage] Selected = Anytime popup (1/3/8)");
        }

        // ===== Debug ชื่อ Prefab ที่เลือกได้จริง =====
        if (prefabToShow == null) {
            Debug.LogWarning("[PopupCanvasMessage] prefabToShow is NULL → fallback ไป popup1");
            prefabToShow = popup1;
        }
        // ===== แสดง Popup =====
        PopupCanvasMessage.I.ShowPrefab(
            prefabToShow,
            title: "", body: "",
            onOk: () => {
                Debug.Log("[PopupCanvasMessage] Popup OK pressed → Showing resultGame");
                resultGame.SetActive(true);
                var gui = resultGame.GetComponent<GameOverUI>();
                if (gui){
                    gui.textTitle.text = titleForResult;
                    gui.textScore.text = score.ToString("0");
                    gui.textUnit.text  = unit;
                }
            }
        );
    }

    bool IsNear(double minutes, double target){
        return minutes >= (target - nearWindowMinutes) && minutes < target;
    }

    GameObject ChooseAnytimePopup(){
        int pick = UnityEngine.Random.Range(0, 2);
        if (pick == 0) return popup1;
        if (pick == 1) return popup3;
        return popup8;
    }
}
