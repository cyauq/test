using System;

[Serializable]
public struct GetDataModel
{
	public int game_id;
	public string user_id;
	public int mission_id;
	public int limit;
	public string start_date;
	public string end_date;
	public float COP_X;
    public float COP_Y;
}