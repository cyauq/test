using System;
using UnityEngine; // ต้องแน่ใจว่าคุณ import UnityEngine เพื่อใช้ Debug.Log()

[Serializable]
public struct SaveDataModel
{
    public int game_id;
    public string user_id;    
    public int total_score;
    public float distance;
    public float timer_gameplay;
    public string timestamp;
    public int bonus_fail;
    public int bonus_success;
    public int mission_id;
    public string mission_name;
    public float COP_X;
    public float COP_Y;
}
