using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class BluetoothManager : MonoBehaviour
{

    public Dictionary<string, ScanBluetooth> DeviceAddressList;
    public Dictionary<int, DeviceObject> Services = new Dictionary<int, DeviceObject>();

    public Dictionary<int, (int[], string)> SubscribeCharacteristicList = new Dictionary<int, (int[], string)>();
    public bool isIntialDevice = false;
    public float DEFAULT_VALUE = 100f;

    private void Start()
    {
#if UNITY_2020_2_OR_NEWER
#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.CoarseLocation)
          || !Permission.HasUserAuthorizedPermission(Permission.FineLocation)
          || !Permission.HasUserAuthorizedPermission("android.permission.BLUETOOTH_SCAN")
          || !Permission.HasUserAuthorizedPermission("android.permission.BLUETOOTH_ADVERTISE")
          || !Permission.HasUserAuthorizedPermission("android.permission.BLUETOOTH_CONNECT"))
            Permission.RequestUserPermissions(new string[] {
    Permission.CoarseLocation,
    Permission.FineLocation,
    "android.permission.BLUETOOTH_SCAN",
    "android.permission.BLUETOOTH_ADVERTISE",
    "android.permission.BLUETOOTH_CONNECT"
  });
#endif
#endif
    }

    public bool IsConnect(int index)
    {
        return Services.ContainsKey(index);
    }

    public DeviceObject GetService(int index)
    {
        if (Services.ContainsKey(index))
        {
            return Services[index];
        }
        return null;
    }

    public void SetService(int index, DeviceObject service)
    {
        Services[index] = service;
    }

    public (int[], string) GetSubscribeCharacteristic(int index)
    {
        //if (SubscribeCharacteristicList.ContainsKey(index))
        //{

        //}
        foreach (KeyValuePair<int, (int[], string)> kvp in SubscribeCharacteristicList)
        {
            int id = kvp.Key;
            if (id == index)
            {
                return kvp.Value;
            }
        }
        return (new int[6], "");
    }

    public void SubscribeCharacteristic(int index, Action<string> notificationAction)
    {
        DeviceObject device = Services[index];

        if (device != null)
        {
            string subscribedService = device.uuid;
            string subscribedCharacteristic = device.characteristic;
            string subscribedAddress = device.deviceAddress;
            if (!string.IsNullOrEmpty(subscribedService) && !string.IsNullOrEmpty(subscribedCharacteristic))
            {
                BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddress(subscribedAddress, subscribedService, subscribedCharacteristic, (address, characteristicUUID) =>
                {
                    BluetoothLEHardwareInterface.Log("notificationAction data: " + "| address: " + address + " | char: " + characteristicUUID);
                    notificationAction(characteristicUUID);
                }, (address, characteristicUUID, bytes) =>
                {
                    (int[], string) data = GetValueSencer(bytes);
                    SubscribeCharacteristicList[index] = data;
                    //BluetoothLEHardwareInterface.Log("received index: " + index + " data  " + data);
                });
            }
        }
    }

    public void UnSubscribeCharacteristic(int index, string subscribedAddress, string subscribedService, string subscribedCharacteristic, Action<string> notificationAction)
    {
        //DeviceObject device = Services[index];

        //if (device != null)
        //{
        //    string subscribedService = device.uuid;
        //    string subscribedCharacteristic = device.characteristic;
        //    string subscribedAddress = device.deviceAddress;
        if (!string.IsNullOrEmpty(subscribedService) && !string.IsNullOrEmpty(subscribedCharacteristic))
        {
            BluetoothLEHardwareInterface.UnSubscribeCharacteristic(subscribedAddress, subscribedService, subscribedCharacteristic, (characteristic) =>
            {
                //Services[index] = null;
                //notificationAction(subscribedAddress);
            });
        }
        else
        {
            //notificationAction(subscribedAddress);
        }
        //}
    }

    public string FullUUID(string uuid)
    {
        if (uuid.Length == 4)
            return "0000" + uuid + "-0000-1000-8000-00805F9B34FB";
        return uuid;
    }
    
    string[] hexValue;
    int[] data;
    public (int[], string) GetValueSencer(byte[] value)
    {
        string stringValues = ByteArrayToString(value);
        char[] ch = stringValues.ToCharArray();
        string index1 = "";
        string index2 = "";
        string index3 = "";
        string index4 = "";
        string index5 = "";
        string index6 = "";
        string index7 = "";
        string index8 = "";
        string index9 = "";
        //Identify the Surasole is 5 or 8 Sensor
       
        if (ch.Length < 28)
        {
            StaticStrings.is8Device = false;
            // 5 sensor
            for (int i = 0; i < ch.Length; i++)
            {
                if (i < 4)
                {
                    index1 += ch[i];
                }
                else if (i < 8)
                {
                    index2 += ch[i];// one
                }
                else if (i < 12)
                {
                    index3 += ch[i];// two
                }
                else if (i < 16)
                {
                    index4 += ch[i];
                }
                else if (i < 20)
                {
                    index5 += ch[i]; //  four
                }
                else
                {
                    index6 += ch[i];
                }
            }
            hexValue = new string[6];
            string[] h = { "" + index1, "" + index2, "" + index3, "" + index4, "" + index5, "" + index6 };
            hexValue = h;
            data = new int[6];
        }
        // 8 sensor
        else
        {
            StaticStrings.is8Device = true;

            for (int i = 0; i < ch.Length; i++)
            {
                if (i < 4)
                {
                    index1 += ch[i];
                }
                else if (i < 8)
                {
                    index2 += ch[i]; // one
                }
                else if (i < 12)
                {
                    index3 += ch[i];
                }
                else if (i < 16)
                {
                    index4 += ch[i]; // three
                }
                else if (i < 20)
                {
                    index5 += ch[i];
                }
                else if (i < 24)
                {
                    index6 += ch[i];
                }
                else if (i < 28)
                {
                    index7 += ch[i];
                }
                else if (i < 32)
                {
                    index8 += ch[i]; // seven
                }
                else
                {
                    index9 += ch[i];
                }
            }
            string[] h = { "" + index1, "" + index2, "" + index3, "" + index4, "" + index5, "" + index6, "" + index7, "" + index8, "" + index9 };

             data = new int[9];
            hexValue = h;
        }

        

        for (int i = 0; i < hexValue.Length; i++)
        {
            int decValue = Convert.ToInt32(hexValue[i], 16);
            data[i] = decValue;
        }
        return (data, stringValues);
    }

    public string ByteArrayToString(byte[] ba)
    {
        return BitConverter.ToString(ba).Replace("-", "");
    }

}
