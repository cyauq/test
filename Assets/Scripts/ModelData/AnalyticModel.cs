using System;
using System.Collections.Generic;

[Serializable]
public class AnalyticModel
{
	public int id;
	public float speed;
	public float distance;
	public int currentScore;
	public float totalTime;
	public DateTime lastPlay;
	public string mapType;

	//public AnalyticModel()
	//{
	//	id = 0;
	//	speed = 0f;
	//	distance = 0f;
	//	currentScore = 0;
	//	lastPlay = DateTime.Now.ToLocalTime();
	//}
}

[Serializable]
public class DataInfo
{
	public List<DataModelResponse> dataList;	
}
