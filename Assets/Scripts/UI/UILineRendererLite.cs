using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(CanvasRenderer))]
public class UILineRendererLite : MaskableGraphic
{
    [Range(1f, 20f)] public float thickness = 3f;
    public List<Vector2> points = new List<Vector2>();
    public bool useRoundedCaps = true;

    public void SetPoints(List<Vector2> pts) { points = pts; SetVerticesDirty(); }

    protected override void OnPopulateMesh(VertexHelper vh)
    {
        vh.Clear();
        if (points == null || points.Count < 2) return;

        for (int i = 0; i < points.Count - 1; i++)
        {
            Vector2 p0 = points[i], p1 = points[i + 1];
            if ((p1 - p0).sqrMagnitude < 0.0001f) continue;

            var dir = (p1 - p0).normalized;
            var normal = new Vector2(-dir.y, dir.x);
            float half = thickness * 0.5f;

            Vector2 v0 = p0 + normal * half;
            Vector2 v1 = p0 - normal * half;
            Vector2 v2 = p1 - normal * half;
            Vector2 v3 = p1 + normal * half;

            int start = vh.currentVertCount;
            UIVertex vert = UIVertex.simpleVert; vert.color = color;

            vert.position = v0; vh.AddVert(vert);
            vert.position = v1; vh.AddVert(vert);
            vert.position = v2; vh.AddVert(vert);
            vert.position = v3; vh.AddVert(vert);

            vh.AddTriangle(start + 0, start + 1, start + 2);
            vh.AddTriangle(start + 2, start + 3, start + 0);

            if (useRoundedCaps && i == 0)        AddCap(vh, p0, -dir, half);
            if (useRoundedCaps && i == points.Count - 2) AddCap(vh, p1,  dir, half);
        }
    }

    void AddCap(VertexHelper vh, Vector2 center, Vector2 dir, float radius)
    {
        int segs = 8;
        int start = vh.currentVertCount;
        UIVertex vert = UIVertex.simpleVert; vert.color = color;
        vert.position = center; vh.AddVert(vert);

        float ang0 = Mathf.Atan2(dir.y, dir.x) - Mathf.PI / 2f;
        for (int i = 0; i <= segs; i++)
        {
            float t = i / (float)segs;
            float ang = ang0 + t * Mathf.PI;
            Vector2 p = center + new Vector2(Mathf.Cos(ang), Mathf.Sin(ang)) * radius;
            vert.position = p; vh.AddVert(vert);
            if (i > 0) vh.AddTriangle(start + 0, start + i, start + i + 1);
        }
    }
}
