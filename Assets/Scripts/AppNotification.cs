using UnityEngine;
using Unity.Notifications.Android;

public class AppNotification : MonoBehaviour
{
    void Start()
    {
        // 1. สร้างช่องทาง (Channel) สำหรับส่งการแจ้งเตือนของ Android
        var channel = new AndroidNotificationChannel()
        {
            Id = "surasole_reminder",
            Name = "แจ้งเตือนการฝึกซ้อม",
            Importance = Importance.High,
            Description = "แจ้งเตือนให้ผู้สูงอายุกลับมาเล่นเกมกายภาพ"
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
    }

    // 2. คำสั่งตั้งเวลาแจ้งเตือน (เอาไว้เรียกใช้ตอนจะปิดเกม)
    public void SendReminderNotification()
    {
        var notification = new AndroidNotification();
        // ข้อความแจ้งเตือน (ปรับแก้คำพูดได้ตามใจชอบเลยครับ)
        notification.Title = "ได้เวลาฝึกกายภาพแล้ว! 🏃‍♂️";
        notification.Text = "อย่าลืมเข้ามาฝึกเดินและทรงตัวกับ SuraSole Games นะครับ";

        // ตั้งเวลาให้แจ้งเตือนทำงานล่วงหน้า (ตอนนี้ตั้งไว้ที่ 10 วินาที เพื่อให้ทดสอบได้ง่าย)
        notification.FireTime = System.DateTime.Now.AddSeconds(10);

        // สั่งส่งการแจ้งเตือน
        AndroidNotificationCenter.SendNotification(notification, "surasole_reminder");

        Debug.Log("ระบบรับคำสั่งตั้งเวลาแจ้งเตือนแล้ว!");
    }
}