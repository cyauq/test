using UnityEngine;

[RequireComponent(typeof(Collider))]
public class CoinSwitcher : MonoBehaviour
{
    [Header("Assign in Prefab")]
    public GameObject coinGO;        // เริ่มเกม
    public GameObject diamond10GO;   // เปิดเมื่อครบ 10 นาที (เช่น diamondG1)
    public GameObject diamond20GO;   // เปิดเมื่อครบ 20 นาที (เช่น diamondGO เดิม)

    [Header("Points per stage")]
    public int pointsAtCoin     = 1; // เริ่มเกม
    public int pointsAt10Minute = 2; // ครบ 10 นาที
    public int pointsAt20Minute = 3; // ครบ 20 นาที (จะทำเป็น 3 ก็ได้)
    private Pickup pickup;

    private enum Stage { Coin, Diamond10, Diamond20 }
    private Stage current = Stage.Coin;

    private void Awake()
    {
        // หา Pickup ที่ Root (ถ้าใส่ไว้ที่ลูกก็หาในลูกด้วย)
        pickup = GetComponent<Pickup>() ?? GetComponentInChildren<Pickup>(true);
    }

    private void OnEnable()
    {
        var tm = TimerManager.Instance;

        // ตั้งสถานะให้ตรงกับเวลาปัจจุบัน (กรณีเข้าฉากช้า)
        double mins = (tm != null) ? tm.GetElapsedTime().TotalMinutes : 0.0;
        if (mins >= 20.0)       SetStage(Stage.Diamond20);
        else if (mins >= 10.0)  SetStage(Stage.Diamond10);
        else                    SetStage(Stage.Coin);

        // สมัครอีเวนต์
        if (tm != null)
        {
            tm.OnTenMinutesReached   += HandleTenMinutes;
            tm.OnTwentyMinutesReached += HandleTwentyMinutes;
        }
    }

    private void OnDisable()
    {
        var tm = TimerManager.Instance;
        if (tm != null)
        {
            tm.OnTenMinutesReached   -= HandleTenMinutes;
            tm.OnTwentyMinutesReached -= HandleTwentyMinutes;
        }
    }

    private void HandleTenMinutes()
    {
        // ขยับจาก Coin -> Diamond10 เท่านั้น (ถ้าเลย 20 ไปแล้วจะไม่เปลี่ยนกลับ)
        if (current == Stage.Coin)
            SetStage(Stage.Diamond10);
    }

    private void HandleTwentyMinutes()
    {
        // ไม่ว่าขณะนั้นจะอยู่ Coin หรือ Diamond10 ให้ไป Diamond20
        if (current != Stage.Diamond20)
            SetStage(Stage.Diamond20);
    }

    private void SetStage(Stage stage)
    {
        current = stage;

        // เปิด/ปิด GameObject ตามสเตจ
        if (coinGO)       coinGO.SetActive(stage == Stage.Coin);
        if (diamond10GO)  diamond10GO.SetActive(stage == Stage.Diamond10);
        if (diamond20GO)  diamond20GO.SetActive(stage == Stage.Diamond20);

        // ตั้งคะแนนตามสเตจ
        if (pickup != null)
        {
            switch (stage)
            {
                case Stage.Coin:       pickup.points = pointsAtCoin;      break;
                case Stage.Diamond10:  pickup.points = pointsAt10Minute;  break;
                case Stage.Diamond20:  pickup.points = pointsAt20Minute;  break;
            }
        }

        Debug.Log($"[CoinSwitcher] Stage => {stage}");
    }
}
