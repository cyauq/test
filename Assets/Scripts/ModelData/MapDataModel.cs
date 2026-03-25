using System;

public enum MapType
{
	Runner,
	MazeRunner
}

[Serializable]
public class MapDataModel
{
	public int id;
	public bool isLock;
	public string sceneName;
	public int sceneId;
	public float distance;
	public int currentScore;
	public int heightScore;
	public DateTime lastPlay;
	public string imagePath;
	public string pathScene;
	public MapType type;
}

[Serializable]
public struct MapSetupModel
{
	public int id;	
	public int scoreCoin;
	public int scoreBonus;	
	public float speed;
	public int amountCoin;
	public int timer;
}