using UnityEngine;
using UnityEngine.UI;
using System;

public class SimplePopupUI : MonoBehaviour
{
    [Header("Texts (UnityEngine.UI.Text)")]
    public Text textTitle;           // ลาก Text หัวเรื่อง
    public Text bodyText;            // (ถ้ามี) ลาก Text เนื้อหา

    [Header("Buttons")]
    public Button buttonDone;        // ปุ่มตกลง
    public Button buttonCancel;      // (ถ้ามี) ปุ่มยกเลิก

    private Action _onOk;

    public void Show(string title, string body, Action onOk)
    {
        // ตั้งข้อความเฉพาะเมื่อมีค่าเข้ามา
        if (!string.IsNullOrEmpty(title) && textTitle)
            textTitle.text = title;

        if (!string.IsNullOrEmpty(body) && bodyText)
            bodyText.text = body;

        _onOk = onOk;  // <<< สำคัญ: เก็บ callback ไว้ใช้ตอนกดปุ่ม

        // ผูกปุ่ม
        if (buttonDone)
        {
            buttonDone.onClick.RemoveAllListeners();
            buttonDone.onClick.AddListener(() =>
            {
                _onOk?.Invoke();
                Destroy(gameObject);
            });
        }

        if (buttonCancel)
        {
            buttonCancel.onClick.RemoveAllListeners();
            buttonCancel.onClick.AddListener(() =>
            {
                Destroy(gameObject);
            });
        }

        gameObject.SetActive(true);
    }
}
