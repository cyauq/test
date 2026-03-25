using UnityEngine;

[DisallowMultipleComponent]
[RequireComponent(typeof(Collider))]
public class Pickup : MonoBehaviour
{
    [Min(1)] public int points = 1;   // Coin=1, Diamond=2, Jade=3 (อนาคต)
    public AudioClip sfx;

    private void Reset()
    {
        var col = GetComponent<Collider>();
        if (col) col.isTrigger = true;   // เผื่อไม่ได้ติ๊ก
    }
}
