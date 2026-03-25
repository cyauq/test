using System;

[Serializable]
public class RegisterModel
{
    public string status;
    public string message;
    public string data;
    public MemberInfoModel member_info;
    public UserInfoModel user_info;
}
