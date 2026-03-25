using System;
using System.Collections.Generic;

[Serializable]
public struct GetDataModelResponse
{
	public string status;
	public string message;	
	public DataModelResponse data;
}

[Serializable]
public struct DataModelResponse
{
	public string status;	
	public int current_page;
	public List<SaveDataModel> data;
	public string first_page_url;
	public int from;
	public int last_page;
	public string last_page_url;
	public string next_page_url;
	public string path;
	public int per_page;
	public string perv_page_url;
	public int to;
	public int total;
}