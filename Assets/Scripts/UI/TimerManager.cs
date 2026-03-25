using System;
using System.Collections;
using UnityEngine;

public class TimerManager : MonoBehaviour
{
    // ===== Singleton =====
    private static TimerManager instance;
    public static TimerManager Instance => instance;

    // ===== State =====
    private DateTime startUtc;
    private bool hasStarted = false;
    private bool isPaused = false;
    private DateTime pauseStartUtc;
    private TimeSpan pausedTotal = TimeSpan.Zero;
    private bool fired10m = false;             // <— ใหม่
    private bool fired20m = false;
    // ยิงเมื่อครบ 10 นาที
    public event Action OnTenMinutesReached;   // <— ใหม่
    // ยิงเมื่อครบ 20 นาที
    public event Action OnTwentyMinutesReached;

    // ===== Debug (ทดสอบ) =====
    [Header("DEBUG")]
    [SerializeField] private bool debugFakeElapsed = false;  // เปิดเพื่อทดสอบ
    [SerializeField] private int debugMinutesElapsed = 0;    // เริ่มเสมือนผ่านมากี่นาที

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            transform.SetParent(null);             // แยกออกจากพ่อเสมอ
            DontDestroyOnLoad(gameObject);         // คงไว้ข้ามซีน
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    private void Start()
    {
        if (!hasStarted) StartTimer();
        StartCoroutine(WatchMilestones());
    }

    // ===== Public API =====
    public void StartTimer()
    {
        hasStarted = true;
        fired10m = false;
        fired20m = false;
        isPaused = false;
        pausedTotal = TimeSpan.Zero;
        startUtc = DateTime.UtcNow;

        if (debugFakeElapsed && debugMinutesElapsed > 0)
            startUtc = DateTime.UtcNow - TimeSpan.FromMinutes(debugMinutesElapsed);

        Debug.Log($"[TimerManager] Started. Elapsed now = {GetElapsedTime()}");
    }

    public void ResetTimer(int fakeMinutes = 0)
    {
        debugFakeElapsed = fakeMinutes > 0;
        debugMinutesElapsed = fakeMinutes;
        StartTimer();
    }

    public void Pause()
    {
        if (isPaused) return;
        isPaused = true;
        pauseStartUtc = DateTime.UtcNow;
    }

    public void Resume()
    {
        if (!isPaused) return;
        pausedTotal += (DateTime.UtcNow - pauseStartUtc);
        isPaused = false;
    }

    public TimeSpan GetElapsedTime()
    {
        if (!hasStarted) return TimeSpan.Zero;

        var now = DateTime.UtcNow;
        var baseElapsed = now - startUtc;
        var currentPause = isPaused ? (now - pauseStartUtc) : TimeSpan.Zero;

        return baseElapsed - pausedTotal - currentPause;
    }

    // ===== Internal =====
    private IEnumerator WatchMilestones()
    {
        var m10 = TimeSpan.FromMinutes(10);
        var m20 = TimeSpan.FromMinutes(20);

        while (true)
        {
            var elapsed = GetElapsedTime();

            // เรียงจากน้อยไปมาก (10 ก่อน 20)
            if (!fired10m && elapsed >= m10)
            {
                fired10m = true;
                Debug.Log("[TimerManager] 10 minutes reached!");
                OnTenMinutesReached?.Invoke();
            }

            if (!fired20m && elapsed >= m20)
            {
                fired20m = true;
                Debug.Log("[TimerManager] 20 minutes reached!");
                OnTwentyMinutesReached?.Invoke();
            }

            yield return new WaitForSeconds(1f); // ต้องการละเอียดขึ้นลดเป็น 0.2f ได้
        }
    }

    // เมนูทดสอบใน Inspector (คลิกขวาที่คอมโพเนนต์)
    [ContextMenu("DEBUG: Set elapsed to 19 minutes")]
    private void DebugSetElapsed19m()
    {
        startUtc = DateTime.UtcNow - TimeSpan.FromMinutes(19);
        Debug.Log("[TimerManager] Forced elapsed to 19 minutes");
    }
}
