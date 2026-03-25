using System;
using System.Collections.Generic;

[Serializable]
public class COPData
{
    public string user_id;
    public string sensor_id;
    public float x_value;
    public float y_value;
    public string timestamp;
}

[Serializable]
public class COPDataList
{
    public List<COPData> data;
}