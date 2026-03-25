using System;

[Serializable]

public class MemberInfoModel
{
    public string id_member;
    public string user_member;
    public DateTime member_regdate;
    public DateTime member_last_login;
    public DateTime member_last_logout;
    public string member_session_update;
    public string data_role;
    public string permission;
    public DateTime del_time;
    public string id_data_role;
    public string parent_id;
}
