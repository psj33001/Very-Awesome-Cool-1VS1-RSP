#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Background
struct Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB;
// Bar
struct Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EffectManager
struct EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C;
// EffectSquare1
struct EffectSquare1_t4A303896487CE26D3F81637D4A1C30945330216D;
// EffectSquare2
struct EffectSquare2_tE7B83D6712BC480FAEF1A6D00507F99E05366225;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FaceScript
struct FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HandScript
struct HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// RSPshake
struct RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Space
struct Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA;
// Toggle
struct Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// crown
struct crown_t6E9EC555D3427D67853B103D3B06F1F732A59349;
// fire
struct fire_t681E11C61B81708A2984605BE72569220ED9CB42;
// guide_hand
struct guide_hand_tA98C944065D0FBB3F8D329830760697BC58634BE;
// help
struct help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3;
// lighting
struct lighting_tB7F908A2F360D19328B8B916991D270D91C60ADD;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Background/<ChangeBackgroundColor>d__6
struct U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral1226D825A53F2D336D826BA126EAD94B50AC7729;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
IL2CPP_EXTERN_C String_t* _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94;
IL2CPP_EXTERN_C String_t* _stringLiteral392BE11F79BAF06FED6050881C33F9C8B10C9932;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE155AF10BCCD34364387DAE02E69383D63F301;
IL2CPP_EXTERN_C String_t* _stringLiteral464F70DC593F98B22B468600E676CA836C447D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral472543D011B64A13A78979EE31D52CE32E4F7F39;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5;
IL2CPP_EXTERN_C String_t* _stringLiteral53F381BD9508EE02B531E3C34498C60256D0DA77;
IL2CPP_EXTERN_C String_t* _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3;
IL2CPP_EXTERN_C String_t* _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC;
IL2CPP_EXTERN_C String_t* _stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13;
IL2CPP_EXTERN_C String_t* _stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral87C67B5CA08A5DB771C991B601851D693996634B;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD221513ADC158B20268677A0827129111F5302;
IL2CPP_EXTERN_C String_t* _stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332;
IL2CPP_EXTERN_C String_t* _stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA137527FA799FABB245136CC6A6B7F0977A7AAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056;
IL2CPP_EXTERN_C String_t* _stringLiteralB50E31C3889F33016BC3F91C9CFC6B1C4EA4D5F5;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F9ED87C4B24A9EDDB1321BE755DA2C7DB28EE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5DA161E12FD4DDD8B95A2C3CDB17B7ACBA4467;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B0293790BD9B41190EBE662819A518383FB7B0;
IL2CPP_EXTERN_C String_t* _stringLiteralF325D7CCF99454491B411A6E8426AD89E9298D31;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisFaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629_mDCC350E261442289FEB477AF1ABDD1FD1D7F1455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisHandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E_m46D85D87ED2C0CD9DB441A76303733DF99A214F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56_mB8B01C91B05862F53A52FF339D79A18C7B1A7D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_mA174EE7F5A2217076BB2E96454113673668A9CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeBackgroundColorU3Ed__6_System_Collections_IEnumerator_Reset_m08D2B0F55EC8CC8D17F85B3FCE103C3904B62AED_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// TMPro.ShaderUtilities
struct ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F  : public RuntimeObject
{
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

// Background/<ChangeBackgroundColor>d__6
struct U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50  : public RuntimeObject
{
	// System.Int32 Background/<ChangeBackgroundColor>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Background/<ChangeBackgroundColor>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Background Background/<ChangeBackgroundColor>d__6::<>4__this
	Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* ___U3CU3E4__this_2;
	// System.Single Background/<ChangeBackgroundColor>d__6::<time>5__2
	float ___U3CtimeU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Background
struct Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Background::targetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___targetCamera_4;
	// Manager Background::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_5;
	// System.Single Background::duration
	float ___duration_6;
	// System.Single Background::sat
	float ___sat_7;
	// System.Single Background::bri
	float ___bri_8;
};

// Bar
struct Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager Bar::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// UnityEngine.LineRenderer Bar::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_5;
	// System.Single Bar::one
	float ___one_6;
	// System.Single Bar::two
	float ___two_7;
};

// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Button::textMesh
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textMesh_4;
	// UnityEngine.Material Button::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_5;
	// Player Button::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_6;
	// Player Button::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_7;
	// System.String Button::RSP
	String_t* ___RSP_8;
	// UnityEngine.GameObject Button::backobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backobject_9;
	// System.Int32 Button::playernum
	int32_t ___playernum_10;
};

// EffectManager
struct EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EffectManager::effect
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effect_4;
	// UnityEngine.GameObject[] EffectManager::effectSquare_prefab
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effectSquare_prefab_5;
	// UnityEngine.Vector3 EffectManager::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single EffectManager::timer
	float ___timer_7;
	// System.Boolean EffectManager::effect2_switch
	bool ___effect2_switch_8;
};

// EffectSquare1
struct EffectSquare1_t4A303896487CE26D3F81637D4A1C30945330216D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager EffectSquare1::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// UnityEngine.Material EffectSquare1::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_5;
	// UnityEngine.SpriteRenderer EffectSquare1::sr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sr_6;
	// UnityEngine.Sprite[] EffectSquare1::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_7;
	// System.Single EffectSquare1::startRadius
	float ___startRadius_8;
	// System.Single EffectSquare1::timer
	float ___timer_9;
	// System.Int32 EffectSquare1::direction
	int32_t ___direction_10;
	// System.Single EffectSquare1::scale
	float ___scale_11;
	// System.Single EffectSquare1::speed
	float ___speed_12;
	// System.Single EffectSquare1::acceleration
	float ___acceleration_13;
	// System.Single EffectSquare1::lifeTime
	float ___lifeTime_14;
};

// EffectSquare2
struct EffectSquare2_tE7B83D6712BC480FAEF1A6D00507F99E05366225  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager EffectSquare2::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// UnityEngine.Material EffectSquare2::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_5;
	// UnityEngine.SpriteRenderer EffectSquare2::sr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sr_6;
	// UnityEngine.Sprite[] EffectSquare2::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_7;
	// System.Single EffectSquare2::timer
	float ___timer_8;
	// System.Single EffectSquare2::scale
	float ___scale_9;
	// System.Single EffectSquare2::speed
	float ___speed_10;
	// System.Single EffectSquare2::acceleration
	float ___acceleration_11;
	// System.Single EffectSquare2::lifeTime
	float ___lifeTime_12;
};

// FaceScript
struct FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer FaceScript::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_4;
	// UnityEngine.Material FaceScript::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_5;
	// Player FaceScript::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_6;
	// UnityEngine.Sprite[] FaceScript::sprites_loby
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_loby_7;
	// UnityEngine.Sprite[] FaceScript::sprites_game
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_game_8;
	// UnityEngine.Sprite[] FaceScript::sprites_draw
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_draw_9;
	// UnityEngine.Sprite[] FaceScript::sprites_win
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_win_10;
	// UnityEngine.Sprite[] FaceScript::sprites_lose
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_lose_11;
};

// HandScript
struct HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer HandScript::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_4;
	// UnityEngine.Material HandScript::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_5;
	// Player HandScript::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_6;
	// UnityEngine.Sprite[] HandScript::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_7;
};

// Manager
struct Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player Manager::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_4;
	// Player Manager::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_5;
	// EffectManager Manager::effectManager
	EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* ___effectManager_6;
	// UnityEngine.GameObject Manager::tmp_title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tmp_title_7;
	// UnityEngine.GameObject Manager::tmp_space
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tmp_space_8;
	// UnityEngine.GameObject Manager::ingameText_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ingameText_obj_9;
	// UnityEngine.GameObject Manager::crown_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___crown_obj_10;
	// UnityEngine.GameObject Manager::lighting_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lighting_obj_11;
	// UnityEngine.GameObject Manager::fire_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fire_obj_12;
	// UnityEngine.GameObject Manager::bar_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bar_obj_13;
	// UnityEngine.GameObject Manager::bar_frame_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bar_frame_obj_14;
	// UnityEngine.GameObject Manager::touch_toggle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___touch_toggle_15;
	// UnityEngine.GameObject[] Manager::touch_button
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___touch_button_16;
	// UnityEngine.GameObject Manager::guide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___guide_17;
	// UnityEngine.AudioSource Manager::backAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backAudio_18;
	// UnityEngine.AudioSource Manager::effectAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___effectAudio_19;
	// TMPro.TextMeshProUGUI Manager::ingameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ingameText_20;
	// UnityEngine.Material Manager::ingameText_mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ingameText_mat_21;
	// System.Boolean Manager::touchMod
	bool ___touchMod_22;
	// System.Boolean Manager::help
	bool ___help_23;
	// System.Boolean Manager::gameStarted
	bool ___gameStarted_24;
	// System.String Manager::gameState
	String_t* ___gameState_25;
	// System.String Manager::RSP
	String_t* ___RSP_26;
	// System.Single Manager::timer
	float ___timer_27;
	// UnityEngine.AudioClip[] Manager::lobyMusic
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___lobyMusic_28;
	// UnityEngine.AudioClip[] Manager::gameMusic
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___gameMusic_29;
	// UnityEngine.AudioClip[] Manager::soundEffects
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___soundEffects_30;
	// System.Single Manager::audioVolumeDefault
	float ___audioVolumeDefault_31;
	// System.Int32 Manager::gameMusicNum
	int32_t ___gameMusicNum_32;
	// System.Int32 Manager::lobyMusicNum
	int32_t ___lobyMusicNum_33;
	// System.Double Manager::p1winningTime
	double ___p1winningTime_34;
	// System.Double Manager::p2winningTime
	double ___p2winningTime_35;
	// System.Int32 Manager::currentWinner
	int32_t ___currentWinner_36;
	// System.Int32 Manager::currentWinner_last
	int32_t ___currentWinner_last_37;
	// System.Int32 Manager::totalWinner
	int32_t ___totalWinner_38;
	// System.Single Manager::readyTime
	float ___readyTime_39;
	// System.Single Manager::handsetTime
	float ___handsetTime_40;
	// System.Single Manager::gameTime
	float ___gameTime_41;
	// System.Single Manager::countDelay
	float ___countDelay_42;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Player::face_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___face_prefab_4;
	// UnityEngine.GameObject Player::hand_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hand_prefab_5;
	// UnityEngine.GameObject Player::face_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___face_obj_6;
	// UnityEngine.GameObject Player::hand_obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hand_obj_7;
	// Manager Player::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_8;
	// FaceScript Player::faceScript
	FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* ___faceScript_9;
	// HandScript Player::handScript
	HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* ___handScript_10;
	// System.Int32 Player::face_sprite
	int32_t ___face_sprite_11;
	// System.String Player::face_state
	String_t* ___face_state_12;
	// System.Int32 Player::hand_sprite
	int32_t ___hand_sprite_13;
	// System.Int32 Player::inputRSP
	int32_t ___inputRSP_14;
	// UnityEngine.Vector3 Player::face_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___face_pos_15;
	// UnityEngine.Vector3 Player::hand_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hand_pos_16;
	// UnityEngine.Quaternion Player::hand_rot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___hand_rot_17;
	// System.Int32 Player::player
	int32_t ___player_18;
};

// RSPshake
struct RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager RSPshake::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// Player RSPshake::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_5;
	// System.Single RSPshake::timer
	float ___timer_6;
	// System.Single RSPshake::countDelay
	float ___countDelay_7;
};

// Space
struct Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager Space::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// TMPro.TextMeshProUGUI Space::textMesh
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textMesh_5;
};

// Title
struct Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager Title::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// TMPro.TextMeshProUGUI Title::title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___title_5;
	// System.Single Title::fade
	float ___fade_6;
	// System.Single Title::timer
	float ___timer_7;
	// UnityEngine.Color Title::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_8;
};

// Toggle
struct Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager Toggle::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// TMPro.TextMeshProUGUI Toggle::textMesh
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textMesh_5;
	// UnityEngine.Material Toggle::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
	// UnityEngine.GameObject Toggle::backobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backobject_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// crown
struct crown_t6E9EC555D3427D67853B103D3B06F1F732A59349  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager crown::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// Player crown::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_5;
	// Player crown::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_6;
	// System.Single crown::timer
	float ___timer_7;
};

// fire
struct fire_t681E11C61B81708A2984605BE72569220ED9CB42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer fire::sr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sr_4;
	// UnityEngine.Sprite[] fire::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_5;
	// Manager fire::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_6;
	// Player fire::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_7;
	// Player fire::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_8;
	// UnityEngine.Material fire::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_9;
	// System.Single fire::timer
	float ___timer_10;
};

// guide_hand
struct guide_hand_tA98C944065D0FBB3F8D329830760697BC58634BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single guide_hand::timer
	float ___timer_4;
	// System.Single guide_hand::delay
	float ___delay_5;
};

// help
struct help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager help::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// TMPro.TextMeshProUGUI help::textMesh
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textMesh_5;
	// UnityEngine.Material help::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
	// UnityEngine.GameObject help::backobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backobject_7;
	// UnityEngine.GameObject[] help::guide
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___guide_8;
	// System.Single help::timer
	float ___timer_9;
};

// lighting
struct lighting_tB7F908A2F360D19328B8B916991D270D91C60ADD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Manager lighting::manager
	Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* ___manager_4;
	// Player lighting::player1
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player1_5;
	// Player lighting::player2
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player2_6;
	// System.Single lighting::timer
	float ___timer_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// TMPro.ShaderUtilities
struct ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields
{
	// System.Int32 TMPro.ShaderUtilities::ID_MainTex
	int32_t ___ID_MainTex_0;
	// System.Int32 TMPro.ShaderUtilities::ID_FaceTex
	int32_t ___ID_FaceTex_1;
	// System.Int32 TMPro.ShaderUtilities::ID_FaceColor
	int32_t ___ID_FaceColor_2;
	// System.Int32 TMPro.ShaderUtilities::ID_FaceDilate
	int32_t ___ID_FaceDilate_3;
	// System.Int32 TMPro.ShaderUtilities::ID_Shininess
	int32_t ___ID_Shininess_4;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayColor
	int32_t ___ID_UnderlayColor_5;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayOffsetX
	int32_t ___ID_UnderlayOffsetX_6;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayOffsetY
	int32_t ___ID_UnderlayOffsetY_7;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayDilate
	int32_t ___ID_UnderlayDilate_8;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlaySoftness
	int32_t ___ID_UnderlaySoftness_9;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayOffset
	int32_t ___ID_UnderlayOffset_10;
	// System.Int32 TMPro.ShaderUtilities::ID_UnderlayIsoPerimeter
	int32_t ___ID_UnderlayIsoPerimeter_11;
	// System.Int32 TMPro.ShaderUtilities::ID_WeightNormal
	int32_t ___ID_WeightNormal_12;
	// System.Int32 TMPro.ShaderUtilities::ID_WeightBold
	int32_t ___ID_WeightBold_13;
	// System.Int32 TMPro.ShaderUtilities::ID_OutlineTex
	int32_t ___ID_OutlineTex_14;
	// System.Int32 TMPro.ShaderUtilities::ID_OutlineWidth
	int32_t ___ID_OutlineWidth_15;
	// System.Int32 TMPro.ShaderUtilities::ID_OutlineSoftness
	int32_t ___ID_OutlineSoftness_16;
	// System.Int32 TMPro.ShaderUtilities::ID_OutlineColor
	int32_t ___ID_OutlineColor_17;
	// System.Int32 TMPro.ShaderUtilities::ID_Outline2Color
	int32_t ___ID_Outline2Color_18;
	// System.Int32 TMPro.ShaderUtilities::ID_Outline2Width
	int32_t ___ID_Outline2Width_19;
	// System.Int32 TMPro.ShaderUtilities::ID_Padding
	int32_t ___ID_Padding_20;
	// System.Int32 TMPro.ShaderUtilities::ID_GradientScale
	int32_t ___ID_GradientScale_21;
	// System.Int32 TMPro.ShaderUtilities::ID_ScaleX
	int32_t ___ID_ScaleX_22;
	// System.Int32 TMPro.ShaderUtilities::ID_ScaleY
	int32_t ___ID_ScaleY_23;
	// System.Int32 TMPro.ShaderUtilities::ID_PerspectiveFilter
	int32_t ___ID_PerspectiveFilter_24;
	// System.Int32 TMPro.ShaderUtilities::ID_Sharpness
	int32_t ___ID_Sharpness_25;
	// System.Int32 TMPro.ShaderUtilities::ID_TextureWidth
	int32_t ___ID_TextureWidth_26;
	// System.Int32 TMPro.ShaderUtilities::ID_TextureHeight
	int32_t ___ID_TextureHeight_27;
	// System.Int32 TMPro.ShaderUtilities::ID_BevelAmount
	int32_t ___ID_BevelAmount_28;
	// System.Int32 TMPro.ShaderUtilities::ID_GlowColor
	int32_t ___ID_GlowColor_29;
	// System.Int32 TMPro.ShaderUtilities::ID_GlowOffset
	int32_t ___ID_GlowOffset_30;
	// System.Int32 TMPro.ShaderUtilities::ID_GlowPower
	int32_t ___ID_GlowPower_31;
	// System.Int32 TMPro.ShaderUtilities::ID_GlowOuter
	int32_t ___ID_GlowOuter_32;
	// System.Int32 TMPro.ShaderUtilities::ID_GlowInner
	int32_t ___ID_GlowInner_33;
	// System.Int32 TMPro.ShaderUtilities::ID_LightAngle
	int32_t ___ID_LightAngle_34;
	// System.Int32 TMPro.ShaderUtilities::ID_EnvMap
	int32_t ___ID_EnvMap_35;
	// System.Int32 TMPro.ShaderUtilities::ID_EnvMatrix
	int32_t ___ID_EnvMatrix_36;
	// System.Int32 TMPro.ShaderUtilities::ID_EnvMatrixRotation
	int32_t ___ID_EnvMatrixRotation_37;
	// System.Int32 TMPro.ShaderUtilities::ID_MaskCoord
	int32_t ___ID_MaskCoord_38;
	// System.Int32 TMPro.ShaderUtilities::ID_ClipRect
	int32_t ___ID_ClipRect_39;
	// System.Int32 TMPro.ShaderUtilities::ID_MaskSoftnessX
	int32_t ___ID_MaskSoftnessX_40;
	// System.Int32 TMPro.ShaderUtilities::ID_MaskSoftnessY
	int32_t ___ID_MaskSoftnessY_41;
	// System.Int32 TMPro.ShaderUtilities::ID_VertexOffsetX
	int32_t ___ID_VertexOffsetX_42;
	// System.Int32 TMPro.ShaderUtilities::ID_VertexOffsetY
	int32_t ___ID_VertexOffsetY_43;
	// System.Int32 TMPro.ShaderUtilities::ID_UseClipRect
	int32_t ___ID_UseClipRect_44;
	// System.Int32 TMPro.ShaderUtilities::ID_StencilID
	int32_t ___ID_StencilID_45;
	// System.Int32 TMPro.ShaderUtilities::ID_StencilOp
	int32_t ___ID_StencilOp_46;
	// System.Int32 TMPro.ShaderUtilities::ID_StencilComp
	int32_t ___ID_StencilComp_47;
	// System.Int32 TMPro.ShaderUtilities::ID_StencilReadMask
	int32_t ___ID_StencilReadMask_48;
	// System.Int32 TMPro.ShaderUtilities::ID_StencilWriteMask
	int32_t ___ID_StencilWriteMask_49;
	// System.Int32 TMPro.ShaderUtilities::ID_ShaderFlags
	int32_t ___ID_ShaderFlags_50;
	// System.Int32 TMPro.ShaderUtilities::ID_ScaleRatio_A
	int32_t ___ID_ScaleRatio_A_51;
	// System.Int32 TMPro.ShaderUtilities::ID_ScaleRatio_B
	int32_t ___ID_ScaleRatio_B_52;
	// System.Int32 TMPro.ShaderUtilities::ID_ScaleRatio_C
	int32_t ___ID_ScaleRatio_C_53;
	// System.String TMPro.ShaderUtilities::Keyword_Bevel
	String_t* ___Keyword_Bevel_54;
	// System.String TMPro.ShaderUtilities::Keyword_Glow
	String_t* ___Keyword_Glow_55;
	// System.String TMPro.ShaderUtilities::Keyword_Underlay
	String_t* ___Keyword_Underlay_56;
	// System.String TMPro.ShaderUtilities::Keyword_Ratios
	String_t* ___Keyword_Ratios_57;
	// System.String TMPro.ShaderUtilities::Keyword_MASK_SOFT
	String_t* ___Keyword_MASK_SOFT_58;
	// System.String TMPro.ShaderUtilities::Keyword_MASK_HARD
	String_t* ___Keyword_MASK_HARD_59;
	// System.String TMPro.ShaderUtilities::Keyword_MASK_TEX
	String_t* ___Keyword_MASK_TEX_60;
	// System.String TMPro.ShaderUtilities::Keyword_Outline
	String_t* ___Keyword_Outline_61;
	// System.String TMPro.ShaderUtilities::ShaderTag_ZTestMode
	String_t* ___ShaderTag_ZTestMode_62;
	// System.String TMPro.ShaderUtilities::ShaderTag_CullMode
	String_t* ___ShaderTag_CullMode_63;
	// System.Single TMPro.ShaderUtilities::m_clamp
	float ___m_clamp_64;
	// System.Boolean TMPro.ShaderUtilities::isInitialized
	bool ___isInitialized_65;
	// UnityEngine.Shader TMPro.ShaderUtilities::k_ShaderRef_MobileSDF
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___k_ShaderRef_MobileSDF_66;
	// UnityEngine.Shader TMPro.ShaderUtilities::k_ShaderRef_MobileBitmap
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___k_ShaderRef_MobileBitmap_67;
};

// TMPro.ShaderUtilities

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Background/<ChangeBackgroundColor>d__6

// Background/<ChangeBackgroundColor>d__6

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Background

// Background

// Bar

// Bar

// Button

// Button

// EffectManager

// EffectManager

// EffectSquare1

// EffectSquare1

// EffectSquare2

// EffectSquare2

// FaceScript

// FaceScript

// HandScript

// HandScript

// Manager

// Manager

// Player

// Player

// RSPshake

// RSPshake

// Space

// Space

// Title

// Title

// Toggle

// Toggle

// crown

// crown

// fire

// fire

// guide_hand

// guide_hand

// help

// help

// lighting

// lighting

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Background::ChangeBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Background_ChangeBackgroundColor_mE844D6BFA8017099ED228C6DA5F6FB5DDDC9D890 (Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Background/<ChangeBackgroundColor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeBackgroundColorU3Ed__6__ctor_mB5D8774929169977427108C45FF7D27DF4AFD655 (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void EffectManager::Effect2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect2_m8767A10423A393502A35E9B48FAD2BB3936863FE (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100 (int32_t ___0_width, int32_t ___1_height, bool ___2_fullscreen, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EffectManager>()
inline EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* GameObject_GetComponent_TisEffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_mA174EE7F5A2217076BB2E96454113673668A9CC3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Player::SetGameFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetGameFace_m7685A8CE0F886922DDC3D6700767DF644873DDCA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Void Player::AllowInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::RSPshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::SetHandsetFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetHandsetFace_mB4FAAA678C3327A207A76EE89D376482964B6626 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void EffectManager::Effect1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect1_mA45856BA302C5390F0227B94D1104F0D33BA67E3 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) ;
// System.Void EffectManager::Effect2_Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect2_Reset_m185C161AB19FFF835B8B087BD02D4141A7BDEA51 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Player::SetDrawFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetDrawFace_m46C63CE7CD7B6829621653B3190A66FEDE9C5EB2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::SetWinFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetWinFace_mA539848785D8DCEB7F24B1A6C8F4BE63393D73CD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::SetLoseFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetLoseFace_mFB7C4BBFE64982759859E740DAC8C2A4776CA20C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Manager>()
inline Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Player::GetFacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<FaceScript>()
inline FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* Component_GetComponentInChildren_TisFaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629_mDCC350E261442289FEB477AF1ABDD1FD1D7F1455 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<HandScript>()
inline HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* Component_GetComponentInChildren_TisHandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E_m46D85D87ED2C0CD9DB441A76303733DF99A214F6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Player::SetLobbyFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetLobbyFace_mF4936B1B412EC4F78F9321580C02FBB55248BE91 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<RSPshake>()
inline RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* GameObject_AddComponent_TisRSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56_mB8B01C91B05862F53A52FF339D79A18C7B1A7D4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Manager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GameStart_mCBE50C5E37A7C5BE2164C505EEA3AE1D4939D50C (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___0_H, float ___1_S, float ___2_V, bool ___3_hdr, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void Background::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Start_mE85E1738F8CF767670907703177A11DDB3599DD3 (Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetCamera == null) {targetCamera = Camera.main;} // ???? ???? ?? ?? ?? ?? ??? ??
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___targetCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (targetCamera == null) {targetCamera = Camera.main;} // ???? ???? ?? ?? ?? ?? ??? ??
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___targetCamera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetCamera_4), (void*)L_2);
	}

IL_0019:
	{
		// StartCoroutine(ChangeBackgroundColor());
		RuntimeObject* L_3;
		L_3 = Background_ChangeBackgroundColor_mE844D6BFA8017099ED228C6DA5F6FB5DDDC9D890(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Background::ChangeBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Background_ChangeBackgroundColor_mE844D6BFA8017099ED228C6DA5F6FB5DDDC9D890 (Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* L_0 = (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50*)il2cpp_codegen_object_new(U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeBackgroundColorU3Ed__6__ctor_mB5D8774929169977427108C45FF7D27DF4AFD655(L_0, 0, NULL);
		U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Background::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background_Update_m3F6064B5F66C02B5AE62F3B5BB0F5C0895B45864 (Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD221513ADC158B20268677A0827129111F5302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(manager.gameState)
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_5;
		NullCheck(L_0);
		String_t* L_1 = L_0->___gameState_25;
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC, NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3, NULL);
		if (L_5)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476, NULL);
		if (L_7)
		{
			goto IL_0126;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral8DD221513ADC158B20268677A0827129111F5302, NULL);
		if (L_9)
		{
			goto IL_017b;
		}
	}
	{
		return;
	}

IL_004a:
	{
		// if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
		float L_10 = __this->___bri_8;
		if ((!(((float)L_10) > ((float)(0.699999988f)))))
		{
			goto IL_0076;
		}
	}
	{
		// if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_11 = __this->___manager_5;
		NullCheck(L_11);
		float L_12 = L_11->___timer_27;
		__this->___bri_8 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_12, (0.300000012f)))));
		goto IL_0081;
	}

IL_0076:
	{
		// else {bri = 0.7f;}
		__this->___bri_8 = (0.699999988f);
	}

IL_0081:
	{
		// if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
		float L_13 = __this->___sat_7;
		if ((!(((float)L_13) > ((float)(0.5f)))))
		{
			goto IL_00ac;
		}
	}
	{
		// if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_14 = __this->___manager_5;
		NullCheck(L_14);
		float L_15 = L_14->___timer_27;
		__this->___sat_7 = ((float)il2cpp_codegen_add((0.0f), ((float)il2cpp_codegen_multiply(L_15, (0.5f)))));
		return;
	}

IL_00ac:
	{
		// else {sat = 0.5f;}
		__this->___sat_7 = (0.5f);
		// break;
		return;
	}

IL_00b8:
	{
		// if(bri > 0.2f) {bri = 0.7f - manager.timer*0.4f;}
		float L_16 = __this->___bri_8;
		if ((!(((float)L_16) > ((float)(0.200000003f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// if(bri > 0.2f) {bri = 0.7f - manager.timer*0.4f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_17 = __this->___manager_5;
		NullCheck(L_17);
		float L_18 = L_17->___timer_27;
		__this->___bri_8 = ((float)il2cpp_codegen_subtract((0.699999988f), ((float)il2cpp_codegen_multiply(L_18, (0.400000006f)))));
		goto IL_00ef;
	}

IL_00e4:
	{
		// else {bri = 0.2f;}
		__this->___bri_8 = (0.200000003f);
	}

IL_00ef:
	{
		// if(sat > 0f) {sat = 0.5f - manager.timer*0.3f;}
		float L_19 = __this->___sat_7;
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_011a;
		}
	}
	{
		// if(sat > 0f) {sat = 0.5f - manager.timer*0.3f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_20 = __this->___manager_5;
		NullCheck(L_20);
		float L_21 = L_20->___timer_27;
		__this->___sat_7 = ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_21, (0.300000012f)))));
		return;
	}

IL_011a:
	{
		// else {sat = 0f;}
		__this->___sat_7 = (0.0f);
		// break;
		return;
	}

IL_0126:
	{
		// if(manager.timer < 0.1f) {bri = 0.8f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_22 = __this->___manager_5;
		NullCheck(L_22);
		float L_23 = L_22->___timer_27;
		if ((!(((float)L_23) < ((float)(0.100000001f)))))
		{
			goto IL_0144;
		}
	}
	{
		// if(manager.timer < 0.1f) {bri = 0.8f;}
		__this->___bri_8 = (0.800000012f);
		return;
	}

IL_0144:
	{
		// if(bri > 0.2f) {bri = 1f - manager.timer*0.8f;}
		float L_24 = __this->___bri_8;
		if ((!(((float)L_24) > ((float)(0.200000003f)))))
		{
			goto IL_016f;
		}
	}
	{
		// if(bri > 0.2f) {bri = 1f - manager.timer*0.8f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_25 = __this->___manager_5;
		NullCheck(L_25);
		float L_26 = L_25->___timer_27;
		__this->___bri_8 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_26, (0.800000012f)))));
		return;
	}

IL_016f:
	{
		// else {bri = 0.2f;}
		__this->___bri_8 = (0.200000003f);
		// break;
		return;
	}

IL_017b:
	{
		// if(manager.timer < 0.1f) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_27 = __this->___manager_5;
		NullCheck(L_27);
		float L_28 = L_27->___timer_27;
		if ((!(((float)L_28) < ((float)(0.100000001f)))))
		{
			goto IL_01a4;
		}
	}
	{
		// bri = 1f;
		__this->___bri_8 = (1.0f);
		// sat = 0f;
		__this->___sat_7 = (0.0f);
		return;
	}

IL_01a4:
	{
		// if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
		float L_29 = __this->___bri_8;
		if ((!(((float)L_29) > ((float)(0.699999988f)))))
		{
			goto IL_01d0;
		}
	}
	{
		// if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_30 = __this->___manager_5;
		NullCheck(L_30);
		float L_31 = L_30->___timer_27;
		__this->___bri_8 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_31, (0.300000012f)))));
		goto IL_01db;
	}

IL_01d0:
	{
		// else {bri = 0.7f;}
		__this->___bri_8 = (0.699999988f);
	}

IL_01db:
	{
		// if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
		float L_32 = __this->___sat_7;
		if ((!(((float)L_32) > ((float)(0.5f)))))
		{
			goto IL_0206;
		}
	}
	{
		// if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_33 = __this->___manager_5;
		NullCheck(L_33);
		float L_34 = L_33->___timer_27;
		__this->___sat_7 = ((float)il2cpp_codegen_add((0.0f), ((float)il2cpp_codegen_multiply(L_34, (0.5f)))));
		return;
	}

IL_0206:
	{
		// else {sat = 0.5f;}
		__this->___sat_7 = (0.5f);
		// }
		return;
	}
}
// System.Void Background::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Background__ctor_m361E75593F0FD78AB0D52667D8EAFBB10ACD0BF8 (Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 5.0f;
		__this->___duration_6 = (5.0f);
		// float sat = 0.5f;
		__this->___sat_7 = (0.5f);
		// float bri = 0.7f;
		__this->___bri_8 = (0.699999988f);
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
// System.Void Background/<ChangeBackgroundColor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeBackgroundColorU3Ed__6__ctor_mB5D8774929169977427108C45FF7D27DF4AFD655 (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Background/<ChangeBackgroundColor>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeBackgroundColorU3Ed__6_System_IDisposable_Dispose_mEFEC929A573E12665329CA27C81A6502BC1B9B4B (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Background/<ChangeBackgroundColor>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeBackgroundColorU3Ed__6_MoveNext_m295A4D52311BAA8C83EC4E7BEE1CF6333C4164AB (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0f;
		__this->___U3CtimeU3E5__2_3 = (0.0f);
	}

IL_0029:
	{
		// time += Time.deltaTime;
		float L_4 = __this->___U3CtimeU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// float t = (time / duration) % 1.0f; // 0?? 1 ??? ? ??
		float L_6 = __this->___U3CtimeU3E5__2_3;
		Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___duration_6;
		// Color newColor = Color.HSVToRGB(hue, sat, bri); // ??(S)? ??(V)? 1? ??
		Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___sat_7;
		Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___bri_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline((fmodf(((float)(L_6/L_8)), (1.0f))), L_10, L_12, NULL);
		V_2 = L_13;
		// targetCamera.backgroundColor = newColor;
		Background_t2B2D30FB9FF5E93B0EF68DDCF11B375D472338CB* L_14 = V_1;
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = L_14->___targetCamera_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_2;
		NullCheck(L_15);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_15, L_16, NULL);
		// yield return null; // ?? ????? ??
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0029;
	}
}
// System.Object Background/<ChangeBackgroundColor>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeBackgroundColorU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42477519A89205BE8A2C8F831B3A0AA50B5AB861 (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Background/<ChangeBackgroundColor>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeBackgroundColorU3Ed__6_System_Collections_IEnumerator_Reset_m08D2B0F55EC8CC8D17F85B3FCE103C3904B62AED (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeBackgroundColorU3Ed__6_System_Collections_IEnumerator_Reset_m08D2B0F55EC8CC8D17F85B3FCE103C3904B62AED_RuntimeMethod_var)));
	}
}
// System.Object Background/<ChangeBackgroundColor>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeBackgroundColorU3Ed__6_System_Collections_IEnumerator_get_Current_m6853818E738DDC20CE804C4ABF117FE592D174F7 (U3CChangeBackgroundColorU3Ed__6_t6A85FCFC914F6F7D2AD94CE0E471298F1FAD4F50* __this, const RuntimeMethod* method) 
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
// System.Void EffectManager::Effect1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect1_mA45856BA302C5390F0227B94D1104F0D33BA67E3 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foreach(Transform child in effect[0].transform) {Destroy(child.gameObject);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___effect_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach(Transform child in effect[0].transform) {Destroy(child.gameObject);}
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				// foreach(Transform child in effect[0].transform) {Destroy(child.gameObject);}
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
			}

IL_002a_1:
			{
				// foreach(Transform child in effect[0].transform) {Destroy(child.gameObject);}
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// for(int i = 0; i < 20; i++) {
		V_2 = 0;
		goto IL_0077;
	}

IL_0049:
	{
		// GameObject effectSquare1 = Instantiate(effectSquare_prefab[0], effect[0].transform);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___effectSquare_prefab_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___effect_4;
		NullCheck(L_16);
		int32_t L_17 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_15, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// effectSquare1.transform.position = position;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___position_6;
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_22, NULL);
		// for(int i = 0; i < 20; i++) {
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		// for(int i = 0; i < 20; i++) {
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)20))))
		{
			goto IL_0049;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EffectManager::Effect2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect2_m8767A10423A393502A35E9B48FAD2BB3936863FE (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject effectSquare2 = Instantiate(effectSquare_prefab[1], effect[1].transform);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___effectSquare_prefab_5;
		NullCheck(L_0);
		int32_t L_1 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___effect_4;
		NullCheck(L_3);
		int32_t L_4 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_2, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// effectSquare2.transform.position = position;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___position_6;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void EffectManager::Effect2_Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Effect2_Reset_m185C161AB19FFF835B8B087BD02D4141A7BDEA51 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach(Transform child in effect[1].transform) {Destroy(child.gameObject);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___effect_4;
		NullCheck(L_0);
		int32_t L_1 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0015_1:
			{
				// foreach(Transform child in effect[1].transform) {Destroy(child.gameObject);}
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				// foreach(Transform child in effect[1].transform) {Destroy(child.gameObject);}
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
			}

IL_002a_1:
			{
				// foreach(Transform child in effect[1].transform) {Destroy(child.gameObject);}
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void EffectManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Update_mE9FD2D3B773857DF7AE78936CC7115C2C1B7271D (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
{
	{
		// if(effect2_switch) {
		bool L_0 = __this->___effect2_switch_8;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// if(timer >= 0.1f) {
		float L_1 = __this->___timer_7;
		if ((!(((float)L_1) >= ((float)(0.100000001f)))))
		{
			goto IL_0055;
		}
	}
	{
		// position = new Vector3(Random.Range(-18f, 18f), Random.Range(-10f, 10f), 0);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-18.0f), (18.0f), NULL);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-10.0f), (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_2, L_3, (0.0f), /*hidden argument*/NULL);
		__this->___position_6 = L_4;
		// Effect2();
		EffectManager_Effect2_m8767A10423A393502A35E9B48FAD2BB3936863FE(__this, NULL);
		// timer = 0;
		__this->___timer_7 = (0.0f);
		return;
	}

IL_0055:
	{
		// else {timer += Time.deltaTime;}
		float L_5 = __this->___timer_7;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_5, L_6));
		return;
	}

IL_0068:
	{
		// else {timer = 0;}
		__this->___timer_7 = (0.0f);
		// }
		return;
	}
}
// System.Void EffectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager__ctor_m2C6DE35439C018518898E3333004ED208A63D782 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
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
// System.Void Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Awake_m8A6DF187F4533B1FB4C8BAD44A1772FC51E1E8CF (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_mA174EE7F5A2217076BB2E96454113673668A9CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392BE11F79BAF06FED6050881C33F9C8B10C9932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral472543D011B64A13A78979EE31D52CE32E4F7F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF325D7CCF99454491B411A6E8426AD89E9298D31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Screen.SetResolution(1920, 1080, false);
		Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100(((int32_t)1920), ((int32_t)1080), (bool)0, NULL);
		// ingameText = ingameText_obj.GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ingameText_obj_9;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_0, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___ingameText_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ingameText_20), (void*)L_1);
		// ingameText_mat = ingameText.fontMaterial;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___ingameText_20;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_2, NULL);
		__this->___ingameText_mat_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ingameText_mat_21), (void*)L_3);
		// effectManager = GameObject.FindWithTag("effectManager").GetComponent<EffectManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral392BE11F79BAF06FED6050881C33F9C8B10C9932, NULL);
		NullCheck(L_4);
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_5;
		L_5 = GameObject_GetComponent_TisEffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_mA174EE7F5A2217076BB2E96454113673668A9CC3(L_4, GameObject_GetComponent_TisEffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_mA174EE7F5A2217076BB2E96454113673668A9CC3_RuntimeMethod_var);
		__this->___effectManager_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectManager_6), (void*)L_5);
		// GameObject.FindWithTag("bar").SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralF325D7CCF99454491B411A6E8426AD89E9298D31, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// GameObject.FindWithTag("bar_frame").SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral472543D011B64A13A78979EE31D52CE32E4F7F39, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		V_0 = 0;
		goto IL_007d;
	}

IL_006b:
	{
		// for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___touch_button_16;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_007d:
	{
		// for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		int32_t L_13 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___touch_button_16;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		// touch_toggle.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___touch_toggle_15;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5, NULL);
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17;
		L_17 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_16, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player1_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_4), (void*)L_17);
		// player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68, NULL);
		NullCheck(L_18);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19;
		L_19 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_18, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player2_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_5), (void*)L_19);
		// player1.player = 1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_20 = __this->___player1_4;
		NullCheck(L_20);
		L_20->___player_18 = 1;
		// player1.face_pos = new Vector3(-14, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_21 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (-14.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___face_pos_15 = L_22;
		// player1.hand_pos = new Vector3(-9, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_23 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (-9.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->___hand_pos_16 = L_24;
		// player2.player = 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_25 = __this->___player2_5;
		NullCheck(L_25);
		L_25->___player_18 = 2;
		// player2.face_pos = new Vector3(14, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_26 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (14.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->___face_pos_15 = L_27;
		// player2.hand_pos = new Vector3(9, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_28 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (9.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->___hand_pos_16 = L_29;
		// lobyMusicNum = Random.Range(0, lobyMusic.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_30 = __this->___lobyMusic_28;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_30)->max_length)), NULL);
		__this->___lobyMusicNum_33 = L_31;
		// backAudio.clip = lobyMusic[lobyMusicNum];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_32 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_33 = __this->___lobyMusic_28;
		int32_t L_34 = __this->___lobyMusicNum_33;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_32, L_36, NULL);
		// backAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = __this->___backAudio_18;
		NullCheck(L_37);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_37, NULL);
		// }
		return;
	}
}
// System.Void Manager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GameStart_mCBE50C5E37A7C5BE2164C505EEA3AE1D4939D50C (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer = 0.0f;
		__this->___timer_27 = (0.0f);
		// gameStarted = true;
		__this->___gameStarted_24 = (bool)1;
		// gameState = "getStarted";
		__this->___gameState_25 = _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		// player1.inputRSP = 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player1_4;
		NullCheck(L_0);
		L_0->___inputRSP_14 = 2;
		// player2.inputRSP = 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player2_5;
		NullCheck(L_1);
		L_1->___inputRSP_14 = 2;
		// p1winningTime = 0.0;
		__this->___p1winningTime_34 = (0.0);
		// p2winningTime = 0.0;
		__this->___p2winningTime_35 = (0.0);
		// currentWinner = 0;
		__this->___currentWinner_36 = 0;
		// currentWinner_last = 0;
		__this->___currentWinner_last_37 = 0;
		// totalWinner = 0;
		__this->___totalWinner_38 = 0;
		// gameMusicNum = Random.Range(0, gameMusic.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___gameMusic_29;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->___gameMusicNum_32 = L_3;
		// gameTime = Random.Range(3.0f, 10.0f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((3.0f), (10.0f), NULL);
		__this->___gameTime_41 = L_4;
		// countDelay = Random.Range(0.2f, 1.0f);
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.200000003f), (1.0f), NULL);
		__this->___countDelay_42 = L_5;
		// if(gameMusicNum == 0) {readyTime = 8.5f;}
		int32_t L_6 = __this->___gameMusicNum_32;
		if (L_6)
		{
			goto IL_00bb;
		}
	}
	{
		// if(gameMusicNum == 0) {readyTime = 8.5f;}
		__this->___readyTime_39 = (8.5f);
		goto IL_0120;
	}

IL_00bb:
	{
		// else if(gameMusicNum == 1) {readyTime = 6.7f;}
		int32_t L_7 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_00d1;
		}
	}
	{
		// else if(gameMusicNum == 1) {readyTime = 6.7f;}
		__this->___readyTime_39 = (6.69999981f);
		goto IL_0120;
	}

IL_00d1:
	{
		// else if(gameMusicNum == 2) {readyTime = Random.Range(countDelay*2+3.0f, 8.0f);}
		int32_t L_8 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00fe;
		}
	}
	{
		// else if(gameMusicNum == 2) {readyTime = Random.Range(countDelay*2+3.0f, 8.0f);}
		float L_9 = __this->___countDelay_42;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, (2.0f))), (3.0f))), (8.0f), NULL);
		__this->___readyTime_39 = L_10;
		goto IL_0120;
	}

IL_00fe:
	{
		// else {readyTime = Random.Range(countDelay*2+3.0f, 8.0f);}
		float L_11 = __this->___countDelay_42;
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, (2.0f))), (3.0f))), (8.0f), NULL);
		__this->___readyTime_39 = L_12;
	}

IL_0120:
	{
		// handsetTime = Random.Range(1.0f, readyTime-countDelay*2-1.0f);
		float L_13 = __this->___readyTime_39;
		float L_14 = __this->___countDelay_42;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_13, ((float)il2cpp_codegen_multiply(L_14, (2.0f))))), (1.0f))), NULL);
		__this->___handsetTime_40 = L_15;
		// }
		return;
	}
}
// System.Void Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_Update_m1B1B140132649617A2D7FF870578110CF3A49AF1 (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE155AF10BCCD34364387DAE02E69383D63F301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53F381BD9508EE02B531E3C34498C60256D0DA77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD221513ADC158B20268677A0827129111F5302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA137527FA799FABB245136CC6A6B7F0977A7AAB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50E31C3889F33016BC3F91C9CFC6B1C4EA4D5F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B0293790BD9B41190EBE662819A518383FB7B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_27;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_27 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(gameStarted == true)
		bool L_2 = __this->___gameStarted_24;
		if (!L_2)
		{
			goto IL_0bc1;
		}
	}
	{
		// switch(gameState)
		String_t* L_3 = __this->___gameState_25;
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3, NULL);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralA137527FA799FABB245136CC6A6B7F0977A7AAB6, NULL);
		if (L_7)
		{
			goto IL_028a;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476, NULL);
		if (L_9)
		{
			goto IL_05b6;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral8DD221513ADC158B20268677A0827129111F5302, NULL);
		if (L_11)
		{
			goto IL_0b44;
		}
	}
	{
		return;
	}

IL_0062:
	{
		// if(backAudio.volume > 0) {backAudio.volume = audioVolumeDefault - timer*audioVolumeDefault/1.5f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___backAudio_18;
		NullCheck(L_12);
		float L_13;
		L_13 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_12, NULL);
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// if(backAudio.volume > 0) {backAudio.volume = audioVolumeDefault - timer*audioVolumeDefault/1.5f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___backAudio_18;
		float L_15 = __this->___audioVolumeDefault_31;
		float L_16 = __this->___timer_27;
		float L_17 = __this->___audioVolumeDefault_31;
		NullCheck(L_14);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_14, ((float)il2cpp_codegen_subtract(L_15, ((float)(((float)il2cpp_codegen_multiply(L_16, L_17))/(1.5f))))), NULL);
		goto IL_00ab;
	}

IL_009b:
	{
		// else {backAudio.volume = 0;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___backAudio_18;
		NullCheck(L_18);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_18, (0.0f), NULL);
	}

IL_00ab:
	{
		// if(timer >= 2f) {
		float L_19 = __this->___timer_27;
		if ((!(((float)L_19) >= ((float)(2.0f)))))
		{
			goto IL_0bc1;
		}
	}
	{
		// timer = 0.0f;
		__this->___timer_27 = (0.0f);
		// gameState = "getReady";
		__this->___gameState_25 = _stringLiteralA137527FA799FABB245136CC6A6B7F0977A7AAB6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteralA137527FA799FABB245136CC6A6B7F0977A7AAB6);
		// backAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = __this->___backAudio_18;
		NullCheck(L_20);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_20, NULL);
		// backAudio.volume = audioVolumeDefault;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___backAudio_18;
		float L_22 = __this->___audioVolumeDefault_31;
		NullCheck(L_21);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_21, L_22, NULL);
		// if(gameMusicNum == 0) {
		int32_t L_23 = __this->___gameMusicNum_32;
		if (L_23)
		{
			goto IL_011d;
		}
	}
	{
		// backAudio.clip = gameMusic[0];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_25 = __this->___gameMusic_29;
		NullCheck(L_25);
		int32_t L_26 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_24, L_27, NULL);
		// backAudio.time = 11.8f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28 = __this->___backAudio_18;
		NullCheck(L_28);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_28, (11.8000002f), NULL);
		goto IL_01b3;
	}

IL_011d:
	{
		// else if(gameMusicNum == 1) {
		int32_t L_29 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_014b;
		}
	}
	{
		// backAudio.clip = gameMusic[1];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = __this->___gameMusic_29;
		NullCheck(L_31);
		int32_t L_32 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_30);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_30, L_33, NULL);
		// backAudio.time = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_34 = __this->___backAudio_18;
		NullCheck(L_34);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_34, (0.0f), NULL);
		goto IL_01b3;
	}

IL_014b:
	{
		// else if(gameMusicNum == 2) {
		int32_t L_35 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_0190;
		}
	}
	{
		// backAudio.volume = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_36 = __this->___backAudio_18;
		NullCheck(L_36);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_36, (0.0f), NULL);
		// backAudio.clip = gameMusic[2];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_38 = __this->___gameMusic_29;
		NullCheck(L_38);
		int32_t L_39 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_37, L_40, NULL);
		// backAudio.time = 64.95f - readyTime;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41 = __this->___backAudio_18;
		float L_42 = __this->___readyTime_39;
		NullCheck(L_41);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_41, ((float)il2cpp_codegen_subtract((64.9499969f), L_42)), NULL);
		goto IL_01b3;
	}

IL_0190:
	{
		// backAudio.clip = soundEffects[2];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_43 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_44 = __this->___soundEffects_30;
		NullCheck(L_44);
		int32_t L_45 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_43, L_46, NULL);
		// backAudio.time = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_47 = __this->___backAudio_18;
		NullCheck(L_47);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_47, (0.0f), NULL);
	}

IL_01b3:
	{
		// backAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_48 = __this->___backAudio_18;
		NullCheck(L_48);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_48, NULL);
		// ingameText.text = "Get Ready...";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = __this->___ingameText_20;
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_49, _stringLiteral53F381BD9508EE02B531E3C34498C60256D0DA77);
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}
		bool L_50 = __this->___touchMod_22;
		if (!L_50)
		{
			goto IL_01f7;
		}
	}
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}
		V_1 = 0;
		goto IL_01ec;
	}

IL_01da:
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = __this->___touch_button_16;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_01ec:
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}
		int32_t L_56 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = __this->___touch_button_16;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_01da;
		}
	}

IL_01f7:
	{
		// player1.face_pos = new Vector3(-10, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_58 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), (-10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		L_58->___face_pos_15 = L_59;
		// player1.hand_pos = new Vector3(-5, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_60 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), (-5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		L_60->___hand_pos_16 = L_61;
		// player2.face_pos = new Vector3(10, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_62 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->___face_pos_15 = L_63;
		// player2.hand_pos = new Vector3(5, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_64 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		L_64->___hand_pos_16 = L_65;
		// player1.SetGameFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_66 = __this->___player1_4;
		NullCheck(L_66);
		Player_SetGameFace_m7685A8CE0F886922DDC3D6700767DF644873DDCA(L_66, NULL);
		// player2.SetGameFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_67 = __this->___player2_5;
		NullCheck(L_67);
		Player_SetGameFace_m7685A8CE0F886922DDC3D6700767DF644873DDCA(L_67, NULL);
		// break;
		return;
	}

IL_028a:
	{
		// if(ingameText_mat.GetFloat(ShaderUtilities.ID_FaceDilate) >= 0.2f) {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, 0.2f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = __this->___ingameText_mat_21;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_69 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceDilate_3;
		NullCheck(L_68);
		float L_70;
		L_70 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_68, L_69, NULL);
		if ((!(((float)L_70) >= ((float)(0.200000003f)))))
		{
			goto IL_02b8;
		}
	}
	{
		// if(ingameText_mat.GetFloat(ShaderUtilities.ID_FaceDilate) >= 0.2f) {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, 0.2f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___ingameText_mat_21;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_72 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceDilate_3;
		NullCheck(L_71);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_71, L_72, (0.200000003f), NULL);
		goto IL_02da;
	}

IL_02b8:
	{
		// else {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, timer*0.8f - 1);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___ingameText_mat_21;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_74 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceDilate_3;
		float L_75 = __this->___timer_27;
		NullCheck(L_73);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_73, L_74, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_75, (0.800000012f))), (1.0f))), NULL);
	}

IL_02da:
	{
		// player1.AllowInput();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_76 = __this->___player1_4;
		NullCheck(L_76);
		Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570(L_76, NULL);
		// player2.AllowInput(); // prevent input before ready
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_77 = __this->___player2_5;
		NullCheck(L_77);
		Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570(L_77, NULL);
		// effectManager.effect2_switch = true;
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_78 = __this->___effectManager_6;
		NullCheck(L_78);
		L_78->___effect2_switch_8 = (bool)1;
		// if(gameMusicNum == 2) {
		int32_t L_79 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_79) == ((uint32_t)2))))
		{
			goto IL_0350;
		}
	}
	{
		// if(backAudio.volume < audioVolumeDefault) {backAudio.volume = audioVolumeDefault*timer/(readyTime-1f);}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_80 = __this->___backAudio_18;
		NullCheck(L_80);
		float L_81;
		L_81 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_80, NULL);
		float L_82 = __this->___audioVolumeDefault_31;
		if ((!(((float)L_81) < ((float)L_82))))
		{
			goto IL_033f;
		}
	}
	{
		// if(backAudio.volume < audioVolumeDefault) {backAudio.volume = audioVolumeDefault*timer/(readyTime-1f);}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_83 = __this->___backAudio_18;
		float L_84 = __this->___audioVolumeDefault_31;
		float L_85 = __this->___timer_27;
		float L_86 = __this->___readyTime_39;
		NullCheck(L_83);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_83, ((float)(((float)il2cpp_codegen_multiply(L_84, L_85))/((float)il2cpp_codegen_subtract(L_86, (1.0f))))), NULL);
		goto IL_0350;
	}

IL_033f:
	{
		// else {backAudio.volume = audioVolumeDefault;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_87 = __this->___backAudio_18;
		float L_88 = __this->___audioVolumeDefault_31;
		NullCheck(L_87);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_87, L_88, NULL);
	}

IL_0350:
	{
		// if(timer >= readyTime) {
		float L_89 = __this->___timer_27;
		float L_90 = __this->___readyTime_39;
		if ((!(((float)L_89) >= ((float)L_90))))
		{
			goto IL_0488;
		}
	}
	{
		// gameState = "game!!!";
		__this->___gameState_25 = _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476);
		// timer = 0.0f;
		__this->___timer_27 = (0.0f);
		// RSP = "paper";
		__this->___RSP_26 = _stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		// ingameText.text = "Fight!!!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91 = __this->___ingameText_20;
		NullCheck(L_91);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_91, _stringLiteralB50E31C3889F33016BC3F91C9CFC6B1C4EA4D5F5);
		// player1.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_92 = __this->___player1_4;
		NullCheck(L_92);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_92, NULL);
		// player2.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_93 = __this->___player2_5;
		NullCheck(L_93);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_93, NULL);
		// fire_obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___fire_obj_12;
		NullCheck(L_94);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_94, (bool)1, NULL);
		// bar_obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___bar_obj_13;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)1, NULL);
		// bar_frame_obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___bar_frame_obj_14;
		NullCheck(L_96);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_96, (bool)1, NULL);
		// if(gameMusicNum != 0 && gameMusicNum != 1 && gameMusicNum != 2) {
		int32_t L_97 = __this->___gameMusicNum_32;
		if (!L_97)
		{
			goto IL_0bc1;
		}
	}
	{
		int32_t L_98 = __this->___gameMusicNum_32;
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			goto IL_0bc1;
		}
	}
	{
		int32_t L_99 = __this->___gameMusicNum_32;
		if ((((int32_t)L_99) == ((int32_t)2)))
		{
			goto IL_0bc1;
		}
	}
	{
		// backAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_100 = __this->___backAudio_18;
		NullCheck(L_100);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_100, NULL);
		// backAudio.clip = gameMusic[gameMusicNum];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_101 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_102 = __this->___gameMusic_29;
		int32_t L_103 = __this->___gameMusicNum_32;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_101);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_101, L_105, NULL);
		// if(gameMusicNum == 3) {backAudio.time = 25.05f;}
		int32_t L_106 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_106) == ((uint32_t)3))))
		{
			goto IL_042d;
		}
	}
	{
		// if(gameMusicNum == 3) {backAudio.time = 25.05f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_107 = __this->___backAudio_18;
		NullCheck(L_107);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_107, (25.0499992f), NULL);
		goto IL_047c;
	}

IL_042d:
	{
		// else if(gameMusicNum == 4) {backAudio.time = 3.4f;}
		int32_t L_108 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_108) == ((uint32_t)4))))
		{
			goto IL_0448;
		}
	}
	{
		// else if(gameMusicNum == 4) {backAudio.time = 3.4f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_109 = __this->___backAudio_18;
		NullCheck(L_109);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_109, (3.4000001f), NULL);
		goto IL_047c;
	}

IL_0448:
	{
		// else if(gameMusicNum == 5) {backAudio.time = 71.6f;}
		int32_t L_110 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_110) == ((uint32_t)5))))
		{
			goto IL_0463;
		}
	}
	{
		// else if(gameMusicNum == 5) {backAudio.time = 71.6f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_111 = __this->___backAudio_18;
		NullCheck(L_111);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_111, (71.5999985f), NULL);
		goto IL_047c;
	}

IL_0463:
	{
		// else if(gameMusicNum == 6) {backAudio.time = 16.1f;}
		int32_t L_112 = __this->___gameMusicNum_32;
		if ((!(((uint32_t)L_112) == ((uint32_t)6))))
		{
			goto IL_047c;
		}
	}
	{
		// else if(gameMusicNum == 6) {backAudio.time = 16.1f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_113 = __this->___backAudio_18;
		NullCheck(L_113);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_113, (16.1000004f), NULL);
	}

IL_047c:
	{
		// backAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_114 = __this->___backAudio_18;
		NullCheck(L_114);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_114, NULL);
		return;
	}

IL_0488:
	{
		// else if(timer >= readyTime - countDelay*1 && RSP == "rock") {
		float L_115 = __this->___timer_27;
		float L_116 = __this->___readyTime_39;
		float L_117 = __this->___countDelay_42;
		if ((!(((float)L_115) >= ((float)((float)il2cpp_codegen_subtract(L_116, ((float)il2cpp_codegen_multiply(L_117, (1.0f)))))))))
		{
			goto IL_04ef;
		}
	}
	{
		String_t* L_118 = __this->___RSP_26;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		if (!L_119)
		{
			goto IL_04ef;
		}
	}
	{
		// RSP = "scissors";
		__this->___RSP_26 = _stringLiteralE2B0293790BD9B41190EBE662819A518383FB7B0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteralE2B0293790BD9B41190EBE662819A518383FB7B0);
		// player1.hand_sprite = 1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_120 = __this->___player1_4;
		NullCheck(L_120);
		L_120->___hand_sprite_13 = 1;
		// player2.hand_sprite = 1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_121 = __this->___player2_5;
		NullCheck(L_121);
		L_121->___hand_sprite_13 = 1;
		// player1.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_122 = __this->___player1_4;
		NullCheck(L_122);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_122, NULL);
		// player2.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_123 = __this->___player2_5;
		NullCheck(L_123);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_123, NULL);
		return;
	}

IL_04ef:
	{
		// else if(timer >= readyTime - countDelay*2 && RSP == "handset") {
		float L_124 = __this->___timer_27;
		float L_125 = __this->___readyTime_39;
		float L_126 = __this->___countDelay_42;
		if ((!(((float)L_124) >= ((float)((float)il2cpp_codegen_subtract(L_125, ((float)il2cpp_codegen_multiply(L_126, (2.0f)))))))))
		{
			goto IL_0556;
		}
	}
	{
		String_t* L_127 = __this->___RSP_26;
		bool L_128;
		L_128 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_127, _stringLiteral3AE155AF10BCCD34364387DAE02E69383D63F301, NULL);
		if (!L_128)
		{
			goto IL_0556;
		}
	}
	{
		// RSP = "rock";
		__this->___RSP_26 = _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		// player1.hand_sprite = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_129 = __this->___player1_4;
		NullCheck(L_129);
		L_129->___hand_sprite_13 = 0;
		// player2.hand_sprite = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_130 = __this->___player2_5;
		NullCheck(L_130);
		L_130->___hand_sprite_13 = 0;
		// player1.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_131 = __this->___player1_4;
		NullCheck(L_131);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_131, NULL);
		// player2.RSPshake();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_132 = __this->___player2_5;
		NullCheck(L_132);
		Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B(L_132, NULL);
		return;
	}

IL_0556:
	{
		// else if(timer >= handsetTime && RSP == "none") {
		float L_133 = __this->___timer_27;
		float L_134 = __this->___handsetTime_40;
		if ((!(((float)L_133) >= ((float)L_134))))
		{
			goto IL_0bc1;
		}
	}
	{
		String_t* L_135 = __this->___RSP_26;
		bool L_136;
		L_136 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_135, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		if (!L_136)
		{
			goto IL_0bc1;
		}
	}
	{
		// RSP = "handset";
		__this->___RSP_26 = _stringLiteral3AE155AF10BCCD34364387DAE02E69383D63F301;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteral3AE155AF10BCCD34364387DAE02E69383D63F301);
		// player1.hand_sprite = 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_137 = __this->___player1_4;
		NullCheck(L_137);
		L_137->___hand_sprite_13 = 2;
		// player2.hand_sprite = 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_138 = __this->___player2_5;
		NullCheck(L_138);
		L_138->___hand_sprite_13 = 2;
		// player1.SetHandsetFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_139 = __this->___player1_4;
		NullCheck(L_139);
		Player_SetHandsetFace_mB4FAAA678C3327A207A76EE89D376482964B6626(L_139, NULL);
		// player2.SetHandsetFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_140 = __this->___player2_5;
		NullCheck(L_140);
		Player_SetHandsetFace_mB4FAAA678C3327A207A76EE89D376482964B6626(L_140, NULL);
		// break;
		return;
	}

IL_05b6:
	{
		// ingameText_obj.transform.localScale = new Vector2(1.85f + 0.15f*Mathf.Cos(timer*58f), 1.85f + 0.15f*Mathf.Sin(timer*58f));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___ingameText_obj_9;
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
		float L_143 = __this->___timer_27;
		float L_144;
		L_144 = cosf(((float)il2cpp_codegen_multiply(L_143, (58.0f))));
		float L_145 = __this->___timer_27;
		float L_146;
		L_146 = sinf(((float)il2cpp_codegen_multiply(L_145, (58.0f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_147), ((float)il2cpp_codegen_add((1.85000002f), ((float)il2cpp_codegen_multiply((0.150000006f), L_144)))), ((float)il2cpp_codegen_add((1.85000002f), ((float)il2cpp_codegen_multiply((0.150000006f), L_146)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_147, NULL);
		NullCheck(L_142);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_142, L_148, NULL);
		// player1.AllowInput();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_149 = __this->___player1_4;
		NullCheck(L_149);
		Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570(L_149, NULL);
		// player2.AllowInput();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_150 = __this->___player2_5;
		NullCheck(L_150);
		Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570(L_150, NULL);
		// switch(player1.inputRSP)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_151 = __this->___player1_4;
		NullCheck(L_151);
		int32_t L_152 = L_151->___inputRSP_14;
		V_2 = L_152;
		int32_t L_153 = V_2;
		switch (L_153)
		{
			case 0:
			{
				goto IL_0643;
			}
			case 1:
			{
				goto IL_06b9;
			}
			case 2:
			{
				goto IL_072c;
			}
		}
	}
	{
		goto IL_0794;
	}

IL_0643:
	{
		// if(player2.inputRSP == 0) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_154 = __this->___player2_5;
		NullCheck(L_154);
		int32_t L_155 = L_154->___inputRSP_14;
		if (L_155)
		{
			goto IL_065c;
		}
	}
	{
		// currentWinner = 0;
		__this->___currentWinner_36 = 0;
		goto IL_0794;
	}

IL_065c:
	{
		// else if(player2.inputRSP == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_156 = __this->___player2_5;
		NullCheck(L_156);
		int32_t L_157 = L_156->___inputRSP_14;
		if ((!(((uint32_t)L_157) == ((uint32_t)1))))
		{
			goto IL_0689;
		}
	}
	{
		// currentWinner = 1;
		__this->___currentWinner_36 = 1;
		// p1winningTime += Time.deltaTime;
		double L_158 = __this->___p1winningTime_34;
		float L_159;
		L_159 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p1winningTime_34 = ((double)il2cpp_codegen_add(L_158, ((double)L_159)));
		goto IL_0794;
	}

IL_0689:
	{
		// else if(player2.inputRSP == 2) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_160 = __this->___player2_5;
		NullCheck(L_160);
		int32_t L_161 = L_160->___inputRSP_14;
		if ((!(((uint32_t)L_161) == ((uint32_t)2))))
		{
			goto IL_0794;
		}
	}
	{
		// currentWinner = 2;
		__this->___currentWinner_36 = 2;
		// p2winningTime += Time.deltaTime;
		double L_162 = __this->___p2winningTime_35;
		float L_163;
		L_163 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p2winningTime_35 = ((double)il2cpp_codegen_add(L_162, ((double)L_163)));
		// break;
		goto IL_0794;
	}

IL_06b9:
	{
		// if(player2.inputRSP == 0) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_164 = __this->___player2_5;
		NullCheck(L_164);
		int32_t L_165 = L_164->___inputRSP_14;
		if (L_165)
		{
			goto IL_06e5;
		}
	}
	{
		// currentWinner = 2;
		__this->___currentWinner_36 = 2;
		// p2winningTime += Time.deltaTime;
		double L_166 = __this->___p2winningTime_35;
		float L_167;
		L_167 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p2winningTime_35 = ((double)il2cpp_codegen_add(L_166, ((double)L_167)));
		goto IL_0794;
	}

IL_06e5:
	{
		// else if(player2.inputRSP == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_168 = __this->___player2_5;
		NullCheck(L_168);
		int32_t L_169 = L_168->___inputRSP_14;
		if ((!(((uint32_t)L_169) == ((uint32_t)1))))
		{
			goto IL_06ff;
		}
	}
	{
		// currentWinner = 0;
		__this->___currentWinner_36 = 0;
		goto IL_0794;
	}

IL_06ff:
	{
		// else if(player2.inputRSP == 2) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_170 = __this->___player2_5;
		NullCheck(L_170);
		int32_t L_171 = L_170->___inputRSP_14;
		if ((!(((uint32_t)L_171) == ((uint32_t)2))))
		{
			goto IL_0794;
		}
	}
	{
		// currentWinner = 1;
		__this->___currentWinner_36 = 1;
		// p1winningTime += Time.deltaTime;
		double L_172 = __this->___p1winningTime_34;
		float L_173;
		L_173 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p1winningTime_34 = ((double)il2cpp_codegen_add(L_172, ((double)L_173)));
		// break;
		goto IL_0794;
	}

IL_072c:
	{
		// if(player2.inputRSP == 0) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_174 = __this->___player2_5;
		NullCheck(L_174);
		int32_t L_175 = L_174->___inputRSP_14;
		if (L_175)
		{
			goto IL_0755;
		}
	}
	{
		// currentWinner = 1;
		__this->___currentWinner_36 = 1;
		// p1winningTime += Time.deltaTime;
		double L_176 = __this->___p1winningTime_34;
		float L_177;
		L_177 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p1winningTime_34 = ((double)il2cpp_codegen_add(L_176, ((double)L_177)));
		goto IL_0794;
	}

IL_0755:
	{
		// else if(player2.inputRSP == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_178 = __this->___player2_5;
		NullCheck(L_178);
		int32_t L_179 = L_178->___inputRSP_14;
		if ((!(((uint32_t)L_179) == ((uint32_t)1))))
		{
			goto IL_077f;
		}
	}
	{
		// currentWinner = 2;
		__this->___currentWinner_36 = 2;
		// p2winningTime += Time.deltaTime;
		double L_180 = __this->___p2winningTime_35;
		float L_181;
		L_181 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___p2winningTime_35 = ((double)il2cpp_codegen_add(L_180, ((double)L_181)));
		goto IL_0794;
	}

IL_077f:
	{
		// else if(player2.inputRSP == 2) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_182 = __this->___player2_5;
		NullCheck(L_182);
		int32_t L_183 = L_182->___inputRSP_14;
		if ((!(((uint32_t)L_183) == ((uint32_t)2))))
		{
			goto IL_0794;
		}
	}
	{
		// currentWinner = 0;
		__this->___currentWinner_36 = 0;
	}

IL_0794:
	{
		// if(p1winningTime > p2winningTime) {totalWinner = 1;}
		double L_184 = __this->___p1winningTime_34;
		double L_185 = __this->___p2winningTime_35;
		if ((!(((double)L_184) > ((double)L_185))))
		{
			goto IL_07ab;
		}
	}
	{
		// if(p1winningTime > p2winningTime) {totalWinner = 1;}
		__this->___totalWinner_38 = 1;
		goto IL_07c9;
	}

IL_07ab:
	{
		// else if(p1winningTime < p2winningTime) {totalWinner = 2;}
		double L_186 = __this->___p1winningTime_34;
		double L_187 = __this->___p2winningTime_35;
		if ((!(((double)L_186) < ((double)L_187))))
		{
			goto IL_07c2;
		}
	}
	{
		// else if(p1winningTime < p2winningTime) {totalWinner = 2;}
		__this->___totalWinner_38 = 2;
		goto IL_07c9;
	}

IL_07c2:
	{
		// else {totalWinner = 0;}
		__this->___totalWinner_38 = 0;
	}

IL_07c9:
	{
		// if(currentWinner != currentWinner_last) {
		int32_t L_188 = __this->___currentWinner_36;
		int32_t L_189 = __this->___currentWinner_last_37;
		if ((((int32_t)L_188) == ((int32_t)L_189)))
		{
			goto IL_0867;
		}
	}
	{
		// if(currentWinner == 1) {effectManager.position = player1.hand_pos;}
		int32_t L_190 = __this->___currentWinner_36;
		if ((!(((uint32_t)L_190) == ((uint32_t)1))))
		{
			goto IL_07fb;
		}
	}
	{
		// if(currentWinner == 1) {effectManager.position = player1.hand_pos;}
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_191 = __this->___effectManager_6;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_192 = __this->___player1_4;
		NullCheck(L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = L_192->___hand_pos_16;
		NullCheck(L_191);
		L_191->___position_6 = L_193;
		goto IL_081a;
	}

IL_07fb:
	{
		// else if(currentWinner == 2) {effectManager.position = player2.hand_pos;}
		int32_t L_194 = __this->___currentWinner_36;
		if ((!(((uint32_t)L_194) == ((uint32_t)2))))
		{
			goto IL_081a;
		}
	}
	{
		// else if(currentWinner == 2) {effectManager.position = player2.hand_pos;}
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_195 = __this->___effectManager_6;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_196 = __this->___player2_5;
		NullCheck(L_196);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = L_196->___hand_pos_16;
		NullCheck(L_195);
		L_195->___position_6 = L_197;
	}

IL_081a:
	{
		// if(currentWinner != 0) {
		int32_t L_198 = __this->___currentWinner_36;
		if (!L_198)
		{
			goto IL_085b;
		}
	}
	{
		// effectManager.Effect1();
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_199 = __this->___effectManager_6;
		NullCheck(L_199);
		EffectManager_Effect1_mA45856BA302C5390F0227B94D1104F0D33BA67E3(L_199, NULL);
		// effectAudio.clip = soundEffects[1];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_200 = __this->___effectAudio_19;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_201 = __this->___soundEffects_30;
		NullCheck(L_201);
		int32_t L_202 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		NullCheck(L_200);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_200, L_203, NULL);
		// effectAudio.time = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_204 = __this->___effectAudio_19;
		NullCheck(L_204);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_204, (0.0f), NULL);
		// effectAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_205 = __this->___effectAudio_19;
		NullCheck(L_205);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_205, NULL);
	}

IL_085b:
	{
		// currentWinner_last = currentWinner;
		int32_t L_206 = __this->___currentWinner_36;
		__this->___currentWinner_last_37 = L_206;
	}

IL_0867:
	{
		// if(timer >= gameTime) {
		float L_207 = __this->___timer_27;
		float L_208 = __this->___gameTime_41;
		if ((!(((float)L_207) >= ((float)L_208))))
		{
			goto IL_0bc1;
		}
	}
	{
		// timer = 0.0f;
		__this->___timer_27 = (0.0f);
		// gameState = "getEnded";
		__this->___gameState_25 = _stringLiteral8DD221513ADC158B20268677A0827129111F5302;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteral8DD221513ADC158B20268677A0827129111F5302);
		// RSP = "none";
		__this->___RSP_26 = _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		// backAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_209 = __this->___backAudio_18;
		NullCheck(L_209);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_209, NULL);
		// lobyMusicNum = Random.Range(0, lobyMusic.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_210 = __this->___lobyMusic_28;
		NullCheck(L_210);
		int32_t L_211;
		L_211 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_210)->max_length)), NULL);
		__this->___lobyMusicNum_33 = L_211;
		// if(lobyMusicNum == 0) {backAudio.time = 31.9f;}
		int32_t L_212 = __this->___lobyMusicNum_33;
		if (L_212)
		{
			goto IL_08d2;
		}
	}
	{
		// if(lobyMusicNum == 0) {backAudio.time = 31.9f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_213 = __this->___backAudio_18;
		NullCheck(L_213);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_213, (31.8999996f), NULL);
		goto IL_0933;
	}

IL_08d2:
	{
		// else if(lobyMusicNum == 2) {backAudio.time = 17.2f;}
		int32_t L_214 = __this->___lobyMusicNum_33;
		if ((!(((uint32_t)L_214) == ((uint32_t)2))))
		{
			goto IL_08ed;
		}
	}
	{
		// else if(lobyMusicNum == 2) {backAudio.time = 17.2f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_215 = __this->___backAudio_18;
		NullCheck(L_215);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_215, (17.2000008f), NULL);
		goto IL_0933;
	}

IL_08ed:
	{
		// else if(lobyMusicNum == 4) {backAudio.time = 60.75f;}
		int32_t L_216 = __this->___lobyMusicNum_33;
		if ((!(((uint32_t)L_216) == ((uint32_t)4))))
		{
			goto IL_0908;
		}
	}
	{
		// else if(lobyMusicNum == 4) {backAudio.time = 60.75f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_217 = __this->___backAudio_18;
		NullCheck(L_217);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_217, (60.75f), NULL);
		goto IL_0933;
	}

IL_0908:
	{
		// else if(lobyMusicNum == 6) {backAudio.time = 3.5f;}
		int32_t L_218 = __this->___lobyMusicNum_33;
		if ((!(((uint32_t)L_218) == ((uint32_t)6))))
		{
			goto IL_0923;
		}
	}
	{
		// else if(lobyMusicNum == 6) {backAudio.time = 3.5f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_219 = __this->___backAudio_18;
		NullCheck(L_219);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_219, (3.5f), NULL);
		goto IL_0933;
	}

IL_0923:
	{
		// else {backAudio.time = 0.0f;}
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_220 = __this->___backAudio_18;
		NullCheck(L_220);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_220, (0.0f), NULL);
	}

IL_0933:
	{
		// backAudio.clip = lobyMusic[lobyMusicNum];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_221 = __this->___backAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_222 = __this->___lobyMusic_28;
		int32_t L_223 = __this->___lobyMusicNum_33;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_225 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		NullCheck(L_221);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_221, L_225, NULL);
		// backAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_226 = __this->___backAudio_18;
		NullCheck(L_226);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_226, NULL);
		// effectAudio.clip = soundEffects[0];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_227 = __this->___effectAudio_19;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_228 = __this->___soundEffects_30;
		NullCheck(L_228);
		int32_t L_229 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		NullCheck(L_227);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_227, L_230, NULL);
		// effectAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_231 = __this->___effectAudio_19;
		NullCheck(L_231);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_231, NULL);
		// effectManager.effect2_switch = false;
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_232 = __this->___effectManager_6;
		NullCheck(L_232);
		L_232->___effect2_switch_8 = (bool)0;
		// effectManager.Effect2_Reset();
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_233 = __this->___effectManager_6;
		NullCheck(L_233);
		EffectManager_Effect2_Reset_m185C161AB19FFF835B8B087BD02D4141A7BDEA51(L_233, NULL);
		// ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, -1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_234 = __this->___ingameText_mat_21;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_235 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceDilate_3;
		NullCheck(L_234);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_234, L_235, (-1.0f), NULL);
		// ingameText_obj.transform.localScale = new Vector2(1, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_236 = __this->___ingameText_obj_9;
		NullCheck(L_236);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_237;
		L_237 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_236, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_238;
		memset((&L_238), 0, sizeof(L_238));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_238), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239;
		L_239 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_238, NULL);
		NullCheck(L_237);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_237, L_239, NULL);
		// player1.face_pos = new Vector3(-14, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_240 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_241;
		memset((&L_241), 0, sizeof(L_241));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_241), (-14.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_240);
		L_240->___face_pos_15 = L_241;
		// player1.hand_pos = new Vector3(-9, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_242 = __this->___player1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_243;
		memset((&L_243), 0, sizeof(L_243));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_243), (-9.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_242);
		L_242->___hand_pos_16 = L_243;
		// player2.face_pos = new Vector3(14, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_244 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_245;
		memset((&L_245), 0, sizeof(L_245));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_245), (14.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_244);
		L_244->___face_pos_15 = L_245;
		// player2.hand_pos = new Vector3(9, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_246 = __this->___player2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_247;
		memset((&L_247), 0, sizeof(L_247));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_247), (9.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_246);
		L_246->___hand_pos_16 = L_247;
		// player1.hand_rot = Quaternion.Euler(0, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_248 = __this->___player1_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_249;
		L_249 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_248);
		L_248->___hand_rot_17 = L_249;
		// player2.hand_rot = Quaternion.Euler(0, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_250 = __this->___player2_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_251;
		L_251 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_250);
		L_250->___hand_rot_17 = L_251;
		// fire_obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_252 = __this->___fire_obj_12;
		NullCheck(L_252);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_252, (bool)0, NULL);
		// bar_obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_253 = __this->___bar_obj_13;
		NullCheck(L_253);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_253, (bool)0, NULL);
		// bar_frame_obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_254 = __this->___bar_frame_obj_14;
		NullCheck(L_254);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_254, (bool)0, NULL);
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		bool L_255 = __this->___touchMod_22;
		if (!L_255)
		{
			goto IL_0acb;
		}
	}
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		V_3 = 0;
		goto IL_0ac0;
	}

IL_0aae:
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_256 = __this->___touch_button_16;
		int32_t L_257 = V_3;
		NullCheck(L_256);
		int32_t L_258 = L_257;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		NullCheck(L_259);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_259, (bool)0, NULL);
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		int32_t L_260 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_260, 1));
	}

IL_0ac0:
	{
		// if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
		int32_t L_261 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_262 = __this->___touch_button_16;
		NullCheck(L_262);
		if ((((int32_t)L_261) < ((int32_t)((int32_t)(((RuntimeArray*)L_262)->max_length)))))
		{
			goto IL_0aae;
		}
	}

IL_0acb:
	{
		// if(totalWinner == 0) {
		int32_t L_263 = __this->___totalWinner_38;
		if (L_263)
		{
			goto IL_0aeb;
		}
	}
	{
		// player1.SetDrawFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_264 = __this->___player1_4;
		NullCheck(L_264);
		Player_SetDrawFace_m46C63CE7CD7B6829621653B3190A66FEDE9C5EB2(L_264, NULL);
		// player2.SetDrawFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_265 = __this->___player2_5;
		NullCheck(L_265);
		Player_SetDrawFace_m46C63CE7CD7B6829621653B3190A66FEDE9C5EB2(L_265, NULL);
		goto IL_0b2b;
	}

IL_0aeb:
	{
		// else if(totalWinner == 1) {
		int32_t L_266 = __this->___totalWinner_38;
		if ((!(((uint32_t)L_266) == ((uint32_t)1))))
		{
			goto IL_0b0c;
		}
	}
	{
		// player1.SetWinFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_267 = __this->___player1_4;
		NullCheck(L_267);
		Player_SetWinFace_mA539848785D8DCEB7F24B1A6C8F4BE63393D73CD(L_267, NULL);
		// player2.SetLoseFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_268 = __this->___player2_5;
		NullCheck(L_268);
		Player_SetLoseFace_mFB7C4BBFE64982759859E740DAC8C2A4776CA20C(L_268, NULL);
		goto IL_0b2b;
	}

IL_0b0c:
	{
		// else if(totalWinner == 2) {
		int32_t L_269 = __this->___totalWinner_38;
		if ((!(((uint32_t)L_269) == ((uint32_t)2))))
		{
			goto IL_0b2b;
		}
	}
	{
		// player1.SetLoseFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_270 = __this->___player1_4;
		NullCheck(L_270);
		Player_SetLoseFace_mFB7C4BBFE64982759859E740DAC8C2A4776CA20C(L_270, NULL);
		// player2.SetWinFace();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_271 = __this->___player2_5;
		NullCheck(L_271);
		Player_SetWinFace_mA539848785D8DCEB7F24B1A6C8F4BE63393D73CD(L_271, NULL);
	}

IL_0b2b:
	{
		// crown_obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_272 = __this->___crown_obj_10;
		NullCheck(L_272);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_272, (bool)1, NULL);
		// lighting_obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_273 = __this->___lighting_obj_11;
		NullCheck(L_273);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_273, (bool)1, NULL);
		// break;
		return;
	}

IL_0b44:
	{
		// if(timer >= 1f) {
		float L_274 = __this->___timer_27;
		if ((!(((float)L_274) >= ((float)(1.0f)))))
		{
			goto IL_0bc1;
		}
	}
	{
		// tmp_title.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_275 = __this->___tmp_title_7;
		NullCheck(L_275);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_275, (bool)1, NULL);
		// tmp_space.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_276 = __this->___tmp_space_8;
		NullCheck(L_276);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_276, (bool)1, NULL);
		// touch_toggle.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_277 = __this->___touch_toggle_15;
		NullCheck(L_277);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_277, (bool)1, NULL);
		// guide.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_278 = __this->___guide_17;
		NullCheck(L_278);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_278, (bool)1, NULL);
		// gameState = "notStarted";
		__this->___gameState_25 = _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		// RSP = "none";
		__this->___RSP_26 = _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		// gameStarted = false;
		__this->___gameStarted_24 = (bool)0;
		// timer = 0.0f;
		__this->___timer_27 = (0.0f);
		// player1.hand_sprite = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_279 = __this->___player1_4;
		NullCheck(L_279);
		L_279->___hand_sprite_13 = 0;
		// player2.hand_sprite = 0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_280 = __this->___player2_5;
		NullCheck(L_280);
		L_280->___hand_sprite_13 = 0;
	}

IL_0bc1:
	{
		// }
		return;
	}
}
// System.Void Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m657ECC756CD44219E6C63B972C78FD4164A0CE1A (Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameState = "notStarted";
		__this->___gameState_25 = _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_25), (void*)_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		// public string RSP = "none";
		__this->___RSP_26 = _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RSP_26), (void*)_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		// float audioVolumeDefault = 0.3f;
		__this->___audioVolumeDefault_31 = (0.300000012f);
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
// System.Void Bar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_Awake_m86F013DB406C90E488465C6E6FE7DB606DF15F79 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2;
		L_2 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void Bar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar_Update_m274CB82B255F6105AAF9A40314388F952B040CF3 (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476);
		s_Il2CppMethodInitialized = true;
	}
	{
		// one = (float)(manager.p1winningTime-manager.p2winningTime);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		double L_1 = L_0->___p1winningTime_34;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_2 = __this->___manager_4;
		NullCheck(L_2);
		double L_3 = L_2->___p2winningTime_35;
		__this->___one_6 = ((float)((double)il2cpp_codegen_subtract(L_1, L_3)));
		// two = manager.gameTime;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_4 = __this->___manager_4;
		NullCheck(L_4);
		float L_5 = L_4->___gameTime_41;
		__this->___two_7 = L_5;
		// if(manager.gameState == "game!!!")
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_6 = __this->___manager_4;
		NullCheck(L_6);
		String_t* L_7 = L_6->___gameState_25;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476, NULL);
		if (!L_8)
		{
			goto IL_015b;
		}
	}
	{
		// lineRenderer.SetPosition(0, new Vector3(0.0f, -20.0f, 0.0f));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___lineRenderer_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (-20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_9, 0, L_10, NULL);
		// lineRenderer.SetPosition(1, new Vector3((float)(manager.p2winningTime-manager.p1winningTime)/manager.gameTime*300, -20.0f, 0.0f));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = __this->___lineRenderer_5;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_12 = __this->___manager_4;
		NullCheck(L_12);
		double L_13 = L_12->___p2winningTime_35;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_14 = __this->___manager_4;
		NullCheck(L_14);
		double L_15 = L_14->___p1winningTime_34;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_16 = __this->___manager_4;
		NullCheck(L_16);
		float L_17 = L_16->___gameTime_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_multiply(((float)(((float)((double)il2cpp_codegen_subtract(L_13, L_15)))/L_17)), (300.0f))), (-20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_11, 1, L_18, NULL);
		// if(manager.totalWinner == 1) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_19 = __this->___manager_4;
		NullCheck(L_19);
		int32_t L_20 = L_19->___totalWinner_38;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		// lineRenderer.startColor = new Color(0.8f, 0.2f, 0.2f, 1f);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->___lineRenderer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_22), (0.800000012f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_21, L_22, NULL);
		// lineRenderer.endColor = new Color(0.8f, 0.2f, 0.2f, 1f);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_23 = __this->___lineRenderer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), (0.800000012f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_23, L_24, NULL);
		return;
	}

IL_0105:
	{
		// else if(manager.totalWinner == 2) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_25 = __this->___manager_4;
		NullCheck(L_25);
		int32_t L_26 = L_25->___totalWinner_38;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_015b;
		}
	}
	{
		// lineRenderer.startColor = new Color(0.2f, 0.2f, 0.8f, 1f);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_27 = __this->___lineRenderer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), (0.200000003f), (0.200000003f), (0.800000012f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_27, L_28, NULL);
		// lineRenderer.endColor = new Color(0.2f, 0.2f, 0.8f, 1f);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_29 = __this->___lineRenderer_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), (0.200000003f), (0.200000003f), (0.800000012f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_29, L_30, NULL);
	}

IL_015b:
	{
		// }
		return;
	}
}
// System.Void Bar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bar__ctor_m46E8DDEB5461554D317F8CF9129F63E65D391DAA (Bar_t84F39029FCBDBB865D524A9ACDF9640189A117DF* __this, const RuntimeMethod* method) 
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
// System.Void crown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void crown_Start_mAFBD9B4774731D3CE13FE3FCF7E4701DEDFA7005 (crown_t6E9EC555D3427D67853B103D3B06F1F732A59349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5, NULL);
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_2, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_5), (void*)L_3);
		// player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68, NULL);
		NullCheck(L_4);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5;
		L_5 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_4, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player2_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void crown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void crown_Update_mCC1B03389DACE59833A95EC5A885E5D7FEE9E802 (crown_t6E9EC555D3427D67853B103D3B06F1F732A59349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// transform.localScale = new Vector2(0.55f + 0.05f*Mathf.Sin(timer*1.5f), 0.55f + 0.05f*Mathf.Cos(timer*1.5f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___timer_7;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply(L_3, (1.5f))));
		float L_5 = __this->___timer_7;
		float L_6;
		L_6 = cosf(((float)il2cpp_codegen_multiply(L_5, (1.5f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_add((0.550000012f), ((float)il2cpp_codegen_multiply((0.0500000007f), L_4)))), ((float)il2cpp_codegen_add((0.550000012f), ((float)il2cpp_codegen_multiply((0.0500000007f), L_6)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_8, NULL);
		// if(manager.totalWinner == 1) {transform.position = player1.GetFacePos() + new Vector3(0, 2.7f, 0);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_9 = __this->___manager_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___totalWinner_38;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}
	{
		// if(manager.totalWinner == 1) {transform.position = player1.GetFacePos() + new Vector3(0, 2.7f, 0);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = __this->___player1_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), (2.70000005f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		goto IL_00eb;
	}

IL_00a0:
	{
		// else if(manager.totalWinner == 2) {transform.position = player2.GetFacePos() + new Vector3(0, 2.7f, 0);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_16 = __this->___manager_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___totalWinner_38;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_00df;
		}
	}
	{
		// else if(manager.totalWinner == 2) {transform.position = player2.GetFacePos() + new Vector3(0, 2.7f, 0);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = __this->___player2_6;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (0.0f), (2.70000005f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_22, NULL);
		goto IL_00eb;
	}

IL_00df:
	{
		// else {gameObject.SetActive(false);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
	}

IL_00eb:
	{
		// if(manager.gameState == "getStarted") {gameObject.SetActive(false);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_24 = __this->___manager_4;
		NullCheck(L_24);
		String_t* L_25 = L_24->___gameState_25;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3, NULL);
		if (!L_26)
		{
			goto IL_010e;
		}
	}
	{
		// if(manager.gameState == "getStarted") {gameObject.SetActive(false);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void crown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void crown__ctor_mE7AEACF13F52880C8BF80DAFE3F40A8134BC96F7 (crown_t6E9EC555D3427D67853B103D3B06F1F732A59349* __this, const RuntimeMethod* method) 
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
// System.Void EffectSquare1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare1_Start_m450937E318BB731743E7615E31FA623CC87221A2 (EffectSquare1_t4A303896487CE26D3F81637D4A1C30945330216D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// manager = GameObject.Find("Manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___mat_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_5), (void*)L_3);
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sr_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_6), (void*)L_4);
		// speed = Random.Range(3f, 15f);
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((3.0f), (15.0f), NULL);
		__this->___speed_12 = L_5;
		// timer = 0;
		__this->___timer_9 = (0.0f);
		// acceleration = 0.992f;
		__this->___acceleration_13 = (0.991999984f);
		// direction = Random.Range(0, 360);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		__this->___direction_10 = L_6;
		// lifeTime = Random.Range(0.7f, 1.2f);
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.699999988f), (1.20000005f), NULL);
		__this->___lifeTime_14 = L_7;
		// scale = Random.Range(0.5f, 1.5f);
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.5f), NULL);
		__this->___scale_11 = L_8;
		// transform.localScale = new Vector2(scale, scale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = __this->___scale_11;
		float L_11 = __this->___scale_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_12, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_13, NULL);
		// transform.rotation = Quaternion.Euler(0, 0, Random.Range(0, 360));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)L_15), NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// transform.position += new Vector3(Mathf.Cos(direction*Mathf.Deg2Rad), Mathf.Sin(direction*Mathf.Deg2Rad), 0) * startRadius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		int32_t L_20 = __this->___direction_10;
		float L_21;
		L_21 = cosf(((float)il2cpp_codegen_multiply(((float)L_20), (0.0174532924f))));
		int32_t L_22 = __this->___direction_10;
		float L_23;
		L_23 = sinf(((float)il2cpp_codegen_multiply(((float)L_22), (0.0174532924f))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_23, (0.0f), /*hidden argument*/NULL);
		float L_25 = __this->___startRadius_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_26, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_27, NULL);
		// sr.sprite = sprites[Random.Range(0, sprites.Length)];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28 = __this->___sr_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_29 = __this->___sprites_7;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_30 = __this->___sprites_7;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_30)->max_length)), NULL);
		NullCheck(L_29);
		int32_t L_32 = L_31;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_28, L_33, NULL);
		// float ran1 = Random.Range(0.6f, 0.8f);
		float L_34;
		L_34 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.600000024f), (0.800000012f), NULL);
		V_0 = L_34;
		// float ran2 = Random.Range(0.0f, 0.6f);
		float L_35;
		L_35 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (0.600000024f), NULL);
		V_1 = L_35;
		// if(manager.currentWinner == 1) {mat.color = new Color(ran1, ran2, ran2, 1);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_36 = __this->___manager_4;
		NullCheck(L_36);
		int32_t L_37 = L_36->___currentWinner_36;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0195;
		}
	}
	{
		// if(manager.currentWinner == 1) {mat.color = new Color(ran1, ran2, ran2, 1);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = __this->___mat_5;
		float L_39 = V_0;
		float L_40 = V_1;
		float L_41 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		memset((&L_42), 0, sizeof(L_42));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_42), L_39, L_40, L_41, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_38, L_42, NULL);
		return;
	}

IL_0195:
	{
		// else if(manager.currentWinner == 2) {mat.color = new Color(ran2, ran2, ran1, 1);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_43 = __this->___manager_4;
		NullCheck(L_43);
		int32_t L_44 = L_43->___currentWinner_36;
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_01bc;
		}
	}
	{
		// else if(manager.currentWinner == 2) {mat.color = new Color(ran2, ran2, ran1, 1);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___mat_5;
		float L_46 = V_1;
		float L_47 = V_1;
		float L_48 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		memset((&L_49), 0, sizeof(L_49));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_49), L_46, L_47, L_48, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_45, L_49, NULL);
		return;
	}

IL_01bc:
	{
		// else {mat.color = new Color(ran2, ran2, ran2, 1);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___mat_5;
		float L_51 = V_1;
		float L_52 = V_1;
		float L_53 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		memset((&L_54), 0, sizeof(L_54));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_54), L_51, L_52, L_53, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_50, L_54, NULL);
		// }
		return;
	}
}
// System.Void EffectSquare1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare1_Update_m9D59D9DA20DD3789212AEDE3EF185793BC57C024 (EffectSquare1_t4A303896487CE26D3F81637D4A1C30945330216D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_9;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(speed > 0) {speed *= acceleration;}
		float L_2 = __this->___speed_12;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// if(speed > 0) {speed *= acceleration;}
		float L_3 = __this->___speed_12;
		float L_4 = __this->___acceleration_13;
		__this->___speed_12 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_003f;
	}

IL_0034:
	{
		// else {speed = 0;}
		__this->___speed_12 = (0.0f);
	}

IL_003f:
	{
		// if(timer >= lifeTime) {Destroy(gameObject);}
		float L_5 = __this->___timer_9;
		float L_6 = __this->___lifeTime_14;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0058;
		}
	}
	{
		// if(timer >= lifeTime) {Destroy(gameObject);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0058:
	{
		// transform.position += new Vector3(Mathf.Cos(direction*Mathf.Deg2Rad), Mathf.Sin(direction*Mathf.Deg2Rad), 0) * speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		int32_t L_11 = __this->___direction_10;
		float L_12;
		L_12 = cosf(((float)il2cpp_codegen_multiply(((float)L_11), (0.0174532924f))));
		int32_t L_13 = __this->___direction_10;
		float L_14;
		L_14 = sinf(((float)il2cpp_codegen_multiply(((float)L_13), (0.0174532924f))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_14, (0.0f), /*hidden argument*/NULL);
		float L_16 = __this->___speed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_19, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_20, NULL);
		// transform.localScale = new Vector2(scale, scale) * (1 - timer/lifeTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_22 = __this->___scale_11;
		float L_23 = __this->___scale_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), L_22, L_23, /*hidden argument*/NULL);
		float L_25 = __this->___timer_9;
		float L_26 = __this->___lifeTime_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_24, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_25/L_26)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_27, NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_28, NULL);
		// transform.rotation = Quaternion.Euler(transform.eulerAngles + new Vector3(0, 0, speed/5));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_30, NULL);
		float L_32 = __this->___speed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.0f), (0.0f), ((float)(L_32/(5.0f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_34, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_35, NULL);
		// mat.color = new Color(mat.color.r, mat.color.g, mat.color.b, 1 - timer/lifeTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___mat_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___mat_5;
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_37, NULL);
		float L_39 = L_38.___r_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = __this->___mat_5;
		NullCheck(L_40);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_40, NULL);
		float L_42 = L_41.___g_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___mat_5;
		NullCheck(L_43);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_43, NULL);
		float L_45 = L_44.___b_2;
		float L_46 = __this->___timer_9;
		float L_47 = __this->___lifeTime_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), L_39, L_42, L_45, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_46/L_47)))), /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_36, L_48, NULL);
		// }
		return;
	}
}
// System.Void EffectSquare1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare1__ctor_m17E8D43A57AE0F3F67BBBA77FFAE9A58F3442DE9 (EffectSquare1_t4A303896487CE26D3F81637D4A1C30945330216D* __this, const RuntimeMethod* method) 
{
	{
		// float startRadius = 1.7f;
		__this->___startRadius_8 = (1.70000005f);
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
// System.Void EffectSquare2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare2_Start_mA3386D01F8238F34D053290919A385DE55A790B3 (EffectSquare2_tE7B83D6712BC480FAEF1A6D00507F99E05366225* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// manager = GameObject.Find("Manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___mat_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_5), (void*)L_3);
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sr_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_6), (void*)L_4);
		// speed = Random.Range(-3f, 3f);
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.0f), (3.0f), NULL);
		__this->___speed_10 = L_5;
		// timer = 0;
		__this->___timer_8 = (0.0f);
		// acceleration = 0.992f;
		__this->___acceleration_11 = (0.991999984f);
		// lifeTime = Random.Range(0.7f, 1.2f);
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.699999988f), (1.20000005f), NULL);
		__this->___lifeTime_12 = L_6;
		// scale = Random.Range(0.2f, 0.8f);
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.200000003f), (0.800000012f), NULL);
		__this->___scale_9 = L_7;
		// transform.localScale = new Vector2(scale, scale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___scale_9;
		float L_10 = __this->___scale_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_12, NULL);
		// transform.rotation = Quaternion.Euler(0, 0, Random.Range(0, 360));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_14;
		L_14 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)L_14), NULL);
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_15, NULL);
		// sr.sprite = sprites[Random.Range(0, sprites.Length)];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___sr_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_17 = __this->___sprites_7;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_18 = __this->___sprites_7;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		NullCheck(L_17);
		int32_t L_20 = L_19;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_16, L_21, NULL);
		// float ran2 = Random.Range(0.6f, 1f);
		float L_22;
		L_22 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.600000024f), (1.0f), NULL);
		V_0 = L_22;
		// mat.color = new Color(ran2, ran2, ran2, 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___mat_5;
		float L_24 = V_0;
		float L_25 = V_0;
		float L_26 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_27), L_24, L_25, L_26, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void EffectSquare2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare2_Update_m4BFC35157B250D360E18F6AD67A4AE0B75292E47 (EffectSquare2_tE7B83D6712BC480FAEF1A6D00507F99E05366225* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(speed > 0) {speed *= acceleration;}
		float L_2 = __this->___speed_10;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// if(speed > 0) {speed *= acceleration;}
		float L_3 = __this->___speed_10;
		float L_4 = __this->___acceleration_11;
		__this->___speed_10 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_003f;
	}

IL_0034:
	{
		// else {speed = 0;}
		__this->___speed_10 = (0.0f);
	}

IL_003f:
	{
		// if(timer >= lifeTime) {Destroy(gameObject);}
		float L_5 = __this->___timer_8;
		float L_6 = __this->___lifeTime_12;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0058;
		}
	}
	{
		// if(timer >= lifeTime) {Destroy(gameObject);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0058:
	{
		// transform.localScale = new Vector2(scale, scale) * (1 - timer/lifeTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___scale_9;
		float L_10 = __this->___scale_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		float L_12 = __this->___timer_8;
		float L_13 = __this->___lifeTime_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_12/L_13)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_15, NULL);
		// transform.rotation = Quaternion.Euler(transform.eulerAngles + new Vector3(0, 0, speed));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_17, NULL);
		float L_19 = __this->___speed_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (0.0f), L_19, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_21, NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_22, NULL);
		// mat.color = new Color(mat.color.r, mat.color.g, mat.color.b, 1 - timer/lifeTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___mat_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___mat_5;
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_24, NULL);
		float L_26 = L_25.___r_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___mat_5;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_27, NULL);
		float L_29 = L_28.___g_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___mat_5;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_30, NULL);
		float L_32 = L_31.___b_2;
		float L_33 = __this->___timer_8;
		float L_34 = __this->___lifeTime_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_35), L_26, L_29, L_32, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_33/L_34)))), /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_23, L_35, NULL);
		// }
		return;
	}
}
// System.Void EffectSquare2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectSquare2__ctor_m4986B925A5CBF778A35B45EFC3878AEC29D5C5FD (EffectSquare2_tE7B83D6712BC480FAEF1A6D00507F99E05366225* __this, const RuntimeMethod* method) 
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
// System.Void fire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fire_Start_mB96EC5DD2E8E201C33FEDF5DDBAA0F4521F05A9C (fire_t681E11C61B81708A2984605BE72569220ED9CB42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___sr_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_4), (void*)L_0);
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_1);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_2;
		L_2 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_1, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_6), (void*)L_2);
		// player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5, NULL);
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_3, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player1_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_7), (void*)L_4);
		// player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68, NULL);
		NullCheck(L_5);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6;
		L_6 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_5, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player2_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_8), (void*)L_6);
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		__this->___mat_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_9), (void*)L_8);
		// }
		return;
	}
}
// System.Void fire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fire_Update_m16F7E04D383C3DF6D4F6A33EBB350544C8452D3B (fire_t681E11C61B81708A2984605BE72569220ED9CB42* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_10;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_add(L_0, L_1));
		// transform.localScale = new Vector2(2f + 0.1f*Mathf.Sin(timer*10f), 2f + 0.1f*Mathf.Cos(timer*10f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___timer_10;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply(L_3, (10.0f))));
		float L_5 = __this->___timer_10;
		float L_6;
		L_6 = cosf(((float)il2cpp_codegen_multiply(L_5, (10.0f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_add((2.0f), ((float)il2cpp_codegen_multiply((0.100000001f), L_4)))), ((float)il2cpp_codegen_add((2.0f), ((float)il2cpp_codegen_multiply((0.100000001f), L_6)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_8, NULL);
		// if(manager.totalWinner == 1) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_9 = __this->___manager_6;
		NullCheck(L_9);
		int32_t L_10 = L_9->___totalWinner_38;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_012e;
		}
	}
	{
		// sr.sprite = sprites[0];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___sr_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_12 = __this->___sprites_5;
		NullCheck(L_12);
		int32_t L_13 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_11, L_14, NULL);
		// transform.position = player1.GetFacePos() + new Vector3(0,2,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player1_7;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_19, NULL);
		// mat.color = new Color(1f, 0.8f + 0.2f*Mathf.Sin(timer*10f), 0.8f + 0.2f*Mathf.Sin(timer*10f), 0.5f*(float)(manager.p1winningTime-manager.p2winningTime)/manager.gameTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___mat_9;
		float L_21 = __this->___timer_10;
		float L_22;
		L_22 = sinf(((float)il2cpp_codegen_multiply(L_21, (10.0f))));
		float L_23 = __this->___timer_10;
		float L_24;
		L_24 = sinf(((float)il2cpp_codegen_multiply(L_23, (10.0f))));
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_25 = __this->___manager_6;
		NullCheck(L_25);
		double L_26 = L_25->___p1winningTime_34;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_27 = __this->___manager_6;
		NullCheck(L_27);
		double L_28 = L_27->___p2winningTime_35;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_29 = __this->___manager_6;
		NullCheck(L_29);
		float L_30 = L_29->___gameTime_41;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (1.0f), ((float)il2cpp_codegen_add((0.800000012f), ((float)il2cpp_codegen_multiply((0.200000003f), L_22)))), ((float)il2cpp_codegen_add((0.800000012f), ((float)il2cpp_codegen_multiply((0.200000003f), L_24)))), ((float)(((float)il2cpp_codegen_multiply((0.5f), ((float)((double)il2cpp_codegen_subtract(L_26, L_28)))))/L_30)), /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_20, L_31, NULL);
		return;
	}

IL_012e:
	{
		// else if(manager.totalWinner == 2) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_32 = __this->___manager_6;
		NullCheck(L_32);
		int32_t L_33 = L_32->___totalWinner_38;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_0200;
		}
	}
	{
		// sr.sprite = sprites[1];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_34 = __this->___sr_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_35 = __this->___sprites_5;
		NullCheck(L_35);
		int32_t L_36 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_34, L_37, NULL);
		// transform.position = player2.GetFacePos() + new Vector3(0,2,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_39 = __this->___player2_8;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_41, NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_42, NULL);
		// mat.color = new Color(0.8f + 0.2f*Mathf.Sin(timer*10f), 1f, 0.8f + 0.2f*Mathf.Sin(timer*10f), Mathf.Sin(0.25f*Mathf.PI)*(float)(manager.p2winningTime-manager.p1winningTime)/manager.gameTime);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___mat_9;
		float L_44 = __this->___timer_10;
		float L_45;
		L_45 = sinf(((float)il2cpp_codegen_multiply(L_44, (10.0f))));
		float L_46 = __this->___timer_10;
		float L_47;
		L_47 = sinf(((float)il2cpp_codegen_multiply(L_46, (10.0f))));
		float L_48;
		L_48 = sinf((0.785398185f));
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_49 = __this->___manager_6;
		NullCheck(L_49);
		double L_50 = L_49->___p2winningTime_35;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_51 = __this->___manager_6;
		NullCheck(L_51);
		double L_52 = L_51->___p1winningTime_34;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_53 = __this->___manager_6;
		NullCheck(L_53);
		float L_54 = L_53->___gameTime_41;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		memset((&L_55), 0, sizeof(L_55));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_55), ((float)il2cpp_codegen_add((0.800000012f), ((float)il2cpp_codegen_multiply((0.200000003f), L_45)))), (1.0f), ((float)il2cpp_codegen_add((0.800000012f), ((float)il2cpp_codegen_multiply((0.200000003f), L_47)))), ((float)(((float)il2cpp_codegen_multiply(L_48, ((float)((double)il2cpp_codegen_subtract(L_50, L_52)))))/L_54)), /*hidden argument*/NULL);
		NullCheck(L_43);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_43, L_55, NULL);
		return;
	}

IL_0200:
	{
		// else {transform.position = new Vector3(0, 100, 0);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), (0.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_56, L_57, NULL);
		// }
		return;
	}
}
// System.Void fire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fire__ctor_m3336CE3A6910C1E508B4090B96DD12CBFBDF471B (fire_t681E11C61B81708A2984605BE72569220ED9CB42* __this, const RuntimeMethod* method) 
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
// System.Void guide_hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void guide_hand_Start_mEFE7088FFB38C1551391C9FCDF0B15EDEBB2F252 (guide_hand_tA98C944065D0FBB3F8D329830760697BC58634BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void guide_hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void guide_hand_Update_m0BD2EC21474ECD73E373F710B436A307673A6BA1 (guide_hand_tA98C944065D0FBB3F8D329830760697BC58634BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void guide_hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void guide_hand__ctor_m7232D535B0B3E58123D186ACB98D25BECD9CD956 (guide_hand_tA98C944065D0FBB3F8D329830760697BC58634BE* __this, const RuntimeMethod* method) 
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
// System.Void help::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help_Start_mAD0C65A6547C59F95AAB5636E4E6D6B837BF8627 (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// manager = GameObject.Find("Manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// textMesh = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textMesh_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_5), (void*)L_2);
		// mat = textMesh.fontMaterial;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___textMesh_5;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_3, NULL);
		__this->___mat_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_4);
		// if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_5 = __this->___manager_4;
		NullCheck(L_5);
		bool L_6 = L_5->___help_23;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		// if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___guide_8;
		V_0 = L_7;
		V_1 = 0;
		goto IL_0057;
	}

IL_004a:
	{
		// if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		// if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_005e:
	{
		// else foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___guide_8;
		V_0 = L_15;
		V_1 = 0;
		goto IL_0076;
	}

IL_0069:
	{
		// else foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// else foreach(GameObject g in guide) {g.SetActive(false);}
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0076:
	{
		// else foreach(GameObject g in guide) {g.SetActive(false);}
		int32_t L_21 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
		// }
		return;
	}
}
// System.Void help::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help_Update_mF58C663B3A08CA4530D808A5331962EF8DA961B2 (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD221513ADC158B20268677A0827129111F5302);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if(manager.gameState == "notStarted" || manager.gameState == "getEnded") {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___gameState_25;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_3 = __this->___manager_4;
		NullCheck(L_3);
		String_t* L_4 = L_3->___gameState_25;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral8DD221513ADC158B20268677A0827129111F5302, NULL);
		if (!L_5)
		{
			goto IL_0115;
		}
	}

IL_0031:
	{
		// timer += Time.deltaTime;
		float L_6 = __this->___timer_9;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_9 = ((float)il2cpp_codegen_add(L_6, L_7));
		// Vector3 rotation = new Vector3(0f, 0f, 20f*Mathf.Sin(timer*1.5f));
		float L_8 = __this->___timer_9;
		float L_9;
		L_9 = sinf(((float)il2cpp_codegen_multiply(L_8, (1.5f))));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((20.0f), L_9)), NULL);
		// for(int i = 0; i < guide.Length; i+=2) {
		V_1 = 0;
		goto IL_008b;
	}

IL_006f:
	{
		// RectTransform rect = guide[i].GetComponent<RectTransform>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___guide_8;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		// rect.rotation = Quaternion.Euler(rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_15, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// for(int i = 0; i < guide.Length; i+=2) {
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_008b:
	{
		// for(int i = 0; i < guide.Length; i+=2) {
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___guide_8;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_006f;
		}
	}
	{
		// backobject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___backobject_7;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// if(manager.help) {mat.color = new Color(1f, 1f, 0f, 1f);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_21 = __this->___manager_4;
		NullCheck(L_21);
		bool L_22 = L_21->___help_23;
		if (!L_22)
		{
			goto IL_00d5;
		}
	}
	{
		// if(manager.help) {mat.color = new Color(1f, 1f, 0f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___mat_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_23, L_24, NULL);
		goto IL_00f9;
	}

IL_00d5:
	{
		// else {mat.color = new Color(1f, 1f, 1f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___mat_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_25, L_26, NULL);
	}

IL_00f9:
	{
		// mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___mat_6;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_28 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceColor_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___mat_6;
		NullCheck(L_29);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_29, NULL);
		NullCheck(L_27);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_27, L_28, L_30, NULL);
		return;
	}

IL_0115:
	{
		// timer = 0f;
		__this->___timer_9 = (0.0f);
		// manager.help = false;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_31 = __this->___manager_4;
		NullCheck(L_31);
		L_31->___help_23 = (bool)0;
		// backobject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___backobject_7;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___guide_8;
		V_2 = L_34;
		V_3 = 0;
		goto IL_015c;
	}

IL_014f:
	{
		// foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_2;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// foreach(GameObject g in guide) {g.SetActive(false);}
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_015c:
	{
		// foreach(GameObject g in guide) {g.SetActive(false);}
		int32_t L_40 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_41 = V_2;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_014f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void help::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help_OnPointerDown_m382F45D0F26C8502AF8A7E971AF3797D61EB71AB (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(manager.help) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		bool L_1 = L_0->___help_23;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// manager.help = false;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_2 = __this->___manager_4;
		NullCheck(L_2);
		L_2->___help_23 = (bool)0;
		// foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___guide_8;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0031;
	}

IL_0024:
	{
		// foreach(GameObject g in guide) {g.SetActive(false);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// foreach(GameObject g in guide) {g.SetActive(false);}
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// foreach(GameObject g in guide) {g.SetActive(false);}
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0038:
	{
		// manager.help = true;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_11 = __this->___manager_4;
		NullCheck(L_11);
		L_11->___help_23 = (bool)1;
		// foreach(GameObject g in guide) {g.SetActive(true);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___guide_8;
		V_0 = L_12;
		V_1 = 0;
		goto IL_005c;
	}

IL_004f:
	{
		// foreach(GameObject g in guide) {g.SetActive(true);}
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// foreach(GameObject g in guide) {g.SetActive(true);}
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005c:
	{
		// foreach(GameObject g in guide) {g.SetActive(true);}
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void help::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help__ctor_m404FF401B2E42D38E1F890052A89E280FE9CF2B0 (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
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
// System.Void lighting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lighting_Start_mBAC1C87F0CB8B1E3E6D17505D52FB0ACDABFEE36 (lighting_tB7F908A2F360D19328B8B916991D270D91C60ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5, NULL);
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_2, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_5), (void*)L_3);
		// player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68, NULL);
		NullCheck(L_4);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5;
		L_5 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_4, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player2_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void lighting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lighting_Update_m8E138109114FA524A54A2840EA7A129196D42997 (lighting_tB7F908A2F360D19328B8B916991D270D91C60ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_0, L_1));
		// transform.localScale = new Vector2(0.65f + 0.05f*Mathf.Cos(timer*1.0f), 5.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = __this->___timer_7;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply(L_3, (1.0f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), ((float)il2cpp_codegen_add((0.649999976f), ((float)il2cpp_codegen_multiply((0.0500000007f), L_4)))), (5.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_6, NULL);
		// if(manager.totalWinner == 1) {transform.position = player1.GetFacePos() + new Vector3(0, 14f, 0);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_7 = __this->___manager_4;
		NullCheck(L_7);
		int32_t L_8 = L_7->___totalWinner_38;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// if(manager.totalWinner == 1) {transform.position = player1.GetFacePos() + new Vector3(0, 14f, 0);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player1_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (14.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_13, NULL);
		goto IL_00d3;
	}

IL_0088:
	{
		// else if(manager.totalWinner == 2) {transform.position = player2.GetFacePos() + new Vector3(0, 14f, 0);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_14 = __this->___manager_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___totalWinner_38;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00c7;
		}
	}
	{
		// else if(manager.totalWinner == 2) {transform.position = player2.GetFacePos() + new Vector3(0, 14f, 0);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = __this->___player2_6;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (14.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_20, NULL);
		goto IL_00d3;
	}

IL_00c7:
	{
		// else {gameObject.SetActive(false);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_00d3:
	{
		// if(manager.gameState == "getStarted") {gameObject.SetActive(false);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_22 = __this->___manager_4;
		NullCheck(L_22);
		String_t* L_23 = L_22->___gameState_25;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral5F4C3B4B5116D1C7AA7F9A9B05B32886377695C3, NULL);
		if (!L_24)
		{
			goto IL_00f6;
		}
	}
	{
		// if(manager.gameState == "getStarted") {gameObject.SetActive(false);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Void lighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lighting__ctor_m8522DC85B370A53D2B32F94D2765BAD68F06677D (lighting_tB7F908A2F360D19328B8B916991D270D91C60ADD* __this, const RuntimeMethod* method) 
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
// System.Void FaceScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceScript_Awake_m696830A445B5D0BE9904BD33914508EE5E4032FB (FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)L_0);
		// mat = spriteRenderer.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___spriteRenderer_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___mat_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_5), (void*)L_2);
		// player = GetComponentInParent<Player>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74(__this, Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		__this->___player_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_3);
		// if(player.player == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player_6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___player_18;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_4;
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)0, NULL);
		// mat.SetColor("_SolidOutline", new Color(0.8f, 0.2f, 0.2f, 1f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (0.800000012f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_7, _stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13, L_8, NULL);
		return;
	}

IL_006d:
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_4;
		NullCheck(L_9);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_9, (bool)1, NULL);
		// mat.SetColor("_SolidOutline", new Color(0.2f, 0.2f, 0.8f, 1f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.200000003f), (0.200000003f), (0.800000012f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13, L_11, NULL);
		// }
		return;
	}
}
// System.Void FaceScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceScript_FixedUpdate_m21AB42AF4AEBA979EAF1713A5704FD9556D8CD58 (FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// transform.position = Vector3.Lerp(transform.position, player.face_pos, 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___face_pos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_4, (0.100000001f), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// switch(player.face_state) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player_6;
		NullCheck(L_6);
		String_t* L_7 = L_6->___face_state_12;
		V_0 = L_7;
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		if (L_11)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D, NULL);
		if (L_13)
		{
			goto IL_00b5;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E, NULL);
		if (L_15)
		{
			goto IL_00d3;
		}
	}
	{
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1, NULL);
		if (L_17)
		{
			goto IL_00f1;
		}
	}
	{
		return;
	}

IL_0079:
	{
		// spriteRenderer.sprite = sprites_loby[player.face_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_19 = __this->___sprites_loby_7;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_20 = __this->___player_6;
		NullCheck(L_20);
		int32_t L_21 = L_20->___face_sprite_11;
		NullCheck(L_19);
		int32_t L_22 = L_21;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_18, L_23, NULL);
		// break;
		return;
	}

IL_0097:
	{
		// spriteRenderer.sprite = sprites_game[player.face_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_25 = __this->___sprites_game_8;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_26 = __this->___player_6;
		NullCheck(L_26);
		int32_t L_27 = L_26->___face_sprite_11;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_24, L_29, NULL);
		// break;
		return;
	}

IL_00b5:
	{
		// spriteRenderer.sprite = sprites_draw[player.face_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_30 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_31 = __this->___sprites_draw_9;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_32 = __this->___player_6;
		NullCheck(L_32);
		int32_t L_33 = L_32->___face_sprite_11;
		NullCheck(L_31);
		int32_t L_34 = L_33;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_30, L_35, NULL);
		// break;
		return;
	}

IL_00d3:
	{
		// spriteRenderer.sprite = sprites_win[player.face_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_36 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_37 = __this->___sprites_win_10;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_38 = __this->___player_6;
		NullCheck(L_38);
		int32_t L_39 = L_38->___face_sprite_11;
		NullCheck(L_37);
		int32_t L_40 = L_39;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_36, L_41, NULL);
		// break;
		return;
	}

IL_00f1:
	{
		// spriteRenderer.sprite = sprites_lose[player.face_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_43 = __this->___sprites_lose_11;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_44 = __this->___player_6;
		NullCheck(L_44);
		int32_t L_45 = L_44->___face_sprite_11;
		NullCheck(L_43);
		int32_t L_46 = L_45;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_42, L_47, NULL);
		// }
		return;
	}
}
// System.Void FaceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceScript__ctor_m06DC1599A89248AE8BCCC381BD04C375D33FDB53 (FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* __this, const RuntimeMethod* method) 
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
// System.Void HandScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScript_Awake_mD15479C254E147D3D280BE2CFBD118824BB7F237 (HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_4), (void*)L_0);
		// mat = spriteRenderer.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___spriteRenderer_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___mat_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_5), (void*)L_2);
		// player = GetComponentInParent<Player>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74(__this, Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		__this->___player_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_3);
		// if(player.player == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player_6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___player_18;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		// spriteRenderer.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___spriteRenderer_4;
		NullCheck(L_6);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_6, (bool)1, NULL);
		// mat.SetColor("_SolidOutline", new Color(0.8f, 0.2f, 0.2f, 1f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (0.800000012f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_7, _stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13, L_8, NULL);
		return;
	}

IL_006d:
	{
		// spriteRenderer.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___spriteRenderer_4;
		NullCheck(L_9);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_9, (bool)0, NULL);
		// mat.SetColor("_SolidOutline", new Color(0.2f, 0.2f, 0.8f, 1f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.200000003f), (0.200000003f), (0.800000012f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteral7687457AC98A287F4F3DA1CB9FB433121BBDEC13, L_11, NULL);
		// }
		return;
	}
}
// System.Void HandScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScript_FixedUpdate_m78286946134DB0F5F77C12BD3639A232C5C85053 (HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.Lerp(transform.position, player.hand_pos, 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_4, (0.100000001f), NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// transform.rotation = Quaternion.Lerp(transform.rotation, player.hand_rot, 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = __this->___player_6;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9->___hand_rot_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_8, L_10, (0.100000001f), NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_11, NULL);
		// spriteRenderer.sprite = sprites[player.hand_sprite];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___spriteRenderer_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_13 = __this->___sprites_7;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = __this->___player_6;
		NullCheck(L_14);
		int32_t L_15 = L_14->___hand_sprite_13;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_12, L_17, NULL);
		// }
		return;
	}
}
// System.Void HandScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScript__ctor_mC4B4B6ABE30A6B5FF21F276CC7D08216B1A8198F (HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* __this, const RuntimeMethod* method) 
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
// System.Void RSPshake::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSPshake_Awake_m9ACEAEB30EF5F986C8003C19A6A11A8022A2F883 (RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// player = GetComponentInParent<Player>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2;
		L_2 = Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74(__this, Component_GetComponentInParent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m563E781213F182DDB3AD3B47E5FCE6E685C56F74_RuntimeMethod_var);
		__this->___player_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_2);
		// countDelay = manager.countDelay;
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_3 = __this->___manager_4;
		NullCheck(L_3);
		float L_4 = L_3->___countDelay_42;
		__this->___countDelay_7 = L_4;
		// if(player.player == 1) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_5;
		NullCheck(L_5);
		int32_t L_6 = L_5->___player_18;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		// player.hand_pos -= new Vector3(-2, 3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = __this->___player_5;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), (-2.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___hand_pos_16 = L_11;
		// player.hand_rot = Quaternion.Euler(0, 0, -60);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = __this->___player_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-60.0f), NULL);
		NullCheck(L_12);
		L_12->___hand_rot_17 = L_13;
	}

IL_0084:
	{
		// if(player.player == 2) {
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = __this->___player_5;
		NullCheck(L_14);
		int32_t L_15 = L_14->___player_18;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00d6;
		}
	}
	{
		// player.hand_pos -= new Vector3(2, 3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player_5;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = L_16;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_19), (2.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		L_17->___hand_pos_16 = L_20;
		// player.hand_rot = Quaternion.Euler(0, 0, 60);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_21 = __this->___player_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (60.0f), NULL);
		NullCheck(L_21);
		L_21->___hand_rot_17 = L_22;
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void RSPshake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSPshake_Update_m70B2D90CA5D126AA3FC2A3CD8EAACEF1A15406CA (RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(timer >= countDelay/5*3) {
		float L_2 = __this->___timer_6;
		float L_3 = __this->___countDelay_7;
		if ((!(((float)L_2) >= ((float)((float)il2cpp_codegen_multiply(((float)(L_3/(5.0f))), (3.0f)))))))
		{
			goto IL_00d4;
		}
	}
	{
		// if(manager.RSP != "paper") {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_4 = __this->___manager_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___RSP_26;
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, _stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, NULL);
		if (!L_6)
		{
			goto IL_00ce;
		}
	}
	{
		// player.hand_rot = Quaternion.Euler(0, 0, 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = __this->___player_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_7);
		L_7->___hand_rot_17 = L_8;
		// if(player.player == 1) {player.hand_pos += new Vector3(-2, 3);}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = __this->___player_5;
		NullCheck(L_9);
		int32_t L_10 = L_9->___player_18;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// if(player.player == 1) {player.hand_pos += new Vector3(-2, 3);}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = __this->___player_5;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_14), (-2.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		NullCheck(L_12);
		L_12->___hand_pos_16 = L_15;
	}

IL_009b:
	{
		// if(player.player == 2) {player.hand_pos += new Vector3(2, 3);}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player_5;
		NullCheck(L_16);
		int32_t L_17 = L_16->___player_18;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_00ce;
		}
	}
	{
		// if(player.player == 2) {player.hand_pos += new Vector3(2, 3);}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_18 = __this->___player_5;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_21), (2.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		L_19->___hand_pos_16 = L_22;
	}

IL_00ce:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void RSPshake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSPshake__ctor_m9B53E34E2A017187A370A47FB85A601B951E5596 (RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* __this, const RuntimeMethod* method) 
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisFaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629_mDCC350E261442289FEB477AF1ABDD1FD1D7F1455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisHandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E_m46D85D87ED2C0CD9DB441A76303733DF99A214F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_obj = Instantiate(face_prefab, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___face_prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___face_obj_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_obj_6), (void*)L_2);
		// hand_obj = Instantiate(hand_prefab, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___hand_prefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___hand_obj_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hand_obj_7), (void*)L_5);
		// manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D, NULL);
		NullCheck(L_6);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_7;
		L_7 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_6, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_8), (void*)L_7);
		// faceScript = GetComponentInChildren<FaceScript>();
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_8;
		L_8 = Component_GetComponentInChildren_TisFaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629_mDCC350E261442289FEB477AF1ABDD1FD1D7F1455(__this, Component_GetComponentInChildren_TisFaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629_mDCC350E261442289FEB477AF1ABDD1FD1D7F1455_RuntimeMethod_var);
		__this->___faceScript_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___faceScript_9), (void*)L_8);
		// handScript = GetComponentInChildren<HandScript>();
		HandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E* L_9;
		L_9 = Component_GetComponentInChildren_TisHandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E_m46D85D87ED2C0CD9DB441A76303733DF99A214F6(__this, Component_GetComponentInChildren_TisHandScript_t4A040732F9D942658D9ACD971B4642E42A7AD77E_m46D85D87ED2C0CD9DB441A76303733DF99A214F6_RuntimeMethod_var);
		__this->___handScript_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handScript_10), (void*)L_9);
		// SetLobbyFace();
		Player_SetLobbyFace_mF4936B1B412EC4F78F9321580C02FBB55248BE91(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::DirectMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DirectMove_m8866F80551BF9B4A0FC86685EC0FD11AC7E51214 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// hand_obj.transform.position = hand_pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hand_obj_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___hand_pos_16;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// hand_obj.transform.rotation = hand_rot;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___hand_obj_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___hand_rot_17;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// face_obj.transform.position = face_pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___face_obj_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___face_pos_15;
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Player::GetFacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_GetFacePos_m8CB6C4EA5EF61C29E1304E8614EE03C33B30118B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// return face_obj.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___face_obj_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}
}
// System.Void Player::RSPshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RSPshake_m2DD89EEEA07C5A5282E95CFF2165E7CF23164B6B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56_mB8B01C91B05862F53A52FF339D79A18C7B1A7D4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hand_obj.AddComponent<RSPshake>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hand_obj_7;
		NullCheck(L_0);
		RSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56* L_1;
		L_1 = GameObject_AddComponent_TisRSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56_mB8B01C91B05862F53A52FF339D79A18C7B1A7D4A(L_0, GameObject_AddComponent_TisRSPshake_t5CE8885A1A474EA85DF2F763083986412930AD56_mB8B01C91B05862F53A52FF339D79A18C7B1A7D4A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Player::SetLobbyFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetLobbyFace_mF4936B1B412EC4F78F9321580C02FBB55248BE91 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = Random.Range(0, faceScript.sprites_loby.Length);
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_0 = __this->___faceScript_9;
		NullCheck(L_0);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0->___sprites_loby_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___face_sprite_11 = L_2;
		// face_state = "loby";
		__this->___face_state_12 = _stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332);
		// }
		return;
	}
}
// System.Void Player::SetGameFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetGameFace_m7685A8CE0F886922DDC3D6700767DF644873DDCA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = Random.Range(1, faceScript.sprites_game.Length);
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_0 = __this->___faceScript_9;
		NullCheck(L_0);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0->___sprites_game_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___face_sprite_11 = L_2;
		// face_state = "game";
		__this->___face_state_12 = _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		// }
		return;
	}
}
// System.Void Player::SetHandsetFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetHandsetFace_mB4FAAA678C3327A207A76EE89D376482964B6626 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = 0;
		__this->___face_sprite_11 = 0;
		// face_state = "game";
		__this->___face_state_12 = _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		// hand_pos += new Vector3(0, 3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___hand_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		__this->___hand_pos_16 = L_2;
		// hand_rot = Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		__this->___hand_rot_17 = L_3;
		// }
		return;
	}
}
// System.Void Player::SetDrawFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetDrawFace_m46C63CE7CD7B6829621653B3190A66FEDE9C5EB2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = Random.Range(0, faceScript.sprites_draw.Length);
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_0 = __this->___faceScript_9;
		NullCheck(L_0);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0->___sprites_draw_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___face_sprite_11 = L_2;
		// face_state = "draw";
		__this->___face_state_12 = _stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral084BD4D64D0CD6589603C4DB0A1F34B116D8AD2D);
		// }
		return;
	}
}
// System.Void Player::SetWinFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetWinFace_mA539848785D8DCEB7F24B1A6C8F4BE63393D73CD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = Random.Range(0, faceScript.sprites_win.Length);
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_0 = __this->___faceScript_9;
		NullCheck(L_0);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0->___sprites_win_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___face_sprite_11 = L_2;
		// face_state = "win";
		__this->___face_state_12 = _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		// }
		return;
	}
}
// System.Void Player::SetLoseFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetLoseFace_mFB7C4BBFE64982759859E740DAC8C2A4776CA20C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// face_sprite = Random.Range(0, faceScript.sprites_lose.Length);
		FaceScript_tA38EE3947B6DB6626976C2DEEB96305F8A4EF629* L_0 = __this->___faceScript_9;
		NullCheck(L_0);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0->___sprites_lose_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___face_sprite_11 = L_2;
		// face_state = "lose";
		__this->___face_state_12 = _stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral97E4A08DE9DADE44447A57D376BC9979113C4DE1);
		// }
		return;
	}
}
// System.Void Player::AllowInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AllowInput_mA8E43D09BC70EA94769BADC7C83AD0B597511570 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(player == 1) {
		int32_t L_0 = __this->___player_18;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Q)) {inputRSP = 0;}
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)113), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Q)) {inputRSP = 0;}
		__this->___inputRSP_14 = 0;
	}

IL_0019:
	{
		// if(Input.GetKeyDown(KeyCode.W)) {inputRSP = 1;}
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)119), NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.W)) {inputRSP = 1;}
		__this->___inputRSP_14 = 1;
	}

IL_0029:
	{
		// if(Input.GetKeyDown(KeyCode.E)) {inputRSP = 2;}
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.E)) {inputRSP = 2;}
		__this->___inputRSP_14 = 2;
	}

IL_0039:
	{
		// if(player == 2) {
		int32_t L_4 = __this->___player_18;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0072;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.I)) {inputRSP = 0;}
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)105), NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.I)) {inputRSP = 0;}
		__this->___inputRSP_14 = 0;
	}

IL_0052:
	{
		// if(Input.GetKeyDown(KeyCode.O)) {inputRSP = 1;}
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)111), NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.O)) {inputRSP = 1;}
		__this->___inputRSP_14 = 1;
	}

IL_0062:
	{
		// if(Input.GetKeyDown(KeyCode.P)) {inputRSP = 2;}
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)112), NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.P)) {inputRSP = 2;}
		__this->___inputRSP_14 = 2;
	}

IL_0072:
	{
		// if(manager.gameState == "game!!!") {hand_sprite = inputRSP;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_8 = __this->___manager_8;
		NullCheck(L_8);
		String_t* L_9 = L_8->___gameState_25;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralFF9724AA51703F6A82C04E0DF45D965E146E7476, NULL);
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		// if(manager.gameState == "game!!!") {hand_sprite = inputRSP;}
		int32_t L_11 = __this->___inputRSP_14;
		__this->___hand_sprite_13 = L_11;
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string face_state = "loby";
		__this->___face_state_12 = _stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_state_12), (void*)_stringLiteral919E945756B966F8526B9ACA4A2B99A11F541332);
		// public int inputRSP = 2; // 0: rock, 1: scissor, 2: paper
		__this->___inputRSP_14 = 2;
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
// System.Void Space::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Space_Start_m695CAA4EDF6DBE0564F61C5B038CB6E4EA533F49 (Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textMesh = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textMesh_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Space::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Space_Update_m3A5B10264EC9232ABB72EA2C186533E40CC689DB (Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C67B5CA08A5DB771C991B601851D693996634B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F9ED87C4B24A9EDDB1321BE755DA2C7DB28EE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(manager.touchMod) {textMesh.text = "Touch to Start";}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		bool L_1 = L_0->___touchMod_22;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if(manager.touchMod) {textMesh.text = "Touch to Start";}
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___textMesh_5;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral87C67B5CA08A5DB771C991B601851D693996634B);
		goto IL_002f;
	}

IL_001f:
	{
		// else {textMesh.text = "SPACE to Start";}
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___textMesh_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralB6F9ED87C4B24A9EDDB1321BE755DA2C7DB28EE0);
	}

IL_002f:
	{
		// if(Input.GetKeyDown(KeyCode.Space)) {transform.localScale = new Vector2(0.8f,0.8f);}
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.Space)) {transform.localScale = new Vector2(0.8f,0.8f);}
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_7, NULL);
	}

IL_0057:
	{
		// if(Input.GetKeyUp(KeyCode.Space)) {
		bool L_8;
		L_8 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)32), NULL);
		if (!L_8)
		{
			goto IL_0096;
		}
	}
	{
		// transform.localScale = new Vector2(1f,1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_11, NULL);
		// manager.GameStart();
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_12 = __this->___manager_4;
		NullCheck(L_12);
		Manager_GameStart_mCBE50C5E37A7C5BE2164C505EEA3AE1D4939D50C(L_12, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void Space::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Space_OnPointerDown_mBD79F86A523769986AAE699C69D4087B184728F6 (Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector2(0.8f,0.8f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Space::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Space_OnPointerUp_mA23B2B5C530688E8F4D4E1761F7AD6262DB0605A (Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector2(1f,1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// manager.GameStart();
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_3 = __this->___manager_4;
		NullCheck(L_3);
		Manager_GameStart_mCBE50C5E37A7C5BE2164C505EEA3AE1D4939D50C(L_3, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Space::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Space__ctor_m61B3A16115CE74BBE1566B3D98716E47F07A58AF (Space_t9866A845ACE04E78AD19621BD89B3CB41C1E5691* __this, const RuntimeMethod* method) 
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
// System.Void Title::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_Awake_m9A3FE123C84C6F7C357D90DA59C623C3442B2421 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// title = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___title_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_5), (void*)L_0);
		// color = title.color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___title_5;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->___color_8 = L_2;
		// }
		return;
	}
}
// System.Void Title::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title_Update_m85F2F516B7B340E4129F6C6971A716CE410025AF (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(color.a <= 0f) {fade = 1.2f;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_8);
		float L_1 = L_0->___a_3;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// if(color.a <= 0f) {fade = 1.2f;}
		__this->___fade_6 = (1.20000005f);
	}

IL_001d:
	{
		// if(color.a >= 1f) {fade = -1.2f;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->___color_8);
		float L_3 = L_2->___a_3;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// if(color.a >= 1f) {fade = -1.2f;}
		__this->___fade_6 = (-1.20000005f);
	}

IL_003a:
	{
		// color.a += fade*Time.deltaTime;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_8);
		float* L_5 = (&L_4->___a_3);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = __this->___fade_6;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_8, L_9))));
		// Material mat = title.fontMaterial;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___title_5;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_10, NULL);
		// mat.SetColor(ShaderUtilities.ID_FaceColor, color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_13 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceColor_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___color_8;
		NullCheck(L_12);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_12, L_13, L_14, NULL);
		// mat.SetFloat(ShaderUtilities.ID_LightAngle, timer*1.1f);
		int32_t L_15 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_LightAngle_34;
		float L_16 = __this->___timer_7;
		NullCheck(L_12);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_12, L_15, ((float)il2cpp_codegen_multiply(L_16, (1.10000002f))), NULL);
		// timer += Time.deltaTime;
		float L_17 = __this->___timer_7;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_add(L_17, L_18));
		// transform.localScale = new Vector2(0.9f + 0.1f*Mathf.Cos(timer*1.1f), 0.9f + 0.1f*Mathf.Sin(timer*1.1f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_20 = __this->___timer_7;
		float L_21;
		L_21 = cosf(((float)il2cpp_codegen_multiply(L_20, (1.10000002f))));
		float L_22 = __this->___timer_7;
		float L_23;
		L_23 = sinf(((float)il2cpp_codegen_multiply(L_22, (1.10000002f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), ((float)il2cpp_codegen_add((0.899999976f), ((float)il2cpp_codegen_multiply((0.100000001f), L_21)))), ((float)il2cpp_codegen_add((0.899999976f), ((float)il2cpp_codegen_multiply((0.100000001f), L_23)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_25, NULL);
		// if(manager.gameStarted == true) {gameObject.SetActive(false);}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_26 = __this->___manager_4;
		NullCheck(L_26);
		bool L_27 = L_26->___gameStarted_24;
		if (!L_27)
		{
			goto IL_0101;
		}
	}
	{
		// if(manager.gameStarted == true) {gameObject.SetActive(false);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_mD048B1928FB56935584ECB8B23993B2F8ED77772 (Title_tDC7DA3F4A783D017736F6DE0F1AB9E27437522AA* __this, const RuntimeMethod* method) 
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
// System.Void Button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Start_m2D250D21BF475775E879DEC6B631016C2F1D98AA (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textMesh = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textMesh_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_4), (void*)L_0);
		// mat = textMesh.fontMaterial;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___textMesh_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_1, NULL);
		__this->___mat_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_5), (void*)L_2);
		// player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral4EF1108B0C57BACF82F4BED365BA2083CC5BB0F5, NULL);
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_3, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player1_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player1_6), (void*)L_4);
		// player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral1A4276BAD393F675DD233469B36E1CDDBF646C68, NULL);
		NullCheck(L_5);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6;
		L_6 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_5, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player2_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player2_7), (void*)L_6);
		// if(playernum == 1) {mat.color = new Color(1f, 0f, 0f, 1f);}
		int32_t L_7 = __this->___playernum_10;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// if(playernum == 1) {mat.color = new Color(1f, 0f, 0f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
	}

IL_0074:
	{
		// if(playernum == 2) {mat.color = new Color(0f, 0f, 1f, 1f);}
		int32_t L_10 = __this->___playernum_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00a1;
		}
	}
	{
		// if(playernum == 2) {mat.color = new Color(0f, 0f, 1f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_12, NULL);
	}

IL_00a1:
	{
		// mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___mat_5;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_14 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceColor_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___mat_5;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_15, NULL);
		NullCheck(L_13);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_13, L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void Button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Update_m09AD64D785E4E8C6680ABC33917D4079BE9F173F (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(playernum == 1)
		int32_t L_0 = __this->___playernum_10;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		// if(mat.color.g > 0f) {mat.color = new Color(1f, mat.color.g-1f*Time.deltaTime*4, 0f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___mat_5;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_1, NULL);
		float L_3 = L_2.___g_1;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// if(mat.color.g > 0f) {mat.color = new Color(1f, mat.color.g-1f*Time.deltaTime*4, 0f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___mat_5;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_5, NULL);
		float L_7 = L_6.___g_1;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), ((float)il2cpp_codegen_subtract(L_7, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_8)), (4.0f))))), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_9, NULL);
		goto IL_0087;
	}

IL_0063:
	{
		// else {mat.color = new Color(1f, 0f, 0f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
	}

IL_0087:
	{
		// if(playernum == 2)
		int32_t L_12 = __this->___playernum_10;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_014b;
		}
	}
	{
		// if(mat.color.b < 1f) {mat.color = new Color(mat.color.r-1f*Time.deltaTime*4, mat.color.g-1f*Time.deltaTime*4, mat.color.b+1f*Time.deltaTime*4, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___mat_5;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_13, NULL);
		float L_15 = L_14.___b_2;
		if ((!(((float)L_15) < ((float)(1.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		// if(mat.color.b < 1f) {mat.color = new Color(mat.color.r-1f*Time.deltaTime*4, mat.color.g-1f*Time.deltaTime*4, mat.color.b+1f*Time.deltaTime*4, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___mat_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___mat_5;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_17, NULL);
		float L_19 = L_18.___r_0;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___mat_5;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_21, NULL);
		float L_23 = L_22.___g_1;
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___mat_5;
		NullCheck(L_25);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_25, NULL);
		float L_27 = L_26.___b_2;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), ((float)il2cpp_codegen_subtract(L_19, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_20)), (4.0f))))), ((float)il2cpp_codegen_subtract(L_23, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_24)), (4.0f))))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_28)), (4.0f))))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_16, L_29, NULL);
		goto IL_014b;
	}

IL_0127:
	{
		// else {mat.color = new Color(0f, 0f, 1f, 1f);}
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_30, L_31, NULL);
	}

IL_014b:
	{
		// mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___mat_5;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_33 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceColor_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___mat_5;
		NullCheck(L_34);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_34, NULL);
		NullCheck(L_32);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_32, L_33, L_35, NULL);
		// }
		return;
	}
}
// System.Void Button::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_OnPointerDown_mF8CCA138D678EFE0FB54123577D22D41212EE2CF (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(playernum == 1)
		int32_t L_0 = __this->___playernum_10;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		// if(RSP == "R") {player1.inputRSP = 0;}
		String_t* L_1 = __this->___RSP_8;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if(RSP == "R") {player1.inputRSP = 0;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = __this->___player1_6;
		NullCheck(L_3);
		L_3->___inputRSP_14 = 0;
	}

IL_0027:
	{
		// if(RSP == "S") {player1.inputRSP = 1;}
		String_t* L_4 = __this->___RSP_8;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// if(RSP == "S") {player1.inputRSP = 1;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player1_6;
		NullCheck(L_6);
		L_6->___inputRSP_14 = 1;
	}

IL_0045:
	{
		// if(RSP == "P") {player1.inputRSP = 2;}
		String_t* L_7 = __this->___RSP_8;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		// if(RSP == "P") {player1.inputRSP = 2;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = __this->___player1_6;
		NullCheck(L_9);
		L_9->___inputRSP_14 = 2;
	}

IL_0063:
	{
		// if(playernum == 2)
		int32_t L_10 = __this->___playernum_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00c6;
		}
	}
	{
		// if(RSP == "R") {player2.inputRSP = 0;}
		String_t* L_11 = __this->___RSP_8;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		if (!L_12)
		{
			goto IL_008a;
		}
	}
	{
		// if(RSP == "R") {player2.inputRSP = 0;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = __this->___player2_7;
		NullCheck(L_13);
		L_13->___inputRSP_14 = 0;
	}

IL_008a:
	{
		// if(RSP == "S") {player2.inputRSP = 1;}
		String_t* L_14 = __this->___RSP_8;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		// if(RSP == "S") {player2.inputRSP = 1;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player2_7;
		NullCheck(L_16);
		L_16->___inputRSP_14 = 1;
	}

IL_00a8:
	{
		// if(RSP == "P") {player2.inputRSP = 2;}
		String_t* L_17 = __this->___RSP_8;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, NULL);
		if (!L_18)
		{
			goto IL_00c6;
		}
	}
	{
		// if(RSP == "P") {player2.inputRSP = 2;}
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = __this->___player2_7;
		NullCheck(L_19);
		L_19->___inputRSP_14 = 2;
	}

IL_00c6:
	{
		// mat.color = new Color(1f, 1f, 0f, 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___mat_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_21), (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m6CC103D3CBE7ABCDC685DCC02F320D62DCC05D16 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
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
// System.Void Toggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Start_m61FDC95CA2526858FEB07D7EB337DCCC4C271FE0 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = GameObject.Find("Manager").GetComponent<Manager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F, NULL);
		NullCheck(L_0);
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_1;
		L_1 = GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E(L_0, GameObject_GetComponent_TisManager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40_m9CA6F6BB59A9F079999881EEC2A4402D513C9A4E_RuntimeMethod_var);
		__this->___manager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_4), (void*)L_1);
		// textMesh = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textMesh_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_5), (void*)L_2);
		// mat = textMesh.fontMaterial;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___textMesh_5;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_3, NULL);
		__this->___mat_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_4);
		// }
		return;
	}
}
// System.Void Toggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Update_mFB0CB8F24EF84B4FEE45BF31433D32B0465E7A0D (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1226D825A53F2D336D826BA126EAD94B50AC7729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD221513ADC158B20268677A0827129111F5302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB5DA161E12FD4DDD8B95A2C3CDB17B7ACBA4467);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(manager.gameState == "notStarted" || manager.gameState == "getEnded") {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___gameState_25;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral6F83400AA182B962755634A99C51A41D0426ECBC, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_3 = __this->___manager_4;
		NullCheck(L_3);
		String_t* L_4 = L_3->___gameState_25;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral8DD221513ADC158B20268677A0827129111F5302, NULL);
		if (!L_5)
		{
			goto IL_00d0;
		}
	}

IL_0031:
	{
		// backobject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___backobject_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// if(manager.touchMod) {
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_7 = __this->___manager_4;
		NullCheck(L_7);
		bool L_8 = L_7->___touchMod_22;
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		// textMesh.text = "Touch Mode: ON";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___textMesh_5;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, _stringLiteral1226D825A53F2D336D826BA126EAD94B50AC7729);
		// mat.color = new Color(1f, 1f, 0f, 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___mat_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
		goto IL_00b4;
	}

IL_0080:
	{
		// textMesh.text = "Touch Mode: OFF";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___textMesh_5;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, _stringLiteralCB5DA161E12FD4DDD8B95A2C3CDB17B7ACBA4467);
		// mat.color = new Color(1f, 1f, 1f, 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___mat_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_14), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_13, L_14, NULL);
	}

IL_00b4:
	{
		// mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___mat_6;
		il2cpp_codegen_runtime_class_init_inline(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var);
		int32_t L_16 = ((ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_StaticFields*)il2cpp_codegen_static_fields_for(ShaderUtilities_t9BE0345DF949745FC0EB9A1119E204F2F129298F_il2cpp_TypeInfo_var))->___ID_FaceColor_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___mat_6;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_17, NULL);
		NullCheck(L_15);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_15, L_16, L_18, NULL);
		return;
	}

IL_00d0:
	{
		// backobject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___backobject_7;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Toggle::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_OnPointerDown_m6714DE5730103ECA563E2A26AC53791681217970 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if(manager.touchMod) {manager.touchMod = false;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_0 = __this->___manager_4;
		NullCheck(L_0);
		bool L_1 = L_0->___touchMod_22;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if(manager.touchMod) {manager.touchMod = false;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_2 = __this->___manager_4;
		NullCheck(L_2);
		L_2->___touchMod_22 = (bool)0;
		return;
	}

IL_001a:
	{
		// else {manager.touchMod = true;}
		Manager_t284418B3970F0169BE687FF1F4E8EB6EA614FE40* L_3 = __this->___manager_4;
		NullCheck(L_3);
		L_3->___touchMod_22 = (bool)1;
		// }
		return;
	}
}
// System.Void Toggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle__ctor_m2215E96AA142273E39F68756308609BDDD81FD7F (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_H;
		float L_1 = ___1_S;
		float L_2 = ___2_V;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
