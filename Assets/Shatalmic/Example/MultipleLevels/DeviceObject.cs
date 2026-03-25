public class DeviceObject
{
	public string Address;
	public string Name;

	public bool isConnected;
	public string deviceName;
	public string deviceRssi;
	public string uuid;
	public string characteristic;
	public string deviceAddress;
	public int battery;

	public DeviceObject ()
	{
		Address = "";
		Name = "";
		isConnected = false;
		deviceName = "";
		deviceRssi = "";
		uuid = "";
		characteristic = "";
		deviceAddress = "";
		battery = 0;
	}

	public DeviceObject (string address, string name)
	{
		Address = address;
		Name = name;
	}

	public DeviceObject(bool _isConnected, string _deviceName, string _deviceRssi, string _uuid, string _characteristic, string _deviceAddress, int _battery)
	{
		isConnected = _isConnected;
		deviceName = _deviceName;
		deviceRssi = _deviceRssi;
		uuid = _uuid;
		characteristic = _characteristic;
		deviceAddress = _deviceAddress;
		battery = _battery;
	}
}
