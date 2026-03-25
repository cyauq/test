#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>
struct Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE;
// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831;
// System.Action`2<System.String,System.Int32>
struct Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7;
// System.Action`4<System.Object,System.Object,System.Int32,System.Object>
struct Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46;
// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>
struct Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>
struct Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.String>>
struct KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<System.String,System.Byte[]>>
struct KeyCollection_t6B68A129EC8149AACE58C5F34312148132BE3A5D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<System.String,System.String>>
struct KeyCollection_t2B4949A3310A54180CF25ECDBB063042F07D3846;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct KeyCollection_tDEB7EBAE34ACB36F488B64E3ACCA223414080409;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct KeyCollection_t62E580CDD4AD2C58AB764BA8E96B51A9A408EF14;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct KeyCollection_tD5F7D890C8347A2C4B342C2D2B64AFC23157E272;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct KeyCollection_t28070F1CBB6F27FB971DEA73EA1F1B5C99CCCBD7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct KeyCollection_t55BF89DF4C34E4D0DD7186A21DF7FBADBAFF9B57;
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.String>>
struct ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<System.String,System.Byte[]>>
struct ValueCollection_t6FE7F1553C6213D89E25A379E6F130A43116E93B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<System.String,System.String>>
struct ValueCollection_tE72EBB4992A3B7027945352F3E85E6E4EA3CCC1E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct ValueCollection_t693954EDFB989578797C65FD6346D986760277F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct ValueCollection_tF277A139BF9A5A5C6F4F4F5FD6A8000A8658FDCE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct ValueCollection_tBEC71E03B4233FB8DD3447320101C69756B06B6D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct ValueCollection_t8882E34082E7EEA63E8D352364FBC4C7FCD16BA2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct ValueCollection_t7E2768C272CC12D1213F42E60FEC61D271B5504B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.String>>[]
struct EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<System.String,System.Byte[]>>[]
struct EntryU5BU5D_tD85663E0D3F56DB5B4D7B61F59CF3547EC4EFDD4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<System.String,System.String>>[]
struct EntryU5BU5D_tDF3A60011A7699193B41342EB254CE91C0D52CA2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`3<System.String,System.String,System.Byte[]>>[]
struct EntryU5BU5D_t900C98EE15F3E9A35BE1B92E61E4F1F1B9271B19;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>[]
struct EntryU5BU5D_tE24E820FA547791800AC4A6BE2EA390A44BDDE80;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>[]
struct EntryU5BU5D_t922FDAC1576C36D69E46214258EE7745F1BA7C7E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>[]
struct EntryU5BU5D_t17A4C74CE24E617D8325CEAD39942B17AD8BA004;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>[]
struct EntryU5BU5D_t6F24BDD2DFE83F9B6CC78F9B7B25A58AA334389E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39;
// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveSample
struct MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// RotateSample
struct RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SampleInfo
struct SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE;
// iTween/<Start>d__229
struct U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4;
// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F;
// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D;
// iTween/ApplyTween
struct ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE;
// iTween/CRSpline
struct CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9;
// iTween/EasingFunction
struct EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9;
IL2CPP_EXTERN_C String_t* _stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral04938D88CCBF5A98466865086ED2669F409064BE;
IL2CPP_EXTERN_C String_t* _stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F;
IL2CPP_EXTERN_C String_t* _stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7;
IL2CPP_EXTERN_C String_t* _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680;
IL2CPP_EXTERN_C String_t* _stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470;
IL2CPP_EXTERN_C String_t* _stringLiteral19CFDD2C539A7CE015BAF7FA91E0636F61E07A8B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692;
IL2CPP_EXTERN_C String_t* _stringLiteral1C967FB0FDDFDD350AAAC8A57A805B9073975414;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6;
IL2CPP_EXTERN_C String_t* _stringLiteral283D774A5141A159CCA779600D4FD489AFD39105;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32;
IL2CPP_EXTERN_C String_t* _stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987;
IL2CPP_EXTERN_C String_t* _stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53;
IL2CPP_EXTERN_C String_t* _stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669;
IL2CPP_EXTERN_C String_t* _stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84;
IL2CPP_EXTERN_C String_t* _stringLiteral6952613B8B093774517AF3F81122D856B46CD821;
IL2CPP_EXTERN_C String_t* _stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4;
IL2CPP_EXTERN_C String_t* _stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737;
IL2CPP_EXTERN_C String_t* _stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636;
IL2CPP_EXTERN_C String_t* _stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951;
IL2CPP_EXTERN_C String_t* _stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7;
IL2CPP_EXTERN_C String_t* _stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral8F63233D482743220D006469E8B194A3D4907233;
IL2CPP_EXTERN_C String_t* _stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B;
IL2CPP_EXTERN_C String_t* _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387;
IL2CPP_EXTERN_C String_t* _stringLiteralB8BB41A13E5EDCEDC15EDDF056995867A8B5062C;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28;
IL2CPP_EXTERN_C String_t* _stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF;
IL2CPP_EXTERN_C String_t* _stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411;
IL2CPP_EXTERN_C String_t* _stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24;
IL2CPP_EXTERN_C String_t* _stringLiteralCFE25B3302C823126233E5C675383881A1336C69;
IL2CPP_EXTERN_C String_t* _stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49;
IL2CPP_EXTERN_C String_t* _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0;
IL2CPP_EXTERN_C String_t* _stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221;
IL2CPP_EXTERN_C String_t* _stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3;
IL2CPP_EXTERN_C String_t* _stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C;
IL2CPP_EXTERN_C String_t* _stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA;
IL2CPP_EXTERN_C String_t* _stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF;
IL2CPP_EXTERN_C String_t* _stringLiteralF01338260378F35334542BDEDFB82698311AEB1A;
IL2CPP_EXTERN_C String_t* _stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD;
IL2CPP_EXTERN_C String_t* _stringLiteralFE83D121033127368F074E967D2902DA668AF244;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>
struct Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD85663E0D3F56DB5B4D7B61F59CF3547EC4EFDD4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6B68A129EC8149AACE58C5F34312148132BE3A5D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6FE7F1553C6213D89E25A379E6F130A43116E93B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>
struct Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF3A60011A7699193B41342EB254CE91C0D52CA2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2B4949A3310A54180CF25ECDBB063042F07D3846* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE72EBB4992A3B7027945352F3E85E6E4EA3CCC1E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>
struct Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t900C98EE15F3E9A35BE1B92E61E4F1F1B9271B19* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDEB7EBAE34ACB36F488B64E3ACCA223414080409* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t693954EDFB989578797C65FD6346D986760277F6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>
struct Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE24E820FA547791800AC4A6BE2EA390A44BDDE80* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t62E580CDD4AD2C58AB764BA8E96B51A9A408EF14* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF277A139BF9A5A5C6F4F4F5FD6A8000A8658FDCE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>
struct Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t922FDAC1576C36D69E46214258EE7745F1BA7C7E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD5F7D890C8347A2C4B342C2D2B64AFC23157E272* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBEC71E03B4233FB8DD3447320101C69756B06B6D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>
struct Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17A4C74CE24E617D8325CEAD39942B17AD8BA004* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t28070F1CBB6F27FB971DEA73EA1F1B5C99CCCBD7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8882E34082E7EEA63E8D352364FBC4C7FCD16BA2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>
struct Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6F24BDD2DFE83F9B6CC78F9B7B25A58AA334389E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t55BF89DF4C34E4D0DD7186A21DF7FBADBAFF9B57* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7E2768C272CC12D1213F42E60FEC61D271B5504B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B  : public RuntimeObject
{
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// iTween/<Start>d__229
struct U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4  : public RuntimeObject
{
	// System.Int32 iTween/<Start>d__229::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<Start>d__229::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<Start>d__229::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F  : public RuntimeObject
{
	// System.Int32 iTween/<TweenDelay>d__145::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenDelay>d__145::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<TweenDelay>d__145::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D  : public RuntimeObject
{
	// System.Int32 iTween/<TweenRestart>d__147::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenRestart>d__147::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<TweenRestart>d__147::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/CRSpline
struct CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9  : public RuntimeObject
{
	// UnityEngine.Vector3[] iTween/CRSpline::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 
{
	// System.String BluetoothLEHardwareInterface/iBeaconData::UUID
	String_t* ___UUID_0;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::Major
	int32_t ___Major_1;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::Minor
	int32_t ___Minor_2;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::RSSI
	int32_t ___RSSI_3;
	// System.Int32 BluetoothLEHardwareInterface/iBeaconData::AndroidSignalPower
	int32_t ___AndroidSignalPower_4;
	// BluetoothLEHardwareInterface/iOSProximity BluetoothLEHardwareInterface/iBeaconData::iOSProximity
	int32_t ___iOSProximity_5;
};
// Native definition for P/Invoke marshalling of BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke
{
	char* ___UUID_0;
	int32_t ___Major_1;
	int32_t ___Minor_2;
	int32_t ___RSSI_3;
	int32_t ___AndroidSignalPower_4;
	int32_t ___iOSProximity_5;
};
// Native definition for COM marshalling of BluetoothLEHardwareInterface/iBeaconData
struct iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com
{
	Il2CppChar* ___UUID_0;
	int32_t ___Major_1;
	int32_t ___Minor_2;
	int32_t ___RSSI_3;
	int32_t ___AndroidSignalPower_4;
	int32_t ___iOSProximity_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// iTween/Defaults
struct Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE  : public RuntimeObject
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>
struct Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Byte[]>
struct Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Int32>
struct Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7  : public MulticastDelegate_t
{
};

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>
struct Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46  : public MulticastDelegate_t
{
};

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// iTween/ApplyTween
struct ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE  : public MulticastDelegate_t
{
};

// iTween/EasingFunction
struct EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> BluetoothDeviceScript::DiscoveredDeviceList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___DiscoveredDeviceList_4;
	// System.Action BluetoothDeviceScript::InitializedAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InitializedAction_5;
	// System.Action BluetoothDeviceScript::DeinitializedAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeinitializedAction_6;
	// System.Action`1<System.String> BluetoothDeviceScript::ErrorAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ErrorAction_7;
	// System.Action`1<System.String> BluetoothDeviceScript::ServiceAddedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ServiceAddedAction_8;
	// System.Action BluetoothDeviceScript::StartedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StartedAdvertisingAction_9;
	// System.Action BluetoothDeviceScript::StoppedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StoppedAdvertisingAction_10;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredPeripheralAction_11;
	// System.Action`4<System.String,System.String,System.Int32,System.Byte[]> BluetoothDeviceScript::DiscoveredPeripheralWithAdvertisingInfoAction
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___DiscoveredPeripheralWithAdvertisingInfoAction_12;
	// System.Action`1<BluetoothLEHardwareInterface/iBeaconData> BluetoothDeviceScript::DiscoveredBeaconAction
	Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* ___DiscoveredBeaconAction_13;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::RetrievedConnectedPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___RetrievedConnectedPeripheralAction_14;
	// System.Action`2<System.String,System.Byte[]> BluetoothDeviceScript::PeripheralReceivedWriteDataAction
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___PeripheralReceivedWriteDataAction_15;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedPeripheralAction_16;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedDisconnectPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedDisconnectPeripheralAction_17;
	// System.Action`1<System.String> BluetoothDeviceScript::DisconnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DisconnectedPeripheralAction_18;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredServiceAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredServiceAction_19;
	// System.Action`3<System.String,System.String,System.String> BluetoothDeviceScript::DiscoveredCharacteristicAction
	Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___DiscoveredCharacteristicAction_20;
	// System.Action`1<System.String> BluetoothDeviceScript::DidWriteCharacteristicAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DidWriteCharacteristicAction_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicAction
	Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* ___DidUpdateNotificationStateForCharacteristicAction_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction
	Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* ___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>> BluetoothDeviceScript::DidUpdateCharacteristicValueAction
	Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* ___DidUpdateCharacteristicValueAction_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>> BluetoothDeviceScript::DidUpdateCharacteristicValueWithDeviceAddressAction
	Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* ___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
	// System.Action`2<System.String,System.Int32> BluetoothDeviceScript::RequestMtuAction
	Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* ___RequestMtuAction_26;
};

// MoveSample
struct MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RotateSample
struct RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SampleInfo
struct SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String iTween::id
	String_t* ___id_5;
	// System.String iTween::type
	String_t* ___type_6;
	// System.String iTween::method
	String_t* ___method_7;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_8;
	// System.Single iTween::time
	float ___time_9;
	// System.Single iTween::delay
	float ___delay_10;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_11;
	// System.Boolean iTween::isRunning
	bool ___isRunning_12;
	// System.Boolean iTween::isPaused
	bool ___isPaused_13;
	// System.String iTween::_name
	String_t* ____name_14;
	// System.Single iTween::runningTime
	float ___runningTime_15;
	// System.Single iTween::percentage
	float ___percentage_16;
	// System.Single iTween::delayStarted
	float ___delayStarted_17;
	// System.Boolean iTween::kinematic
	bool ___kinematic_18;
	// System.Boolean iTween::isLocal
	bool ___isLocal_19;
	// System.Boolean iTween::loop
	bool ___loop_20;
	// System.Boolean iTween::reverse
	bool ___reverse_21;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_22;
	// System.Boolean iTween::physics
	bool ___physics_23;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___tweenArguments_24;
	// UnityEngine.Space iTween::space
	int32_t ___space_25;
	// iTween/EasingFunction iTween::ease
	EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* ___ease_26;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* ___apply_27;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_28;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vector3s_29;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vector2s_30;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E* ___colors_31;
	// System.Single[] iTween::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_32;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___rects_33;
	// iTween/CRSpline iTween::path
	CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* ___path_34;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___preUpdate_35;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___postUpdate_36;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_37;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_38;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_39;
	// UnityEngine.Transform iTween::thisTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform_40;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// BluetoothLEHardwareInterface
struct BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields
{
	// UnityEngine.AndroidJavaObject BluetoothLEHardwareInterface::_android
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____android_0;
	// BluetoothDeviceScript BluetoothLEHardwareInterface::bluetoothDeviceScript
	BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* ___bluetoothDeviceScript_1;
};

// BluetoothLEHardwareInterface

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// iTween/<Start>d__229

// iTween/<Start>d__229

// iTween/<TweenDelay>d__145

// iTween/<TweenDelay>d__145

// iTween/<TweenRestart>d__147

// iTween/<TweenRestart>d__147

// iTween/CRSpline

// iTween/CRSpline

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// BluetoothLEHardwareInterface/iBeaconData

// BluetoothLEHardwareInterface/iBeaconData

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// iTween/Defaults
struct Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields
{
	// System.Single iTween/Defaults::time
	float ___time_0;
	// System.Single iTween/Defaults::delay
	float ___delay_1;
	// iTween/NamedValueColor iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween/LoopType iTween/Defaults::loopType
	int32_t ___loopType_3;
	// iTween/EaseType iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween/Defaults::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// System.Single iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Single iTween/Defaults::lookAhead
	float ___lookAhead_12;
	// System.Boolean iTween/Defaults::useRealTime
	bool ___useRealTime_13;
	// UnityEngine.Vector3 iTween/Defaults::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_14;
};

// iTween/Defaults

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>

// System.Action`1<BluetoothLEHardwareInterface/iBeaconData>

// System.Action`2<System.Object,System.Int32>

// System.Action`2<System.Object,System.Int32>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.String,System.Byte[]>

// System.Action`2<System.String,System.Byte[]>

// System.Action`2<System.String,System.Int32>

// System.Action`2<System.String,System.Int32>

// System.Action`2<System.String,System.String>

// System.Action`2<System.String,System.String>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<System.String,System.String,System.Byte[]>

// System.Action`3<System.String,System.String,System.Byte[]>

// System.Action`3<System.String,System.String,System.String>

// System.Action`3<System.String,System.String,System.String>

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>

// System.Action`4<System.Object,System.Object,System.Int32,System.Object>

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// iTween/ApplyTween

// iTween/ApplyTween

// iTween/EasingFunction

// iTween/EasingFunction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BluetoothDeviceScript

// BluetoothDeviceScript

// MoveSample

// MoveSample

// RotateSample

// RotateSample

// SampleInfo

// SampleInfo

// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_StaticFields
{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B* ___tweens_4;
};

// iTween
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Object,System.Object,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline (Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) ;
// System.Void System.Action`1<BluetoothLEHardwareInterface/iBeaconData>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::.ctor()
inline void Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::.ctor()
inline void Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::.ctor()
inline void Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::.ctor()
inline void Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::FinishDeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Action`2<System.String,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* __this, String_t* ___0_arg1, String_t* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, String_t*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.String,System.String,System.Int32,System.Byte[]>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_mD9DD80B61F675BE34D06BB382884E69323B1C8C1_inline (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* __this, String_t* ___0_arg1, String_t* ___1_arg2, int32_t ___2_arg3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D*, String_t*, String_t*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
// System.Void System.Action`1<BluetoothLEHardwareInterface/iBeaconData>::Invoke(T)
inline void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE*, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96, const RuntimeMethod*))Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline)(__this, ___0_obj, method);
}
// System.Void BluetoothDeviceScript::OnPeripheralData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_characteristic, String_t* ___1_base64Data, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.String,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mABFB1B378BF33588992DD5A0180457B4ADB790D9_inline (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* __this, String_t* ___0_arg1, String_t* ___1_arg2, String_t* ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*, String_t*, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::get_Item(TKey)
inline Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61 (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::get_Item(TKey)
inline Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23 (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::get_Item(TKey)
inline Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::get_Item(TKey)
inline Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_deviceAddress, String_t* ___1_characteristic, String_t* ___2_base64Data, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.String,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m69AAAB992ABFCF392F04C4F7E3CE91388C9E24E1_inline (Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* __this, String_t* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF*, String_t*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::get_Item(TKey)
inline Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1 (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::get_Item(TKey)
inline Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Action`2<System.String,System.Byte[]>::Invoke(T1,T2)
inline void Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* __this, String_t* ___0_arg1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::get_Item(TKey)
inline Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::get_Item(TKey)
inline Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Action`3<System.String,System.String,System.Byte[]>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m621E4DDF08B7AB38B686646F5E5821CBB4B85A14_inline (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* __this, String_t* ___0_arg1, String_t* ___1_arg2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BluetoothDeviceScript>()
inline BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<BluetoothDeviceScript>()
inline BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_methodName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::.ctor()
inline void Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476 (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* __this, String_t* ___0_key, Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*, String_t*, Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String BluetoothLEHardwareInterface::FullUUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59 (String_t* ___0_uuid, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.Byte[]>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2 (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* __this, String_t* ___0_key, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*, String_t*, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706 (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* __this, String_t* ___0_key, Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*, String_t*, Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*, String_t*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7 (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* __this, String_t* ___0_key, Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*, String_t*, Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<System.String,System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87 (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* __this, String_t* ___0_key, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*, String_t*, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::.ctor()
inline void Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468 (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* __this, String_t* ___0_key, Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*, String_t*, Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`3<System.String,System.String,System.Byte[]>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26 (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* __this, String_t* ___0_key, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*, String_t*, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void iTween::TweenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5 (iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Hashtable iTween::Hash(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_MoveBy_mD42756F0CC55A0DF39BFA08B8298E076CD377B53 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___1_args, const RuntimeMethod* method) ;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_RotateBy_m5174001D7DC2ADDA5D225458FDD23CE9724C4A20 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BluetoothDeviceScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_Start_m53F8F286D6BE17577FAF0DD4E5D671D9B2DDFE64 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DiscoveredDeviceList = new List<string> ();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___DiscoveredDeviceList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DiscoveredDeviceList_4), (void*)L_0);
		// DidUpdateNotificationStateForCharacteristicAction = new Dictionary<string, Dictionary<string, Action<string>>> ();
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_1 = (Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D*)il2cpp_codegen_object_new(Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F(L_1, Dictionary_2__ctor_mFACB7E9C70103BA8CD2CFFC7D56AB4B8B9FADD7F_RuntimeMethod_var);
		__this->___DidUpdateNotificationStateForCharacteristicAction_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateNotificationStateForCharacteristicAction_22), (void*)L_1);
		// DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction = new Dictionary<string, Dictionary<string, Action<string, string>>> ();
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_2 = (Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74*)il2cpp_codegen_object_new(Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C(L_2, Dictionary_2__ctor_m15E112E61AB3E2CDF5F8C4D5478C173E7CE98B4C_RuntimeMethod_var);
		__this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23), (void*)L_2);
		// DidUpdateCharacteristicValueAction = new Dictionary<string, Dictionary<string, Action<string, byte[]>>> ();
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_3 = (Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78*)il2cpp_codegen_object_new(Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5(L_3, Dictionary_2__ctor_m2C28FA742C2910206687FAC6656082BB86091AB5_RuntimeMethod_var);
		__this->___DidUpdateCharacteristicValueAction_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateCharacteristicValueAction_24), (void*)L_3);
		// DidUpdateCharacteristicValueWithDeviceAddressAction = new Dictionary<string, Dictionary<string, Action<string, string, byte[]>>> ();
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_4 = (Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883*)il2cpp_codegen_object_new(Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F(L_4, Dictionary_2__ctor_mA59DD81658DA8792C58F4AF9ABB667457AE7888F_RuntimeMethod_var);
		__this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25), (void*)L_4);
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_Update_m7CE25112852AB386721649D3849111E326B465A0 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothMessage_m80BB33FD05C1343CCDF235788EFB697AA33831DF (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19CFDD2C539A7CE015BAF7FA91E0636F61E07A8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C967FB0FDDFDD350AAAC8A57A805B9073975414);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6952613B8B093774517AF3F81122D856B46CD821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8BB41A13E5EDCEDC15EDDF056995867A8B5062C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 V_29;
	memset((&V_29), 0, sizeof(V_29));
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	bool V_51 = false;
	bool V_52 = false;
	bool V_53 = false;
	bool V_54 = false;
	bool V_55 = false;
	bool V_56 = false;
	Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* V_57 = NULL;
	bool V_58 = false;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_59 = NULL;
	bool V_60 = false;
	bool V_61 = false;
	Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* V_62 = NULL;
	bool V_63 = false;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* V_64 = NULL;
	bool V_65 = false;
	bool V_66 = false;
	bool V_67 = false;
	bool V_68 = false;
	bool V_69 = false;
	bool V_70 = false;
	int32_t V_71 = 0;
	bool V_72 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B92_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B108_0 = 0;
	int32_t G_B112_0 = 0;
	int32_t G_B118_0 = 0;
	int32_t G_B129_0 = 0;
	int32_t G_B133_0 = 0;
	int32_t G_B139_0 = 0;
	int32_t G_B143_0 = 0;
	int32_t G_B149_0 = 0;
	int32_t G_B153_0 = 0;
	int32_t G_B159_0 = 0;
	int32_t G_B164_0 = 0;
	int32_t G_B168_0 = 0;
	int32_t G_B176_0 = 0;
	int32_t G_B180_0 = 0;
	int32_t G_B190_0 = 0;
	int32_t G_B197_0 = 0;
	{
		// if (message != null)
		String_t* L_0 = ___0_message;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0a3e;
		}
	}
	{
		// char[] delim = new char[] { '~' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)126));
		V_1 = L_3;
		// string[] parts = message.Split (delim);
		String_t* L_4 = ___0_message;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_1;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_4, L_5, NULL);
		V_2 = L_6;
		// if (message.Length >= deviceInitializedString.Length && message.Substring (0, deviceInitializedString.Length) == deviceInitializedString)
		String_t* L_7 = ___0_message;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_10 = ___0_message;
		NullCheck(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
		G_B4_0 = ((int32_t)(L_13));
		goto IL_0051;
	}

IL_0050:
	{
		G_B4_0 = 0;
	}

IL_0051:
	{
		V_3 = (bool)G_B4_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// if (InitializedAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = __this->___InitializedAction_5;
		V_4 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// InitializedAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = __this->___InitializedAction_5;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
	}

IL_0071:
	{
		goto IL_0a3d;
	}

IL_0077:
	{
		// else if (message.Length >= deviceLog.Length && message.Substring (0, deviceLog.Length) == deviceLog)
		String_t* L_18 = ___0_message;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		NullCheck(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_21 = ___0_message;
		NullCheck(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		NullCheck(L_21);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, 0, L_22, NULL);
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B11_0 = 0;
	}

IL_00a7:
	{
		V_5 = (bool)G_B11_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00bd;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log (parts[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_28, NULL);
		goto IL_0a3d;
	}

IL_00bd:
	{
		// else if (message.Length >= deviceDeInitializedString.Length && message.Substring (0, deviceDeInitializedString.Length) == deviceDeInitializedString)
		String_t* L_29 = ___0_message;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		NullCheck(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_32 = ___0_message;
		NullCheck(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		NullCheck(L_32);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_32, 0, L_33, NULL);
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
		G_B16_0 = ((int32_t)(L_35));
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B16_0 = 0;
	}

IL_00ed:
	{
		V_6 = (bool)G_B16_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_011b;
		}
	}
	{
		// BluetoothLEHardwareInterface.FinishDeInitialize ();
		BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2(NULL);
		// if (DeinitializedAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = __this->___DeinitializedAction_6;
		V_7 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_0115;
		}
	}
	{
		// DeinitializedAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_39 = __this->___DeinitializedAction_6;
		NullCheck(L_39);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_39, NULL);
	}

IL_0115:
	{
		goto IL_0a3d;
	}

IL_011b:
	{
		// else if (message.Length >= deviceErrorString.Length && message.Substring (0, deviceErrorString.Length) == deviceErrorString)
		String_t* L_40 = ___0_message;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		NullCheck(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		int32_t L_42;
		L_42 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_014a;
		}
	}
	{
		String_t* L_43 = ___0_message;
		NullCheck(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		int32_t L_44;
		L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		NullCheck(L_43);
		String_t* L_45;
		L_45 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_43, 0, L_44, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, NULL);
		G_B23_0 = ((int32_t)(L_46));
		goto IL_014b;
	}

IL_014a:
	{
		G_B23_0 = 0;
	}

IL_014b:
	{
		V_8 = (bool)G_B23_0;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0190;
		}
	}
	{
		// string error = "";
		V_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_2;
		NullCheck(L_48);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_016d;
		}
	}
	{
		// error = parts[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = V_2;
		NullCheck(L_50);
		int32_t L_51 = 1;
		String_t* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_9 = L_52;
	}

IL_016d:
	{
		// if (ErrorAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_53 = __this->___ErrorAction_7;
		V_11 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_11;
		if (!L_54)
		{
			goto IL_018a;
		}
	}
	{
		// ErrorAction (error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_55 = __this->___ErrorAction_7;
		String_t* L_56 = V_9;
		NullCheck(L_55);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_55, L_56, NULL);
	}

IL_018a:
	{
		goto IL_0a3d;
	}

IL_0190:
	{
		// else if (message.Length >= deviceServiceAdded.Length && message.Substring (0, deviceServiceAdded.Length) == deviceServiceAdded)
		String_t* L_57 = ___0_message;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_57, NULL);
		NullCheck(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		int32_t L_59;
		L_59 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_01bf;
		}
	}
	{
		String_t* L_60 = ___0_message;
		NullCheck(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2);
		int32_t L_61;
		L_61 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		NullCheck(L_60);
		String_t* L_62;
		L_62 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, 0, L_61, NULL);
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral8ECB79B6EBAF555ECC8A534557CBA387332ABDB2, NULL);
		G_B32_0 = ((int32_t)(L_63));
		goto IL_01c0;
	}

IL_01bf:
	{
		G_B32_0 = 0;
	}

IL_01c0:
	{
		V_12 = (bool)G_B32_0;
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_01fc;
		}
	}
	{
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = V_2;
		NullCheck(L_65);
		V_13 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_01f6;
		}
	}
	{
		// if (ServiceAddedAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_67 = __this->___ServiceAddedAction_8;
		V_14 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_67) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_68 = V_14;
		if (!L_68)
		{
			goto IL_01f5;
		}
	}
	{
		// ServiceAddedAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_69 = __this->___ServiceAddedAction_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = V_2;
		NullCheck(L_70);
		int32_t L_71 = 1;
		String_t* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_69);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_69, L_72, NULL);
	}

IL_01f5:
	{
	}

IL_01f6:
	{
		goto IL_0a3d;
	}

IL_01fc:
	{
		// else if (message.Length >= deviceStartedAdvertising.Length && message.Substring (0, deviceStartedAdvertising.Length) == deviceStartedAdvertising)
		String_t* L_73 = ___0_message;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_73, NULL);
		NullCheck(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		int32_t L_75;
		L_75 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_022b;
		}
	}
	{
		String_t* L_76 = ___0_message;
		NullCheck(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F);
		int32_t L_77;
		L_77 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		NullCheck(L_76);
		String_t* L_78;
		L_78 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_76, 0, L_77, NULL);
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral055547E9CF7CA46009A0E7BBE0EBFD1D965FA37F, NULL);
		G_B41_0 = ((int32_t)(L_79));
		goto IL_022c;
	}

IL_022b:
	{
		G_B41_0 = 0;
	}

IL_022c:
	{
		V_15 = (bool)G_B41_0;
		bool L_80 = V_15;
		if (!L_80)
		{
			goto IL_025f;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log ("Started Advertising");
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(_stringLiteral01FC300FC7D69084F12B27BCC0C38122C800B8C9, NULL);
		// if (StartedAdvertisingAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_81 = __this->___StartedAdvertisingAction_9;
		V_16 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_81) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_82 = V_16;
		if (!L_82)
		{
			goto IL_0259;
		}
	}
	{
		// StartedAdvertisingAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_83 = __this->___StartedAdvertisingAction_9;
		NullCheck(L_83);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_83, NULL);
	}

IL_0259:
	{
		goto IL_0a3d;
	}

IL_025f:
	{
		// else if (message.Length >= deviceStoppedAdvertising.Length && message.Substring (0, deviceStoppedAdvertising.Length) == deviceStoppedAdvertising)
		String_t* L_84 = ___0_message;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_84, NULL);
		NullCheck(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		int32_t L_86;
		L_86 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_028e;
		}
	}
	{
		String_t* L_87 = ___0_message;
		NullCheck(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51);
		int32_t L_88;
		L_88 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		NullCheck(L_87);
		String_t* L_89;
		L_89 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_87, 0, L_88, NULL);
		bool L_90;
		L_90 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_89, _stringLiteralB8DEA5867E81465D0D2D4C07103BBEB6CDADFD51, NULL);
		G_B48_0 = ((int32_t)(L_90));
		goto IL_028f;
	}

IL_028e:
	{
		G_B48_0 = 0;
	}

IL_028f:
	{
		V_17 = (bool)G_B48_0;
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_02c2;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log ("Stopped Advertising");
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(_stringLiteralCDC8B946EE0851853017EBA616344D4F97D44411, NULL);
		// if (StoppedAdvertisingAction != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_92 = __this->___StoppedAdvertisingAction_10;
		V_18 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_92) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_93 = V_18;
		if (!L_93)
		{
			goto IL_02bc;
		}
	}
	{
		// StoppedAdvertisingAction ();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_94 = __this->___StoppedAdvertisingAction_10;
		NullCheck(L_94);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_94, NULL);
	}

IL_02bc:
	{
		goto IL_0a3d;
	}

IL_02c2:
	{
		// else if (message.Length >= deviceDiscoveredPeripheral.Length && message.Substring (0, deviceDiscoveredPeripheral.Length) == deviceDiscoveredPeripheral)
		String_t* L_95 = ___0_message;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_95, NULL);
		NullCheck(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		int32_t L_97;
		L_97 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_02f1;
		}
	}
	{
		String_t* L_98 = ___0_message;
		NullCheck(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49);
		int32_t L_99;
		L_99 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		NullCheck(L_98);
		String_t* L_100;
		L_100 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_98, 0, L_99, NULL);
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralD11AE57CAF5237AA62C8FC603DA1381EB3BF7B49, NULL);
		G_B55_0 = ((int32_t)(L_101));
		goto IL_02f2;
	}

IL_02f1:
	{
		G_B55_0 = 0;
	}

IL_02f2:
	{
		V_19 = (bool)G_B55_0;
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_03cc;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_2;
		NullCheck(L_103);
		V_20 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_104 = V_20;
		if (!L_104)
		{
			goto IL_03c6;
		}
	}
	{
		// if (!DiscoveredDeviceList.Contains (parts[1] + "|" + parts[2]))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_105 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_106 = V_2;
		NullCheck(L_106);
		int32_t L_107 = 1;
		String_t* L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = V_2;
		NullCheck(L_109);
		int32_t L_110 = 2;
		String_t* L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_108, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_111, NULL);
		NullCheck(L_105);
		bool L_113;
		L_113 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_105, L_112, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_21 = (bool)((((int32_t)L_113) == ((int32_t)0))? 1 : 0);
		bool L_114 = V_21;
		if (!L_114)
		{
			goto IL_0372;
		}
	}
	{
		// DiscoveredDeviceList.Add (parts[1] + "|" + parts[2]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_115 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_116 = V_2;
		NullCheck(L_116);
		int32_t L_117 = 1;
		String_t* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = V_2;
		NullCheck(L_119);
		int32_t L_120 = 2;
		String_t* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		String_t* L_122;
		L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_118, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_121, NULL);
		NullCheck(L_115);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_115, L_122, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (DiscoveredPeripheralAction != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_123 = __this->___DiscoveredPeripheralAction_11;
		V_22 = (bool)((!(((RuntimeObject*)(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)L_123) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_124 = V_22;
		if (!L_124)
		{
			goto IL_0371;
		}
	}
	{
		// DiscoveredPeripheralAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_125 = __this->___DiscoveredPeripheralAction_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_126 = V_2;
		NullCheck(L_126);
		int32_t L_127 = 1;
		String_t* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = V_2;
		NullCheck(L_129);
		int32_t L_130 = 2;
		String_t* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_125);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_125, L_128, L_131, NULL);
	}

IL_0371:
	{
	}

IL_0372:
	{
		// if (parts.Length >= 5 && DiscoveredPeripheralWithAdvertisingInfoAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_132 = V_2;
		NullCheck(L_132);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_132)->max_length))) < ((int32_t)5)))
		{
			goto IL_0383;
		}
	}
	{
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_133 = __this->___DiscoveredPeripheralWithAdvertisingInfoAction_12;
		G_B64_0 = ((!(((RuntimeObject*)(Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D*)L_133) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0384;
	}

IL_0383:
	{
		G_B64_0 = 0;
	}

IL_0384:
	{
		V_23 = (bool)G_B64_0;
		bool L_134 = V_23;
		if (!L_134)
		{
			goto IL_03c5;
		}
	}
	{
		// int rssi = 0;
		V_24 = 0;
		// if (!int.TryParse (parts[3], out rssi))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_135 = V_2;
		NullCheck(L_135);
		int32_t L_136 = 3;
		String_t* L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		bool L_138;
		L_138 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_137, (&V_24), NULL);
		V_26 = (bool)((((int32_t)L_138) == ((int32_t)0))? 1 : 0);
		bool L_139 = V_26;
		if (!L_139)
		{
			goto IL_03a4;
		}
	}
	{
		// rssi = 0;
		V_24 = 0;
	}

IL_03a4:
	{
		// byte[] bytes = System.Convert.FromBase64String (parts[4]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_140 = V_2;
		NullCheck(L_140);
		int32_t L_141 = 4;
		String_t* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143;
		L_143 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_142, NULL);
		V_25 = L_143;
		// DiscoveredPeripheralWithAdvertisingInfoAction (parts[1], parts[2], rssi, bytes);
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_144 = __this->___DiscoveredPeripheralWithAdvertisingInfoAction_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = V_2;
		NullCheck(L_145);
		int32_t L_146 = 1;
		String_t* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_148 = V_2;
		NullCheck(L_148);
		int32_t L_149 = 2;
		String_t* L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = V_25;
		NullCheck(L_144);
		Action_4_Invoke_mD9DD80B61F675BE34D06BB382884E69323B1C8C1_inline(L_144, L_147, L_150, L_151, L_152, NULL);
	}

IL_03c5:
	{
	}

IL_03c6:
	{
		goto IL_0a3d;
	}

IL_03cc:
	{
		// else if (message.Length >= deviceDiscoveredBeacon.Length && message.Substring (0, deviceDiscoveredBeacon.Length) == deviceDiscoveredBeacon)
		String_t* L_153 = ___0_message;
		NullCheck(L_153);
		int32_t L_154;
		L_154 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_153, NULL);
		NullCheck(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		int32_t L_155;
		L_155 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		if ((((int32_t)L_154) < ((int32_t)L_155)))
		{
			goto IL_03fb;
		}
	}
	{
		String_t* L_156 = ___0_message;
		NullCheck(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53);
		int32_t L_157;
		L_157 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		NullCheck(L_156);
		String_t* L_158;
		L_158 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_156, 0, L_157, NULL);
		bool L_159;
		L_159 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_158, _stringLiteral3DB71419DD7D9B880A3A7641C61DD34A55D73E53, NULL);
		G_B73_0 = ((int32_t)(L_159));
		goto IL_03fc;
	}

IL_03fb:
	{
		G_B73_0 = 0;
	}

IL_03fc:
	{
		V_27 = (bool)G_B73_0;
		bool L_160 = V_27;
		if (!L_160)
		{
			goto IL_04f1;
		}
	}
	{
		// if (parts.Length >= 7)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = V_2;
		NullCheck(L_161);
		V_28 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_161)->max_length))) < ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_162 = V_28;
		if (!L_162)
		{
			goto IL_04eb;
		}
	}
	{
		// var iBeaconData = new BluetoothLEHardwareInterface.iBeaconData ();
		il2cpp_codegen_initobj((&V_29), sizeof(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96));
		// iBeaconData.UUID = parts[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_163 = V_2;
		NullCheck(L_163);
		int32_t L_164 = 1;
		String_t* L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		(&V_29)->___UUID_0 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_29)->___UUID_0), (void*)L_165);
		// if (!int.TryParse (parts[2], out iBeaconData.Major))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = V_2;
		NullCheck(L_166);
		int32_t L_167 = 2;
		String_t* L_168 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		int32_t* L_169 = (&(&V_29)->___Major_1);
		bool L_170;
		L_170 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_168, L_169, NULL);
		V_31 = (bool)((((int32_t)L_170) == ((int32_t)0))? 1 : 0);
		bool L_171 = V_31;
		if (!L_171)
		{
			goto IL_044b;
		}
	}
	{
		// iBeaconData.Major = 0;
		(&V_29)->___Major_1 = 0;
	}

IL_044b:
	{
		// if (!int.TryParse (parts[3], out iBeaconData.Minor))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_172 = V_2;
		NullCheck(L_172);
		int32_t L_173 = 3;
		String_t* L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t* L_175 = (&(&V_29)->___Minor_2);
		bool L_176;
		L_176 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_174, L_175, NULL);
		V_32 = (bool)((((int32_t)L_176) == ((int32_t)0))? 1 : 0);
		bool L_177 = V_32;
		if (!L_177)
		{
			goto IL_046b;
		}
	}
	{
		// iBeaconData.Minor = 0;
		(&V_29)->___Minor_2 = 0;
	}

IL_046b:
	{
		// if (!int.TryParse (parts[4], out iBeaconData.RSSI))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_178 = V_2;
		NullCheck(L_178);
		int32_t L_179 = 4;
		String_t* L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		int32_t* L_181 = (&(&V_29)->___RSSI_3);
		bool L_182;
		L_182 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_180, L_181, NULL);
		V_33 = (bool)((((int32_t)L_182) == ((int32_t)0))? 1 : 0);
		bool L_183 = V_33;
		if (!L_183)
		{
			goto IL_048b;
		}
	}
	{
		// iBeaconData.RSSI = 0;
		(&V_29)->___RSSI_3 = 0;
	}

IL_048b:
	{
		// if (!int.TryParse (parts[5], out iBeaconData.AndroidSignalPower))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_184 = V_2;
		NullCheck(L_184);
		int32_t L_185 = 5;
		String_t* L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t* L_187 = (&(&V_29)->___AndroidSignalPower_4);
		bool L_188;
		L_188 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_186, L_187, NULL);
		V_34 = (bool)((((int32_t)L_188) == ((int32_t)0))? 1 : 0);
		bool L_189 = V_34;
		if (!L_189)
		{
			goto IL_04ab;
		}
	}
	{
		// iBeaconData.AndroidSignalPower = 0;
		(&V_29)->___AndroidSignalPower_4 = 0;
	}

IL_04ab:
	{
		// int iOSProximity = 0;
		V_30 = 0;
		// if (!int.TryParse (parts[6], out iOSProximity))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_190 = V_2;
		NullCheck(L_190);
		int32_t L_191 = 6;
		String_t* L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		bool L_193;
		L_193 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_192, (&V_30), NULL);
		V_35 = (bool)((((int32_t)L_193) == ((int32_t)0))? 1 : 0);
		bool L_194 = V_35;
		if (!L_194)
		{
			goto IL_04c4;
		}
	}
	{
		// iOSProximity = 0;
		V_30 = 0;
	}

IL_04c4:
	{
		// iBeaconData.iOSProximity = (BluetoothLEHardwareInterface.iOSProximity)iOSProximity;
		int32_t L_195 = V_30;
		(&V_29)->___iOSProximity_5 = L_195;
		// if (DiscoveredBeaconAction != null)
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_196 = __this->___DiscoveredBeaconAction_13;
		V_36 = (bool)((!(((RuntimeObject*)(Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE*)L_196) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_197 = V_36;
		if (!L_197)
		{
			goto IL_04ea;
		}
	}
	{
		// DiscoveredBeaconAction (iBeaconData);
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_198 = __this->___DiscoveredBeaconAction_13;
		iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 L_199 = V_29;
		NullCheck(L_198);
		Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_inline(L_198, L_199, NULL);
	}

IL_04ea:
	{
	}

IL_04eb:
	{
		goto IL_0a3d;
	}

IL_04f1:
	{
		// else if (message.Length >= deviceRetrievedConnectedPeripheral.Length && message.Substring (0, deviceRetrievedConnectedPeripheral.Length) == deviceRetrievedConnectedPeripheral)
		String_t* L_200 = ___0_message;
		NullCheck(L_200);
		int32_t L_201;
		L_201 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_200, NULL);
		NullCheck(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		int32_t L_202;
		L_202 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		if ((((int32_t)L_201) < ((int32_t)L_202)))
		{
			goto IL_0520;
		}
	}
	{
		String_t* L_203 = ___0_message;
		NullCheck(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28);
		int32_t L_204;
		L_204 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		NullCheck(L_203);
		String_t* L_205;
		L_205 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_203, 0, L_204, NULL);
		bool L_206;
		L_206 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_205, _stringLiteralBC1F19B5269AF2F944325E84A78744A84AC90E28, NULL);
		G_B92_0 = ((int32_t)(L_206));
		goto IL_0521;
	}

IL_0520:
	{
		G_B92_0 = 0;
	}

IL_0521:
	{
		V_37 = (bool)G_B92_0;
		bool L_207 = V_37;
		if (!L_207)
		{
			goto IL_056f;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_208 = V_2;
		NullCheck(L_208);
		V_38 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_208)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_209 = V_38;
		if (!L_209)
		{
			goto IL_0569;
		}
	}
	{
		// DiscoveredDeviceList.Add (parts[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_210 = __this->___DiscoveredDeviceList_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_211 = V_2;
		NullCheck(L_211);
		int32_t L_212 = 1;
		String_t* L_213 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		NullCheck(L_210);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_210, L_213, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (RetrievedConnectedPeripheralAction != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_214 = __this->___RetrievedConnectedPeripheralAction_14;
		V_39 = (bool)((!(((RuntimeObject*)(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)L_214) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_215 = V_39;
		if (!L_215)
		{
			goto IL_0568;
		}
	}
	{
		// RetrievedConnectedPeripheralAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_216 = __this->___RetrievedConnectedPeripheralAction_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_217 = V_2;
		NullCheck(L_217);
		int32_t L_218 = 1;
		String_t* L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_220 = V_2;
		NullCheck(L_220);
		int32_t L_221 = 2;
		String_t* L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		NullCheck(L_216);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_216, L_219, L_222, NULL);
	}

IL_0568:
	{
	}

IL_0569:
	{
		goto IL_0a3d;
	}

IL_056f:
	{
		// else if (message.Length >= devicePeripheralReceivedWriteData.Length && message.Substring (0, devicePeripheralReceivedWriteData.Length) == devicePeripheralReceivedWriteData)
		String_t* L_223 = ___0_message;
		NullCheck(L_223);
		int32_t L_224;
		L_224 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_223, NULL);
		NullCheck(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		int32_t L_225;
		L_225 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		if ((((int32_t)L_224) < ((int32_t)L_225)))
		{
			goto IL_059e;
		}
	}
	{
		String_t* L_226 = ___0_message;
		NullCheck(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE);
		int32_t L_227;
		L_227 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		NullCheck(L_226);
		String_t* L_228;
		L_228 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_226, 0, L_227, NULL);
		bool L_229;
		L_229 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_228, _stringLiteral04938D88CCBF5A98466865086ED2669F409064BE, NULL);
		G_B101_0 = ((int32_t)(L_229));
		goto IL_059f;
	}

IL_059e:
	{
		G_B101_0 = 0;
	}

IL_059f:
	{
		V_40 = (bool)G_B101_0;
		bool L_230 = V_40;
		if (!L_230)
		{
			goto IL_05c8;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_231 = V_2;
		NullCheck(L_231);
		V_41 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_231)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_232 = V_41;
		if (!L_232)
		{
			goto IL_05c2;
		}
	}
	{
		// OnPeripheralData (parts[1], parts[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_233 = V_2;
		NullCheck(L_233);
		int32_t L_234 = 1;
		String_t* L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_236 = V_2;
		NullCheck(L_236);
		int32_t L_237 = 2;
		String_t* L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96(__this, L_235, L_238, NULL);
	}

IL_05c2:
	{
		goto IL_0a3d;
	}

IL_05c8:
	{
		// else if (message.Length >= deviceConnectedPeripheral.Length && message.Substring (0, deviceConnectedPeripheral.Length) == deviceConnectedPeripheral)
		String_t* L_239 = ___0_message;
		NullCheck(L_239);
		int32_t L_240;
		L_240 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_239, NULL);
		NullCheck(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		int32_t L_241;
		L_241 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		if ((((int32_t)L_240) < ((int32_t)L_241)))
		{
			goto IL_05f7;
		}
	}
	{
		String_t* L_242 = ___0_message;
		NullCheck(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9);
		int32_t L_243;
		L_243 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		NullCheck(L_242);
		String_t* L_244;
		L_244 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_242, 0, L_243, NULL);
		bool L_245;
		L_245 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_244, _stringLiteralA7311ED0828EB188F47CB67E1036A7572167C2F9, NULL);
		G_B108_0 = ((int32_t)(L_245));
		goto IL_05f8;
	}

IL_05f7:
	{
		G_B108_0 = 0;
	}

IL_05f8:
	{
		V_42 = (bool)G_B108_0;
		bool L_246 = V_42;
		if (!L_246)
		{
			goto IL_062c;
		}
	}
	{
		// if (parts.Length >= 2 && ConnectedPeripheralAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_247 = V_2;
		NullCheck(L_247);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_247)->max_length))) < ((int32_t)2)))
		{
			goto IL_0610;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_248 = __this->___ConnectedPeripheralAction_16;
		G_B112_0 = ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_248) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0611;
	}

IL_0610:
	{
		G_B112_0 = 0;
	}

IL_0611:
	{
		V_43 = (bool)G_B112_0;
		bool L_249 = V_43;
		if (!L_249)
		{
			goto IL_0626;
		}
	}
	{
		// ConnectedPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_250 = __this->___ConnectedPeripheralAction_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_251 = V_2;
		NullCheck(L_251);
		int32_t L_252 = 1;
		String_t* L_253 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		NullCheck(L_250);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_250, L_253, NULL);
	}

IL_0626:
	{
		goto IL_0a3d;
	}

IL_062c:
	{
		// else if (message.Length >= deviceDisconnectedPeripheral.Length && message.Substring (0, deviceDisconnectedPeripheral.Length) == deviceDisconnectedPeripheral)
		String_t* L_254 = ___0_message;
		NullCheck(L_254);
		int32_t L_255;
		L_255 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_254, NULL);
		NullCheck(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		int32_t L_256;
		L_256 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		if ((((int32_t)L_255) < ((int32_t)L_256)))
		{
			goto IL_065b;
		}
	}
	{
		String_t* L_257 = ___0_message;
		NullCheck(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3);
		int32_t L_258;
		L_258 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		NullCheck(L_257);
		String_t* L_259;
		L_259 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_257, 0, L_258, NULL);
		bool L_260;
		L_260 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_259, _stringLiteralA4D91B5857748A8BA4721A92F64CB7597B1037E3, NULL);
		G_B118_0 = ((int32_t)(L_260));
		goto IL_065c;
	}

IL_065b:
	{
		G_B118_0 = 0;
	}

IL_065c:
	{
		V_44 = (bool)G_B118_0;
		bool L_261 = V_44;
		if (!L_261)
		{
			goto IL_06b6;
		}
	}
	{
		// if (parts.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_262 = V_2;
		NullCheck(L_262);
		V_45 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_262)->max_length))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_263 = V_45;
		if (!L_263)
		{
			goto IL_06b0;
		}
	}
	{
		// if (ConnectedDisconnectPeripheralAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_264 = __this->___ConnectedDisconnectPeripheralAction_17;
		V_46 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_264) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_265 = V_46;
		if (!L_265)
		{
			goto IL_0691;
		}
	}
	{
		// ConnectedDisconnectPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_266 = __this->___ConnectedDisconnectPeripheralAction_17;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_267 = V_2;
		NullCheck(L_267);
		int32_t L_268 = 1;
		String_t* L_269 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		NullCheck(L_266);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_266, L_269, NULL);
	}

IL_0691:
	{
		// if (DisconnectedPeripheralAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_270 = __this->___DisconnectedPeripheralAction_18;
		V_47 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_270) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_271 = V_47;
		if (!L_271)
		{
			goto IL_06af;
		}
	}
	{
		// DisconnectedPeripheralAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_272 = __this->___DisconnectedPeripheralAction_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_273 = V_2;
		NullCheck(L_273);
		int32_t L_274 = 1;
		String_t* L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		NullCheck(L_272);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_272, L_275, NULL);
	}

IL_06af:
	{
	}

IL_06b0:
	{
		goto IL_0a3d;
	}

IL_06b6:
	{
		// else if (message.Length >= deviceDiscoveredService.Length && message.Substring (0, deviceDiscoveredService.Length) == deviceDiscoveredService)
		String_t* L_276 = ___0_message;
		NullCheck(L_276);
		int32_t L_277;
		L_277 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_276, NULL);
		NullCheck(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		int32_t L_278;
		L_278 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		if ((((int32_t)L_277) < ((int32_t)L_278)))
		{
			goto IL_06e5;
		}
	}
	{
		String_t* L_279 = ___0_message;
		NullCheck(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105);
		int32_t L_280;
		L_280 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		NullCheck(L_279);
		String_t* L_281;
		L_281 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_279, 0, L_280, NULL);
		bool L_282;
		L_282 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_281, _stringLiteral283D774A5141A159CCA779600D4FD489AFD39105, NULL);
		G_B129_0 = ((int32_t)(L_282));
		goto IL_06e6;
	}

IL_06e5:
	{
		G_B129_0 = 0;
	}

IL_06e6:
	{
		V_48 = (bool)G_B129_0;
		bool L_283 = V_48;
		if (!L_283)
		{
			goto IL_071d;
		}
	}
	{
		// if (parts.Length >= 3 && DiscoveredServiceAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_284 = V_2;
		NullCheck(L_284);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_284)->max_length))) < ((int32_t)3)))
		{
			goto IL_06fe;
		}
	}
	{
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_285 = __this->___DiscoveredServiceAction_19;
		G_B133_0 = ((!(((RuntimeObject*)(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)L_285) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_06ff;
	}

IL_06fe:
	{
		G_B133_0 = 0;
	}

IL_06ff:
	{
		V_49 = (bool)G_B133_0;
		bool L_286 = V_49;
		if (!L_286)
		{
			goto IL_0717;
		}
	}
	{
		// DiscoveredServiceAction (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_287 = __this->___DiscoveredServiceAction_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_288 = V_2;
		NullCheck(L_288);
		int32_t L_289 = 1;
		String_t* L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_291 = V_2;
		NullCheck(L_291);
		int32_t L_292 = 2;
		String_t* L_293 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		NullCheck(L_287);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_287, L_290, L_293, NULL);
	}

IL_0717:
	{
		goto IL_0a3d;
	}

IL_071d:
	{
		// else if (message.Length >= deviceDiscoveredCharacteristic.Length && message.Substring (0, deviceDiscoveredCharacteristic.Length) == deviceDiscoveredCharacteristic)
		String_t* L_294 = ___0_message;
		NullCheck(L_294);
		int32_t L_295;
		L_295 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_294, NULL);
		NullCheck(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		int32_t L_296;
		L_296 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		if ((((int32_t)L_295) < ((int32_t)L_296)))
		{
			goto IL_074c;
		}
	}
	{
		String_t* L_297 = ___0_message;
		NullCheck(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8);
		int32_t L_298;
		L_298 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		NullCheck(L_297);
		String_t* L_299;
		L_299 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_297, 0, L_298, NULL);
		bool L_300;
		L_300 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_299, _stringLiteral02C3126AC268EB4CA84EB0E1826E079B33CEE7E8, NULL);
		G_B139_0 = ((int32_t)(L_300));
		goto IL_074d;
	}

IL_074c:
	{
		G_B139_0 = 0;
	}

IL_074d:
	{
		V_50 = (bool)G_B139_0;
		bool L_301 = V_50;
		if (!L_301)
		{
			goto IL_0787;
		}
	}
	{
		// if (parts.Length >= 4 && DiscoveredCharacteristicAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_302 = V_2;
		NullCheck(L_302);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_302)->max_length))) < ((int32_t)4)))
		{
			goto IL_0765;
		}
	}
	{
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_303 = __this->___DiscoveredCharacteristicAction_20;
		G_B143_0 = ((!(((RuntimeObject*)(Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*)L_303) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0766;
	}

IL_0765:
	{
		G_B143_0 = 0;
	}

IL_0766:
	{
		V_51 = (bool)G_B143_0;
		bool L_304 = V_51;
		if (!L_304)
		{
			goto IL_0781;
		}
	}
	{
		// DiscoveredCharacteristicAction (parts[1], parts[2], parts[3]);
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_305 = __this->___DiscoveredCharacteristicAction_20;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_306 = V_2;
		NullCheck(L_306);
		int32_t L_307 = 1;
		String_t* L_308 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_309 = V_2;
		NullCheck(L_309);
		int32_t L_310 = 2;
		String_t* L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_312 = V_2;
		NullCheck(L_312);
		int32_t L_313 = 3;
		String_t* L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		NullCheck(L_305);
		Action_3_Invoke_mABFB1B378BF33588992DD5A0180457B4ADB790D9_inline(L_305, L_308, L_311, L_314, NULL);
	}

IL_0781:
	{
		goto IL_0a3d;
	}

IL_0787:
	{
		// else if (message.Length >= deviceDidWriteCharacteristic.Length && message.Substring (0, deviceDidWriteCharacteristic.Length) == deviceDidWriteCharacteristic)
		String_t* L_315 = ___0_message;
		NullCheck(L_315);
		int32_t L_316;
		L_316 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_315, NULL);
		NullCheck(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		int32_t L_317;
		L_317 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		if ((((int32_t)L_316) < ((int32_t)L_317)))
		{
			goto IL_07b6;
		}
	}
	{
		String_t* L_318 = ___0_message;
		NullCheck(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6);
		int32_t L_319;
		L_319 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		NullCheck(L_318);
		String_t* L_320;
		L_320 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_318, 0, L_319, NULL);
		bool L_321;
		L_321 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_320, _stringLiteral9AF66B6B54D90A98DBA38E21C39BEFB461EAA6A6, NULL);
		G_B149_0 = ((int32_t)(L_321));
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B149_0 = 0;
	}

IL_07b7:
	{
		V_52 = (bool)G_B149_0;
		bool L_322 = V_52;
		if (!L_322)
		{
			goto IL_07eb;
		}
	}
	{
		// if (parts.Length >= 2 && DidWriteCharacteristicAction != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_323 = V_2;
		NullCheck(L_323);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_323)->max_length))) < ((int32_t)2)))
		{
			goto IL_07cf;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_324 = __this->___DidWriteCharacteristicAction_21;
		G_B153_0 = ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_324) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_07d0;
	}

IL_07cf:
	{
		G_B153_0 = 0;
	}

IL_07d0:
	{
		V_53 = (bool)G_B153_0;
		bool L_325 = V_53;
		if (!L_325)
		{
			goto IL_07e5;
		}
	}
	{
		// DidWriteCharacteristicAction (parts[1]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_326 = __this->___DidWriteCharacteristicAction_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_327 = V_2;
		NullCheck(L_327);
		int32_t L_328 = 1;
		String_t* L_329 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		NullCheck(L_326);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_326, L_329, NULL);
	}

IL_07e5:
	{
		goto IL_0a3d;
	}

IL_07eb:
	{
		// else if (message.Length >= deviceDidUpdateNotificationStateForCharacteristic.Length && message.Substring (0, deviceDidUpdateNotificationStateForCharacteristic.Length) == deviceDidUpdateNotificationStateForCharacteristic)
		String_t* L_330 = ___0_message;
		NullCheck(L_330);
		int32_t L_331;
		L_331 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_330, NULL);
		NullCheck(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		int32_t L_332;
		L_332 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		if ((((int32_t)L_331) < ((int32_t)L_332)))
		{
			goto IL_081a;
		}
	}
	{
		String_t* L_333 = ___0_message;
		NullCheck(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32);
		int32_t L_334;
		L_334 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		NullCheck(L_333);
		String_t* L_335;
		L_335 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_333, 0, L_334, NULL);
		bool L_336;
		L_336 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_335, _stringLiteral2C5CA582C472914803F7B097F586DA4F20FF1D32, NULL);
		G_B159_0 = ((int32_t)(L_336));
		goto IL_081b;
	}

IL_081a:
	{
		G_B159_0 = 0;
	}

IL_081b:
	{
		V_54 = (bool)G_B159_0;
		bool L_337 = V_54;
		if (!L_337)
		{
			goto IL_0966;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_338 = V_2;
		NullCheck(L_338);
		V_55 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_338)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_339 = V_55;
		if (!L_339)
		{
			goto IL_0960;
		}
	}
	{
		// if (DidUpdateNotificationStateForCharacteristicAction != null && DidUpdateNotificationStateForCharacteristicAction.ContainsKey (parts[1]))
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_340 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		if (!L_340)
		{
			goto IL_0850;
		}
	}
	{
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_341 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_342 = V_2;
		NullCheck(L_342);
		int32_t L_343 = 1;
		String_t* L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_341);
		bool L_345;
		L_345 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_341, L_344, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		G_B164_0 = ((int32_t)(L_345));
		goto IL_0851;
	}

IL_0850:
	{
		G_B164_0 = 0;
	}

IL_0851:
	{
		V_56 = (bool)G_B164_0;
		bool L_346 = V_56;
		if (!L_346)
		{
			goto IL_08ca;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log("Check: DidUpdateNotificationStateForCharacteristicAction " + parts[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_347 = V_2;
		NullCheck(L_347);
		int32_t L_348 = 1;
		String_t* L_349 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		String_t* L_350;
		L_350 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1C967FB0FDDFDD350AAAC8A57A805B9073975414, L_349, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_350, NULL);
		// var characteristicAction = DidUpdateNotificationStateForCharacteristicAction[parts[1]];
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_351 = __this->___DidUpdateNotificationStateForCharacteristicAction_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_352 = V_2;
		NullCheck(L_352);
		int32_t L_353 = 1;
		String_t* L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		NullCheck(L_351);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_355;
		L_355 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_351, L_354, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		V_57 = L_355;
		// if (characteristicAction != null && characteristicAction.ContainsKey (parts[2]))
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_356 = V_57;
		if (!L_356)
		{
			goto IL_088b;
		}
	}
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_357 = V_57;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_358 = V_2;
		NullCheck(L_358);
		int32_t L_359 = 2;
		String_t* L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		NullCheck(L_357);
		bool L_361;
		L_361 = Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E(L_357, L_360, Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		G_B168_0 = ((int32_t)(L_361));
		goto IL_088c;
	}

IL_088b:
	{
		G_B168_0 = 0;
	}

IL_088c:
	{
		V_58 = (bool)G_B168_0;
		bool L_362 = V_58;
		if (!L_362)
		{
			goto IL_08c9;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log("Action: DidUpdateNotificationStateForCharacteristicAction " + parts[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_363 = V_2;
		NullCheck(L_363);
		int32_t L_364 = 2;
		String_t* L_365 = (L_363)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		String_t* L_366;
		L_366 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral19CFDD2C539A7CE015BAF7FA91E0636F61E07A8B, L_365, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_366, NULL);
		// var action = characteristicAction[parts[2]];
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_367 = V_57;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_368 = V_2;
		NullCheck(L_368);
		int32_t L_369 = 2;
		String_t* L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		NullCheck(L_367);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_371;
		L_371 = Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D(L_367, L_370, Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		V_59 = L_371;
		// if (action != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_372 = V_59;
		V_60 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_372) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_373 = V_60;
		if (!L_373)
		{
			goto IL_08c8;
		}
	}
	{
		// action (parts[2]);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_374 = V_59;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_375 = V_2;
		NullCheck(L_375);
		int32_t L_376 = 2;
		String_t* L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		NullCheck(L_374);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_374, L_377, NULL);
	}

IL_08c8:
	{
	}

IL_08c9:
	{
	}

IL_08ca:
	{
		// if (DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction != null && DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (parts[1]))
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_378 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		if (!L_378)
		{
			goto IL_08e2;
		}
	}
	{
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_379 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_380 = V_2;
		NullCheck(L_380);
		int32_t L_381 = 1;
		String_t* L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		NullCheck(L_379);
		bool L_383;
		L_383 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_379, L_382, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		G_B176_0 = ((int32_t)(L_383));
		goto IL_08e3;
	}

IL_08e2:
	{
		G_B176_0 = 0;
	}

IL_08e3:
	{
		V_61 = (bool)G_B176_0;
		bool L_384 = V_61;
		if (!L_384)
		{
			goto IL_095f;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log("Check: DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction " + parts[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_385 = V_2;
		NullCheck(L_385);
		int32_t L_386 = 1;
		String_t* L_387 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		String_t* L_388;
		L_388 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB8BB41A13E5EDCEDC15EDDF056995867A8B5062C, L_387, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_388, NULL);
		// var characteristicAction = DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[parts[1]];
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_389 = __this->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_390 = V_2;
		NullCheck(L_390);
		int32_t L_391 = 1;
		String_t* L_392 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		NullCheck(L_389);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_393;
		L_393 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_389, L_392, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		V_62 = L_393;
		// if (characteristicAction != null && characteristicAction.ContainsKey (parts[2]))
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_394 = V_62;
		if (!L_394)
		{
			goto IL_091d;
		}
	}
	{
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_395 = V_62;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_396 = V_2;
		NullCheck(L_396);
		int32_t L_397 = 2;
		String_t* L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		NullCheck(L_395);
		bool L_399;
		L_399 = Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD(L_395, L_398, Dictionary_2_ContainsKey_m913953EB949920103EE45B0C497AED20472529CD_RuntimeMethod_var);
		G_B180_0 = ((int32_t)(L_399));
		goto IL_091e;
	}

IL_091d:
	{
		G_B180_0 = 0;
	}

IL_091e:
	{
		V_63 = (bool)G_B180_0;
		bool L_400 = V_63;
		if (!L_400)
		{
			goto IL_095e;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log("Action: DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction " + parts[2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_401 = V_2;
		NullCheck(L_401);
		int32_t L_402 = 2;
		String_t* L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		String_t* L_404;
		L_404 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6952613B8B093774517AF3F81122D856B46CD821, L_403, NULL);
		BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C(L_404, NULL);
		// var action = characteristicAction[parts[2]];
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_405 = V_62;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_406 = V_2;
		NullCheck(L_406);
		int32_t L_407 = 2;
		String_t* L_408 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		NullCheck(L_405);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_409;
		L_409 = Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550(L_405, L_408, Dictionary_2_get_Item_mBBC25AE20AA64D8E9CB489C3F455282573A79550_RuntimeMethod_var);
		V_64 = L_409;
		// if (action != null)
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_410 = V_64;
		V_65 = (bool)((!(((RuntimeObject*)(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)L_410) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_411 = V_65;
		if (!L_411)
		{
			goto IL_095d;
		}
	}
	{
		// action (parts[1], parts[2]);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_412 = V_64;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_413 = V_2;
		NullCheck(L_413);
		int32_t L_414 = 1;
		String_t* L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_416 = V_2;
		NullCheck(L_416);
		int32_t L_417 = 2;
		String_t* L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		NullCheck(L_412);
		Action_2_Invoke_m8FA30194997244EC0072D6B437818A22B65F2854_inline(L_412, L_415, L_418, NULL);
	}

IL_095d:
	{
	}

IL_095e:
	{
	}

IL_095f:
	{
	}

IL_0960:
	{
		goto IL_0a3d;
	}

IL_0966:
	{
		// else if (message.Length >= deviceDidUpdateValueForCharacteristic.Length && message.Substring (0, deviceDidUpdateValueForCharacteristic.Length) == deviceDidUpdateValueForCharacteristic)
		String_t* L_419 = ___0_message;
		NullCheck(L_419);
		int32_t L_420;
		L_420 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_419, NULL);
		NullCheck(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		int32_t L_421;
		L_421 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		if ((((int32_t)L_420) < ((int32_t)L_421)))
		{
			goto IL_0995;
		}
	}
	{
		String_t* L_422 = ___0_message;
		NullCheck(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84);
		int32_t L_423;
		L_423 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		NullCheck(L_422);
		String_t* L_424;
		L_424 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_422, 0, L_423, NULL);
		bool L_425;
		L_425 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_424, _stringLiteral571BE214A9046BE6BECE9693FC64F752B55BDE84, NULL);
		G_B190_0 = ((int32_t)(L_425));
		goto IL_0996;
	}

IL_0995:
	{
		G_B190_0 = 0;
	}

IL_0996:
	{
		V_66 = (bool)G_B190_0;
		bool L_426 = V_66;
		if (!L_426)
		{
			goto IL_09bf;
		}
	}
	{
		// if (parts.Length >= 4)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_427 = V_2;
		NullCheck(L_427);
		V_67 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_427)->max_length))) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_428 = V_67;
		if (!L_428)
		{
			goto IL_09bc;
		}
	}
	{
		// OnBluetoothData (parts[1], parts[2], parts[3]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_429 = V_2;
		NullCheck(L_429);
		int32_t L_430 = 1;
		String_t* L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_432 = V_2;
		NullCheck(L_432);
		int32_t L_433 = 2;
		String_t* L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_435 = V_2;
		NullCheck(L_435);
		int32_t L_436 = 3;
		String_t* L_437 = (L_435)->GetAt(static_cast<il2cpp_array_size_t>(L_436));
		BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D(__this, L_431, L_434, L_437, NULL);
	}

IL_09bc:
	{
		goto IL_0a3d;
	}

IL_09bf:
	{
		// else if (message.Length >= deviceRequestMtu.Length && message.Substring(0, deviceRequestMtu.Length) == deviceRequestMtu)
		String_t* L_438 = ___0_message;
		NullCheck(L_438);
		int32_t L_439;
		L_439 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_438, NULL);
		NullCheck(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		int32_t L_440;
		L_440 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		if ((((int32_t)L_439) < ((int32_t)L_440)))
		{
			goto IL_09ee;
		}
	}
	{
		String_t* L_441 = ___0_message;
		NullCheck(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7);
		int32_t L_442;
		L_442 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		NullCheck(L_441);
		String_t* L_443;
		L_443 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_441, 0, L_442, NULL);
		bool L_444;
		L_444 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_443, _stringLiteral08BCB48EF8130797101E8FE188198E8F43CD97E7, NULL);
		G_B197_0 = ((int32_t)(L_444));
		goto IL_09ef;
	}

IL_09ee:
	{
		G_B197_0 = 0;
	}

IL_09ef:
	{
		V_68 = (bool)G_B197_0;
		bool L_445 = V_68;
		if (!L_445)
		{
			goto IL_0a3d;
		}
	}
	{
		// if (parts.Length >= 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_446 = V_2;
		NullCheck(L_446);
		V_69 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_446)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_447 = V_69;
		if (!L_447)
		{
			goto IL_0a3c;
		}
	}
	{
		// if (RequestMtuAction != null)
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_448 = __this->___RequestMtuAction_26;
		V_70 = (bool)((!(((RuntimeObject*)(Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF*)L_448) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_449 = V_70;
		if (!L_449)
		{
			goto IL_0a3b;
		}
	}
	{
		// int mtu = 0;
		V_71 = 0;
		// if (int.TryParse(parts[2], out mtu))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_450 = V_2;
		NullCheck(L_450);
		int32_t L_451 = 2;
		String_t* L_452 = (L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_451));
		bool L_453;
		L_453 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_452, (&V_71), NULL);
		V_72 = L_453;
		bool L_454 = V_72;
		if (!L_454)
		{
			goto IL_0a3a;
		}
	}
	{
		// RequestMtuAction(parts[1], mtu);
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_455 = __this->___RequestMtuAction_26;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_456 = V_2;
		NullCheck(L_456);
		int32_t L_457 = 1;
		String_t* L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = V_71;
		NullCheck(L_455);
		Action_2_Invoke_m69AAAB992ABFCF392F04C4F7E3CE91388C9E24E1_inline(L_455, L_458, L_459, NULL);
	}

IL_0a3a:
	{
	}

IL_0a3b:
	{
	}

IL_0a3c:
	{
	}

IL_0a3d:
	{
	}

IL_0a3e:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mF56A6ED89634D42E0D2EED26ED77B11E54BDD1A2 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnBluetoothData ("", "", base64Data);
		String_t* L_0 = ___0_base64Data;
		BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, NULL);
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnBluetoothData(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnBluetoothData_mC3C7BE5FBFA895495E5D3F2F2147C73378437C2D (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_deviceAddress, String_t* ___1_characteristic, String_t* ___2_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* V_4 = NULL;
	bool V_5 = false;
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* V_9 = NULL;
	bool V_10 = false;
	Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* V_11 = NULL;
	bool V_12 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (base64Data != null)
		String_t* L_0 = ___2_base64Data;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_010c;
		}
	}
	{
		// byte[] bytes = System.Convert.FromBase64String (base64Data);
		String_t* L_2 = ___2_base64Data;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_2, NULL);
		V_1 = L_3;
		// if (bytes.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_010b;
		}
	}
	{
		// deviceAddress = deviceAddress.ToUpper ();
		String_t* L_6 = ___0_deviceAddress;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_6, NULL);
		___0_deviceAddress = L_7;
		// characteristic = characteristic.ToUpper ();
		String_t* L_8 = ___1_characteristic;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_8, NULL);
		___1_characteristic = L_9;
		// if (DidUpdateCharacteristicValueAction != null && DidUpdateCharacteristicValueAction.ContainsKey (deviceAddress))
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_10 = __this->___DidUpdateCharacteristicValueAction_24;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_11 = __this->___DidUpdateCharacteristicValueAction_24;
		String_t* L_12 = ___0_deviceAddress;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_11, L_12, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B5_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_009c;
		}
	}
	{
		// var characteristicAction = DidUpdateCharacteristicValueAction[deviceAddress];
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_15 = __this->___DidUpdateCharacteristicValueAction_24;
		String_t* L_16 = ___0_deviceAddress;
		NullCheck(L_15);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_17;
		L_17 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_15, L_16, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		V_4 = L_17;
		// characteristic = characteristic.ToLower ();
		String_t* L_18 = ___1_characteristic;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_18, NULL);
		___1_characteristic = L_19;
		// if (characteristicAction != null && characteristicAction.ContainsKey (characteristic))
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_20 = V_4;
		if (!L_20)
		{
			goto IL_0071;
		}
	}
	{
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_21 = V_4;
		String_t* L_22 = ___1_characteristic;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1(L_21, L_22, Dictionary_2_ContainsKey_m4A499F6EAC71DC55F8B1A7DF3EA4AE5FCDFE83F1_RuntimeMethod_var);
		G_B9_0 = ((int32_t)(L_23));
		goto IL_0072;
	}

IL_0071:
	{
		G_B9_0 = 0;
	}

IL_0072:
	{
		V_5 = (bool)G_B9_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		// var action = characteristicAction[characteristic];
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_25 = V_4;
		String_t* L_26 = ___1_characteristic;
		NullCheck(L_25);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_27;
		L_27 = Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF(L_25, L_26, Dictionary_2_get_Item_mC10FD3398D9C91885BEE2ED01F03E6EA8F2458DF_RuntimeMethod_var);
		V_6 = L_27;
		// if (action != null)
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_28 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_009a;
		}
	}
	{
		// action(characteristic, bytes);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_30 = V_6;
		String_t* L_31 = ___1_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_1;
		NullCheck(L_30);
		Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline(L_30, L_31, L_32, NULL);
	}

IL_009a:
	{
	}

IL_009b:
	{
	}

IL_009c:
	{
		// if (DidUpdateCharacteristicValueWithDeviceAddressAction != null && DidUpdateCharacteristicValueWithDeviceAddressAction.ContainsKey (deviceAddress))
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_33 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		if (!L_33)
		{
			goto IL_00b2;
		}
	}
	{
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_34 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_35 = ___0_deviceAddress;
		NullCheck(L_34);
		bool L_36;
		L_36 = Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0(L_34, L_35, Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		G_B17_0 = ((int32_t)(L_36));
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B17_0 = 0;
	}

IL_00b3:
	{
		V_8 = (bool)G_B17_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_010a;
		}
	}
	{
		// var characteristicAction = DidUpdateCharacteristicValueWithDeviceAddressAction[deviceAddress];
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_38 = __this->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_39 = ___0_deviceAddress;
		NullCheck(L_38);
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_40;
		L_40 = Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2(L_38, L_39, Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		V_9 = L_40;
		// characteristic = characteristic.ToLower ();
		String_t* L_41 = ___1_characteristic;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_41, NULL);
		___1_characteristic = L_42;
		// if (characteristicAction != null && characteristicAction.ContainsKey (characteristic))
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_43 = V_9;
		if (!L_43)
		{
			goto IL_00de;
		}
	}
	{
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_44 = V_9;
		String_t* L_45 = ___1_characteristic;
		NullCheck(L_44);
		bool L_46;
		L_46 = Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE(L_44, L_45, Dictionary_2_ContainsKey_m49883733B2BD00869A51867DF487463D793B72AE_RuntimeMethod_var);
		G_B21_0 = ((int32_t)(L_46));
		goto IL_00df;
	}

IL_00de:
	{
		G_B21_0 = 0;
	}

IL_00df:
	{
		V_10 = (bool)G_B21_0;
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_0109;
		}
	}
	{
		// var action = characteristicAction[characteristic];
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_48 = V_9;
		String_t* L_49 = ___1_characteristic;
		NullCheck(L_48);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_50;
		L_50 = Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727(L_48, L_49, Dictionary_2_get_Item_m29D67E65079024F5C041D7F9AA960C3FB8C61727_RuntimeMethod_var);
		V_11 = L_50;
		// if (action != null)
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_51 = V_11;
		V_12 = (bool)((!(((RuntimeObject*)(Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*)L_51) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_52 = V_12;
		if (!L_52)
		{
			goto IL_0108;
		}
	}
	{
		// action(deviceAddress, characteristic, bytes);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_53 = V_11;
		String_t* L_54 = ___0_deviceAddress;
		String_t* L_55 = ___1_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_1;
		NullCheck(L_53);
		Action_3_Invoke_m621E4DDF08B7AB38B686646F5E5821CBB4B85A14_inline(L_53, L_54, L_55, L_56, NULL);
	}

IL_0108:
	{
	}

IL_0109:
	{
	}

IL_010a:
	{
	}

IL_010b:
	{
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::OnPeripheralData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript_OnPeripheralData_mD3F92D2EA496B24CFB212E6D72E2C6BB0891CE96 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, String_t* ___0_characteristic, String_t* ___1_base64Data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (base64Data != null)
		String_t* L_0 = ___1_base64Data;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// byte[] bytes = System.Convert.FromBase64String (base64Data);
		String_t* L_2 = ___1_base64Data;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_2, NULL);
		V_1 = L_3;
		// if (bytes.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// if (PeripheralReceivedWriteDataAction != null)
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_6 = __this->___PeripheralReceivedWriteDataAction_15;
		V_3 = (bool)((!(((RuntimeObject*)(Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// PeripheralReceivedWriteDataAction (characteristic, bytes);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_8 = __this->___PeripheralReceivedWriteDataAction_15;
		String_t* L_9 = ___0_characteristic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_8);
		Action_2_Invoke_m30A65A90206175F850BCF9448E5227069C5FC9CF_inline(L_8, L_9, L_10, NULL);
	}

IL_0036:
	{
	}

IL_0037:
	{
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void BluetoothDeviceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDeviceScript__ctor_m5F849731E2A15C2B4581BAD3E9F949809793E373 (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BluetoothLEHardwareInterface::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_Log_m962F61FF8D325B74E06EF8D517B869F998C3649C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	bool V_3 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// if (_android == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// AndroidJavaClass javaClass = new AndroidJavaClass ("com.shatalmic.unityandroidbluetoothlelib.UnityBluetoothLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B, NULL);
		V_2 = L_4;
		// _android = javaClass.CallStatic<AndroidJavaObject> ("getInstance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_5, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0), (void*)L_7);
	}

IL_003c:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// _android.Call ("androidBluetoothLog", message);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		String_t* L_13 = ___0_message;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, _stringLiteral05D2E6578A5F41F60C3ECFF08D58657840D97CEC, L_12, NULL);
	}

IL_0062:
	{
	}

IL_0063:
	{
		// }
		return;
	}
}
// BluetoothDeviceScript BluetoothLEHardwareInterface::Initialize(System.Boolean,System.Boolean,System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* BluetoothLEHardwareInterface_Initialize_mA92A2A5B42B9600E6D47BAF07546866F8833B1BC (bool ___0_asCentral, bool ___1_asPeripheral, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_action, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_errorAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_9 = NULL;
	bool V_10 = false;
	BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* V_11 = NULL;
	{
		// bluetoothDeviceScript = null;
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = (BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)(BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39*)NULL);
		// if (!Permission.HasUserAuthorizedPermission (Permission.FineLocation))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Permission.RequestUserPermission (Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
	}

IL_0023:
	{
		// GameObject bluetoothLEReceiver = GameObject.Find("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_2;
		// if (bluetoothLEReceiver == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// bluetoothLEReceiver = new GameObject ("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_6;
	}

IL_0044:
	{
		// if (bluetoothLEReceiver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// bluetoothDeviceScript = bluetoothLEReceiver.GetComponent<BluetoothDeviceScript> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11;
		L_11 = GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6(L_10, GameObject_GetComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDBD85FE90312A38DA98B298A2B6052631AE960F6_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)L_11);
		// if (bluetoothDeviceScript == null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_12 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// bluetoothDeviceScript = bluetoothLEReceiver.AddComponent<BluetoothDeviceScript> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_16;
		L_16 = GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610(L_15, GameObject_AddComponent_TisBluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39_mDF56051C4B061E3956A03F35FC9F34BEB3280610_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1), (void*)L_16);
	}

IL_0077:
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_17 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// bluetoothDeviceScript.InitializedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_20 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = ___2_action;
		NullCheck(L_20);
		L_20->___InitializedAction_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___InitializedAction_5), (void*)L_21);
		// bluetoothDeviceScript.ErrorAction = errorAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_22 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_23 = ___3_errorAction;
		NullCheck(L_22);
		L_22->___ErrorAction_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___ErrorAction_7), (void*)L_23);
	}

IL_00a0:
	{
	}

IL_00a1:
	{
		// GameObject.DontDestroyOnLoad (bluetoothLEReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_24, NULL);
		// if (Application.isEditor)
		bool L_25;
		L_25 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00dd;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_27 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_28;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00da;
		}
	}
	{
		// bluetoothDeviceScript.SendMessage ("OnBluetoothMessage", "Initialized");
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_30 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_30);
		Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB(L_30, _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6, _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, NULL);
	}

IL_00da:
	{
		goto IL_0147;
	}

IL_00dd:
	{
		// if (_android == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_8 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_31) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0110;
		}
	}
	{
		// AndroidJavaClass javaClass = new AndroidJavaClass ("com.shatalmic.unityandroidbluetoothlelib.UnityBluetoothLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_33 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_33, _stringLiteralFEA4EFD8C5923AB08A7202313FFB01FD1341FD4B, NULL);
		V_9 = L_33;
		// _android = javaClass.CallStatic<AndroidJavaObject> ("getInstance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_34 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35;
		L_35 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_34);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36;
		L_36 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_34, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_35, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0), (void*)L_36);
	}

IL_0110:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_10 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_0146;
		}
	}
	{
		// _android.Call ("androidBluetoothInitialize", asCentral, asPeripheral);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		bool L_42 = ___0_asCentral;
		bool L_43 = L_42;
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_41;
		bool L_46 = ___1_asPeripheral;
		bool L_47 = L_46;
		RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_48);
		NullCheck(L_39);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_39, _stringLiteral2E6C187CE8C95892E54F2CD863F499C9AE973987, L_45, NULL);
	}

IL_0146:
	{
	}

IL_0147:
	{
		// return bluetoothDeviceScript;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_49 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		V_11 = L_49;
		goto IL_0150;
	}

IL_0150:
	{
		// }
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_50 = V_11;
		return L_50;
	}
}
// System.Void BluetoothLEHardwareInterface::DeInitialize(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DeInitialize_mC8D5EF749C3A33EB57EC1D9F117A29CFD5C08E26 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_0 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// bluetoothDeviceScript.DeinitializedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_action;
		NullCheck(L_3);
		L_3->___DeinitializedAction_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___DeinitializedAction_6), (void*)L_4);
	}

IL_001b:
	{
		// if (Application.isEditor)
		bool L_5;
		L_5 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// bluetoothDeviceScript.SendMessage ("OnBluetoothMessage", "DeInitialized");
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_10 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_10);
		Component_SendMessage_mA1D80D8BB7836EADB7799CAE71F10710298F4CDB(L_10, _stringLiteral22CA8A8DED4214E6F20217D70C471C5D80B2E4B6, _stringLiteral2C05153E5BC0D6FFB349C1B45AB8FDAE44F99415, NULL);
	}

IL_0049:
	{
		goto IL_006f;
	}

IL_004c:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// _android.Call ("androidBluetoothDeInitialize");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_13);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_13, _stringLiteralD09911E67FD5FEB05E00F59FC6478619944228A1, L_14, NULL);
	}

IL_006e:
	{
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::FinishDeInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_FinishDeInitialize_mCD58E7714A2B02A58509481FCB4473FCE93052B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		// GameObject bluetoothLEReceiver = GameObject.Find("BluetoothLEReceiver");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9EB291071F866E890E2ACF69DE89CBBA36BD00B8, NULL);
		V_0 = L_0;
		// if (bluetoothLEReceiver != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// GameObject.Destroy(bluetoothLEReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothEnable_m642C4C0AB450EDA4DF2C2A1572D99FC132FF013E (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE83D121033127368F074E967D2902DA668AF244);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _android.Call ("androidBluetoothEnable", enable);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		bool L_7 = ___0_enable;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralFE83D121033127368F074E967D2902DA668AF244, L_6, NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothScanMode(BluetoothLEHardwareInterface/ScanMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothScanMode_m2B3C1610A60FFBB7FBE187D3132FEB14C8CD3435 (int32_t ___0_scanMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _android.Call ("androidBluetoothScanMode", (int)scanMode);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ___0_scanMode;
		int32_t L_8 = ((int32_t)L_7);
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral7CD8A767CD513A553A19E4287FDCB3028089E589, L_6, NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::BluetoothConnectionPriority(BluetoothLEHardwareInterface/ConnectionPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_BluetoothConnectionPriority_m4313E47BCDE22920D24D66532D194F82B896249B (int32_t ___0_connectionPriority, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFE25B3302C823126233E5C675383881A1336C69);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _android.Call ("androidBluetoothConnectionPriority", (int)connectionPriority);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ___0_connectionPriority;
		int32_t L_8 = ((int32_t)L_7);
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralCFE25B3302C823126233E5C675383881A1336C69, L_6, NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::PauseMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_PauseMessages_m893401EDE519BF398C1CF491280B946898EEDFE2 (bool ___0_isPaused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _android.Call ("androidBluetoothPause", isPaused);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		bool L_7 = ___0_isPaused;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral77B7082D0DE1E91A1818FF843E95415325B60DF7, L_6, NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ScanForBeacons(System.String[],System.Action`1<BluetoothLEHardwareInterface/iBeaconData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ScanForBeacons_mBB4B0AE4C9544CC587A73388B5D51A5FAE0E1350 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_proximityUUIDs, Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* ___1_actionBeaconResponse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (proximityUUIDs != null && proximityUUIDs.Length >= 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_proximityUUIDs;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_proximityUUIDs;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00c3;
		}
	}
	{
		// if (!Application.isEditor)
		bool L_3;
		L_3 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00c2;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredBeaconAction = actionBeaconResponse;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_8 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* L_9 = ___1_actionBeaconResponse;
		NullCheck(L_8);
		L_8->___DiscoveredBeaconAction_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___DiscoveredBeaconAction_13), (void*)L_9);
	}

IL_0042:
	{
		// string proximityUUIDsString = null;
		V_2 = (String_t*)NULL;
		// if (proximityUUIDs != null && proximityUUIDs.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_proximityUUIDs;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_proximityUUIDs;
		NullCheck(L_11);
		G_B10_0 = ((!(((uint32_t)(((RuntimeArray*)L_11)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B10_0 = 0;
	}

IL_004f:
	{
		V_4 = (bool)G_B10_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0099;
		}
	}
	{
		// proximityUUIDsString = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string proximityUUID in proximityUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___0_proximityUUIDs;
		V_5 = L_13;
		V_6 = 0;
		goto IL_0080;
	}

IL_0065:
	{
		// foreach (string proximityUUID in proximityUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_5;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_7 = L_17;
		// proximityUUIDsString += proximityUUID + "|";
		String_t* L_18 = V_2;
		String_t* L_19 = V_7;
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, L_19, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_2 = L_20;
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0080:
	{
		// foreach (string proximityUUID in proximityUUIDs)
		int32_t L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		// proximityUUIDsString = proximityUUIDsString.Substring (0, proximityUUIDsString.Length - 1);
		String_t* L_24 = V_2;
		String_t* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		NullCheck(L_24);
		String_t* L_27;
		L_27 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_2 = L_27;
	}

IL_0099:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_8 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00c1;
		}
	}
	{
		// _android.Call ("androidBluetoothScanForBeacons", proximityUUIDsString);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		String_t* L_33 = V_2;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		NullCheck(L_30);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_30, _stringLiteral721E61EBBD4F8CA1436660B62CC09173BE14C737, L_32, NULL);
	}

IL_00c1:
	{
	}

IL_00c2:
	{
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RequestMtu(System.String,System.Int32,System.Action`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RequestMtu_m55686803AADDC8891BAF3067D7B5998A707A16B3 (String_t* ___0_name, int32_t ___1_mtu, Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_0 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// bluetoothDeviceScript.RequestMtuAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_3 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3C59E567836F9368797ABE71269B3D38D4F3E1CF* L_4 = ___2_action;
		NullCheck(L_3);
		L_3->___RequestMtuAction_26 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___RequestMtuAction_26), (void*)L_4);
	}

IL_001d:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// _android.Call ("androidBluetoothRequestMtu", name, mtu);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		String_t* L_10 = ___0_name;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		int32_t L_12 = ___1_mtu;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		NullCheck(L_7);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_7, _stringLiteralCB12AB8A7159B5C4CCA79DCA0DF51FD5B92B4D36, L_11, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ScanForPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>,System.Action`4<System.String,System.String,System.Int32,System.Byte[]>,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ScanForPeripheralsWithServices_m839B5A585CB3DD72E63DE044729E22C8B963A58A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_serviceUUIDs, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_action, Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___2_actionAdvertisingInfo, bool ___3_rssiOnly, bool ___4_clearPeripheralList, int32_t ___5_recordType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B8_0 = 0;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00fe;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_6 = ___1_action;
		NullCheck(L_5);
		L_5->___DiscoveredPeripheralAction_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DiscoveredPeripheralAction_11), (void*)L_6);
		// bluetoothDeviceScript.DiscoveredPeripheralWithAdvertisingInfoAction = actionAdvertisingInfo;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_8 = ___2_actionAdvertisingInfo;
		NullCheck(L_7);
		L_7->___DiscoveredPeripheralWithAdvertisingInfoAction_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___DiscoveredPeripheralWithAdvertisingInfoAction_12), (void*)L_8);
		// if (bluetoothDeviceScript.DiscoveredDeviceList != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_9);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9->___DiscoveredDeviceList_4;
		V_3 = (bool)((!(((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredDeviceList.Clear ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_12 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_12);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12->___DiscoveredDeviceList_4;
		NullCheck(L_13);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_13, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// string serviceUUIDsString = null;
		V_1 = (String_t*)NULL;
		// if (serviceUUIDs != null && serviceUUIDs.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___0_serviceUUIDs;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___0_serviceUUIDs;
		NullCheck(L_15);
		G_B8_0 = ((!(((uint32_t)(((RuntimeArray*)L_15)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 0;
	}

IL_0066:
	{
		V_4 = (bool)G_B8_0;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		// serviceUUIDsString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ___0_serviceUUIDs;
		V_5 = L_17;
		V_6 = 0;
		goto IL_0097;
	}

IL_007c:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		// serviceUUIDsString += serviceUUID + "|";
		String_t* L_22 = V_1;
		String_t* L_23 = V_7;
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_22, L_23, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_1 = L_24;
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0097:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		int32_t L_26 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_5;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		// serviceUUIDsString = serviceUUIDsString.Substring (0, serviceUUIDsString.Length - 1);
		String_t* L_28 = V_1;
		String_t* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		NullCheck(L_28);
		String_t* L_31;
		L_31 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_28, 0, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), NULL);
		V_1 = L_31;
	}

IL_00b0:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_8 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00fd;
		}
	}
	{
		// if (serviceUUIDsString == null)
		String_t* L_34 = V_1;
		V_9 = (bool)((((RuntimeObject*)(String_t*)L_34) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_00cf;
		}
	}
	{
		// serviceUUIDsString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_00cf:
	{
		// _android.Call ("androidBluetoothScanForPeripheralsWithServices", serviceUUIDsString, rssiOnly, recordType);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		String_t* L_39 = V_1;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_38;
		bool L_41 = ___3_rssiOnly;
		bool L_42 = L_41;
		RuntimeObject* L_43 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_40;
		int32_t L_45 = ___5_recordType;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_47);
		NullCheck(L_36);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_36, _stringLiteral7494958ED61CC458AAF2A8181F822D26307BDA4F, L_44, NULL);
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RetrieveListOfPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RetrieveListOfPeripheralsWithServices_m7F08EFA9A62FC31CB7548EA978B266015ED9C7CD (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_serviceUUIDs, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	String_t* G_B8_0 = NULL;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// bluetoothDeviceScript.RetrievedConnectedPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_6 = ___1_action;
		NullCheck(L_5);
		L_5->___RetrievedConnectedPeripheralAction_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___RetrievedConnectedPeripheralAction_14), (void*)L_6);
		// if (bluetoothDeviceScript.DiscoveredDeviceList != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7->___DiscoveredDeviceList_4;
		V_3 = (bool)((!(((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// bluetoothDeviceScript.DiscoveredDeviceList.Clear ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_10 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10->___DiscoveredDeviceList_4;
		NullCheck(L_11);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_11, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_004d:
	{
	}

IL_004e:
	{
		// string serviceUUIDsString = serviceUUIDs.Length > 0 ? "" : null;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___0_serviceUUIDs;
		NullCheck(L_12);
		if ((((RuntimeArray*)L_12)->max_length))
		{
			goto IL_0055;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		goto IL_005a;
	}

IL_0055:
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_005a:
	{
		V_1 = G_B8_0;
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___0_serviceUUIDs;
		V_4 = L_13;
		V_5 = 0;
		goto IL_007f;
	}

IL_0064:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		// serviceUUIDsString += serviceUUID + "|";
		String_t* L_18 = V_1;
		String_t* L_19 = V_6;
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, L_19, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		V_1 = L_20;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		// foreach (string serviceUUID in serviceUUIDs)
		int32_t L_22 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// serviceUUIDsString = serviceUUIDsString.Substring (0, serviceUUIDsString.Length - 1);
		String_t* L_24 = V_1;
		String_t* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		NullCheck(L_24);
		String_t* L_27;
		L_27 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_1 = L_27;
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_7 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00bf;
		}
	}
	{
		// _android.Call ("androidBluetoothRetrieveListOfPeripheralsWithServices", serviceUUIDsString);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		String_t* L_33 = V_1;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		NullCheck(L_30);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_30, _stringLiteral72A69F0AE5A075DEB144C96D24A7FCC85D6D4636, L_32, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopScan_m4602E0531C54F5200D0D9B77D51A036346733790 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F63233D482743220D006469E8B194A3D4907233);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _android.Call ("androidBluetoothStopScan");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral8F63233D482743220D006469E8B194A3D4907233, L_5, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopBeaconScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopBeaconScan_m1A99CFE67CF1E388DB30E1C626F5D4325CE06811 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _android.Call ("androidBluetoothStopBeaconScan");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralAB2C0C85E7F287846F6BEB16B40A3D74AEC7930B, L_5, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DisconnectAll_m6868EBDD9629CC9E48881CD880975B8E63A6114D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _android.Call ("androidBluetoothDisconnectAll");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral482DF6018AEE5C9B3F891A4AC6C2F466CE1CB669, L_5, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ConnectToPeripheral(System.String,System.Action`1<System.String>,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ConnectToPeripheral_mE35EE0AFC837FFACD849B7E27892FB8A1319F85F (String_t* ___0_name, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_connectAction, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___2_serviceAction, Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___3_characteristicAction, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_disconnectAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// bluetoothDeviceScript.ConnectedPeripheralAction = connectAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___1_connectAction;
		NullCheck(L_5);
		L_5->___ConnectedPeripheralAction_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___ConnectedPeripheralAction_16), (void*)L_6);
		// bluetoothDeviceScript.DiscoveredServiceAction = serviceAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_8 = ___2_serviceAction;
		NullCheck(L_7);
		L_7->___DiscoveredServiceAction_19 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___DiscoveredServiceAction_19), (void*)L_8);
		// bluetoothDeviceScript.DiscoveredCharacteristicAction = characteristicAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_10 = ___3_characteristicAction;
		NullCheck(L_9);
		L_9->___DiscoveredCharacteristicAction_20 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___DiscoveredCharacteristicAction_20), (void*)L_10);
		// bluetoothDeviceScript.ConnectedDisconnectPeripheralAction = disconnectAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_12 = ___4_disconnectAction;
		NullCheck(L_11);
		L_11->___ConnectedDisconnectPeripheralAction_17 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___ConnectedDisconnectPeripheralAction_17), (void*)L_12);
	}

IL_004c:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		// _android.Call ("androidBluetoothConnectToPeripheral", name);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		String_t* L_18 = ___0_name;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		NullCheck(L_15);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_15, _stringLiteralE14640A5F2B26B4DD99B692E7BAD32F71D93BB1C, L_17, NULL);
	}

IL_0072:
	{
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::DisconnectPeripheral(System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DisconnectPeripheral_mAC496C425CAB6DC6B6F8C0DC67DED1A6AF721E8B (String_t* ___0_name, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01338260378F35334542BDEDFB82698311AEB1A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// bluetoothDeviceScript.DisconnectedPeripheralAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___1_action;
		NullCheck(L_5);
		L_5->___DisconnectedPeripheralAction_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DisconnectedPeripheralAction_18), (void*)L_6);
	}

IL_0028:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// _android.Call ("androidBluetoothDisconnectPeripheral", name);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		String_t* L_12 = ___0_name;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteralF01338260378F35334542BDEDFB82698311AEB1A, L_11, NULL);
	}

IL_004e:
	{
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::ReadCharacteristic(System.String,System.String,System.String,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ReadCharacteristic_m2C8C83D3DA3EB39CDE322DBBBA881F59454371BC (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___3_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a0;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_5);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_6 = L_5->___DidUpdateCharacteristicValueAction_24;
		String_t* L_7 = ___0_name;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_6, L_7, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction[name] = new Dictionary<string, Action<string, byte[]>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_10 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_10);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_11 = L_10->___DidUpdateCharacteristicValueAction_24;
		String_t* L_12 = ___0_name;
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_13 = (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*)il2cpp_codegen_object_new(Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD(L_13, Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		NullCheck(L_11);
		Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476(L_11, L_12, L_13, Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
	}

IL_004e:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] [FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_14 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_14);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_15 = L_14->___DidUpdateCharacteristicValueAction_24;
		String_t* L_16 = ___0_name;
		NullCheck(L_15);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_17;
		L_17 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_15, L_16, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		String_t* L_18 = ___2_characteristic;
		String_t* L_19;
		L_19 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_19, NULL);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_21 = ___3_action;
		NullCheck(L_17);
		Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2(L_17, L_20, L_21, Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
	}

IL_0071:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_22) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_009f;
		}
	}
	{
		// _android.Call ("androidReadCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		String_t* L_27 = ___0_name;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_26;
		String_t* L_29 = ___1_service;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		String_t* L_31 = ___2_characteristic;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		NullCheck(L_24);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_24, _stringLiteral6D08F1FBA56C60FB5E0AE2C07BA1B0B4266A80A4, L_30, NULL);
	}

IL_009f:
	{
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::WriteCharacteristic(System.String,System.String,System.String,System.Byte[],System.Int32,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_WriteCharacteristic_m1DEC13604979F8EF567F96F6CC9084BE4B2C993A (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_length, bool ___5_withResponse, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___6_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// bluetoothDeviceScript.DidWriteCharacteristicAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___6_action;
		NullCheck(L_5);
		L_5->___DidWriteCharacteristicAction_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___DidWriteCharacteristicAction_21), (void*)L_6);
	}

IL_0029:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		// _android.Call ("androidWriteCharacteristic", name, service, characteristic, data, length, withResponse);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		String_t* L_12 = ___0_name;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		String_t* L_14 = ___1_service;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		String_t* L_16 = ___2_characteristic;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___3_data;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		int32_t L_20 = ___4_length;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
		bool L_24 = ___5_withResponse;
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_26);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral9AD8A5107F45DF80AE654B0B6BE32A60612460AF, L_23, NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristic_m06836BAAEE65AB179C2664576F8FE4B2D6318546 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_notificationAction, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___4_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_010d;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00dc;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_5 = ___0_name;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___0_name = L_6;
		// service = service.ToUpper ();
		String_t* L_7 = ___1_service;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___1_service = L_8;
		// characteristic = characteristic.ToUpper ();
		String_t* L_9 = ___2_characteristic;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_9, NULL);
		___2_characteristic = L_10;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_11);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_12 = L_11->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_13 = ___0_name;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_12, L_13, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction [name] = new Dictionary<string, Action<string>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_16 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_16);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_17 = L_16->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_18 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_19 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_19, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_17, L_18, L_19, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_0069:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction [name] [FullUUID (characteristic).ToLower ()] = notificationAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_20 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_20);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_21 = L_20->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_23;
		L_23 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_21, L_22, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_24 = ___2_characteristic;
		String_t* L_25;
		L_25 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_25, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = ___3_notificationAction;
		NullCheck(L_23);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_23, L_26, L_27, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_28);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_29 = L_28->___DidUpdateCharacteristicValueAction_24;
		String_t* L_30 = ___0_name;
		NullCheck(L_29);
		bool L_31;
		L_31 = Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE(L_29, L_30, Dictionary_2_ContainsKey_mD16546696C90538611676CE4D546FB23AE9B8FEE_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_3;
		if (!L_32)
		{
			goto IL_00b8;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] = new Dictionary<string, Action<string, byte[]>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_33 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_33);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_34 = L_33->___DidUpdateCharacteristicValueAction_24;
		String_t* L_35 = ___0_name;
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_36 = (Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8*)il2cpp_codegen_object_new(Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD(L_36, Dictionary_2__ctor_m33F7CC3A700785AE5317A03FF6119F01AB8C3CAD_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476(L_34, L_35, L_36, Dictionary_2_set_Item_m9801DB6B846090C50887E169823DB1E40E078476_RuntimeMethod_var);
	}

IL_00b8:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueAction [name] [FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_37 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_37);
		Dictionary_2_t3F93014C5C5D4552847D7AF33226D44359917A78* L_38 = L_37->___DidUpdateCharacteristicValueAction_24;
		String_t* L_39 = ___0_name;
		NullCheck(L_38);
		Dictionary_2_t8743F7AD7AFB649C6C67382C6D22AC90DAE2B3D8* L_40;
		L_40 = Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0(L_38, L_39, Dictionary_2_get_Item_mA0D0E6E95D1A307A4F7FE00BCDC3392D537551F0_RuntimeMethod_var);
		String_t* L_41 = ___2_characteristic;
		String_t* L_42;
		L_42 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_41, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_42, NULL);
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_44 = ___4_action;
		NullCheck(L_40);
		Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2(L_40, L_43, L_44, Dictionary_2_set_Item_m5BC0806F55FF11B11C0CCA09E2B62F1F225721B2_RuntimeMethod_var);
	}

IL_00dc:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_4 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_4;
		if (!L_46)
		{
			goto IL_010c;
		}
	}
	{
		// _android.Call ("androidSubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_47 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
		String_t* L_50 = ___0_name;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_49;
		String_t* L_52 = ___1_service;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_52);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_51;
		String_t* L_54 = ___2_characteristic;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_54);
		NullCheck(L_47);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_47, _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3, L_53, NULL);
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristicWithDeviceAddress(System.String,System.String,System.String,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddress_m0AEEB1262BD23772ED50C50D8DC981590AD937B4 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___3_notificationAction, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___4_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_015e;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_012d;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_5 = ___0_name;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___0_name = L_6;
		// service = service.ToUpper ();
		String_t* L_7 = ___1_service;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___1_service = L_8;
		// characteristic = characteristic.ToUpper ();
		String_t* L_9 = ___2_characteristic;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_9, NULL);
		___2_characteristic = L_10;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_11);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_12 = L_11->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_13 = ___0_name;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_12, L_13, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_16 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_16);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_17 = L_16->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_18 = ___0_name;
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_19 = (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*)il2cpp_codegen_object_new(Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11(L_19, Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7(L_17, L_18, L_19, Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
	}

IL_0069:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = notificationAction;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_20 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_20);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_21 = L_20->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_23;
		L_23 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_21, L_22, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		String_t* L_24 = ___2_characteristic;
		String_t* L_25;
		L_25 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_25, NULL);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_27 = ___3_notificationAction;
		NullCheck(L_23);
		Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87(L_23, L_26, L_27, Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey(name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_28 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_28);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_29 = L_28->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_30 = ___0_name;
		NullCheck(L_29);
		bool L_31;
		L_31 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_29, L_30, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_3;
		if (!L_32)
		{
			goto IL_00b8;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name] = new Dictionary<string, Action<string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_33 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_33);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_34 = L_33->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_35 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_36 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_36, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_34, L_35, L_36, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_00b8:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name][FullUUID (characteristic).ToLower ()] = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_37 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_37);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_38 = L_37->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_39 = ___0_name;
		NullCheck(L_38);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_40;
		L_40 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_38, L_39, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_41 = ___2_characteristic;
		String_t* L_42;
		L_42 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_41, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_42, NULL);
		NullCheck(L_40);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_40, L_43, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_44 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_44);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_45 = L_44->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_46 = ___0_name;
		NullCheck(L_45);
		bool L_47;
		L_47 = Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0(L_45, L_46, Dictionary_2_ContainsKey_m150AA8E90D327107E170A339453F8681CBC34FD0_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_4;
		if (!L_48)
		{
			goto IL_0109;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string, byte[]>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_49 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_49);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_50 = L_49->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_51 = ___0_name;
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_52 = (Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB*)il2cpp_codegen_object_new(Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746(L_52, Dictionary_2__ctor_m567D53C6E9424E1769E746B2F2F7CB666BD28746_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468(L_50, L_51, L_52, Dictionary_2_set_Item_mD7531E55E7078F3CA3DB2492418BEADF7229D468_RuntimeMethod_var);
	}

IL_0109:
	{
		// bluetoothDeviceScript.DidUpdateCharacteristicValueWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_53 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_53);
		Dictionary_2_t69776E38AD22E2FF77D6D297264AC70AA2A08883* L_54 = L_53->___DidUpdateCharacteristicValueWithDeviceAddressAction_25;
		String_t* L_55 = ___0_name;
		NullCheck(L_54);
		Dictionary_2_t50080CCAA08CD4E9D7D9471EA121047E29FBD7AB* L_56;
		L_56 = Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2(L_54, L_55, Dictionary_2_get_Item_mB9B806A3CA27CFDDB280FFBBD54F692165DB5DE2_RuntimeMethod_var);
		String_t* L_57 = ___2_characteristic;
		String_t* L_58;
		L_58 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_57, NULL);
		NullCheck(L_58);
		String_t* L_59;
		L_59 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_58, NULL);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_60 = ___4_action;
		NullCheck(L_56);
		Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26(L_56, L_59, L_60, Dictionary_2_set_Item_m317D3193C4CC26B216C7316AA83011B747927A26_RuntimeMethod_var);
	}

IL_012d:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_5 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_61) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_62 = V_5;
		if (!L_62)
		{
			goto IL_015d;
		}
	}
	{
		// _android.Call ("androidSubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_63 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		String_t* L_66 = ___0_name;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_65;
		String_t* L_68 = ___1_service;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_68);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = L_67;
		String_t* L_70 = ___2_characteristic;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_70);
		NullCheck(L_63);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_63, _stringLiteralDFF7B7A251CAD78185C2595FC73B8AE0181C64D3, L_69, NULL);
	}

IL_015d:
	{
	}

IL_015e:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::UnSubscribeCharacteristic(System.String,System.String,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_UnSubscribeCharacteristic_m1C44186A37503FF628B8CF0DE1B67221BB0BDAE5 (String_t* ___0_name, String_t* ___1_service, String_t* ___2_characteristic, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_010c;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00db;
		}
	}
	{
		// name = name.ToUpper ();
		String_t* L_5 = ___0_name;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_5, NULL);
		___0_name = L_6;
		// service = service.ToUpper ();
		String_t* L_7 = ___1_service;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_7, NULL);
		___1_service = L_8;
		// characteristic = characteristic.ToUpper ();
		String_t* L_9 = ___2_characteristic;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_9, NULL);
		___2_characteristic = L_10;
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_11 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_11);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_12 = L_11->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_13 = ___0_name;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23(L_12, L_13, Dictionary_2_ContainsKey_m50B2EE54AA6D9476F059F1EE328549BD78E6CC23_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name] = new Dictionary<string, Action<string, string>>();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_16 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_16);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_17 = L_16->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_18 = ___0_name;
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_19 = (Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6*)il2cpp_codegen_object_new(Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11(L_19, Dictionary_2__ctor_mA41215374A14C39327A0F3E564767C0E5F736E11_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7(L_17, L_18, L_19, Dictionary_2_set_Item_mC95C71C51EBCC5FB69D800D28A4DA517C27A77E7_RuntimeMethod_var);
	}

IL_0069:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction[name][FullUUID (characteristic).ToLower ()] = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_20 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_20);
		Dictionary_2_t1BB573A1F6F5D0C87BF64897F77E904846640D74* L_21 = L_20->___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_23;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		Dictionary_2_tAFFFC9BCDC0E8601FDB252CD80C438376B1177C6* L_23;
		L_23 = Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF(L_21, L_22, Dictionary_2_get_Item_mE49699F82AF7275CA25DC352FB9BCB00BCD229CF_RuntimeMethod_var);
		String_t* L_24 = ___2_characteristic;
		String_t* L_25;
		L_25 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_25, NULL);
		NullCheck(L_23);
		Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87(L_23, L_26, (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)NULL, Dictionary_2_set_Item_m5C248D01E5A71B59F3D041ECB2766EF9A97F4E87_RuntimeMethod_var);
		// if (!bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction.ContainsKey (name))
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_27 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_27);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_28 = L_27->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_29 = ___0_name;
		NullCheck(L_28);
		bool L_30;
		L_30 = Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F(L_28, L_29, Dictionary_2_ContainsKey_m21762A3A1079E3FEDE127462BFB85ABA3730694F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00b8;
		}
	}
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name] = new Dictionary<string, Action<string>> ();
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_32 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_32);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_33 = L_32->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_34 = ___0_name;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_35 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_35, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		NullCheck(L_33);
		Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706(L_33, L_34, L_35, Dictionary_2_set_Item_mD9454082A26057918E2FF23A85B2DBC5791A5706_RuntimeMethod_var);
	}

IL_00b8:
	{
		// bluetoothDeviceScript.DidUpdateNotificationStateForCharacteristicAction[name][FullUUID (characteristic).ToLower ()] = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_36 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_36);
		Dictionary_2_t4C40EAC1FEB8449C06FF324574D50495496EB89D* L_37 = L_36->___DidUpdateNotificationStateForCharacteristicAction_22;
		String_t* L_38 = ___0_name;
		NullCheck(L_37);
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_39;
		L_39 = Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61(L_37, L_38, Dictionary_2_get_Item_m09D1488785E808C7E32BB21E5AB3E7422F591D61_RuntimeMethod_var);
		String_t* L_40 = ___2_characteristic;
		String_t* L_41;
		L_41 = BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59(L_40, NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_41, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_43 = ___3_action;
		NullCheck(L_39);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_39, L_42, L_43, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
	}

IL_00db:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_4 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_44) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_45 = V_4;
		if (!L_45)
		{
			goto IL_010b;
		}
	}
	{
		// _android.Call ("androidUnsubscribeCharacteristic", name, service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_46 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		String_t* L_49 = ___0_name;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_48;
		String_t* L_51 = ___1_service;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_50;
		String_t* L_53 = ___2_characteristic;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_53);
		NullCheck(L_46);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_46, _stringLiteralEB1D8A1AF714617959D4F8AA082FCFD16409E5FF, L_52, NULL);
	}

IL_010b:
	{
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::PeripheralName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_PeripheralName_m68A12724E788CEF61F4B5A17140DCFD8242B24C9 (String_t* ___0_newName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// _android.Call ("androidPeripheralName", newName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_newName;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralCE5AC270C12EC7EAC928330BEAEF6C9E6803EC24, L_6, NULL);
	}

IL_0034:
	{
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::CreateService(System.String,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_CreateService_m161D50EF81C0D6A63086B2EAC0B83F7E8A75AF3E (String_t* ___0_uuid, bool ___1_primary, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// bluetoothDeviceScript.ServiceAddedAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___2_action;
		NullCheck(L_5);
		L_5->___ServiceAddedAction_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___ServiceAddedAction_8), (void*)L_6);
	}

IL_0028:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// _android.Call ("androidCreateService", uuid, primary);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		String_t* L_12 = ___0_uuid;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		bool L_14 = ___1_primary;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteralF8AAFA549889883502A4D6D131CF8210DDF84FCD, L_13, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveService_mDFC2E26C6008B4607FCA4DF27682AD46097CD3B0 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// _android.Call ("androidRemoveService", uuid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_uuid;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral83D45FCA45F93BA59D860796A96FE7117E5DCBD7, L_6, NULL);
	}

IL_0034:
	{
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveServices_mFE60B8A4F72B9A4DBA7566C16BA1C5A2684DDF10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _android.Call ("androidRemoveServices");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral88F09F4A56E067B1B81EC436904567C01C9C3DF4, L_5, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::CreateCharacteristic(System.String,BluetoothLEHardwareInterface/CBCharacteristicProperties,BluetoothLEHardwareInterface/CBAttributePermissions,System.Byte[],System.Int32,System.Action`2<System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_CreateCharacteristic_mEAF44E1FB5B6AE756CB0C74009C6B0B1DF44D669 (String_t* ___0_uuid, int32_t ___1_properties, int32_t ___2_permissions, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_data, int32_t ___4_length, Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___5_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// bluetoothDeviceScript.PeripheralReceivedWriteDataAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* L_6 = ___5_action;
		NullCheck(L_5);
		L_5->___PeripheralReceivedWriteDataAction_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___PeripheralReceivedWriteDataAction_15), (void*)L_6);
	}

IL_0029:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		// _android.Call ("androidCreateCharacteristic", uuid, (int)properties, (int)permissions, data, length);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		String_t* L_12 = ___0_uuid;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		int32_t L_14 = ___1_properties;
		int32_t L_15 = ((int32_t)L_14);
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = ___2_permissions;
		int32_t L_19 = ((int32_t)L_18);
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___3_data;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		int32_t L_24 = ___4_length;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_26);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteralD482D614E702611FC3EBAEC39B93D1AFD9222221, L_23, NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveCharacteristic_m8378D9B83336064673A8D07990267FF0B9861DA6 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// bluetoothDeviceScript.PeripheralReceivedWriteDataAction = null;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		NullCheck(L_5);
		L_5->___PeripheralReceivedWriteDataAction_15 = (Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___PeripheralReceivedWriteDataAction_15), (void*)(Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831*)NULL);
	}

IL_0028:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// _android.Call ("androidRemoveCharacteristic", uuid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___0_uuid;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_8);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_8, _stringLiteralE3215C2629A952F0AC344C8D69FE2D802A48D3FA, L_10, NULL);
	}

IL_004e:
	{
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::RemoveCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_RemoveCharacteristics_m837F27F5401BBF2E6E905C44FE4ED721A6596853 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// _android.Call ("androidRemoveCharacteristics");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral2F668F4292AD4222A2C03918C15E46866229F0E2, L_5, NULL);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StartAdvertising(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StartAdvertising_m9B08731ACA361835423DBFA9592C03152E92886E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// bluetoothDeviceScript.StartedAdvertisingAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		NullCheck(L_5);
		L_5->___StartedAdvertisingAction_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___StartedAdvertisingAction_9), (void*)L_6);
	}

IL_0028:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// _android.Call ("androidStartAdvertising");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteralD6899C7C072DDADF8F38DDCD6FCD494657DB1917, L_10, NULL);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::StopAdvertising(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopAdvertising_m2285E07302191DEC4F417DD1B54AA433D33F9E9D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// if (bluetoothDeviceScript != null)
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// bluetoothDeviceScript.StoppedAdvertisingAction = action;
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_5 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->___bluetoothDeviceScript_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		NullCheck(L_5);
		L_5->___StoppedAdvertisingAction_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___StoppedAdvertisingAction_10), (void*)L_6);
	}

IL_0028:
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_2 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// _android.Call ("androidStopAdvertising");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_9, _stringLiteral936259343A8975886B07CCCB1055C7FDE90E609E, L_10, NULL);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void BluetoothLEHardwareInterface::UpdateCharacteristicValue(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_UpdateCharacteristicValue_m4B07B45A4AEABA0C5BB902CE99BF5DA8ADAD7737 (String_t* ___0_uuid, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// if (_android != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		V_1 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// _android.Call ("androidUpdateCharacteristicValue", uuid, data, length);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B_il2cpp_TypeInfo_var))->____android_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_uuid;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_data;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		int32_t L_11 = ___2_length;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral3A7944C38D3AC6854E3D84DC94CF76FC8CEE8471, L_10, NULL);
	}

IL_0041:
	{
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.String BluetoothLEHardwareInterface::FullUUID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothLEHardwareInterface_FullUUID_mADA3D22828BCEAD44C6A38BCE06D6988EB574B59 (String_t* ___0_uuid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (uuid.Length == 4)
		String_t* L_0 = ___0_uuid;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return "0000" + uuid + "-0000-1000-8000-00805F9B34FB";
		String_t* L_3 = ___0_uuid;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, L_3, _stringLiteral19A325E0E7DE9A693A792DCB313D771BA16E1470, NULL);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0021:
	{
		// return uuid;
		String_t* L_5 = ___0_uuid;
		V_1 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void BluetoothLEHardwareInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface__ctor_m2CBB7B185D09793C14DA2E5A5A7D1AD758C02C5B (BluetoothLEHardwareInterface_tDF6EBDC625EDEB026E3D58D0978B8ABD7644D19B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled)
{
	marshaled.___UUID_0 = il2cpp_codegen_marshal_string(unmarshaled.___UUID_0);
	marshaled.___Major_1 = unmarshaled.___Major_1;
	marshaled.___Minor_2 = unmarshaled.___Minor_2;
	marshaled.___RSSI_3 = unmarshaled.___RSSI_3;
	marshaled.___AndroidSignalPower_4 = unmarshaled.___AndroidSignalPower_4;
	marshaled.___iOSProximity_5 = unmarshaled.___iOSProximity_5;
}
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke_back(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled)
{
	unmarshaled.___UUID_0 = il2cpp_codegen_marshal_string_result(marshaled.___UUID_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UUID_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___UUID_0));
	int32_t unmarshaledMajor_temp_1 = 0;
	unmarshaledMajor_temp_1 = marshaled.___Major_1;
	unmarshaled.___Major_1 = unmarshaledMajor_temp_1;
	int32_t unmarshaledMinor_temp_2 = 0;
	unmarshaledMinor_temp_2 = marshaled.___Minor_2;
	unmarshaled.___Minor_2 = unmarshaledMinor_temp_2;
	int32_t unmarshaledRSSI_temp_3 = 0;
	unmarshaledRSSI_temp_3 = marshaled.___RSSI_3;
	unmarshaled.___RSSI_3 = unmarshaledRSSI_temp_3;
	int32_t unmarshaledAndroidSignalPower_temp_4 = 0;
	unmarshaledAndroidSignalPower_temp_4 = marshaled.___AndroidSignalPower_4;
	unmarshaled.___AndroidSignalPower_4 = unmarshaledAndroidSignalPower_temp_4;
	int32_t unmarshalediOSProximity_temp_5 = 0;
	unmarshalediOSProximity_temp_5 = marshaled.___iOSProximity_5;
	unmarshaled.___iOSProximity_5 = unmarshalediOSProximity_temp_5;
}
// Conversion method for clean up from marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_pinvoke_cleanup(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___UUID_0);
	marshaled.___UUID_0 = NULL;
}
// Conversion methods for marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled)
{
	marshaled.___UUID_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___UUID_0);
	marshaled.___Major_1 = unmarshaled.___Major_1;
	marshaled.___Minor_2 = unmarshaled.___Minor_2;
	marshaled.___RSSI_3 = unmarshaled.___RSSI_3;
	marshaled.___AndroidSignalPower_4 = unmarshaled.___AndroidSignalPower_4;
	marshaled.___iOSProximity_5 = unmarshaled.___iOSProximity_5;
}
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com_back(const iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96& unmarshaled)
{
	unmarshaled.___UUID_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___UUID_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UUID_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___UUID_0));
	int32_t unmarshaledMajor_temp_1 = 0;
	unmarshaledMajor_temp_1 = marshaled.___Major_1;
	unmarshaled.___Major_1 = unmarshaledMajor_temp_1;
	int32_t unmarshaledMinor_temp_2 = 0;
	unmarshaledMinor_temp_2 = marshaled.___Minor_2;
	unmarshaled.___Minor_2 = unmarshaledMinor_temp_2;
	int32_t unmarshaledRSSI_temp_3 = 0;
	unmarshaledRSSI_temp_3 = marshaled.___RSSI_3;
	unmarshaled.___RSSI_3 = unmarshaledRSSI_temp_3;
	int32_t unmarshaledAndroidSignalPower_temp_4 = 0;
	unmarshaledAndroidSignalPower_temp_4 = marshaled.___AndroidSignalPower_4;
	unmarshaled.___AndroidSignalPower_4 = unmarshaledAndroidSignalPower_temp_4;
	int32_t unmarshalediOSProximity_temp_5 = 0;
	unmarshalediOSProximity_temp_5 = marshaled.___iOSProximity_5;
	unmarshaled.___iOSProximity_5 = unmarshalediOSProximity_temp_5;
}
// Conversion method for clean up from marshalling of: BluetoothLEHardwareInterface/iBeaconData
IL2CPP_EXTERN_C void iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshal_com_cleanup(iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___UUID_0);
	marshaled.___UUID_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_Multicast(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* currentDelegate = reinterpret_cast<EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_start, ___1_end, ___2_Value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenInst(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_start, ___1_end, ___2_Value, method);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStatic(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_start, ___1_end, ___2_Value, method);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStaticInvoker(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_start, ___1_end, ___2_Value);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_ClosedStaticInvoker(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_start, ___1_end, ___2_Value);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___0_start, ___1_end, ___2_Value);

	return returnValue;
}
// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m497978A316C82AF6C9B346BFBC8892EEA14D4E26 (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_Multicast;
}
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_start, ___1_end, ___2_Value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m29B96789E4181AF1A21B72003F0486D9DEE94E49 (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_start);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_end);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_Value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_m6DCA6FAEE37BE85EB2AD95693E5420F8FFEB273B (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_Multicast(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* currentDelegate = reinterpret_cast<ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenInst(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStatic(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStaticInvoker(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_ClosedStaticInvoker(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween__ctor_m525FF0AA40ADED0AC59F5BD794CD98666D539C1B (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_Multicast;
}
// System.Void iTween/ApplyTween::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_m0F111DBDF968D92CCAADB4CC53B483C56F9DF60C (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_mA91AA6232F984857701538C50F7082A3DEDDA6E8 (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/Defaults::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defaults__cctor_mF78ADEF9B9CC2DF2625F6242F1278422AB157BB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float time = 1f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___time_0 = (1.0f);
		// public static float delay = 0f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___delay_1 = (0.0f);
		// public static NamedValueColor namedColorValue = NamedValueColor._Color;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___namedColorValue_2 = 0;
		// public static LoopType loopType = LoopType.none;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___loopType_3 = 0;
		// public static EaseType easeType = iTween.EaseType.easeOutExpo;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___easeType_4 = ((int32_t)16);
		// public static float lookSpeed = 3f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___lookSpeed_5 = (3.0f);
		// public static bool isLocal = false;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___isLocal_6 = (bool)0;
		// public static Space space = Space.Self;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___space_7 = 1;
		// public static bool orientToPath = false;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___orientToPath_8 = (bool)0;
		// public static Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___color_9 = L_0;
		// public static float updateTimePercentage = .05f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTimePercentage_10 = (0.0500000007f);
		// public static float updateTime = 1f*updateTimePercentage;
		float L_1 = ((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTimePercentage_10;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTime_11 = ((float)il2cpp_codegen_multiply((1.0f), L_1));
		// public static float lookAhead = .05f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___lookAhead_12 = (0.0500000007f);
		// public static bool useRealTime = false; // Added by PressPlay
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___useRealTime_13 = (bool)0;
		// public static Vector3 up = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___up_14 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRSpline__ctor_m24E1418A00A88BA911D3301A29F7C7A5E229CE39 (CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_pts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CRSpline(params Vector3[] pts) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pts = new Vector3[pts.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_pts;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___pts_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pts_0), (void*)L_1);
		// Array.Copy(pts, this.pts, pts.Length);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_pts;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___pts_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_pts;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CRSpline_Interp_m1B887F4655AE6387B23D81EB85E1ADBF63DACC1A (CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* __this, float ___0_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// int numSections = pts.Length - 3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___pts_0;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3));
		// int currPt = Mathf.Min(Mathf.FloorToInt(t * (float) numSections), numSections - 1);
		float L_1 = ___0_t;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), NULL);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_1 = L_5;
		// float u = t * (float) numSections - (float) currPt;
		float L_6 = ___0_t;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, ((float)L_7))), ((float)L_8)));
		// Vector3 a = pts[currPt];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___pts_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// Vector3 b = pts[currPt + 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___pts_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// Vector3 c = pts[currPt + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___pts_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		// Vector3 d = pts[currPt + 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->___pts_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// return .5f*((-a+3f*b-3f*c+d)*(u*u*u)+(2f*a-5f*b+4f*c-d)*(u*u)+(-a+c)*u+2f*b);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		float L_35 = V_2;
		float L_36 = V_2;
		float L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_47, NULL);
		float L_49 = V_2;
		float L_50 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_55, NULL);
		float L_57 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_59, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_62, NULL);
		V_7 = L_63;
		goto IL_0114;
	}

IL_0114:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_7;
		return L_64;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<TweenDelay>d__145::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145__ctor_mBD8B0D260E078CB5EDEBB80B174D3F14CE6F7DDC (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_IDisposable_Dispose_m87EDA8CB2254CFA0D98ACA0EDAC2624C3DBFCE2C (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenDelay>d__145::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ed__145_MoveNext_m3F9BEA5150328C01814E8349D5FCCD53DD596E31 (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// delayStarted = Time.time;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_3 = __this->___U3CU3E4__this_2;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_3);
		L_3->___delayStarted_17 = L_4;
		// yield return new WaitForSeconds (delay);
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		float L_6 = L_5->___delay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(wasPaused){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		bool L_9 = L_8->___wasPaused_22;
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		// wasPaused=false;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		L_11->___wasPaused_22 = (bool)0;
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_12, NULL);
	}

IL_007f:
	{
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__145_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA283366C84D35E665521DAC905998EABD55F8EC (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_get_Current_m878DC4466A22B02C196B1EFF47A1AB48907909D9 (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<TweenRestart>d__147::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147__ctor_m7F496C121695B098A5B6DD0F1D140335B2897B71 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_IDisposable_Dispose_m34EFCBEC363A6F6EB9894F8EA3DFF243779E8BA7 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenRestart>d__147::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ed__147_MoveNext_m9615D37F1455E7CD3D963DC3C26869696C257984 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0066;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		float L_4 = L_3->___delay_10;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		// delayStarted = Time.time;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_6 = __this->___U3CU3E4__this_2;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_6);
		L_6->___delayStarted_17 = L_7;
		// yield return new WaitForSeconds (delay);
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		float L_9 = L_8->___delay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006e:
	{
		// loop=true;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		L_11->___loop_20 = (bool)1;
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__147_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m476B163AFD1CC5AE4240DE3359E5E6B6F6438638 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_get_Current_m672D0843DA4ABCCABFCCACE6AA8176CE88D8D214 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<Start>d__229::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229__ctor_mAAA70693E11EBB135BDE0149E5B47CFAF756A44D (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<Start>d__229::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_IDisposable_Dispose_m775F2078970286A6B244C7FDA94A077050B62D05 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<Start>d__229::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__229_MoveNext_mB6D3802677543F0FF965901080DE7EDE2CD0B304 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0056;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		float L_4 = L_3->___delay_10;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		// yield return StartCoroutine("TweenDelay");
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_6, _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005e:
	{
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<Start>d__229::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__229_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42EA9CB2BB0AFD18CB9A84E78C9AEB28484E1DE6 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<Start>d__229::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB_RuntimeMethod_var)));
	}
}
// System.Object iTween/<Start>d__229::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__229_System_Collections_IEnumerator_get_Current_m2615EDA80E389A056F6D878F7AC94709A40CDDAB (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSample_Start_m811917650C0CC675CC6798A0E78F3333D143EEE2 (MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iTween.MoveBy(gameObject, iTween.Hash("x", 2, "easeType", "easeInOutExpo", "loopType", "pingPong", "delay", .1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 2;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		double L_12 = (0.10000000000000001);
		RuntimeObject* L_13 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14;
		L_14 = iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D(L_11, NULL);
		iTween_MoveBy_mD42756F0CC55A0DF39BFA08B8298E076CD377B53(L_0, L_14, NULL);
		// }
		return;
	}
}
// System.Void MoveSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSample__ctor_mA33F8921CB254310C67D5DD25DD42B2FE6754F24 (MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotateSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSample_Start_m0A8E852DC8A300289EA0420F04A079395025D14D (RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iTween.RotateBy(gameObject, iTween.Hash("x", .25, "easeType", "easeInOutBack", "loopType", "pingPong", "delay", .4));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		double L_4 = (0.25);
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		double L_12 = (0.40000000000000002);
		RuntimeObject* L_13 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14;
		L_14 = iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D(L_11, NULL);
		iTween_RotateBy_m5174001D7DC2ADDA5D225458FDD23CE9724C4A20(L_0, L_14, NULL);
		// }
		return;
	}
}
// System.Void RotateSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSample__ctor_m4AA775387D47F5B79B383266B2A6089B858C87CC (RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SampleInfo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInfo_OnGUI_m0FE7127B70E2C60835E30205EEB551DAE1CD8AB7 (SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GUILayout.Label("iTween can spin, shake, punch, move, handle audio, fade color and transparency \nand much more with each task needing only one line of code.");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26, L_0, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_1;
		L_1 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_1, NULL);
		// GUILayout.Label("iTween works with C#, JavaScript and Boo. For full documentation and examples visit:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967, L_2, NULL);
		// if(GUILayout.Button("http://itween.pixelplacement.com")){
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3;
		L_3 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_4;
		L_4 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// Application.OpenURL("http://itween.pixelplacement.com");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B, NULL);
	}

IL_004c:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// }
		return;
	}
}
// System.Void SampleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInfo__ctor_m40C2DE9743EE7BF329F12C5556C9996109677107 (SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mD9FB5E2CF8A8ED11C3135A1A910CDCAD6538A1FC_gshared_inline (Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE56360F8A5B137A1714DEF08A9266EF9166480B8_gshared_inline (Action_1_t59D9650BCC97814E3D7C53FCC12A9484950839CE* __this, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, iBeaconData_tBEF28446C1EBB9EA0546121555C9E043B4C0BD96, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
