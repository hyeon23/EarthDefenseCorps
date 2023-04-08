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
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2;
// System.Collections.Generic.List`1<ItemSlot>
struct List_1_t9DA3FFA46FDA1524C264A730E5E78F4181BEA59F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Spawn>
struct List_1_tEF50670EFC3C1FB151C7C00DCDDB943FBC7FE2D5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
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
// AlienBullet
struct AlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76;
// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InGameTextViewer
struct InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104;
// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// ItemSlot
struct ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OneToOneBlock
struct OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4;
// LayerLab.Panel
struct Panel_t39E58C3B2AEBA31298D633525105C9DEB1A30351;
// LayerLab.PanelControl
struct PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerTrigger
struct PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Setting
struct Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB;
// SheldTrigger
struct SheldTrigger_t5785513A3BC91D53F93ADF7046AB4E987A4D7C9E;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WeaponTrigger
struct WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// DamageText/<OndamageTextHUD>d__3
struct U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC;
// InGameTextViewer/<BackHpMove>d__59
struct U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753;
// InGameTextViewer/<Count>d__62
struct U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF;
// InGameTextViewer/<FadeInImage2>d__56
struct U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6;
// InGameTextViewer/<FadeInImage>d__55
struct U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81;
// InGameTextViewer/<FadeInOutText>d__51
struct U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8;
// InGameTextViewer/<PhaseSliderInit>d__54
struct U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC;
// InGameTextViewer/<SliderInit>d__53
struct U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C;
// MainMenuController/<Count>d__93
struct U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64;
// MainMenuController/<Producing10Items>d__110
struct U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02;
// MainMenuController/<Producing1Item>d__109
struct U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD;
// MainMenuController/<StageChange>d__88
struct U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerTrigger/<OnHit>d__6
struct U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemGrade_t234E84B9CACC4AE7ECB2CBE9ED044027817401AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemPart_tAE2C2913F4BB6BBAD5408C6338EA0684E6264A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E77CB0168359B72E4FFC698C5DA280AD6A36F7;
IL2CPP_EXTERN_C String_t* _stringLiteral11D172ACFCF65C3533AD27B831DBDE3D70B8489A;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF4040A74BAC6B4B4262221B46CE48440E72254;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2999D0E9B7ACFD4AFBABCB61E5261B0D6B389C27;
IL2CPP_EXTERN_C String_t* _stringLiteral2AFCFA469D9E9B05DD101B493B978A7D323F5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8D454EEF3C638CD470F954BC0365DFB07DF99B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C89E0E6C71858513C2D6CC627BA6F2D4C59888C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E;
IL2CPP_EXTERN_C String_t* _stringLiteral49D6A1E4FD7369239CC9C2E97AF3E348201236F7;
IL2CPP_EXTERN_C String_t* _stringLiteral4BA87348510A6A556B0DD59CC080C132391D7FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral59E37ADCADDF40F8342E35FE9ACF8CE1C318A91B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B0C4AE08CDDA0D6A0BA2F297548F9E67A74B5BC;
IL2CPP_EXTERN_C String_t* _stringLiteral612C3797426144C3C776DE00617309EF6A458B06;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFA3770603336B2860584DBA4C555C56EE38594;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral94B1BB277FF9F94713ADB3CFD1C29E5782C7B6E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA873A0460DED28D1367F59EFEA91F369FE079CB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB51DDB21688F4005D861074599149BF2D1D7950E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7FDA4B00FFAF33CD005F4F788354A8C96B192D9;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFCD617DE9690D3AFD4DBBC582E5AC81D05C34C;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C3ECD6ABAED80CFDD541F98FFA48A5A32AC879;
IL2CPP_EXTERN_C String_t* _stringLiteralE57705162D6E07BD4AEC9FFF595192CE4F2F7EE7;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C;
IL2CPP_EXTERN_C String_t* _stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralF980C87A63E44F91701F121A964D4F9FDB6E5A7E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0_m0E5DEC3E61EAECEFA494D2A04C71AE099B246664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBackHpMoveU3Ed__59_System_Collections_IEnumerator_Reset_mC1B17C9F8D06B8EDE2040A633A089F4EAC3CD946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountU3Ed__62_System_Collections_IEnumerator_Reset_mB861E5C0F809CDB89A6035DB136937FCF3344059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountU3Ed__93_System_Collections_IEnumerator_Reset_mFB2BE75167BDE30EEBFFF6B7CA342CD473DDB679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInImage2U3Ed__56_System_Collections_IEnumerator_Reset_mCF3B1F0C61F063982AC8135527461F9A43ECCCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInImageU3Ed__55_System_Collections_IEnumerator_Reset_m49B573F7BCF5133821E42244F2303D84308A032F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInOutTextU3Ed__51_System_Collections_IEnumerator_Reset_mACFB3BD4644392B787FAF202A07CF4FF3D6C3E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnHitU3Ed__6_System_Collections_IEnumerator_Reset_mBD6036D5A505C16C972DD8E7AFCDA00EBDE31FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COndamageTextHUDU3Ed__3_System_Collections_IEnumerator_Reset_m8D6CB9E3EA56BF28189EF722DC263FE2F0652CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPhaseSliderInitU3Ed__54_System_Collections_IEnumerator_Reset_mCB75988763D82868E5E61AA8F7BF87AD804E3EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProducing10ItemsU3Ed__110_System_Collections_IEnumerator_Reset_mE39B8B1EC586DC701E76E5B21ACE1C91A5D680E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProducing1ItemU3Ed__109_System_Collections_IEnumerator_Reset_m80EFDE77F988616AF1507392808B7E7D5B9D162F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSliderInitU3Ed__53_System_Collections_IEnumerator_Reset_mF61FEB408A5C2E6C70BACC5259936A01EF9A98AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStageChangeU3Ed__88_System_Collections_IEnumerator_Reset_m17F9BCE9D7ABA2887FD1FC6DAA66AF4862FCC8B5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public RuntimeObject
{
	// Item/ItemPart Item::itemPart
	int32_t ___itemPart_0;
	// Item/ItemGrade Item::itemGrade
	int32_t ___itemGrade_1;
	// System.Boolean Item::isEquipped
	bool ___isEquipped_2;
	// System.Int32 Item::itemID
	int32_t ___itemID_3;
	// System.String Item::itemName
	String_t* ___itemName_4;
	// System.String Item::itemDesc
	String_t* ___itemDesc_5;
	// UnityEngine.Sprite Item::itemImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___itemImage_6;
	// System.Int32 Item::itemATK
	int32_t ___itemATK_7;
	// System.Single Item::itemCriticalRate
	float ___itemCriticalRate_8;
	// System.Single Item::itemCriticalDamage
	float ___itemCriticalDamage_9;
	// System.Single Item::itemHP
	float ___itemHP_10;
	// System.Single Item::itemSheldGager
	float ___itemSheldGager_11;
	// System.Single Item::itemSpecialMoveGager
	float ___itemSpecialMoveGager_12;
	// System.Int32 Item::itemCurLevel
	int32_t ___itemCurLevel_13;
	// System.Int32 Item::itemMaxLevel
	int32_t ___itemMaxLevel_14;
	// System.Int32 Item::itemPrice
	int32_t ___itemPrice_15;
	// System.Int32 Item::itemUpgradeCost
	int32_t ___itemUpgradeCost_16;
	// System.Int32 Item::itemDrawingWeight
	int32_t ___itemDrawingWeight_17;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// InGameTextViewer/<BackHpMove>d__59
struct U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<BackHpMove>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<BackHpMove>d__59::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<BackHpMove>d__59::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Int32 InGameTextViewer/<BackHpMove>d__59::index
	int32_t ___index_3;
};

// InGameTextViewer/<Count>d__62
struct U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<Count>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<Count>d__62::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI InGameTextViewer/<Count>d__62::_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____text_2;
	// System.Int32 InGameTextViewer/<Count>d__62::_current
	int32_t ____current_3;
	// System.Int32 InGameTextViewer/<Count>d__62::_target
	int32_t ____target_4;
	// System.Single InGameTextViewer/<Count>d__62::<start>5__2
	float ___U3CstartU3E5__2_5;
	// System.Single InGameTextViewer/<Count>d__62::<end>5__3
	float ___U3CendU3E5__3_6;
	// System.Single InGameTextViewer/<Count>d__62::<percent>5__4
	float ___U3CpercentU3E5__4_7;
};

// InGameTextViewer/<FadeInImage2>d__56
struct U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<FadeInImage2>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<FadeInImage2>d__56::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Image InGameTextViewer/<FadeInImage2>d__56::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_2;
	// System.Single InGameTextViewer/<FadeInImage2>d__56::<curPos>5__2
	float ___U3CcurPosU3E5__2_3;
	// System.Single InGameTextViewer/<FadeInImage2>d__56::<maxPos>5__3
	float ___U3CmaxPosU3E5__3_4;
	// System.Single InGameTextViewer/<FadeInImage2>d__56::<percent>5__4
	float ___U3CpercentU3E5__4_5;
};

// InGameTextViewer/<FadeInImage>d__55
struct U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<FadeInImage>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<FadeInImage>d__55::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Image InGameTextViewer/<FadeInImage>d__55::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_2;
	// System.Single InGameTextViewer/<FadeInImage>d__55::<curPos>5__2
	float ___U3CcurPosU3E5__2_3;
	// System.Single InGameTextViewer/<FadeInImage>d__55::<maxPos>5__3
	float ___U3CmaxPosU3E5__3_4;
	// System.Single InGameTextViewer/<FadeInImage>d__55::<percent>5__4
	float ___U3CpercentU3E5__4_5;
};

// InGameTextViewer/<FadeInOutText>d__51
struct U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<FadeInOutText>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<FadeInOutText>d__51::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<FadeInOutText>d__51::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Single InGameTextViewer/<FadeInOutText>d__51::<curPos>5__2
	float ___U3CcurPosU3E5__2_3;
	// System.Single InGameTextViewer/<FadeInOutText>d__51::<maxPos>5__3
	float ___U3CmaxPosU3E5__3_4;
	// System.Single InGameTextViewer/<FadeInOutText>d__51::<percent>5__4
	float ___U3CpercentU3E5__4_5;
};

// InGameTextViewer/<PhaseSliderInit>d__54
struct U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<PhaseSliderInit>d__54::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<PhaseSliderInit>d__54::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single InGameTextViewer/<PhaseSliderInit>d__54::curValue
	float ___curValue_2;
	// System.Single InGameTextViewer/<PhaseSliderInit>d__54::maxValue
	float ___maxValue_3;
	// UnityEngine.UI.Slider InGameTextViewer/<PhaseSliderInit>d__54::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// InGameTextViewer InGameTextViewer/<PhaseSliderInit>d__54::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_5;
};

// InGameTextViewer/<SliderInit>d__53
struct U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<SliderInit>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<SliderInit>d__53::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__53::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_2;
	// System.Single InGameTextViewer/<SliderInit>d__53::curValue
	float ___curValue_3;
	// System.Single InGameTextViewer/<SliderInit>d__53::maxValue
	float ___maxValue_4;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__53::sliderShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderShadow_5;
	// InGameTextViewer InGameTextViewer/<SliderInit>d__53::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_6;
	// System.Int32 InGameTextViewer/<SliderInit>d__53::index
	int32_t ___index_7;
};

// MainMenuController/<Count>d__93
struct U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64  : public RuntimeObject
{
	// System.Int32 MainMenuController/<Count>d__93::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenuController/<Count>d__93::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.TextMeshProUGUI MainMenuController/<Count>d__93::_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____text_2;
	// System.Int32 MainMenuController/<Count>d__93::_current
	int32_t ____current_3;
	// System.Int32 MainMenuController/<Count>d__93::_target
	int32_t ____target_4;
	// System.Single MainMenuController/<Count>d__93::<start>5__2
	float ___U3CstartU3E5__2_5;
	// System.Single MainMenuController/<Count>d__93::<end>5__3
	float ___U3CendU3E5__3_6;
	// System.Single MainMenuController/<Count>d__93::<percent>5__4
	float ___U3CpercentU3E5__4_7;
};

// MainMenuController/<Producing10Items>d__110
struct U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02  : public RuntimeObject
{
	// System.Int32 MainMenuController/<Producing10Items>d__110::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenuController/<Producing10Items>d__110::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainMenuController MainMenuController/<Producing10Items>d__110::<>4__this
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Item> MainMenuController/<Producing10Items>d__110::items
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___items_3;
	// System.Int32 MainMenuController/<Producing10Items>d__110::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// MainMenuController/<Producing1Item>d__109
struct U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD  : public RuntimeObject
{
	// System.Int32 MainMenuController/<Producing1Item>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenuController/<Producing1Item>d__109::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainMenuController MainMenuController/<Producing1Item>d__109::<>4__this
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* ___U3CU3E4__this_2;
	// Item MainMenuController/<Producing1Item>d__109::item
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item_3;
};

// MainMenuController/<StageChange>d__88
struct U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6  : public RuntimeObject
{
	// System.Int32 MainMenuController/<StageChange>d__88::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenuController/<StageChange>d__88::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainMenuController MainMenuController/<StageChange>d__88::<>4__this
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* ___U3CU3E4__this_2;
};

// PlayerTrigger/<OnHit>d__6
struct U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368  : public RuntimeObject
{
	// System.Int32 PlayerTrigger/<OnHit>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerTrigger/<OnHit>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlayerTrigger/<OnHit>d__6::damage
	float ___damage_2;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// DamageText/<OndamageTextHUD>d__3
struct U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC  : public RuntimeObject
{
	// System.Int32 DamageText/<OndamageTextHUD>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DamageText/<OndamageTextHUD>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DamageText DamageText/<OndamageTextHUD>d__3::<>4__this
	DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* ___U3CU3E4__this_2;
	// UnityEngine.Vector2 DamageText/<OndamageTextHUD>d__3::onHitPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___onHitPosition_3;
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

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// AlienBullet
struct AlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AlienBullet::enemyBulletObj_1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyBulletObj_1_4;
	// UnityEngine.GameObject AlienBullet::enemyBulletObj_2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyBulletObj_2_5;
	// System.Single AlienBullet::curHp
	float ___curHp_6;
	// System.Single AlienBullet::maxHp
	float ___maxHp_7;
	// System.Single AlienBullet::dmg
	float ___dmg_8;
	// System.Boolean AlienBullet::isRotate
	bool ___isRotate_9;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI DamageText::damageTextHUD
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageTextHUD_4;
};

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DataManager::playerATK
	int32_t ___playerATK_5;
	// System.Single DataManager::playerHP
	float ___playerHP_6;
	// System.Single DataManager::playerShledGage
	float ___playerShledGage_7;
	// System.Single DataManager::playerSpecialMoveGage
	float ___playerSpecialMoveGage_8;
	// System.Single DataManager::playerCriticalRate
	float ___playerCriticalRate_9;
	// System.Single DataManager::playerCriticalDamage
	float ___playerCriticalDamage_10;
	// System.Single DataManager::curHp
	float ___curHp_11;
	// System.Single DataManager::curSheldGage
	float ___curSheldGage_12;
	// System.Single DataManager::curSpecialMoveGage
	float ___curSpecialMoveGage_13;
	// System.Int32 DataManager::playerZam
	int32_t ___playerZam_14;
	// System.Int32 DataManager::playerGold
	int32_t ___playerGold_15;
	// Item DataManager::curEquippedWeapon
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedWeapon_16;
	// Item DataManager::curEquippedGloves
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedGloves_17;
	// Item DataManager::curEquippedShoes
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedShoes_18;
	// Item DataManager::curEquippedSheld
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedSheld_19;
	// Item DataManager::curEquippedHelmat
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedHelmat_20;
	// Item DataManager::curEquippedArmor
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curEquippedArmor_21;
	// System.Boolean[] DataManager::isStageClear
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStageClear_22;
	// System.Int32 DataManager::curStage
	int32_t ___curStage_23;
	// System.Boolean DataManager::isBGMOn
	bool ___isBGMOn_24;
	// System.Boolean DataManager::isSFXOn
	bool ___isSFXOn_25;
	// System.Collections.Generic.List`1<Item> DataManager::playerItems
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___playerItems_26;
	// System.Collections.Generic.List`1<Item> DataManager::items
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___items_27;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyType Enemy::enemyType
	int32_t ___enemyType_4;
	// System.String Enemy::enemyName
	String_t* ___enemyName_5;
	// System.Single Enemy::curHp
	float ___curHp_6;
	// System.Single Enemy::maxHp
	float ___maxHp_7;
	// System.Single Enemy::dmg
	float ___dmg_8;
	// System.Int32 Enemy::gold
	int32_t ___gold_9;
	// UnityEngine.GameObject Enemy::ancestorGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ancestorGameObject_10;
	// UnityEngine.Rigidbody2D Enemy::parentRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___parentRigid_11;
	// UnityEngine.GameObject Enemy::parentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentGameObject_12;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::curHitEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___curHitEnemy_5;
	// System.Int32 GameManager::curDeadEnemyCount
	int32_t ___curDeadEnemyCount_6;
	// System.Int32 GameManager::curKillEnemyCount
	int32_t ___curKillEnemyCount_7;
	// System.Int32 GameManager::curLiveEnemyCount
	int32_t ___curLiveEnemyCount_8;
	// System.Int32 GameManager::totalEnemyCount
	int32_t ___totalEnemyCount_9;
	// System.Int32 GameManager::score
	int32_t ___score_10;
	// System.Int32 GameManager::combo
	int32_t ___combo_11;
	// System.Int32 GameManager::gold
	int32_t ___gold_12;
	// UnityEngine.Transform GameManager::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_13;
};

// InGameTextViewer
struct InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean[] InGameTextViewer::backGageHit
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___backGageHit_5;
	// UnityEngine.UI.Slider InGameTextViewer::hpBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpBar_6;
	// UnityEngine.UI.Slider InGameTextViewer::hpBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpBarShadow_7;
	// UnityEngine.UI.Slider InGameTextViewer::sheldBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sheldBar_8;
	// UnityEngine.UI.Slider InGameTextViewer::sheldBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sheldBarShadow_9;
	// UnityEngine.UI.Slider InGameTextViewer::specialMoveBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___specialMoveBar_10;
	// UnityEngine.UI.Slider InGameTextViewer::specialMoveBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___specialMoveBarShadow_11;
	// UnityEngine.GameObject InGameTextViewer::enemyHpGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyHpGroup_12;
	// UnityEngine.UI.Slider InGameTextViewer::enemyHpBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___enemyHpBar_13;
	// UnityEngine.UI.Slider InGameTextViewer::enemyHpBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___enemyHpBarShadow_14;
	// UnityEngine.UI.Image InGameTextViewer::enemyTypeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___enemyTypeImage_15;
	// TMPro.TextMeshProUGUI InGameTextViewer::curAndMaxEnemyHpText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___curAndMaxEnemyHpText_16;
	// UnityEngine.UI.Image InGameTextViewer::enemyImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___enemyImage_17;
	// UnityEngine.Sprite InGameTextViewer::monsterBossImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterBossImage_18;
	// UnityEngine.Sprite InGameTextViewer::monsterEliteImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterEliteImage_19;
	// UnityEngine.Sprite InGameTextViewer::monsterImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterImage_20;
	// UnityEngine.Sprite InGameTextViewer::block1X1Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X1Image_21;
	// UnityEngine.Sprite InGameTextViewer::block1X2Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X2Image_22;
	// UnityEngine.Sprite InGameTextViewer::block1X3Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X3Image_23;
	// System.Single InGameTextViewer::curEnemyHp
	float ___curEnemyHp_24;
	// System.Single InGameTextViewer::maxEnemyHp
	float ___maxEnemyHp_25;
	// System.Boolean InGameTextViewer::enemyGageShown
	bool ___enemyGageShown_26;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboCountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboCountText_27;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboText_28;
	// UnityEngine.Transform InGameTextViewer::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_29;
	// UnityEngine.GameObject InGameTextViewer::comboTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___comboTextPrefab_30;
	// UnityEngine.Animator InGameTextViewer::comboTextAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___comboTextAnimator_31;
	// TMPro.TextMeshProUGUI InGameTextViewer::curDeadEnemyCountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___curDeadEnemyCountText_32;
	// TMPro.TextMeshProUGUI InGameTextViewer::curGetGoldText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___curGetGoldText_33;
	// UnityEngine.Animator InGameTextViewer::PhaseGuideGroupAnime
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PhaseGuideGroupAnime_34;
	// TMPro.TextMeshProUGUI InGameTextViewer::PhaseGuideText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___PhaseGuideText_35;
	// UnityEngine.UI.Image InGameTextViewer::leftPhaseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___leftPhaseImage_36;
	// UnityEngine.UI.Image InGameTextViewer::middlePhaseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___middlePhaseImage_37;
	// UnityEngine.UI.Image InGameTextViewer::rightPhaseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rightPhaseImage_38;
	// UnityEngine.UI.Image InGameTextViewer::leftPhaseChaineseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___leftPhaseChaineseImage_39;
	// UnityEngine.UI.Image InGameTextViewer::middlePhaseChaineseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___middlePhaseChaineseImage_40;
	// UnityEngine.UI.Image InGameTextViewer::rightPhaseChaineseImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rightPhaseChaineseImage_41;
	// UnityEngine.UI.Slider InGameTextViewer::phase1ProgressBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___phase1ProgressBar_42;
	// UnityEngine.UI.Slider InGameTextViewer::phase2ProgressBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___phase2ProgressBar_43;
	// UnityEngine.GameObject InGameTextViewer::gameOverPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverPanel_44;
	// UnityEngine.GameObject InGameTextViewer::stageClearPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stageClearPanel_45;
	// System.Boolean InGameTextViewer::leftPhaseImageTrigger
	bool ___leftPhaseImageTrigger_46;
	// System.Boolean InGameTextViewer::middlePhaseImageTrigger
	bool ___middlePhaseImageTrigger_47;
	// System.Boolean InGameTextViewer::rightPhaseImageTrigger
	bool ___rightPhaseImageTrigger_48;
	// UnityEngine.GameObject InGameTextViewer::settingsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settingsPanel_49;
};

// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Inventory::slotGameObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___slotGameObjects_4;
	// System.Collections.Generic.List`1<ItemSlot> Inventory::slots
	List_1_t9DA3FFA46FDA1524C264A730E5E78F4181BEA59F* ___slots_5;
	// UnityEngine.Transform Inventory::slotParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___slotParent_6;
	// UnityEngine.GameObject Inventory::slotPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slotPrefab_7;
};

// ItemSlot
struct ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item ItemSlot::item
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item_4;
	// UnityEngine.UI.Image ItemSlot::ItemIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ItemIcon_5;
	// UnityEngine.UI.Image ItemSlot::gradeBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___gradeBackground_6;
	// UnityEngine.GameObject ItemSlot::isEquippedImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___isEquippedImage_7;
	// TMPro.TextMeshProUGUI ItemSlot::curLevelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___curLevelText_8;
};

// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI MainMenuController::playerHPText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerHPText_4;
	// TMPro.TextMeshProUGUI MainMenuController::playerZamText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerZamText_5;
	// TMPro.TextMeshProUGUI MainMenuController::playerATKText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerATKText_6;
	// TMPro.TextMeshProUGUI MainMenuController::playerGoldText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerGoldText_7;
	// UnityEngine.Sprite[] MainMenuController::BtnTargetImage
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___BtnTargetImage_8;
	// UnityEngine.Sprite[] MainMenuController::SelectedBtnTargetImage
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___SelectedBtnTargetImage_9;
	// UnityEngine.RectTransform[] MainMenuController::BtnImageRect
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___BtnImageRect_10;
	// System.Int32 MainMenuController::targetIndex
	int32_t ___targetIndex_12;
	// UnityEngine.GameObject[] MainMenuController::MiddlePanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___MiddlePanels_13;
	// UnityEngine.GameObject MainMenuController::StagePlanetPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StagePlanetPanel_14;
	// UnityEngine.GameObject MainMenuController::StageSelectionPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StageSelectionPanel_15;
	// System.String[] MainMenuController::stageNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stageNames_16;
	// UnityEngine.Color[] MainMenuController::stageSymbolicColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___stageSymbolicColors_17;
	// UnityEngine.Sprite[] MainMenuController::stagePlanetSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___stagePlanetSprites_18;
	// UnityEngine.Sprite[] MainMenuController::stagePlanetPressedSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___stagePlanetPressedSprites_19;
	// UnityEngine.UI.Button MainMenuController::StagePlanetButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StagePlanetButton_20;
	// UnityEngine.UI.Button MainMenuController::StageSelectButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageSelectButton_21;
	// UnityEngine.UI.Button MainMenuController::StageSelectedButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageSelectedButton_22;
	// UnityEngine.UI.Button MainMenuController::StageLockedButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageLockedButton_23;
	// UnityEngine.UI.Button MainMenuController::StageGoBackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageGoBackButton_24;
	// TMPro.TextMeshProUGUI MainMenuController::stageNameTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___stageNameTMP_25;
	// TMPro.TextMeshProUGUI MainMenuController::stageNumberTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___stageNumberTMP_26;
	// UnityEngine.UI.Image MainMenuController::gameStartButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___gameStartButtonImage_27;
	// UnityEngine.UI.Image MainMenuController::stageSelectButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stageSelectButtonImage_28;
	// UnityEngine.UI.Image MainMenuController::stageSelectedButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stageSelectedButtonImage_29;
	// UnityEngine.UI.Image MainMenuController::stageLockedButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stageLockedButtonImage_30;
	// UnityEngine.GameObject MainMenuController::Planet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Planet_31;
	// UnityEngine.GameObject MainMenuController::PlanetAxis
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlanetAxis_32;
	// UnityEngine.Animator MainMenuController::PlanetAxisAnime
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PlanetAxisAnime_33;
	// UnityEngine.UI.Button MainMenuController::StageSelectLeftButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageSelectLeftButton_34;
	// UnityEngine.UI.Button MainMenuController::StageSelectRightButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___StageSelectRightButton_35;
	// System.Int32 MainMenuController::curSelectStage
	int32_t ___curSelectStage_36;
	// System.Int32 MainMenuController::maxStageNum
	int32_t ___maxStageNum_37;
	// System.Int32 MainMenuController::minStageNum
	int32_t ___minStageNum_38;
	// System.Boolean MainMenuController::isStageChanging
	bool ___isStageChanging_39;
	// UnityEngine.GameObject MainMenuController::equipmentInfoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___equipmentInfoPanel_40;
	// UnityEngine.UI.Image MainMenuController::equipTopNameImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___equipTopNameImage_41;
	// TMPro.TextMeshProUGUI MainMenuController::equipNameTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipNameTMP_42;
	// UnityEngine.UI.Image MainMenuController::equipTopGradeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___equipTopGradeImage_43;
	// TMPro.TextMeshProUGUI MainMenuController::equipTopGradeTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipTopGradeTMP_44;
	// UnityEngine.UI.Image MainMenuController::equipGradeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___equipGradeImage_45;
	// UnityEngine.UI.Image MainMenuController::equipImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___equipImage_46;
	// TMPro.TextMeshProUGUI MainMenuController::equipLevelTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipLevelTMP_47;
	// TMPro.TextMeshProUGUI MainMenuController::statTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___statTMP_48;
	// TMPro.TextMeshProUGUI MainMenuController::equipStatTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipStatTMP_49;
	// TMPro.TextMeshProUGUI MainMenuController::equipPartTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipPartTMP_50;
	// TMPro.TextMeshProUGUI MainMenuController::equipDescTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipDescTMP_51;
	// TMPro.TextMeshProUGUI MainMenuController::equipUpgradeCostTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipUpgradeCostTMP_52;
	// UnityEngine.UI.Image MainMenuController::equipButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___equipButtonImage_53;
	// TMPro.TextMeshProUGUI MainMenuController::equipButtonTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___equipButtonTMP_54;
	// UnityEngine.UI.Button MainMenuController::equipButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___equipButton_55;
	// UnityEngine.UI.Button MainMenuController::unEquipButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___unEquipButton_56;
	// Item MainMenuController::curSelectedItem
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___curSelectedItem_57;
	// UnityEngine.Animator MainMenuController::popUpAnime
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___popUpAnime_58;
	// TMPro.TextMeshProUGUI MainMenuController::PopUpTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___PopUpTMP_59;
	// Inventory MainMenuController::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_61;
	// UnityEngine.ParticleSystem[] MainMenuController::GoldAttracters
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___GoldAttracters_62;
	// UnityEngine.ParticleSystem[] MainMenuController::ZamAttracters
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___ZamAttracters_63;
	// UnityEngine.GameObject MainMenuController::drawing1ResultPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawing1ResultPanel_64;
	// UnityEngine.GameObject MainMenuController::drawing10ResultPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawing10ResultPanel_65;
	// UnityEngine.GameObject MainMenuController::drawing1SetActiveGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawing1SetActiveGroup_66;
	// UnityEngine.GameObject MainMenuController::drawing10SetActiveGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawing10SetActiveGroup_67;
	// TMPro.TextMeshProUGUI MainMenuController::DRItemGradeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___DRItemGradeText_68;
	// TMPro.TextMeshProUGUI MainMenuController::DRItemNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___DRItemNameText_69;
	// UnityEngine.GameObject MainMenuController::ProducingSlotPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ProducingSlotPrefab_70;
	// UnityEngine.Transform MainMenuController::drawing1SlotParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawing1SlotParent_71;
	// UnityEngine.Transform MainMenuController::drawing10SlotParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawing10SlotParent_72;
	// UnityEngine.GameObject MainMenuController::settingsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settingsPanel_73;
	// TMPro.TextMeshProUGUI MainMenuController::BGMOnToggleTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___BGMOnToggleTMP_74;
	// TMPro.TextMeshProUGUI MainMenuController::BGMOffToggleTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___BGMOffToggleTMP_75;
	// UnityEngine.UI.Toggle MainMenuController::BGMToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___BGMToggle_76;
	// TMPro.TextMeshProUGUI MainMenuController::SFXOnToggleTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SFXOnToggleTMP_77;
	// TMPro.TextMeshProUGUI MainMenuController::SFXOffToggleTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SFXOffToggleTMP_78;
	// UnityEngine.UI.Toggle MainMenuController::SFXToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___SFXToggle_79;
};

// LayerLab.Panel
struct Panel_t39E58C3B2AEBA31298D633525105C9DEB1A30351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LayerLab.Panel::otherPanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___otherPanels_4;
};

// LayerLab.PanelControl
struct PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LayerLab.PanelControl::page
	int32_t ___page_4;
	// System.Boolean LayerLab.PanelControl::isReady
	bool ___isReady_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.PanelControl::panels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panels_6;
	// TMPro.TextMeshProUGUI LayerLab.PanelControl::textTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textTitle_7;
	// UnityEngine.Transform LayerLab.PanelControl::panelTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransform_8;
	// UnityEngine.UI.Button LayerLab.PanelControl::buttonPrev
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrev_9;
	// UnityEngine.UI.Button LayerLab.PanelControl::buttonNext
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonNext_10;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerState PlayerController::playerState
	int32_t ___playerState_4;
	// UnityEngine.Transform[] PlayerController::playerPos
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___playerPos_5;
	// System.Single PlayerController::swipeSensitivity
	float ___swipeSensitivity_6;
	// System.Boolean PlayerController::isDead
	bool ___isDead_7;
	// System.Boolean PlayerController::isJump
	bool ___isJump_8;
	// System.Boolean PlayerController::isSheld
	bool ___isSheld_9;
	// System.Boolean PlayerController::isSpecial
	bool ___isSpecial_10;
	// System.Boolean PlayerController::isCrushed
	bool ___isCrushed_11;
	// System.Boolean PlayerController::isOverlapped
	bool ___isOverlapped_12;
	// System.Boolean PlayerController::parryingSheld
	bool ___parryingSheld_13;
	// UnityEngine.Animator PlayerController::anime
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anime_14;
	// System.Int32 PlayerController::positionIndex
	int32_t ___positionIndex_15;
	// UnityEngine.Vector2 PlayerController::touchDif
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchDif_16;
	// UnityEngine.Vector2 PlayerController::touchBeganPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchBeganPos_17;
	// UnityEngine.Vector2 PlayerController::touchEndedPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchEndedPos_18;
	// UnityEngine.Rigidbody2D PlayerController::parentRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___parentRigid_19;
	// UnityEngine.Transform PlayerController::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_20;
	// System.Int32 PlayerController::atkOrder
	int32_t ___atkOrder_21;
	// UnityEngine.GameObject PlayerController::specialAxis
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___specialAxis_22;
	// UnityEngine.Collider2D PlayerController::specialTrigger
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___specialTrigger_23;
	// UnityEngine.GameObject PlayerController::specialAfterEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___specialAfterEffect_24;
	// System.Single PlayerController::timer
	float ___timer_26;
};

// PlayerTrigger
struct PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Setting
struct Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SheldTrigger
struct SheldTrigger_t5785513A3BC91D53F93ADF7046AB4E987A4D7C9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SoundManager/SMType SoundManager::smType
	int32_t ___smType_5;
	// UnityEngine.AudioSource SoundManager::bgmPlayer
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmPlayer_6;
	// UnityEngine.AudioSource[] SoundManager::sfxPlayer
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___sfxPlayer_7;
	// UnityEngine.AudioClip[] SoundManager::sfxClip
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxClip_8;
	// System.Int32 SoundManager::sfxCursor
	int32_t ___sfxCursor_9;
};

// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SpawnManager::stage
	int32_t ___stage_5;
	// UnityEngine.GameObject[] SpawnManager::enemyObjs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyObjs_6;
	// UnityEngine.Transform[] SpawnManager::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_7;
	// System.Single SpawnManager::nextSpawnDelay
	float ___nextSpawnDelay_8;
	// System.Single SpawnManager::curSpawnDelay
	float ___curSpawnDelay_9;
	// System.Collections.Generic.List`1<Spawn> SpawnManager::spawnList
	List_1_tEF50670EFC3C1FB151C7C00DCDDB943FBC7FE2D5* ___spawnList_10;
	// System.Int32 SpawnManager::spawnIndex
	int32_t ___spawnIndex_11;
	// System.Boolean SpawnManager::spawnEnd
	bool ___spawnEnd_12;
	// System.Int32 SpawnManager::phase1Num
	int32_t ___phase1Num_13;
	// System.Int32 SpawnManager::phase2Num
	int32_t ___phase2Num_14;
	// System.Int32 SpawnManager::phase3Num
	int32_t ___phase3Num_15;
	// System.Int32 SpawnManager::curStageTotalNum
	int32_t ___curStageTotalNum_16;
};

// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Switch::on
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___on_4;
	// UnityEngine.UI.Image Switch::off
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___off_5;
	// UnityEngine.UI.Image Switch::img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___img_6;
	// System.Int32 Switch::index
	int32_t ___index_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WeaponTrigger
struct WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Block
struct Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// System.Int32 Block::mass
	int32_t ___mass_13;
	// System.Int32 Block::gravity
	int32_t ___gravity_14;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// OneToOneBlock
struct OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4  : public Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7
{
	// System.Boolean OneToOneBlock::isCrushedPlayer
	bool ___isCrushedPlayer_15;
	// System.Boolean OneToOneBlock::isOverlappedPlayer
	bool ___isOverlappedPlayer_16;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Item>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Item

// Item

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// InGameTextViewer/<BackHpMove>d__59

// InGameTextViewer/<BackHpMove>d__59

// InGameTextViewer/<Count>d__62

// InGameTextViewer/<Count>d__62

// InGameTextViewer/<FadeInImage2>d__56

// InGameTextViewer/<FadeInImage2>d__56

// InGameTextViewer/<FadeInImage>d__55

// InGameTextViewer/<FadeInImage>d__55

// InGameTextViewer/<FadeInOutText>d__51

// InGameTextViewer/<FadeInOutText>d__51

// InGameTextViewer/<PhaseSliderInit>d__54

// InGameTextViewer/<PhaseSliderInit>d__54

// InGameTextViewer/<SliderInit>d__53

// InGameTextViewer/<SliderInit>d__53

// MainMenuController/<Count>d__93

// MainMenuController/<Count>d__93

// MainMenuController/<Producing10Items>d__110

// MainMenuController/<Producing10Items>d__110

// MainMenuController/<Producing1Item>d__109

// MainMenuController/<Producing1Item>d__109

// MainMenuController/<StageChange>d__88

// MainMenuController/<StageChange>d__88

// PlayerTrigger/<OnHit>d__6

// PlayerTrigger/<OnHit>d__6

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::12614B306BEE9E80A4A244501AAE78888A585F8DFCA6CBC461101E03E17EA2CC
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___12614B306BEE9E80A4A244501AAE78888A585F8DFCA6CBC461101E03E17EA2CC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::38B48924DEDB20D770C26E0F6CAA6594D5AE7E0F21863568793B3991547AE82C
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___38B48924DEDB20D770C26E0F6CAA6594D5AE7E0F21863568793B3991547AE82C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::477D27BDD9A1CD5F1C17D12EAF30C7B6A2C0CD7DCBE989CD7CC8B30950D7705F
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___477D27BDD9A1CD5F1C17D12EAF30C7B6A2C0CD7DCBE989CD7CC8B30950D7705F_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::90585B90279F1973B3C5B7A85B4844289BB0FE4FE63C3BC76EDE447FB17B6BAC
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___90585B90279F1973B3C5B7A85B4844289BB0FE4FE63C3BC76EDE447FB17B6BAC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::A2D5E584579F3D27124F6B26903C07B2EA01B79A923D2C67752B893E69520BB5
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___A2D5E584579F3D27124F6B26903C07B2EA01B79A923D2C67752B893E69520BB5_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BFC640D3FB958B797ECCC40932B5FB7FC5C029EEFC77C1483F3D128B22E26750
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___BFC640D3FB958B797ECCC40932B5FB7FC5C029EEFC77C1483F3D128B22E26750_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FBB5CCCB5806B69D6F2A0C80E5CE65650ACE5DC548153E819CF8E89F3BEAE645
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___FBB5CCCB5806B69D6F2A0C80E5CE65650ACE5DC548153E819CF8E89F3BEAE645_10;
};

// <PrivateImplementationDetails>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// DamageText/<OndamageTextHUD>d__3

// DamageText/<OndamageTextHUD>d__3

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.Collider2D

// UnityEngine.Collider2D

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

// AlienBullet

// AlienBullet

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// DamageText

// DamageText

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields
{
	// DataManager DataManager::instance
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* ___instance_4;
};

// DataManager

// Enemy

// Enemy

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GameManager

// InGameTextViewer
struct InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields
{
	// InGameTextViewer InGameTextViewer::instance
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___instance_4;
};

// InGameTextViewer

// Inventory

// Inventory

// ItemSlot

// ItemSlot

// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields
{
	// MainMenuController MainMenuController::instance
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* ___instance_60;
};

// MainMenuController

// LayerLab.Panel

// LayerLab.Panel

// LayerLab.PanelControl

// LayerLab.PanelControl

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// PlayerController PlayerController::instance
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___instance_25;
};

// PlayerController

// PlayerTrigger
struct PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields
{
	// PlayerTrigger PlayerTrigger::instance
	PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* ___instance_4;
};

// PlayerTrigger

// Setting

// Setting

// SheldTrigger

// SheldTrigger

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// SoundManager

// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields
{
	// SpawnManager SpawnManager::instance
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___instance_4;
};

// SpawnManager

// Switch

// Switch

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// WeaponTrigger

// WeaponTrigger

// Block

// Block

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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// OneToOneBlock

// OneToOneBlock

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

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
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D  : public RuntimeArray
{
	ALIGN_FIELD (8) RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* m_Items[1];

	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OneToOneBlock>()
inline OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator PlayerTrigger::OnHit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5 (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, float ___0_damage, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AlienBullet>()
inline AlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0* Component_GetComponent_TisAlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0_m0E5DEC3E61EAECEFA494D2A04C71AE099B246664 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// PlayerController PlayerController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerTrigger/<OnHit>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__6__ctor_m8B6ACCD95242744CE059DF6BCC6DA28263012F4F (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// DataManager DataManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single DataManager::get_PlayerSpecialMoveGage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerSpecialMoveGage_mDE359FE1FB368610882ACBEE877D8ED4139742BE_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// SoundManager SoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA (const RuntimeMethod* method) ;
// System.Void SoundManager::SFXPlay(SoundManager/SFX,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, int32_t ___0_sfxType, float ___1_volume, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// InGameTextViewer InGameTextViewer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::FadeInOutText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator DamageText::OndamageTextHUD(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageText_OndamageTextHUD_m93DB6B5D60FF3989B6E2F284F36CCDB780591968 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_onHitPosition, const RuntimeMethod* method) ;
// System.Void DamageText/<OndamageTextHUD>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__3__ctor_mD7A399596AF46778D5049563E7E04DFCA1A5C283 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Single DataManager::get_PlayerHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerHP_mB332B9EF88D362EC269DDE85DD6164C3FC626D2E_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::SliderInit(UnityEngine.UI.Slider,UnityEngine.UI.Slider,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___1_sliderShadow, float ___2_curValue, float ___3_maxValue, int32_t ___4_index, const RuntimeMethod* method) ;
// System.Single DataManager::get_PlayerShledGage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerShledGage_mC0ACAFE6936A963C47CE7DCF5072FA7A287DA320_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// SpawnManager SpawnManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* SpawnManager_get_Instance_m0BC3E4B00F6D984E7581AC75DE0E32B25EDE5FDD (const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::PhaseSliderInit(UnityEngine.UI.Slider,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_PhaseSliderInit_m7A7B7C72BC0D0A251BA56F7C7EBB2D338FD62E53 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, float ___1_curValue, float ___2_maxValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void InGameTextViewer::EnemySliderInitReady(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_boolean, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<FadeInOutText>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__51__ctor_m8B6A3FA1AA4DC2157627C81517DD49F8ABFF605C (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DamageText>()
inline DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DamageText::Play(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Play_m51962EB9CC8AE0AD41D708A72703D41E9127EAAB (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, String_t* ___0_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<SliderInit>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__53__ctor_m9B6CF8A95CF5C1D00630802B87ABE9C9DB40D69B (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<PhaseSliderInit>d__54::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPhaseSliderInitU3Ed__54__ctor_mE343CC83BD5DFF862D3BA996E908D6BB79BD28C4 (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<FadeInImage>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImageU3Ed__55__ctor_m95B676A9EBA5B496361D4740BDF5B2A1EC5B6450 (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<FadeInImage2>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImage2U3Ed__56__ctor_m16B40F33EA9CBFC1E0ED5E3381B3C476E6CD8BED (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::BackHpMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_BackHpMove_m5FF8E27D74D644F3CBF77AD6B141FE7A60874ED0 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<BackHpMove>d__59::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__59__ctor_m79D323C802F01672CD9D3E3E7EEFA2C1AA15ED40 (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<Count>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__62__ctor_m42F0915FBC4306F3D8E3E243B7BAD094DA09E3F2 (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::Count(TMPro.TextMeshProUGUI,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_Count_mF7F968F828663AABC4D9F5CB248C98E5BC011C32 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__text, int32_t ___1__current, int32_t ___2__target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::FadeInImage(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInImage_mAC491F60B9906435D58EAB9B261174F162779C94 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_image, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::FadeInImage2(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInImage2_m50146815A710E1322FFEA38103F14533ACEABF5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_image, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.String MoneyUnitString::GetThousandCommaText(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52 (double ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void MainMenuController::TabClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_TabClick_m4DA1E425E22413B719324E39BD4C9D839DC7914B (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_n, const RuntimeMethod* method) ;
// System.Int32 DataManager::get_PlayerZam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Int32 DataManager::get_PlayerGold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenuController::StageChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_StageChange_mB7071125D4A0190C4C7335031F593703F408052B (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Item>::get_Item(System.Int32)
inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50 (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Inventory::InitItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_InitItem_m8AFB9A95956DD128C83F90406A848AECCEB46765 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Item>::get_Count()
inline int32_t List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 DataManager::get_PlayerATK()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerATK_m8DAD376569096229CD55FA4B2C71DD3647621D35_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RectTransform::get_anchoredPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void DataManager::GameStartDataUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_GameStartDataUpdate_mAB880D6E198A6D26BD8512DA38DB2AC3B0F9699A (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void MainMenuController::TriggerPopUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.SpriteState::set_highlightedSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.SpriteState::set_pressedSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_spriteState_mE0E2CDA8757045FE0D35BC4D9E827857F64E19ED (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MainMenuController::ClearStageSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_curSelectStage, const RuntimeMethod* method) ;
// System.Void MainMenuController/<StageChange>d__88::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStageChangeU3Ed__88__ctor_mC9105C4064E54D25E9FBAC9423EF6791B6873264 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void MainMenuController/<Count>d__93::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__93__ctor_m471FD7DD1DA1163C88235F3A85EFC0AB7EE3BEA3 (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedWeapon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedWeapon_m0D4A90A2547E5507A753BD63878F1CA5B838F630_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedWeapon(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedWeapon_m6A0CF78A5C0A4BD17D13C2442D414E2BEF557673_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedGloves()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedGloves_m1FAFCEB3704916B9644E98403608EF80FD2FF4B1_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedGloves(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedGloves_mFB29A3215264D4348D379954E4273635910A3051_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedShoes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedShoes_m79AC8BE50FED9A73C92D9A8EDBBF1C8AE1DE0B8D_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedShoes(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedShoes_m5D4ABA12B1B34138A882AFD14112F76F7CDA952A_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedSheld()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedSheld_m0FC925590A5A6D6DBB369FB6E90FCBB8A8844DB6_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedSheld(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedSheld_m3C8BC626B2551BADB165C1452417874AFEB3A4D6_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedHelmat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedHelmat_m960B78AC0445651468AA81C3CFAA54708C5A0780_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedHelmat(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedHelmat_m0A7A4DC207B0F77278CDA66BB4D4F2208BDC8A49_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// Item DataManager::get_CurEquippedArmor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedArmor_mAD0C2CC0E3B3A3DC70EBBB3B9A837DF3F5B08C7D_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Void DataManager::set_CurEquippedArmor(Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedArmor_mC42AC58F1FE828B5D6B9B99D42FA9FE8DA5404F4_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) ;
// System.Void DataManager::DataUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_DataUpdate_mE46AB155E95F9AB856C97F78862FC600D6F678D5 (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenuController::Count(TMPro.TextMeshProUGUI,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__text, int32_t ___1__current, int32_t ___2__target, const RuntimeMethod* method) ;
// System.Void DataManager::set_PlayerGold(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_PlayerGold_m94B1D65DA9C762B6405EAF9C7F76F1488F5EB1CC_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void MainMenuController::EquipInfoUpdate(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_EquipInfoUpdate_m33BE37D28C2623A8B1E13967898B4900A9DBDA1C (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) ;
// System.Void Inventory::deleteItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_deleteItem_mB18E19B4D7DD79B2634E58F0F5F3DCEEAAD4BC1E (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void MainMenuController::PlusGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PlusGold_m937B60B4C4D55F2E0805C1C2B44E3A5BB72313E9 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_goldNumber, const RuntimeMethod* method) ;
// System.Void MainMenuController::UnequipButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_UnequipButton_m60A57EEF77CEA6B65BF5362735348C71F1EEDAC0 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) ;
// UnityEngine.Color MainMenuController::SetGradeColorBackground(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::get_isStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isStopped_mA7C920FFBFDBE437FED1D321EF9B568F57A1CDFA (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void MainMenuController::SubtractZam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Item>::Add(T)
inline void List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Item::.ctor(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) ;
// System.Void Inventory::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddItem_m51A0B6069C21273F41FB11D47FE17AEC5FA0A924 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenuController::Producing1Item(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Producing1Item_m5B7F84461A4A87AB7DADF97571BC21FBA85EA503 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenuController::Producing10Items(System.Collections.Generic.List`1<Item>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Producing10Items_m61D99FA2AF7375B62BC024D8AC62E3D1DBEAD091 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___0_items, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void MainMenuController/<Producing1Item>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing1ItemU3Ed__109__ctor_mC273DF6DF0CE43EDA8CC02C85DF0077D991B50A0 (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void MainMenuController/<Producing10Items>d__110::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing10ItemsU3Ed__110__ctor_m26AF4AFA64CDF9DF12E2E98CFF1FCCA6AD8398CF (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SoundManager::BGMMuteOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BGMMuteOnOff_mB054CFB3DD9C58E9CA6A8DA97452B87CF2292DEA (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::SFXMuteOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SFXMuteOnOff_m8815273A04B040AAA50025F9746D17F45635C9F4 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MainMenuController::ShowNonClearStageSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ShowNonClearStageSelected_m396B7AA657734FC98A27CEDB9F5E38D27B0F3DF1 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_curSelectStage, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void MainMenuController::ItemGradeSound(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ItemGradeSound_m07CD657DDC08AEE6107D8AF4BC5DB5AE56B3E030 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ItemSlot>()
inline ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single MainMenuController::ItemGradeSeconds(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainMenuController_ItemGradeSeconds_m0DAB67B4064599FBC382CCE6DE83F3DCE6BFB69D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) ;
// MainMenuController MainMenuController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* MainMenuController_get_Instance_m7EA8C71DD33AF39668149C5D8F6E5B7710DA7111 (const RuntimeMethod* method) ;
// System.Void MainMenuController::BGMSFXInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BGMSFXInit_mFB4A8BA9C0BC962096E5095D02CDD06D47913A87 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void LayerLab.PanelControl::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_CheckControl_m62D25C793FB47FCC3AFBDDDF12B3456784140B03 (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControl::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControl::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControl::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_SetArrowActive_m5A7AE5105D7679F80930D1BD6111B8806C585339 (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerTrigger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger_Awake_mCBB42DD47660D6450DDD6436E8C3521B98344C9B (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* L_0 = ((PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// PlayerTrigger PlayerTrigger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* PlayerTrigger_get_Instance_m78615663D3AF31C726C21C728539B7A0C8780A70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* L_0 = ((PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0*)NULL;
	}

IL_000f:
	{
		// return instance;
		PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* L_2 = ((PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void PlayerTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger_OnTriggerEnter2D_mDE8B841F16A6F809A7E30BC4EFCF7DE79D126BFE (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0_m0E5DEC3E61EAECEFA494D2A04C71AE099B246664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C89E0E6C71858513C2D6CC627BA6F2D4C59888C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF980C87A63E44F91701F121A964D4F9FDB6E5A7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "BlockTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C, NULL);
		if (L_2)
		{
			goto IL_009b;
		}
	}
	{
		// else if (collision.transform.tag == "BlockBullet")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// StartCoroutine(OnHit(collision.GetComponent<OneToOneBlock>().dmg));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		NullCheck(L_7);
		OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* L_8;
		L_8 = Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB(L_7, Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_8)->___dmg_8;
		RuntimeObject* L_10;
		L_10 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		return;
	}

IL_0045:
	{
		// else if (collision.transform.tag == "AlienBullet")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12 = ___0_collision;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF980C87A63E44F91701F121A964D4F9FDB6E5A7E, NULL);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// StartCoroutine(OnHit(collision.GetComponent<AlienBullet>().dmg));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = ___0_collision;
		NullCheck(L_16);
		AlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0* L_17;
		L_17 = Component_GetComponent_TisAlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0_m0E5DEC3E61EAECEFA494D2A04C71AE099B246664(L_16, Component_GetComponent_TisAlienBullet_tE89399C8B32703AECD619D47D8A820914EE1FFA0_m0E5DEC3E61EAECEFA494D2A04C71AE099B246664_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18 = L_17->___dmg_8;
		RuntimeObject* L_19;
		L_19 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, L_18, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		return;
	}

IL_0075:
	{
		// else if (collision.tag == "AssembleTip")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21 = ___0_collision;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral2C89E0E6C71858513C2D6CC627BA6F2D4C59888C, NULL);
		if (!L_23)
		{
			goto IL_009b;
		}
	}
	{
		// PlayerController.Instance.parentRigid.gravityScale = 0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_24;
		L_24 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_24);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = L_24->___parentRigid_19;
		NullCheck(L_25);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_25, (0.0f), NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void PlayerTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger_OnTriggerExit2D_m7A1F02A62CE6B2FF5E64518DF3B4EB88F661736C (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C89E0E6C71858513C2D6CC627BA6F2D4C59888C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "AssembleTip")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral2C89E0E6C71858513C2D6CC627BA6F2D4C59888C, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// PlayerController.Instance.parentRigid.gravityScale = 1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = L_3->___parentRigid_19;
		NullCheck(L_4);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_4, (1.0f), NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerTrigger::OnHit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5 (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, float ___0_damage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* L_0 = (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368*)il2cpp_codegen_object_new(U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnHitU3Ed__6__ctor_m8B6ACCD95242744CE059DF6BCC6DA28263012F4F(L_0, 0, NULL);
		U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* L_1 = L_0;
		float L_2 = ___0_damage;
		NullCheck(L_1);
		L_1->___damage_2 = L_2;
		return L_1;
	}
}
// System.Void PlayerTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger__ctor_mB9B02D7CCE5DB788A0D6CEBE6D6FDADAED2B7F5A (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, const RuntimeMethod* method) 
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
// System.Void PlayerTrigger/<OnHit>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__6__ctor_m8B6ACCD95242744CE059DF6BCC6DA28263012F4F (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerTrigger/<OnHit>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__6_System_IDisposable_Dispose_mB2390148C5E6B7729720D3EDD0D3D5F6B6DC94F1 (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerTrigger/<OnHit>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnHitU3Ed__6_MoveNext_mFFC4ED71AB466D458A2332AE2AE70D4E1C73A65F (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager.Instance.combo = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_3);
		L_3->___combo_11 = 0;
		// if(DataManager.Instance.curHp > 0)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_4;
		L_4 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_4);
		float L_5 = L_4->___curHp_11;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// DataManager.Instance.curHp -= damage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_6;
		L_6 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_7 = L_6;
		NullCheck(L_7);
		float L_8 = L_7->___curHp_11;
		float L_9 = __this->___damage_2;
		NullCheck(L_7);
		L_7->___curHp_11 = ((float)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_004a:
	{
		// PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.red;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10;
		L_10 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_10);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_10, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_11);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_11, L_12, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.white;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14;
		L_14 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_14);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15;
		L_15 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_14, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_15);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_15, L_16, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerTrigger/<OnHit>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD518674E6494EAEB37F235B3EBA26525C9C7C705 (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerTrigger/<OnHit>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__6_System_Collections_IEnumerator_Reset_mBD6036D5A505C16C972DD8E7AFCDA00EBDE31FEA (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnHitU3Ed__6_System_Collections_IEnumerator_Reset_mBD6036D5A505C16C972DD8E7AFCDA00EBDE31FEA_RuntimeMethod_var)));
	}
}
// System.Object PlayerTrigger/<OnHit>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__6_System_Collections_IEnumerator_get_Current_m8BBE5C126FF86D27C47987C97A2A6D84FE419C5F (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, const RuntimeMethod* method) 
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
// System.Void SheldTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SheldTrigger_OnTriggerEnter2D_m18C5EF3920485784A558276BD934EEC42882B810 (SheldTrigger_t5785513A3BC91D53F93ADF7046AB4E987A4D7C9E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BA87348510A6A556B0DD59CC080C132391D7FCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Block" || collision.transform.tag == "BlockBullet" || collision.transform.tag == "Alien")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E, NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84, NULL);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___0_collision;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral4BA87348510A6A556B0DD59CC080C132391D7FCA, NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}

IL_0045:
	{
		// PlayerController.Instance.parryingSheld = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12;
		L_12 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_12);
		L_12->___parryingSheld_13 = (bool)1;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void SheldTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SheldTrigger__ctor_m9CAD628354462C8E5F47063461B67711D3CB728F (SheldTrigger_t5785513A3BC91D53F93ADF7046AB4E987A4D7C9E* __this, const RuntimeMethod* method) 
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
// System.Void WeaponTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponTrigger_OnTriggerEnter2D_m9D5CBC92A9B599BE30288113DEFB6A28BF2CB0C9 (WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E37ADCADDF40F8342E35FE9ACF8CE1C318A91B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF980C87A63E44F91701F121A964D4F9FDB6E5A7E);
		s_Il2CppMethodInitialized = true;
	}
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* G_B5_0 = NULL;
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* G_B6_1 = NULL;
	{
		// if (collision.tag == "BlockTrigger" || collision.tag == "BlockBullet" || collision.tag == "AlienTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C, NULL);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84, NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___0_collision;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral59E37ADCADDF40F8342E35FE9ACF8CE1C318A91B, NULL);
		if (!L_8)
		{
			goto IL_00c4;
		}
	}

IL_0039:
	{
		// GameManager.Instance.combo += 1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9;
		L_9 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___combo_11;
		NullCheck(L_10);
		L_10->___combo_11 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// DataManager.Instance.curSpecialMoveGage = (DataManager.Instance.curSpecialMoveGage >= DataManager.Instance.PlayerSpecialMoveGage) ? DataManager.Instance.PlayerSpecialMoveGage : DataManager.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_13;
		L_13 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_13);
		float L_14 = L_13->___curSpecialMoveGage_13;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_15;
		L_15 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_15);
		float L_16;
		L_16 = DataManager_get_PlayerSpecialMoveGage_mDE359FE1FB368610882ACBEE877D8ED4139742BE_inline(L_15, NULL);
		G_B4_0 = L_12;
		if ((((float)L_14) >= ((float)L_16)))
		{
			G_B5_0 = L_12;
			goto IL_008c;
		}
	}
	{
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_17;
		L_17 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_17);
		float L_18 = L_17->___curSpecialMoveGage_13;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19;
		L_19 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_19);
		int32_t L_20 = L_19->___combo_11;
		int32_t L_21;
		L_21 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_20, 0, ((int32_t)50), NULL);
		G_B6_0 = ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply((0.100000001f), ((float)L_21)))));
		G_B6_1 = G_B4_0;
		goto IL_0096;
	}

IL_008c:
	{
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_22;
		L_22 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = DataManager_get_PlayerSpecialMoveGage_mDE359FE1FB368610882ACBEE877D8ED4139742BE_inline(L_22, NULL);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_0;
	}

IL_0096:
	{
		NullCheck(G_B6_1);
		G_B6_1->___curSpecialMoveGage_13 = G_B6_0;
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.EnemyHit);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_24;
		L_24 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_24);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_24, ((int32_t)22), (-1.0f), NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(InGameTextViewer.Instance.FadeInOutText());
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_25;
		L_25 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90(L_25, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_27;
		L_27 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_26, NULL);
		return;
	}

IL_00c4:
	{
		// else if (collision.tag == "AlienBullet")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_28 = ___0_collision;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_28, NULL);
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralF980C87A63E44F91701F121A964D4F9FDB6E5A7E, NULL);
		if (!L_30)
		{
			goto IL_00e7;
		}
	}
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBulletHit);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_31;
		L_31 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_31);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_31, ((int32_t)30), (-1.0f), NULL);
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Void WeaponTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponTrigger__ctor_m270CB24F098907247BEABBA34289B641640375FF (WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D* __this, const RuntimeMethod* method) 
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
// System.Void DamageText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Awake_m6BD77AE2D98BC11D6AB98C53460EB2B198362608 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// damageTextHUD = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___damageTextHUD_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___damageTextHUD_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void DamageText::Play(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Play_m51962EB9CC8AE0AD41D708A72703D41E9127EAAB (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, String_t* ___0_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) 
{
	{
		// damageTextHUD.text = text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___damageTextHUD_4;
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// damageTextHUD.color = color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___damageTextHUD_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___1_color;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// StartCoroutine(OndamageTextHUD(onHitPosition));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___2_onHitPosition;
		RuntimeObject* L_5;
		L_5 = DamageText_OndamageTextHUD_m93DB6B5D60FF3989B6E2F284F36CCDB780591968(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DamageText::OndamageTextHUD(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageText_OndamageTextHUD_m93DB6B5D60FF3989B6E2F284F36CCDB780591968 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_onHitPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* L_0 = (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC*)il2cpp_codegen_object_new(U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COndamageTextHUDU3Ed__3__ctor_mD7A399596AF46778D5049563E7E04DFCA1A5C283(L_0, 0, NULL);
		U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* L_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_onHitPosition;
		NullCheck(L_2);
		L_2->___onHitPosition_3 = L_3;
		return L_2;
	}
}
// System.Void DamageText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText__ctor_m822F8E1660E304939D39C2E4DC8CAA4D4BC78BB0 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
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
// System.Void DamageText/<OndamageTextHUD>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__3__ctor_mD7A399596AF46778D5049563E7E04DFCA1A5C283 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DamageText/<OndamageTextHUD>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__3_System_IDisposable_Dispose_m46370BA4E1773691C6D78CEFD40C17B8AE036BE0 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DamageText/<OndamageTextHUD>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COndamageTextHUDU3Ed__3_MoveNext_m705604D705BA0FC018F72860AE36DB3B09029A9A (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// transform.position = onHitPosition + new Vector2(Random.Range(-0.5f, 0.5f), 2f);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___onHitPosition_3;
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.5f), (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_7, (2.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_10, NULL);
		// gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(Random.Range(-1f, 1f) * 3, 10f), ForceMode2D.Impulse);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13;
		L_13 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_12, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), ((float)il2cpp_codegen_multiply(L_14, (3.0f))), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_13, L_15, 1, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0092:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject, 2);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_17, (2.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object DamageText/<OndamageTextHUD>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COndamageTextHUDU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m58F6F334CA897A703E6EB746836BF8F026882F21 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DamageText/<OndamageTextHUD>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__3_System_Collections_IEnumerator_Reset_m8D6CB9E3EA56BF28189EF722DC263FE2F0652CD5 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COndamageTextHUDU3Ed__3_System_Collections_IEnumerator_Reset_m8D6CB9E3EA56BF28189EF722DC263FE2F0652CD5_RuntimeMethod_var)));
	}
}
// System.Object DamageText/<OndamageTextHUD>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COndamageTextHUDU3Ed__3_System_Collections_IEnumerator_get_Current_m6F971A1F666ED91FD3188593F6FF29591DA0E3B8 (U3COndamageTextHUDU3Ed__3_t310F4DCDB2B50BC34B16ABD4E8FD0EEE27B7A9FC* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_Awake_m09843C2EC58761E59C6397E4FE604613118023CB (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_0 = ((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		goto IL_0020;
	}

IL_0015:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// curEnemyHp = 1;
		__this->___curEnemyHp_24 = (1.0f);
		// maxEnemyHp = 1;
		__this->___maxEnemyHp_25 = (1.0f);
		// leftPhaseImageTrigger = false;
		__this->___leftPhaseImageTrigger_46 = (bool)0;
		// middlePhaseImageTrigger = false;
		__this->___middlePhaseImageTrigger_47 = (bool)0;
		// rightPhaseImageTrigger = false;
		__this->___rightPhaseImageTrigger_48 = (bool)0;
		// }
		return;
	}
}
// System.Void InGameTextViewer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_Start_mA3ABDF3A3B7C2AF7375B7049285078F60FC345B4 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	{
		// curGetGoldText.text = GameManager.Instance.gold.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___curGetGoldText_33;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___gold_12);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// InGameTextViewer InGameTextViewer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_0 = ((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104*)NULL;
	}

IL_000f:
	{
		// return instance;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_2 = ((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void InGameTextViewer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_FixedUpdate_m2C2B7AC68411DF71BAE8AC0D5BF893B4BADCA061 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// comboCountText.text = GameManager.Instance.combo.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___comboCountText_27;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___combo_11);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// curDeadEnemyCountText.text = GameManager.Instance.curDeadEnemyCount.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___curDeadEnemyCountText_32;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___curDeadEnemyCount_6);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// StartCoroutine(SliderInit(hpBar, hpBarShadow, DataManager.Instance.curHp, DataManager.Instance.PlayerHP, 0));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___hpBar_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___hpBarShadow_7;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_10;
		L_10 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_10);
		float L_11 = L_10->___curHp_11;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = DataManager_get_PlayerHP_mB332B9EF88D362EC269DDE85DD6164C3FC626D2E_inline(L_12, NULL);
		RuntimeObject* L_14;
		L_14 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_8, L_9, L_11, L_13, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
		// StartCoroutine(SliderInit(sheldBar, sheldBarShadow, DataManager.Instance.curSheldGage, DataManager.Instance.PlayerShledGage, 1));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sheldBar_8;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_17 = __this->___sheldBarShadow_9;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_18;
		L_18 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_18);
		float L_19 = L_18->___curSheldGage_12;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_20;
		L_20 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_20);
		float L_21;
		L_21 = DataManager_get_PlayerShledGage_mC0ACAFE6936A963C47CE7DCF5072FA7A287DA320_inline(L_20, NULL);
		RuntimeObject* L_22;
		L_22 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_16, L_17, L_19, L_21, 1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		// StartCoroutine(SliderInit(specialMoveBar, specialMoveBarShadow, DataManager.Instance.curSpecialMoveGage, DataManager.Instance.PlayerSpecialMoveGage, 2));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_24 = __this->___specialMoveBar_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_25 = __this->___specialMoveBarShadow_11;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_26;
		L_26 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_26);
		float L_27 = L_26->___curSpecialMoveGage_13;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_28;
		L_28 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_28);
		float L_29;
		L_29 = DataManager_get_PlayerSpecialMoveGage_mDE359FE1FB368610882ACBEE877D8ED4139742BE_inline(L_28, NULL);
		RuntimeObject* L_30;
		L_30 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_24, L_25, L_27, L_29, 2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_30, NULL);
		// StartCoroutine(PhaseSliderInit(phase1ProgressBar, GameManager.Instance.curDeadEnemyCount, SpawnManager.Instance.phase1Num));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_32 = __this->___phase1ProgressBar_42;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_33;
		L_33 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_33);
		int32_t L_34 = L_33->___curDeadEnemyCount_6;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_35;
		L_35 = SpawnManager_get_Instance_m0BC3E4B00F6D984E7581AC75DE0E32B25EDE5FDD(NULL);
		NullCheck(L_35);
		int32_t L_36 = L_35->___phase1Num_13;
		RuntimeObject* L_37;
		L_37 = InGameTextViewer_PhaseSliderInit_m7A7B7C72BC0D0A251BA56F7C7EBB2D338FD62E53(__this, L_32, ((float)L_34), ((float)L_36), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// StartCoroutine(PhaseSliderInit(phase2ProgressBar, GameManager.Instance.curDeadEnemyCount - SpawnManager.Instance.phase1Num, SpawnManager.Instance.phase2Num));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_39 = __this->___phase2ProgressBar_43;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_40;
		L_40 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_40);
		int32_t L_41 = L_40->___curDeadEnemyCount_6;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_42;
		L_42 = SpawnManager_get_Instance_m0BC3E4B00F6D984E7581AC75DE0E32B25EDE5FDD(NULL);
		NullCheck(L_42);
		int32_t L_43 = L_42->___phase1Num_13;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_44;
		L_44 = SpawnManager_get_Instance_m0BC3E4B00F6D984E7581AC75DE0E32B25EDE5FDD(NULL);
		NullCheck(L_44);
		int32_t L_45 = L_44->___phase2Num_14;
		RuntimeObject* L_46;
		L_46 = InGameTextViewer_PhaseSliderInit_m7A7B7C72BC0D0A251BA56F7C7EBB2D338FD62E53(__this, L_39, ((float)((int32_t)il2cpp_codegen_subtract(L_41, L_43))), ((float)L_45), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_47;
		L_47 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_46, NULL);
		// if (enemyGageShown)
		bool L_48 = __this->___enemyGageShown_26;
		if (!L_48)
		{
			goto IL_0181;
		}
	}
	{
		// enemyHpGroup.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___enemyHpGroup_12;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)1, NULL);
		// StartCoroutine(SliderInit(enemyHpBar, enemyHpBarShadow, curEnemyHp, maxEnemyHp, 3));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_50 = __this->___enemyHpBar_13;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_51 = __this->___enemyHpBarShadow_14;
		float L_52 = __this->___curEnemyHp_24;
		float L_53 = __this->___maxEnemyHp_25;
		RuntimeObject* L_54;
		L_54 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_50, L_51, L_52, L_53, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_55;
		L_55 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_54, NULL);
		// curAndMaxEnemyHpText.text = curEnemyHp.ToString() + "/" + maxEnemyHp.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = __this->___curAndMaxEnemyHpText_16;
		float* L_57 = (&__this->___curEnemyHp_24);
		String_t* L_58;
		L_58 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_57, NULL);
		float* L_59 = (&__this->___maxEnemyHp_25);
		String_t* L_60;
		L_60 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_59, NULL);
		String_t* L_61;
		L_61 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_58, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_60, NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_56, L_61);
		return;
	}

IL_0181:
	{
		// if(enemyHpBarShadow.value >= 0.05)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_62 = __this->___enemyHpBarShadow_14;
		NullCheck(L_62);
		float L_63;
		L_63 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_62);
		if ((!(((double)((double)L_63)) >= ((double)(0.050000000000000003)))))
		{
			goto IL_019f;
		}
	}
	{
		// EnemySliderInitReady(false);
		InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D(__this, (bool)0, NULL);
	}

IL_019f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InGameTextViewer::FadeInOutText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* L_0 = (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8*)il2cpp_codegen_object_new(U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInOutTextU3Ed__51__ctor_m8B6A3FA1AA4DC2157627C81517DD49F8ABFF605C(L_0, 0, NULL);
		U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void InGameTextViewer::SpawnHUDText(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_SpawnHUDText_mED11B08E283BC97CCFC37F97168EE5C61B639141 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, String_t* ___0_damageText, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject clone = Instantiate(comboTextPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___comboTextPrefab_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// clone.transform.SetParent(parentTransform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parentTransform_29;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// clone.GetComponent<DamageText>().Play(damageText, color, onHitPosition);
		NullCheck(L_2);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_5;
		L_5 = GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F(L_2, GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F_RuntimeMethod_var);
		String_t* L_6 = ___0_damageText;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___2_onHitPosition;
		NullCheck(L_5);
		DamageText_Play_m51962EB9CC8AE0AD41D708A72703D41E9127EAAB(L_5, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InGameTextViewer::SliderInit(UnityEngine.UI.Slider,UnityEngine.UI.Slider,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___1_sliderShadow, float ___2_curValue, float ___3_maxValue, int32_t ___4_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_0 = (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C*)il2cpp_codegen_object_new(U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSliderInitU3Ed__53__ctor_m9B6CF8A95CF5C1D00630802B87ABE9C9DB40D69B(L_0, 0, NULL);
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_6), (void*)__this);
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_2 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___0_slider;
		NullCheck(L_2);
		L_2->___slider_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___slider_2), (void*)L_3);
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_4 = L_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = ___1_sliderShadow;
		NullCheck(L_4);
		L_4->___sliderShadow_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sliderShadow_5), (void*)L_5);
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_6 = L_4;
		float L_7 = ___2_curValue;
		NullCheck(L_6);
		L_6->___curValue_3 = L_7;
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_8 = L_6;
		float L_9 = ___3_maxValue;
		NullCheck(L_8);
		L_8->___maxValue_4 = L_9;
		U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* L_10 = L_8;
		int32_t L_11 = ___4_index;
		NullCheck(L_10);
		L_10->___index_7 = L_11;
		return L_10;
	}
}
// System.Collections.IEnumerator InGameTextViewer::PhaseSliderInit(UnityEngine.UI.Slider,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_PhaseSliderInit_m7A7B7C72BC0D0A251BA56F7C7EBB2D338FD62E53 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, float ___1_curValue, float ___2_maxValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* L_0 = (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC*)il2cpp_codegen_object_new(U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPhaseSliderInitU3Ed__54__ctor_mE343CC83BD5DFF862D3BA996E908D6BB79BD28C4(L_0, 0, NULL);
		U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* L_2 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___0_slider;
		NullCheck(L_2);
		L_2->___slider_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___slider_4), (void*)L_3);
		U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* L_4 = L_2;
		float L_5 = ___1_curValue;
		NullCheck(L_4);
		L_4->___curValue_2 = L_5;
		U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* L_6 = L_4;
		float L_7 = ___2_maxValue;
		NullCheck(L_6);
		L_6->___maxValue_3 = L_7;
		return L_6;
	}
}
// System.Collections.IEnumerator InGameTextViewer::FadeInImage(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInImage_mAC491F60B9906435D58EAB9B261174F162779C94 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_image, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* L_0 = (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81*)il2cpp_codegen_object_new(U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInImageU3Ed__55__ctor_m95B676A9EBA5B496361D4740BDF5B2A1EC5B6450(L_0, 0, NULL);
		U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* L_1 = L_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = ___0_image;
		NullCheck(L_1);
		L_1->___image_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___image_2), (void*)L_2);
		return L_1;
	}
}
// System.Collections.IEnumerator InGameTextViewer::FadeInImage2(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInImage2_m50146815A710E1322FFEA38103F14533ACEABF5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_image, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* L_0 = (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6*)il2cpp_codegen_object_new(U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInImage2U3Ed__56__ctor_m16B40F33EA9CBFC1E0ED5E3381B3C476E6CD8BED(L_0, 0, NULL);
		U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* L_1 = L_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = ___0_image;
		NullCheck(L_1);
		L_1->___image_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___image_2), (void*)L_2);
		return L_1;
	}
}
// System.Void InGameTextViewer::EnemySliderInitReady(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_boolean, const RuntimeMethod* method) 
{
	{
		// enemyHpBar.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___enemyHpBar_13;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (1.0f));
		// enemyHpBarShadow.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___enemyHpBarShadow_14;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		// enemyHpGroup.SetActive(boolean);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___enemyHpGroup_12;
		bool L_3 = ___0_boolean;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void InGameTextViewer::DmgHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_DmgHit_mDF8415D696A6B9A8073C8BE192164524C0B799EE (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(BackHpMove(index));
		int32_t L_0 = ___0_index;
		RuntimeObject* L_1;
		L_1 = InGameTextViewer_BackHpMove_m5FF8E27D74D644F3CBF77AD6B141FE7A60874ED0(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InGameTextViewer::BackHpMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_BackHpMove_m5FF8E27D74D644F3CBF77AD6B141FE7A60874ED0 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* L_0 = (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753*)il2cpp_codegen_object_new(U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBackHpMoveU3Ed__59__ctor_m79D323C802F01672CD9D3E3E7EEFA2C1AA15ED40(L_0, 0, NULL);
		U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* L_2 = L_1;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		L_2->___index_3 = L_3;
		return L_2;
	}
}
// System.Void InGameTextViewer::SetEnemyImage(System.Boolean,System.Single,System.Single,EnemyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_SetEnemyImage_m35B324B45ED9D36AFBABF4C764D41AAC67F1F0E1 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_Shown, float ___1_curHP, float ___2_maxHP, int32_t ___3_enemeyType, const RuntimeMethod* method) 
{
	{
		// enemyGageShown = Shown;
		bool L_0 = ___0_Shown;
		__this->___enemyGageShown_26 = L_0;
		// maxEnemyHp = maxHP;
		float L_1 = ___2_maxHP;
		__this->___maxEnemyHp_25 = L_1;
		// curEnemyHp = curHP;
		float L_2 = ___1_curHP;
		__this->___curEnemyHp_24 = L_2;
		int32_t L_3 = ___3_enemeyType;
		switch (L_3)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0039;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_004b;
			}
		}
	}
	{
		return;
	}

IL_0039:
	{
		// enemyImage.sprite = monsterImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___enemyImage_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___monsterImage_20;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// break;
		return;
	}

IL_004b:
	{
		// enemyImage.sprite = monsterBossImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___enemyImage_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___monsterBossImage_18;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// break;
		return;
	}

IL_005d:
	{
		// enemyImage.sprite = block1X1Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___enemyImage_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = __this->___block1X1Image_21;
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_9, NULL);
		// break;
		return;
	}

IL_006f:
	{
		// enemyImage.sprite = block1X2Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___enemyImage_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___block1X2Image_22;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
		// break;
		return;
	}

IL_0081:
	{
		// enemyImage.sprite = block1X3Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___enemyImage_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___block1X3Image_23;
		NullCheck(L_12);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_12, L_13, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void InGameTextViewer::PhaseStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_PhaseStart_mA89FBBB9846A274809B45C34CD7E2B79EE56075A (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57705162D6E07BD4AEC9FFF595192CE4F2F7EE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhaseGuideText.text = text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___PhaseGuideText_35;
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// PhaseGuideGroupAnime.SetTrigger("doPhaseStart");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___PhaseGuideGroupAnime_34;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteralE57705162D6E07BD4AEC9FFF595192CE4F2F7EE7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InGameTextViewer::Count(TMPro.TextMeshProUGUI,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_Count_mF7F968F828663AABC4D9F5CB248C98E5BC011C32 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__text, int32_t ___1__current, int32_t ___2__target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* L_0 = (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF*)il2cpp_codegen_object_new(U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountU3Ed__62__ctor_m42F0915FBC4306F3D8E3E243B7BAD094DA09E3F2(L_0, 0, NULL);
		U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* L_1 = L_0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = ___0__text;
		NullCheck(L_1);
		L_1->____text_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____text_2), (void*)L_2);
		U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* L_3 = L_1;
		int32_t L_4 = ___1__current;
		NullCheck(L_3);
		L_3->____current_3 = L_4;
		U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* L_5 = L_3;
		int32_t L_6 = ___2__target;
		NullCheck(L_5);
		L_5->____target_4 = L_6;
		return L_5;
	}
}
// System.Void InGameTextViewer::PlusGetGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_PlusGetGold_mEFF8D0F0A26E1B50992B919EAEDE3C30B0EAC9CF (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_goldNumber, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Count(curGetGoldText, GameManager.Instance.gold, GameManager.Instance.gold + goldNumber));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___curGetGoldText_33;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___gold_12;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___gold_12;
		int32_t L_5 = ___0_goldNumber;
		RuntimeObject* L_6;
		L_6 = InGameTextViewer_Count_mF7F968F828663AABC4D9F5CB248C98E5BC011C32(__this, L_0, L_2, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// GameManager.Instance.gold += goldNumber;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8;
		L_8 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___gold_12;
		int32_t L_11 = ___0_goldNumber;
		NullCheck(L_9);
		L_9->___gold_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
// System.Void InGameTextViewer::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_GameOver_m212B2F6FDCB9B0AD945ECA8ED127790B9E7E2D75 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	{
		// gameOverPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOverPanel_44;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void InGameTextViewer::StageClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_StageClear_m1CB3848ED02F196FA78EEDC97B4376B75362E908 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	{
		// stageClearPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___stageClearPanel_45;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void InGameTextViewer::Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_Setting_m3CB042DC5D674F668D79C3B143A323CFC160DDD9 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// settingsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___settingsPanel_49;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_1);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_1, 0, (-1.0f), NULL);
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		V_0 = 0;
		goto IL_003f;
	}

IL_002a:
	{
		// SoundManager.Instance.sfxPlayer[i].Pause();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2;
		L_2 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_2);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3 = L_2->___sfxPlayer_7;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_6, NULL);
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		int32_t L_8 = V_0;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9;
		L_9 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_9);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_10 = L_9->___sfxPlayer_7;
		NullCheck(L_10);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InGameTextViewer::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_Back_m1AF363E92C0C9E586CD6650258F5C00A214FE56E (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_000e:
	{
		// SoundManager.Instance.sfxPlayer[i].UnPause();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_1 = L_0->___sfxPlayer_7;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9(L_4, NULL);
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < SoundManager.Instance.sfxPlayer.Length; i++)
		int32_t L_6 = V_0;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_7;
		L_7 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_7);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_8 = L_7->___sfxPlayer_7;
		NullCheck(L_8);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// settingsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___settingsPanel_49;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_10;
		L_10 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_10);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_10, 0, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void InGameTextViewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer__ctor_mBDFFACC0A1294D1CBC2DFF24CC49F39AB5DF903E (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool[] backGageHit = new bool[3] { false, false, false };
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___backGageHit_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backGageHit_5), (void*)L_0);
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
// System.Void InGameTextViewer/<FadeInOutText>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__51__ctor_m8B6A3FA1AA4DC2157627C81517DD49F8ABFF605C (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__51_System_IDisposable_Dispose_mE7D5354370742A52925338B896AFCFC26CDA3F66 (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<FadeInOutText>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInOutTextU3Ed__51_MoveNext_mDA97B10B05CC817532F729749F91190646100325 (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DF4040A74BAC6B4B4262221B46CE48440E72254);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_01f0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float curPos = 0f;
		__this->___U3CcurPosU3E5__2_3 = (0.0f);
		// float maxPos = 1f;
		__this->___U3CmaxPosU3E5__3_4 = (1.0f);
		// float percent = curPos / maxPos;
		float L_3 = __this->___U3CcurPosU3E5__2_3;
		float L_4 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_3/L_4));
		// comboCountText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, 1);
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___comboCountText_27;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___comboCountText_27;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___comboCountText_27;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_15 = V_1;
		NullCheck(L_15);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = L_15->___comboCountText_27;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		float L_18 = L_17.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), L_10, L_14, L_18, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_19);
		// comboText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, 1);
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_20 = V_1;
		NullCheck(L_20);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = L_20->___comboText_28;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_22 = V_1;
		NullCheck(L_22);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___comboCountText_27;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		float L_25 = L_24.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_26 = V_1;
		NullCheck(L_26);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = L_26->___comboCountText_27;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_27);
		float L_29 = L_28.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_30 = V_1;
		NullCheck(L_30);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = L_30->___comboCountText_27;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_31);
		float L_33 = L_32.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), L_25, L_29, L_33, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_34);
		// comboTextAnimator.SetTrigger("ComboHit");
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_35 = V_1;
		NullCheck(L_35);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = L_35->___comboTextAnimator_31;
		NullCheck(L_36);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_36, _stringLiteral1DF4040A74BAC6B4B4262221B46CE48440E72254, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_37 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_37, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_01f7;
	}

IL_0111:
	{
		// comboCountText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, Mathf.Lerp(1, 0, percent));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_38 = V_1;
		NullCheck(L_38);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = L_38->___comboCountText_27;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_40 = V_1;
		NullCheck(L_40);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = L_40->___comboCountText_27;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		float L_43 = L_42.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_44 = V_1;
		NullCheck(L_44);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = L_44->___comboCountText_27;
		NullCheck(L_45);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_45);
		float L_47 = L_46.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_48 = V_1;
		NullCheck(L_48);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = L_48->___comboCountText_27;
		NullCheck(L_49);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		L_50 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_49);
		float L_51 = L_50.___b_2;
		float L_52 = __this->___U3CpercentU3E5__4_5;
		float L_53;
		L_53 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), (0.0f), L_52, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		memset((&L_54), 0, sizeof(L_54));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_54), L_43, L_47, L_51, L_53, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_54);
		// comboText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, Mathf.Lerp(1, 0, percent));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_55 = V_1;
		NullCheck(L_55);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = L_55->___comboText_28;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_57 = V_1;
		NullCheck(L_57);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = L_57->___comboCountText_27;
		NullCheck(L_58);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_58);
		float L_60 = L_59.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_61 = V_1;
		NullCheck(L_61);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = L_61->___comboCountText_27;
		NullCheck(L_62);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_62);
		float L_64 = L_63.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_65 = V_1;
		NullCheck(L_65);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = L_65->___comboCountText_27;
		NullCheck(L_66);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		L_67 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_66);
		float L_68 = L_67.___b_2;
		float L_69 = __this->___U3CpercentU3E5__4_5;
		float L_70;
		L_70 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), (0.0f), L_69, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71;
		memset((&L_71), 0, sizeof(L_71));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_71), L_60, L_64, L_68, L_70, /*hidden argument*/NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_56, L_71);
		// curPos += Time.deltaTime;
		float L_72 = __this->___U3CcurPosU3E5__2_3;
		float L_73;
		L_73 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurPosU3E5__2_3 = ((float)il2cpp_codegen_add(L_72, L_73));
		// percent = curPos / maxPos;
		float L_74 = __this->___U3CcurPosU3E5__2_3;
		float L_75 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_74/L_75));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01f0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01f7:
	{
		// while (percent <= 2f)
		float L_76 = __this->___U3CpercentU3E5__4_5;
		if ((((float)L_76) <= ((float)(2.0f))))
		{
			goto IL_0111;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<FadeInOutText>d__51::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E11591D3DE54545A213B24DA3CA1F278B8FF2A0 (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__51_System_Collections_IEnumerator_Reset_mACFB3BD4644392B787FAF202A07CF4FF3D6C3E94 (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInOutTextU3Ed__51_System_Collections_IEnumerator_Reset_mACFB3BD4644392B787FAF202A07CF4FF3D6C3E94_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<FadeInOutText>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__51_System_Collections_IEnumerator_get_Current_m9F74D8F814E61A099EE8B62B1BAB54986C98F07A (U3CFadeInOutTextU3Ed__51_t5AAE420ED1F9D9E7657924C88DBCE7F78F21D4D8* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<SliderInit>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__53__ctor_m9B6CF8A95CF5C1D00630802B87ABE9C9DB40D69B (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__53_System_IDisposable_Dispose_m2DE2F3D42AD899529F703920D8E0132C87E29339 (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<SliderInit>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSliderInitU3Ed__53_MoveNext_mE0DA5B9285AA0976696EA96D3618344BDF35014F (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_1 = __this->___U3CU3E4__this_6;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f7;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// slider.value = Mathf.Lerp(slider.value, curValue / maxValue, Time.deltaTime * 5f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___slider_2;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		float L_7 = __this->___curValue_3;
		float L_8 = __this->___maxValue_4;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, ((float)(L_7/L_8)), ((float)il2cpp_codegen_multiply(L_9, (5.0f))), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_10);
		// if(sliderShadow != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sliderShadow_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00e7;
		}
	}
	{
		// if (backGageHit[index])
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_13 = V_1;
		NullCheck(L_13);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = L_13->___backGageHit_5;
		int32_t L_15 = __this->___index_7;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (uint8_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_00e7;
		}
	}
	{
		// sliderShadow.value = Mathf.Lerp(sliderShadow.value, slider.value, Time.deltaTime * 10f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___sliderShadow_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___sliderShadow_5;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_21 = __this->___slider_2;
		NullCheck(L_21);
		float L_22;
		L_22 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_21);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_22, ((float)il2cpp_codegen_multiply(L_23, (10.0f))), NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_24);
		// if (slider.value >= sliderShadow.value - 0.01f)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_25 = __this->___slider_2;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_25);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_27 = __this->___sliderShadow_5;
		NullCheck(L_27);
		float L_28;
		L_28 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_27);
		if ((!(((float)L_26) >= ((float)((float)il2cpp_codegen_subtract(L_28, (0.00999999978f)))))))
		{
			goto IL_00e7;
		}
	}
	{
		// backGageHit[index] = false;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_29 = V_1;
		NullCheck(L_29);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_30 = L_29->___backGageHit_5;
		int32_t L_31 = __this->___index_7;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (bool)0);
		// sliderShadow.value = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_32 = __this->___sliderShadow_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_33 = __this->___slider_2;
		NullCheck(L_33);
		float L_34;
		L_34 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_33);
		NullCheck(L_32);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_32, L_34);
	}

IL_00e7:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<SliderInit>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE89F9A8B44B462E2F976EFEB6D95B466A40D2B63 (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__53_System_Collections_IEnumerator_Reset_mF61FEB408A5C2E6C70BACC5259936A01EF9A98AB (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSliderInitU3Ed__53_System_Collections_IEnumerator_Reset_mF61FEB408A5C2E6C70BACC5259936A01EF9A98AB_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<SliderInit>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__53_System_Collections_IEnumerator_get_Current_m74662605770B7BF148D4C5FF6B7DAAAB0B6691DC (U3CSliderInitU3Ed__53_t44CAC5BA2EC1C2EA078ED8FFCA145B78D1714E7C* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<PhaseSliderInit>d__54::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPhaseSliderInitU3Ed__54__ctor_mE343CC83BD5DFF862D3BA996E908D6BB79BD28C4 (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<PhaseSliderInit>d__54::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPhaseSliderInitU3Ed__54_System_IDisposable_Dispose_mC5930F76CC0DDCAE631011243913925313E5A4A5 (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<PhaseSliderInit>d__54::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPhaseSliderInitU3Ed__54_MoveNext_mCC1A2E8023E0203FB69477530FF90FEBD823737E (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_1 = __this->___U3CU3E4__this_5;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0148;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float percent = curValue / maxValue;
		float L_4 = __this->___curValue_2;
		float L_5 = __this->___maxValue_3;
		V_2 = ((float)(L_4/L_5));
		// slider.value = Mathf.Lerp(slider.value, percent, Time.deltaTime * 5f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___slider_4;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		float L_9 = V_2;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, (5.0f))), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_11);
		// if(slider == phase1ProgressBar)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___slider_4;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_13 = V_1;
		NullCheck(L_13);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = L_13->___phase1ProgressBar_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_00e8;
		}
	}
	{
		// if (percent >= 0)
		float L_16 = V_2;
		if ((!(((float)L_16) >= ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (!leftPhaseImageTrigger)
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->___leftPhaseImageTrigger_46;
		if (L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// StartCoroutine(FadeInImage(leftPhaseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_19 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_20 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_21 = V_1;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = L_21->___leftPhaseImage_36;
		NullCheck(L_20);
		RuntimeObject* L_23;
		L_23 = InGameTextViewer_FadeInImage_mAC491F60B9906435D58EAB9B261174F162779C94(L_20, L_22, NULL);
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_23, NULL);
		// StartCoroutine(FadeInImage2(leftPhaseChaineseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_25 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_26 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_27 = V_1;
		NullCheck(L_27);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = L_27->___leftPhaseChaineseImage_39;
		NullCheck(L_26);
		RuntimeObject* L_29;
		L_29 = InGameTextViewer_FadeInImage2_m50146815A710E1322FFEA38103F14533ACEABF5D(L_26, L_28, NULL);
		NullCheck(L_25);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_25, L_29, NULL);
		// leftPhaseImageTrigger = true;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_31 = V_1;
		NullCheck(L_31);
		L_31->___leftPhaseImageTrigger_46 = (bool)1;
	}

IL_00a6:
	{
		// if (percent >= 1)
		float L_32 = V_2;
		if ((!(((float)L_32) >= ((float)(1.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// if (!middlePhaseImageTrigger)
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_33 = V_1;
		NullCheck(L_33);
		bool L_34 = L_33->___middlePhaseImageTrigger_47;
		if (L_34)
		{
			goto IL_0138;
		}
	}
	{
		// StartCoroutine(FadeInImage(middlePhaseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_35 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_36 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_37 = V_1;
		NullCheck(L_37);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = L_37->___middlePhaseImage_37;
		NullCheck(L_36);
		RuntimeObject* L_39;
		L_39 = InGameTextViewer_FadeInImage_mAC491F60B9906435D58EAB9B261174F162779C94(L_36, L_38, NULL);
		NullCheck(L_35);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_40;
		L_40 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_35, L_39, NULL);
		// StartCoroutine(FadeInImage2(middlePhaseChaineseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_41 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_42 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_43 = V_1;
		NullCheck(L_43);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = L_43->___middlePhaseChaineseImage_40;
		NullCheck(L_42);
		RuntimeObject* L_45;
		L_45 = InGameTextViewer_FadeInImage2_m50146815A710E1322FFEA38103F14533ACEABF5D(L_42, L_44, NULL);
		NullCheck(L_41);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_41, L_45, NULL);
		// middlePhaseImageTrigger = true;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_47 = V_1;
		NullCheck(L_47);
		L_47->___middlePhaseImageTrigger_47 = (bool)1;
		goto IL_0138;
	}

IL_00e8:
	{
		// else if(slider == phase2ProgressBar)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_48 = __this->___slider_4;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_49 = V_1;
		NullCheck(L_49);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_50 = L_49->___phase2ProgressBar_43;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_48, L_50, NULL);
		if (!L_51)
		{
			goto IL_0138;
		}
	}
	{
		// if (percent >= 1)
		float L_52 = V_2;
		if ((!(((float)L_52) >= ((float)(1.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// if (!rightPhaseImageTrigger)
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_53 = V_1;
		NullCheck(L_53);
		bool L_54 = L_53->___rightPhaseImageTrigger_48;
		if (L_54)
		{
			goto IL_0138;
		}
	}
	{
		// StartCoroutine(FadeInImage(rightPhaseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_55 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_56 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_57 = V_1;
		NullCheck(L_57);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = L_57->___rightPhaseImage_38;
		NullCheck(L_56);
		RuntimeObject* L_59;
		L_59 = InGameTextViewer_FadeInImage_mAC491F60B9906435D58EAB9B261174F162779C94(L_56, L_58, NULL);
		NullCheck(L_55);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_60;
		L_60 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_55, L_59, NULL);
		// StartCoroutine(FadeInImage2(rightPhaseChaineseImage));
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_61 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_62 = V_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_63 = V_1;
		NullCheck(L_63);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = L_63->___rightPhaseChaineseImage_41;
		NullCheck(L_62);
		RuntimeObject* L_65;
		L_65 = InGameTextViewer_FadeInImage2_m50146815A710E1322FFEA38103F14533ACEABF5D(L_62, L_64, NULL);
		NullCheck(L_61);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_66;
		L_66 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_61, L_65, NULL);
		// rightPhaseImageTrigger = true;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_67 = V_1;
		NullCheck(L_67);
		L_67->___rightPhaseImageTrigger_48 = (bool)1;
	}

IL_0138:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0148:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<PhaseSliderInit>d__54::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPhaseSliderInitU3Ed__54_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m63544E945F3CCA28869A04277345A77B004FAF53 (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<PhaseSliderInit>d__54::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPhaseSliderInitU3Ed__54_System_Collections_IEnumerator_Reset_mCB75988763D82868E5E61AA8F7BF87AD804E3EFD (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPhaseSliderInitU3Ed__54_System_Collections_IEnumerator_Reset_mCB75988763D82868E5E61AA8F7BF87AD804E3EFD_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<PhaseSliderInit>d__54::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPhaseSliderInitU3Ed__54_System_Collections_IEnumerator_get_Current_mED085F199635EBC0C92AE68598E872708F607F5D (U3CPhaseSliderInitU3Ed__54_t18A2A5242C80D122BCF35E7081FAB7DE27077FFC* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<FadeInImage>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImageU3Ed__55__ctor_m95B676A9EBA5B496361D4740BDF5B2A1EC5B6450 (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<FadeInImage>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImageU3Ed__55_System_IDisposable_Dispose_m20446CEC12463174373A72A210E58F665B11E802 (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<FadeInImage>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInImageU3Ed__55_MoveNext_mC0C740470CAE511B7A14486E7E027946D6AC7312 (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00ea;
			}
			case 2:
			{
				goto IL_0111;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float curPos = 0.4f;
		__this->___U3CcurPosU3E5__2_3 = (0.400000006f);
		// float maxPos = 1f;
		__this->___U3CmaxPosU3E5__3_4 = (1.0f);
		// float percent = curPos / maxPos;
		float L_2 = __this->___U3CcurPosU3E5__2_3;
		float L_3 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_2/L_3));
		// image.GetComponent<ParticleSystem>().Play();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___image_2;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_4, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
		goto IL_00f1;
	}

IL_0060:
	{
		// curPos += Time.deltaTime;
		float L_6 = __this->___U3CcurPosU3E5__2_3;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurPosU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_7));
		// percent = curPos / maxPos;
		float L_8 = __this->___U3CcurPosU3E5__2_3;
		float L_9 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_8/L_9));
		// image.color = new Color(image.color.r, image.color.g, image.color.b, Mathf.Lerp(0, 1, percent));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___image_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___image_2;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		float L_13 = L_12.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___image_2;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		float L_16 = L_15.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___image_2;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_17);
		float L_19 = L_18.___b_2;
		float L_20 = __this->___U3CpercentU3E5__4_5;
		float L_21;
		L_21 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (1.0f), L_20, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_22), L_13, L_16, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_22);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ea:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f1:
	{
		// while (percent <= 2f)
		float L_23 = __this->___U3CpercentU3E5__4_5;
		if ((((float)L_23) <= ((float)(2.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0111:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<FadeInImage>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInImageU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA28D237AFA449B273AEB82A92727E959A80AE4E3 (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<FadeInImage>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImageU3Ed__55_System_Collections_IEnumerator_Reset_m49B573F7BCF5133821E42244F2303D84308A032F (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInImageU3Ed__55_System_Collections_IEnumerator_Reset_m49B573F7BCF5133821E42244F2303D84308A032F_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<FadeInImage>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInImageU3Ed__55_System_Collections_IEnumerator_get_Current_m7F2E314693EE51FE6DD0F2F8C885062AC4411DFE (U3CFadeInImageU3Ed__55_t286016D8615B7EF9A176D0AF04793D1CAAD25F81* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<FadeInImage2>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImage2U3Ed__56__ctor_m16B40F33EA9CBFC1E0ED5E3381B3C476E6CD8BED (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<FadeInImage2>d__56::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImage2U3Ed__56_System_IDisposable_Dispose_m77CF834E06B888641AE33C4002558171471E143A (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<FadeInImage2>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInImage2U3Ed__56_MoveNext_m5E9170B19F205D6675E55BDDD48BD1764F3A4593 (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00da;
			}
			case 2:
			{
				goto IL_0101;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float curPos = 0f;
		__this->___U3CcurPosU3E5__2_3 = (0.0f);
		// float maxPos = 1f;
		__this->___U3CmaxPosU3E5__3_4 = (1.0f);
		// float percent = curPos / maxPos;
		float L_2 = __this->___U3CcurPosU3E5__2_3;
		float L_3 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_2/L_3));
		goto IL_00e1;
	}

IL_0050:
	{
		// curPos += Time.deltaTime;
		float L_4 = __this->___U3CcurPosU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurPosU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// percent = curPos / maxPos;
		float L_6 = __this->___U3CcurPosU3E5__2_3;
		float L_7 = __this->___U3CmaxPosU3E5__3_4;
		__this->___U3CpercentU3E5__4_5 = ((float)(L_6/L_7));
		// image.color = new Color(image.color.r, image.color.g, image.color.b, Mathf.Lerp(0, 1, percent));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___image_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___image_2;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___image_2;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___image_2;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		float L_17 = L_16.___b_2;
		float L_18 = __this->___U3CpercentU3E5__4_5;
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (1.0f), L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_20), L_11, L_14, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_20);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00da:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00e1:
	{
		// while (percent <= 2f)
		float L_21 = __this->___U3CpercentU3E5__4_5;
		if ((((float)L_21) <= ((float)(2.0f))))
		{
			goto IL_0050;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0101:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<FadeInImage2>d__56::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInImage2U3Ed__56_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CD16687F9375BD0DA8AB7A8A1CA97354F9C149E (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<FadeInImage2>d__56::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInImage2U3Ed__56_System_Collections_IEnumerator_Reset_mCF3B1F0C61F063982AC8135527461F9A43ECCCD9 (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInImage2U3Ed__56_System_Collections_IEnumerator_Reset_mCF3B1F0C61F063982AC8135527461F9A43ECCCD9_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<FadeInImage2>d__56::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInImage2U3Ed__56_System_Collections_IEnumerator_get_Current_m1EC60ED83A4F4196A0D7552C552CFADC0E6BE20C (U3CFadeInImage2U3Ed__56_tA46D47E4FA723D8078FC16FC8B9483E92731B5F6* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<BackHpMove>d__59::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__59__ctor_m79D323C802F01672CD9D3E3E7EEFA2C1AA15ED40 (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__59::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__59_System_IDisposable_Dispose_mA616583A23A52BF6F2D57FB87C58E91F03F410DB (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<BackHpMove>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBackHpMoveU3Ed__59_MoveNext_m95040A6E746828A8106A552C4230983F50D6238A (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// backGageHit[index] = true;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_5 = V_1;
		NullCheck(L_5);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___backGageHit_5;
		int32_t L_7 = __this->___index_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__59::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__59_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7306153C625319C054611ECC9A8F9A0CF06AA863 (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__59::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__59_System_Collections_IEnumerator_Reset_mC1B17C9F8D06B8EDE2040A633A089F4EAC3CD946 (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBackHpMoveU3Ed__59_System_Collections_IEnumerator_Reset_mC1B17C9F8D06B8EDE2040A633A089F4EAC3CD946_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__59::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__59_System_Collections_IEnumerator_get_Current_m5A2C0ECC9FA69442E8B3441AB3819BA8C472D939 (U3CBackHpMoveU3Ed__59_t28802BA605E0D352153F636D2F6D74FC18C1D753* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<Count>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__62__ctor_m42F0915FBC4306F3D8E3E243B7BAD094DA09E3F2 (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<Count>d__62::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__62_System_IDisposable_Dispose_mFBF15448EEED4BE5636213B232EA4029CAE5B8EC (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<Count>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountU3Ed__62_MoveNext_m5DE6F5B85581429F109AC7ABE953F33F1BFA312C (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float start = 0;
		__this->___U3CstartU3E5__2_5 = (0.0f);
		// float end = 0.75f;
		__this->___U3CendU3E5__3_6 = (0.75f);
		// float percent = 0;
		__this->___U3CpercentU3E5__4_7 = (0.0f);
		goto IL_00a4;
	}

IL_003d:
	{
		// start += Time.deltaTime;
		float L_3 = __this->___U3CstartU3E5__2_5;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CstartU3E5__2_5 = ((float)il2cpp_codegen_add(L_3, L_4));
		// percent = start / end;
		float L_5 = __this->___U3CstartU3E5__2_5;
		float L_6 = __this->___U3CendU3E5__3_6;
		__this->___U3CpercentU3E5__4_7 = ((float)(L_5/L_6));
		// _text.text = MoneyUnitString.GetThousandCommaText((int)Mathf.Lerp(_current, _target, percent));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->____text_2;
		int32_t L_8 = __this->____current_3;
		int32_t L_9 = __this->____target_4;
		float L_10 = __this->___U3CpercentU3E5__4_7;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_8), ((float)L_9), L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)il2cpp_codegen_cast_double_to_int<int32_t>(L_11)), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_12);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a4:
	{
		// while (percent <= 1)
		float L_13 = __this->___U3CpercentU3E5__4_7;
		if ((((float)L_13) <= ((float)(1.0f))))
		{
			goto IL_003d;
		}
	}
	{
		// _text.text = MoneyUnitString.GetThousandCommaText(_target);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->____text_2;
		int32_t L_15 = __this->____target_4;
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_15), NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_16);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<Count>d__62::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m748A1C4A470E0ED16CF319B214AD7728571ECF49 (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<Count>d__62::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__62_System_Collections_IEnumerator_Reset_mB861E5C0F809CDB89A6035DB136937FCF3344059 (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountU3Ed__62_System_Collections_IEnumerator_Reset_mB861E5C0F809CDB89A6035DB136937FCF3344059_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<Count>d__62::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__62_System_Collections_IEnumerator_get_Current_m49F9E3379E9984114AE95F15B2625BAC31E2926A (U3CCountU3Ed__62_t3CC8D0699C0C59E4D8BAFAAF36B32A7A01473DCF* __this, const RuntimeMethod* method) 
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
// MainMenuController MainMenuController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* MainMenuController_get_Instance_m7EA8C71DD33AF39668149C5D8F6E5B7710DA7111 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_0 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___instance_60;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569*)NULL;
	}

IL_000f:
	{
		// return instance;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_2 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___instance_60;
		return L_2;
	}
}
// System.Void MainMenuController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Awake_m5A16EE1D66CED088168724D8EDA4029EA4DD2934 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8D454EEF3C638CD470F954BC0365DFB07DF99B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B0C4AE08CDDA0D6A0BA2F297548F9E67A74B5BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94B1BB277FF9F94713ADB3CFD1C29E5782C7B6E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_0 = ((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___instance_60;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___instance_60 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569_il2cpp_TypeInfo_var))->___instance_60), (void*)__this);
		goto IL_0020;
	}

IL_0015:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// stageNames = new string[3] { "MOON", "Mercury", "Mars" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2B8D454EEF3C638CD470F954BC0365DFB07DF99B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2B8D454EEF3C638CD470F954BC0365DFB07DF99B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral94B1BB277FF9F94713ADB3CFD1C29E5782C7B6E4);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral94B1BB277FF9F94713ADB3CFD1C29E5782C7B6E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral5B0C4AE08CDDA0D6A0BA2F297548F9E67A74B5BC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5B0C4AE08CDDA0D6A0BA2F297548F9E67A74B5BC);
		__this->___stageNames_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stageNames_16), (void*)L_6);
		// stageSymbolicColors = new Color[3] { Color.yellow, new Color(0, 150, 255, 255), Color.red };
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)3);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_9);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = L_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.0f), (150.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_11);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12 = L_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_13);
		__this->___stageSymbolicColors_17 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stageSymbolicColors_17), (void*)L_12);
		// }
		return;
	}
}
// System.Void MainMenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Start_m26371D166488BA9A98CE757741C6B0A7503C2E9E (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TabClick(1);
		MainMenuController_TabClick_m4DA1E425E22413B719324E39BD4C9D839DC7914B(__this, 1, NULL);
		// minStageNum = 1;
		__this->___minStageNum_38 = 1;
		// maxStageNum = DataManager.Instance.isStageClear.Length;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0;
		L_0 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0->___isStageClear_22;
		NullCheck(L_1);
		__this->___maxStageNum_37 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// curSelectStage = DataManager.Instance.curStage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_2;
		L_2 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___curStage_23;
		__this->___curSelectStage_36 = L_3;
		// playerZamText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerZam);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___playerZamText_5;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_5;
		L_5 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_6), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// playerGoldText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerGold);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___playerGoldText_7;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9;
		L_9 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_9, NULL);
		String_t* L_11;
		L_11 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_10), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
		// StartCoroutine(StageChange());
		RuntimeObject* L_12;
		L_12 = MainMenuController_StageChange_mB7071125D4A0190C4C7335031F593703F408052B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// for (int j = 0; j < DataManager.Instance.playerItems.Count; j++)
		V_0 = 0;
		goto IL_0096;
	}

IL_0077:
	{
		// inventory.InitItem(DataManager.Instance.playerItems[j]);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_14 = __this->___inventory_61;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_15;
		L_15 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_15);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_16 = L_15->___playerItems_26;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_18;
		L_18 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_16, L_17, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_14);
		Inventory_InitItem_m8AFB9A95956DD128C83F90406A848AECCEB46765(L_14, L_18, NULL);
		// for (int j = 0; j < DataManager.Instance.playerItems.Count; j++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0096:
	{
		// for (int j = 0; j < DataManager.Instance.playerItems.Count; j++)
		int32_t L_20 = V_0;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_21;
		L_21 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_21);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_22 = L_21->___playerItems_26;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_22, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainMenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Update_mB0547EC4AC7DBCFFF9E66D2F793EBA4662EECF8F (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// playerHPText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerHP);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerHPText_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = DataManager_get_PlayerHP_mB332B9EF88D362EC269DDE85DD6164C3FC626D2E_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_2), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// playerATKText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerATK);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___playerATKText_6;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_5;
		L_5 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DataManager_get_PlayerATK_m8DAD376569096229CD55FA4B2C71DD3647621D35_inline(L_5, NULL);
		String_t* L_7;
		L_7 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_6), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// if (isStageChanging)
		bool L_8 = __this->___isStageChanging_39;
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		// StageSelectRightButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___StageSelectRightButton_35;
		NullCheck(L_9);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)0, NULL);
		// StageSelectLeftButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___StageSelectLeftButton_34;
		NullCheck(L_10);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_10, (bool)0, NULL);
		// StageGoBackButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___StageGoBackButton_24;
		NullCheck(L_11);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)0, NULL);
		// StageSelectButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___StageSelectButton_21;
		NullCheck(L_12);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_12, (bool)0, NULL);
		goto IL_00d8;
	}

IL_0070:
	{
		// StageGoBackButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___StageGoBackButton_24;
		NullCheck(L_13);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_13, (bool)1, NULL);
		// StageSelectButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___StageSelectButton_21;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)1, NULL);
		// if (curSelectStage == maxStageNum)
		int32_t L_15 = __this->___curSelectStage_36;
		int32_t L_16 = __this->___maxStageNum_37;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_00a4;
		}
	}
	{
		// StageSelectRightButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___StageSelectRightButton_35;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		goto IL_00b0;
	}

IL_00a4:
	{
		// StageSelectRightButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___StageSelectRightButton_35;
		NullCheck(L_18);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)1, NULL);
	}

IL_00b0:
	{
		// if (curSelectStage == minStageNum)
		int32_t L_19 = __this->___curSelectStage_36;
		int32_t L_20 = __this->___minStageNum_38;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00cc;
		}
	}
	{
		// StageSelectLeftButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___StageSelectLeftButton_34;
		NullCheck(L_21);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_21, (bool)0, NULL);
		goto IL_00d8;
	}

IL_00cc:
	{
		// StageSelectLeftButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___StageSelectLeftButton_34;
		NullCheck(L_22);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_22, (bool)1, NULL);
	}

IL_00d8:
	{
		// for (int i = 0; i < SIZE; i++)
		V_0 = 0;
		goto IL_01ec;
	}

IL_00df:
	{
		// Vector3 BtnTargetPos = BtnImageRect[i].anchoredPosition3D;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_23 = __this->___BtnImageRect_10;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA(L_26, NULL);
		V_1 = L_27;
		// Vector3 BtnTargetScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		V_2 = L_28;
		// bool textActive = false;
		V_3 = (bool)0;
		// if (targetIndex == i)
		int32_t L_29 = __this->___targetIndex_12;
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_014c;
		}
	}
	{
		// BtnTargetPos.y = 80f;
		(&V_1)->___y_3 = (80.0f);
		// MiddlePanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___MiddlePanels_13;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)1, NULL);
		// BtnImageRect[i].GetComponent<Image>().sprite = SelectedBtnTargetImage[i];
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_35 = __this->___BtnImageRect_10;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39;
		L_39 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_38, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_40 = __this->___SelectedBtnTargetImage_9;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_39, L_43, NULL);
		// BtnTargetScale = new Vector3(1.3f, 1.3f, 1);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (1.29999995f), (1.29999995f), (1.0f), NULL);
		// textActive = true;
		V_3 = (bool)1;
		goto IL_0180;
	}

IL_014c:
	{
		// BtnTargetPos.y = 0f;
		(&V_1)->___y_3 = (0.0f);
		// MiddlePanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = __this->___MiddlePanels_13;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// BtnImageRect[i].GetComponent<Image>().sprite = BtnTargetImage[i];
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_48 = __this->___BtnImageRect_10;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52;
		L_52 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_51, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_53 = __this->___BtnTargetImage_8;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_52);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_52, L_56, NULL);
	}

IL_0180:
	{
		// BtnImageRect[i].anchoredPosition3D = Vector3.Lerp(BtnImageRect[i].anchoredPosition3D, BtnTargetPos, 0.25f);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_57 = __this->___BtnImageRect_10;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_61 = __this->___BtnImageRect_10;
		int32_t L_62 = V_0;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = RectTransform_get_anchoredPosition3D_mE2E0547DCA8921F42B5C666E562E6A59B4894CDA(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_65, L_66, (0.25f), NULL);
		NullCheck(L_60);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_60, L_67, NULL);
		// BtnImageRect[i].localScale = Vector3.Lerp(BtnImageRect[i].localScale, BtnTargetScale, 0.25f);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_68 = __this->___BtnImageRect_10;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_72 = __this->___BtnImageRect_10;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_76, L_77, (0.25f), NULL);
		NullCheck(L_71);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_78, NULL);
		// BtnImageRect[i].transform.GetChild(0).gameObject.SetActive(textActive);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_79 = __this->___BtnImageRect_10;
		int32_t L_80 = V_0;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_82, NULL);
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_83, 0, NULL);
		NullCheck(L_84);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85;
		L_85 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_84, NULL);
		bool L_86 = V_3;
		NullCheck(L_85);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_85, L_86, NULL);
		// for (int i = 0; i < SIZE; i++)
		int32_t L_87 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01ec:
	{
		// for (int i = 0; i < SIZE; i++)
		int32_t L_88 = V_0;
		if ((((int32_t)L_88) < ((int32_t)3)))
		{
			goto IL_00df;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainMenuController::TabClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_TabClick_m4DA1E425E22413B719324E39BD4C9D839DC7914B (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_n, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// targetIndex = n;
		int32_t L_1 = ___0_n;
		__this->___targetIndex_12 = L_1;
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickGoGameStartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickGoGameStartButton_m97D58C636FEE05A409AE84CFE1CD56FC3F391DB5 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D172ACFCF65C3533AD27B831DBDE3D70B8489A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C3ECD6ABAED80CFDD541F98FFA48A5A32AC879);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// DataManager.Instance.GameStartDataUpdate();
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		DataManager_GameStartDataUpdate_mAB880D6E198A6D26BD8512DA38DB2AC3B0F9699A(L_1, NULL);
		// switch (DataManager.Instance.curStage)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_2;
		L_2 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___curStage_23;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, 1)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0065;
			}
		}
	}
	{
		return;
	}

IL_003a:
	{
		// SceneManager.LoadScene("GameSceneStage" + DataManager.Instance.curStage);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_5;
		L_5 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___curStage_23);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral11D172ACFCF65C3533AD27B831DBDE3D70B8489A, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_8, NULL);
		// break;
		return;
	}

IL_0059:
	{
		// TriggerPopUp("Comming Soon...");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteralE4C3ECD6ABAED80CFDD541F98FFA48A5A32AC879, NULL);
		// break;
		return;
	}

IL_0065:
	{
		// TriggerPopUp("Comming Soon...");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteralE4C3ECD6ABAED80CFDD541F98FFA48A5A32AC879, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickGoBackMainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickGoBackMainMenuButton_m5F840AEA269D9E540E6311B2195070A46496A70D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D6A1E4FD7369239CC9C2E97AF3E348201236F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// int curStage = DataManager.Instance.curStage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___curStage_23;
		V_0 = L_2;
		// stageNameTMP.text = stageNames[curStage - 1];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___stageNameTMP_25;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___stageNames_16;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_7);
		// stageNumberTMP.text = "S T A G E " + curStage;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___stageNumberTMP_26;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral49D6A1E4FD7369239CC9C2E97AF3E348201236F7, L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// stageNameTMP.color = stageSymbolicColors[curStage - 1];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___stageNameTMP_25;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12 = __this->___stageSymbolicColors_17;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_15);
		// gameStartButtonImage.color = stageSymbolicColors[curStage - 1] * 0.97f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___gameStartButtonImage_27;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = __this->___stageSymbolicColors_17;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_20, (0.970000029f), NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_21);
		// stageSelectButtonImage.color = stageSymbolicColors[curStage - 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___stageSelectButtonImage_28;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_23 = __this->___stageSymbolicColors_17;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_26);
		// stageSelectedButtonImage.color = stageSymbolicColors[curStage - 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___stageSelectedButtonImage_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28 = __this->___stageSymbolicColors_17;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_31);
		// stageLockedButtonImage.color = stageSymbolicColors[curStage - 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___stageLockedButtonImage_30;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_33 = __this->___stageSymbolicColors_17;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_36);
		// Planet.GetComponent<Image>().sprite = stagePlanetSprites[curStage - 1];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___Planet_31;
		NullCheck(L_37);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38;
		L_38 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_37, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_39 = __this->___stagePlanetSprites_18;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_38, L_42, NULL);
		// Planet.GetComponent<Image>().color = Color.white;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___Planet_31;
		NullCheck(L_43);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44;
		L_44 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_43, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		L_45 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_44, L_45);
		// SpriteState newSpriteState = new SpriteState();
		il2cpp_codegen_initobj((&V_1), sizeof(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD));
		// newSpriteState.highlightedSprite = stagePlanetPressedSprites[curStage - 1];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_46 = __this->___stagePlanetPressedSprites_19;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline((&V_1), L_49, NULL);
		// newSpriteState.pressedSprite = stagePlanetPressedSprites[curStage - 1];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_50 = __this->___stagePlanetPressedSprites_19;
		int32_t L_51 = V_0;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline((&V_1), L_53, NULL);
		// Planet.GetComponent<Button>().spriteState = newSpriteState;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___Planet_31;
		NullCheck(L_54);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_55;
		L_55 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_54, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_56 = V_1;
		NullCheck(L_55);
		Selectable_set_spriteState_mE0E2CDA8757045FE0D35BC4D9E827857F64E19ED(L_55, L_56, NULL);
		// StageSelectionPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___StageSelectionPanel_15;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)0, NULL);
		// StagePlanetButton.enabled = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_58 = __this->___StagePlanetButton_20;
		NullCheck(L_58);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_58, (bool)1, NULL);
		// StagePlanetPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___StagePlanetPanel_14;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickGoStageSelectionMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickGoStageSelectionMenuButton_mB03BA0EA8C31F1A9D23F99D2E5D804EE25B64E55 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// curSelectStage = DataManager.Instance.curStage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___curStage_23;
		__this->___curSelectStage_36 = L_2;
		// StagePlanetPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___StagePlanetPanel_14;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// StagePlanetButton.enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___StagePlanetButton_20;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// StageSelectionPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___StageSelectionPanel_15;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// ClearStageSelected(curSelectStage);
		int32_t L_6 = __this->___curSelectStage_36;
		MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickStageSelectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickStageSelectButton_mA922F06004F8B032C6D54AD3C5923FFDDB07A878 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// DataManager.Instance.curStage = curSelectStage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		int32_t L_2 = __this->___curSelectStage_36;
		NullCheck(L_1);
		L_1->___curStage_23 = L_2;
		// ClearStageSelected(curSelectStage);
		int32_t L_3 = __this->___curSelectStage_36;
		MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickNextStageButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickNextStageButton_m6F7C197FDEB38B6D6526D661E5CE2A64D3B55A43 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E77CB0168359B72E4FFC698C5DA280AD6A36F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// if (isStageChanging) return;
		bool L_1 = __this->___isStageChanging_39;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (isStageChanging) return;
		return;
	}

IL_0019:
	{
		// curSelectStage = curSelectStage + 1;
		int32_t L_2 = __this->___curSelectStage_36;
		__this->___curSelectStage_36 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// PlanetAxisAnime.SetTrigger("doRotateNext");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___PlanetAxisAnime_33;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteral06E77CB0168359B72E4FFC698C5DA280AD6A36F7, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.RollPlanet);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4;
		L_4 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_4);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_4, ((int32_t)13), (-1.0f), NULL);
		// StartCoroutine(StageChange());
		RuntimeObject* L_5;
		L_5 = MainMenuController_StageChange_mB7071125D4A0190C4C7335031F593703F408052B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnClickPriorStageButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnClickPriorStageButton_m8DEF01DF9FFFAD23A959D1E330819AA5954C5E04 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA873A0460DED28D1367F59EFEA91F369FE079CB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// if (isStageChanging) return;
		bool L_1 = __this->___isStageChanging_39;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (isStageChanging) return;
		return;
	}

IL_0019:
	{
		// curSelectStage = curSelectStage - 1;
		int32_t L_2 = __this->___curSelectStage_36;
		__this->___curSelectStage_36 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// PlanetAxisAnime.SetTrigger("doRotatePrior");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___PlanetAxisAnime_33;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteralA873A0460DED28D1367F59EFEA91F369FE079CB9, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.RollPlanet);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4;
		L_4 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_4);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_4, ((int32_t)13), (-1.0f), NULL);
		// StartCoroutine(StageChange());
		RuntimeObject* L_5;
		L_5 = MainMenuController_StageChange_mB7071125D4A0190C4C7335031F593703F408052B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenuController::StageChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_StageChange_mB7071125D4A0190C4C7335031F593703F408052B (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* L_0 = (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6*)il2cpp_codegen_object_new(U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStageChangeU3Ed__88__ctor_mC9105C4064E54D25E9FBAC9423EF6791B6873264(L_0, 0, NULL);
		U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MainMenuController::ClearStageSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_curSelectStage, const RuntimeMethod* method) 
{
	{
		// StageLockedButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___StageLockedButton_23;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// if (curSelectStage == DataManager.Instance.curStage)
		int32_t L_2 = ___0_curSelectStage;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___curStage_23;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0041;
		}
	}
	{
		// StageSelectedButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___StageSelectedButton_22;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// StageSelectButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___StageSelectButton_21;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		return;
	}

IL_0041:
	{
		// StageSelectButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___StageSelectButton_21;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// StageSelectedButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___StageSelectedButton_22;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::ShowNonClearStageSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ShowNonClearStageSelected_m396B7AA657734FC98A27CEDB9F5E38D27B0F3DF1 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_curSelectStage, const RuntimeMethod* method) 
{
	{
		// StageSelectButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___StageSelectButton_21;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// StageSelectedButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___StageSelectedButton_22;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// StageLockedButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___StageLockedButton_23;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::TriggerPopUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFCD617DE9690D3AFD4DBBC582E5AC81D05C34C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PopUpTMP.text = msg;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___PopUpTMP_59;
		String_t* L_1 = ___0_msg;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// popUpAnime.SetTrigger("doPopUp");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___popUpAnime_58;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteralCCFCD617DE9690D3AFD4DBBC582E5AC81D05C34C, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_3);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_3, 2, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::backButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_backButton_mA8C044CF6864C5DECAF9CA56207EB7D0FF3FC0CE (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// curSelectedItem = null;
		__this->___curSelectedItem_57 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curSelectedItem_57), (void*)(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL);
		// equipmentInfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___equipmentInfoPanel_40;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_1);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_1, 0, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenuController::Count(TMPro.TextMeshProUGUI,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__text, int32_t ___1__current, int32_t ___2__target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* L_0 = (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64*)il2cpp_codegen_object_new(U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountU3Ed__93__ctor_m471FD7DD1DA1163C88235F3A85EFC0AB7EE3BEA3(L_0, 0, NULL);
		U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* L_1 = L_0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = ___0__text;
		NullCheck(L_1);
		L_1->____text_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____text_2), (void*)L_2);
		U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* L_3 = L_1;
		int32_t L_4 = ___1__current;
		NullCheck(L_3);
		L_3->____current_3 = L_4;
		U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* L_5 = L_3;
		int32_t L_6 = ___2__target;
		NullCheck(L_5);
		L_5->____target_4 = L_6;
		return L_5;
	}
}
// System.Void MainMenuController::EquipButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_EquipButton_m671496B07861ADF9E092A0F1EDE6B8E93502F220 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// equipButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___equipButton_55;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// unEquipButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___unEquipButton_56;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Equip);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4;
		L_4 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_4);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_4, 8, (-1.0f), NULL);
		// switch (curSelectedItem.itemPart)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = __this->___curSelectedItem_57;
		NullCheck(L_5);
		int32_t L_6 = L_5->___itemPart_0;
		V_0 = L_6;
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00dd;
			}
			case 3:
			{
				goto IL_011a;
			}
			case 4:
			{
				goto IL_0154;
			}
			case 5:
			{
				goto IL_018e;
			}
		}
	}
	{
		goto IL_01c6;
	}

IL_0063:
	{
		// if (DataManager.Instance.CurEquippedWeapon != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_8;
		L_8 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_8);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_9;
		L_9 = DataManager_get_CurEquippedWeapon_m0D4A90A2547E5507A753BD63878F1CA5B838F630_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// DataManager.Instance.CurEquippedWeapon.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_10;
		L_10 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_10);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_11;
		L_11 = DataManager_get_CurEquippedWeapon_m0D4A90A2547E5507A753BD63878F1CA5B838F630_inline(L_10, NULL);
		NullCheck(L_11);
		L_11->___isEquipped_2 = (bool)0;
	}

IL_007f:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_12 = __this->___curSelectedItem_57;
		NullCheck(L_12);
		L_12->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedWeapon = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_13;
		L_13 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_14 = __this->___curSelectedItem_57;
		NullCheck(L_13);
		DataManager_set_CurEquippedWeapon_m6A0CF78A5C0A4BD17D13C2442D414E2BEF557673_inline(L_13, L_14, NULL);
		// break;
		goto IL_01c6;
	}

IL_00a0:
	{
		// if (DataManager.Instance.CurEquippedGloves != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_15;
		L_15 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_15);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_16;
		L_16 = DataManager_get_CurEquippedGloves_m1FAFCEB3704916B9644E98403608EF80FD2FF4B1_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		// DataManager.Instance.CurEquippedGloves.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_17;
		L_17 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_17);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_18;
		L_18 = DataManager_get_CurEquippedGloves_m1FAFCEB3704916B9644E98403608EF80FD2FF4B1_inline(L_17, NULL);
		NullCheck(L_18);
		L_18->___isEquipped_2 = (bool)0;
	}

IL_00bc:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_19 = __this->___curSelectedItem_57;
		NullCheck(L_19);
		L_19->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedGloves = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_20;
		L_20 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_21 = __this->___curSelectedItem_57;
		NullCheck(L_20);
		DataManager_set_CurEquippedGloves_mFB29A3215264D4348D379954E4273635910A3051_inline(L_20, L_21, NULL);
		// break;
		goto IL_01c6;
	}

IL_00dd:
	{
		// if (DataManager.Instance.CurEquippedShoes != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_22;
		L_22 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_22);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_23;
		L_23 = DataManager_get_CurEquippedShoes_m79AC8BE50FED9A73C92D9A8EDBBF1C8AE1DE0B8D_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_00f9;
		}
	}
	{
		// DataManager.Instance.CurEquippedShoes.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_24;
		L_24 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_24);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_25;
		L_25 = DataManager_get_CurEquippedShoes_m79AC8BE50FED9A73C92D9A8EDBBF1C8AE1DE0B8D_inline(L_24, NULL);
		NullCheck(L_25);
		L_25->___isEquipped_2 = (bool)0;
	}

IL_00f9:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_26 = __this->___curSelectedItem_57;
		NullCheck(L_26);
		L_26->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedShoes = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_27;
		L_27 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_28 = __this->___curSelectedItem_57;
		NullCheck(L_27);
		DataManager_set_CurEquippedShoes_m5D4ABA12B1B34138A882AFD14112F76F7CDA952A_inline(L_27, L_28, NULL);
		// break;
		goto IL_01c6;
	}

IL_011a:
	{
		// if (DataManager.Instance.CurEquippedSheld != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_29;
		L_29 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_29);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_30;
		L_30 = DataManager_get_CurEquippedSheld_m0FC925590A5A6D6DBB369FB6E90FCBB8A8844DB6_inline(L_29, NULL);
		if (!L_30)
		{
			goto IL_0136;
		}
	}
	{
		// DataManager.Instance.CurEquippedSheld.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_31;
		L_31 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_31);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_32;
		L_32 = DataManager_get_CurEquippedSheld_m0FC925590A5A6D6DBB369FB6E90FCBB8A8844DB6_inline(L_31, NULL);
		NullCheck(L_32);
		L_32->___isEquipped_2 = (bool)0;
	}

IL_0136:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_33 = __this->___curSelectedItem_57;
		NullCheck(L_33);
		L_33->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedSheld = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_34;
		L_34 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_35 = __this->___curSelectedItem_57;
		NullCheck(L_34);
		DataManager_set_CurEquippedSheld_m3C8BC626B2551BADB165C1452417874AFEB3A4D6_inline(L_34, L_35, NULL);
		// break;
		goto IL_01c6;
	}

IL_0154:
	{
		// if (DataManager.Instance.CurEquippedHelmat != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_36;
		L_36 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_36);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_37;
		L_37 = DataManager_get_CurEquippedHelmat_m960B78AC0445651468AA81C3CFAA54708C5A0780_inline(L_36, NULL);
		if (!L_37)
		{
			goto IL_0170;
		}
	}
	{
		// DataManager.Instance.CurEquippedHelmat.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_38;
		L_38 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_38);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_39;
		L_39 = DataManager_get_CurEquippedHelmat_m960B78AC0445651468AA81C3CFAA54708C5A0780_inline(L_38, NULL);
		NullCheck(L_39);
		L_39->___isEquipped_2 = (bool)0;
	}

IL_0170:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_40 = __this->___curSelectedItem_57;
		NullCheck(L_40);
		L_40->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedHelmat = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_41;
		L_41 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_42 = __this->___curSelectedItem_57;
		NullCheck(L_41);
		DataManager_set_CurEquippedHelmat_m0A7A4DC207B0F77278CDA66BB4D4F2208BDC8A49_inline(L_41, L_42, NULL);
		// break;
		goto IL_01c6;
	}

IL_018e:
	{
		// if (DataManager.Instance.CurEquippedArmor != null)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_43;
		L_43 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_43);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_44;
		L_44 = DataManager_get_CurEquippedArmor_mAD0C2CC0E3B3A3DC70EBBB3B9A837DF3F5B08C7D_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_01aa;
		}
	}
	{
		// DataManager.Instance.CurEquippedArmor.isEquipped = false;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_45;
		L_45 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_45);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_46;
		L_46 = DataManager_get_CurEquippedArmor_mAD0C2CC0E3B3A3DC70EBBB3B9A837DF3F5B08C7D_inline(L_45, NULL);
		NullCheck(L_46);
		L_46->___isEquipped_2 = (bool)0;
	}

IL_01aa:
	{
		// curSelectedItem.isEquipped = true;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_47 = __this->___curSelectedItem_57;
		NullCheck(L_47);
		L_47->___isEquipped_2 = (bool)1;
		// DataManager.Instance.CurEquippedArmor = curSelectedItem;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_48;
		L_48 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_49 = __this->___curSelectedItem_57;
		NullCheck(L_48);
		DataManager_set_CurEquippedArmor_mC42AC58F1FE828B5D6B9B99D42FA9FE8DA5404F4_inline(L_48, L_49, NULL);
	}

IL_01c6:
	{
		// DataManager.Instance.DataUpdate();
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_50;
		L_50 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_50);
		DataManager_DataUpdate_mE46AB155E95F9AB856C97F78862FC600D6F678D5(L_50, NULL);
		// curSelectedItem = null;
		__this->___curSelectedItem_57 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curSelectedItem_57), (void*)(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL);
		// equipmentInfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___equipmentInfoPanel_40;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::UnequipButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_UnequipButton_m60A57EEF77CEA6B65BF5362735348C71F1EEDAC0 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// curSelectedItem.isEquipped = false;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curSelectedItem_57;
		NullCheck(L_0);
		L_0->___isEquipped_2 = (bool)0;
		// equipButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___equipButton_55;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// unEquipButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___unEquipButton_56;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.UnEquip);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_5;
		L_5 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_5);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_5, ((int32_t)9), (-1.0f), NULL);
		// switch (curSelectedItem.itemPart)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = __this->___curSelectedItem_57;
		NullCheck(L_6);
		int32_t L_7 = L_6->___itemPart_0;
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_00ae;
			}
		}
	}
	{
		goto IL_00b9;
	}

IL_006d:
	{
		// DataManager.Instance.CurEquippedWeapon = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9;
		L_9 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_9);
		DataManager_set_CurEquippedWeapon_m6A0CF78A5C0A4BD17D13C2442D414E2BEF557673_inline(L_9, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
		// break;
		goto IL_00b9;
	}

IL_007a:
	{
		// DataManager.Instance.CurEquippedGloves = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_10;
		L_10 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_10);
		DataManager_set_CurEquippedGloves_mFB29A3215264D4348D379954E4273635910A3051_inline(L_10, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
		// break;
		goto IL_00b9;
	}

IL_0087:
	{
		// DataManager.Instance.CurEquippedShoes = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_11;
		L_11 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_11);
		DataManager_set_CurEquippedShoes_m5D4ABA12B1B34138A882AFD14112F76F7CDA952A_inline(L_11, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
		// break;
		goto IL_00b9;
	}

IL_0094:
	{
		// DataManager.Instance.CurEquippedSheld = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_12);
		DataManager_set_CurEquippedSheld_m3C8BC626B2551BADB165C1452417874AFEB3A4D6_inline(L_12, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
		// break;
		goto IL_00b9;
	}

IL_00a1:
	{
		// DataManager.Instance.CurEquippedHelmat = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_13;
		L_13 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_13);
		DataManager_set_CurEquippedHelmat_m0A7A4DC207B0F77278CDA66BB4D4F2208BDC8A49_inline(L_13, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
		// break;
		goto IL_00b9;
	}

IL_00ae:
	{
		// DataManager.Instance.CurEquippedArmor = null;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_14;
		L_14 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_14);
		DataManager_set_CurEquippedArmor_mC42AC58F1FE828B5D6B9B99D42FA9FE8DA5404F4_inline(L_14, (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL, NULL);
	}

IL_00b9:
	{
		// DataManager.Instance.DataUpdate();
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_15;
		L_15 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_15);
		DataManager_DataUpdate_mE46AB155E95F9AB856C97F78862FC600D6F678D5(L_15, NULL);
		// curSelectedItem = null;
		__this->___curSelectedItem_57 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curSelectedItem_57), (void*)(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL);
		// equipmentInfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___equipmentInfoPanel_40;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::UpgradeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_UpgradeButton_mE96766472B2D93659BA5BAAE0C331EC4E446BC1D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AFA3770603336B2860584DBA4C555C56EE38594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7FDA4B00FFAF33CD005F4F788354A8C96B192D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (curSelectedItem.itemCurLevel == curSelectedItem.itemMaxLevel)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curSelectedItem_57;
		NullCheck(L_0);
		int32_t L_1 = L_0->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = __this->___curSelectedItem_57;
		NullCheck(L_2);
		int32_t L_3 = L_2->___itemMaxLevel_14;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		// TriggerPopUp("?? ??? MAX???.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral7AFA3770603336B2860584DBA4C555C56EE38594, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// if (DataManager.Instance.PlayerGold < curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_4;
		L_4 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_4, NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = __this->___curSelectedItem_57;
		NullCheck(L_6);
		int32_t L_7 = L_6->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8 = __this->___curSelectedItem_57;
		NullCheck(L_8);
		int32_t L_9 = L_8->___itemUpgradeCost_16;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_7, L_9)))))
		{
			goto IL_0053;
		}
	}
	{
		// TriggerPopUp("??? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteralC7FDA4B00FFAF33CD005F4F788354A8C96B192D9, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Upgrade);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_10;
		L_10 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_10);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_10, ((int32_t)10), (-1.0f), NULL);
		// StartCoroutine(Count(playerGoldText, DataManager.Instance.PlayerGold, DataManager.Instance.PlayerGold - curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___playerGoldText_7;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_12, NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_14;
		L_14 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_14, NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_16 = __this->___curSelectedItem_57;
		NullCheck(L_16);
		int32_t L_17 = L_16->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_18 = __this->___curSelectedItem_57;
		NullCheck(L_18);
		int32_t L_19 = L_18->___itemUpgradeCost_16;
		RuntimeObject* L_20;
		L_20 = MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D(__this, L_11, L_13, ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)il2cpp_codegen_multiply(L_17, L_19)))), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_20, NULL);
		// DataManager.Instance.PlayerGold -= curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_22;
		L_22 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_23, NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_25 = __this->___curSelectedItem_57;
		NullCheck(L_25);
		int32_t L_26 = L_25->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_27 = __this->___curSelectedItem_57;
		NullCheck(L_27);
		int32_t L_28 = L_27->___itemUpgradeCost_16;
		NullCheck(L_23);
		DataManager_set_PlayerGold_m94B1D65DA9C762B6405EAF9C7F76F1488F5EB1CC_inline(L_23, ((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)il2cpp_codegen_multiply(L_26, L_28)))), NULL);
		// curSelectedItem.itemCurLevel++;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_29 = __this->___curSelectedItem_57;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->___itemCurLevel_13;
		NullCheck(L_30);
		L_30->___itemCurLevel_13 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// DataManager.Instance.DataUpdate();
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_32;
		L_32 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_32);
		DataManager_DataUpdate_mE46AB155E95F9AB856C97F78862FC600D6F678D5(L_32, NULL);
		// EquipInfoUpdate(curSelectedItem);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_33 = __this->___curSelectedItem_57;
		MainMenuController_EquipInfoUpdate_m33BE37D28C2623A8B1E13967898B4900A9DBDA1C(__this, L_33, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SellButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SellButton_mE2C4ECEFD1D9F373149F27D6536705C9C6CEDB2E (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 1, (-1.0f), NULL);
		// inventory.deleteItem(curSelectedItem);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_1 = __this->___inventory_61;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = __this->___curSelectedItem_57;
		NullCheck(L_1);
		Inventory_deleteItem_mB18E19B4D7DD79B2634E58F0F5F3DCEEAAD4BC1E(L_1, L_2, NULL);
		// PlusGold(Mathf.RoundToInt((curSelectedItem.itemPrice + (curSelectedItem.itemCurLevel - 1) * curSelectedItem.itemUpgradeCost) * 0.5f));
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_3 = __this->___curSelectedItem_57;
		NullCheck(L_3);
		int32_t L_4 = L_3->___itemPrice_15;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = __this->___curSelectedItem_57;
		NullCheck(L_5);
		int32_t L_6 = L_5->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_7 = __this->___curSelectedItem_57;
		NullCheck(L_7);
		int32_t L_8 = L_7->___itemUpgradeCost_16;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_8))))), (0.5f))), NULL);
		MainMenuController_PlusGold_m937B60B4C4D55F2E0805C1C2B44E3A5BB72313E9(__this, L_9, NULL);
		// if (curSelectedItem.isEquipped)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_10 = __this->___curSelectedItem_57;
		NullCheck(L_10);
		bool L_11 = L_10->___isEquipped_2;
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		// UnequipButton();
		MainMenuController_UnequipButton_m60A57EEF77CEA6B65BF5362735348C71F1EEDAC0(__this, NULL);
		return;
	}

IL_006c:
	{
		// curSelectedItem = null;
		__this->___curSelectedItem_57 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curSelectedItem_57), (void*)(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)NULL);
		// equipmentInfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___equipmentInfoPanel_40;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::EquipInfoUpdate(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_EquipInfoUpdate_m33BE37D28C2623A8B1E13967898B4900A9DBDA1C (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemGrade_t234E84B9CACC4AE7ECB2CBE9ED044027817401AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemPart_tAE2C2913F4BB6BBAD5408C6338EA0684E6264A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2999D0E9B7ACFD4AFBABCB61E5261B0D6B389C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AFCFA469D9E9B05DD101B493B978A7D323F5AA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612C3797426144C3C776DE00617309EF6A458B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB51DDB21688F4005D861074599149BF2D1D7950E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// curSelectedItem = _item;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0__item;
		__this->___curSelectedItem_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curSelectedItem_57), (void*)L_0);
		// equipNameTMP.text = _item.itemName;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___equipNameTMP_42;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = ___0__item;
		NullCheck(L_2);
		String_t* L_3 = L_2->___itemName_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// equipTopNameImage.color = SetGradeColorBackground(_item);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___equipTopNameImage_41;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = ___0__item;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(__this, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// equipTopGradeImage.color = SetGradeColorBackground(_item);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___equipTopGradeImage_43;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8 = ___0__item;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(__this, L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
		// equipTopGradeTMP.text = _item.itemGrade.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___equipTopGradeTMP_44;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_11 = ___0__item;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___itemGrade_1);
		Il2CppFakeBox<int32_t> L_13(ItemGrade_t234E84B9CACC4AE7ECB2CBE9ED044027817401AC_il2cpp_TypeInfo_var, L_12);
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// equipGradeImage.color = SetGradeColorBackground(_item);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___equipGradeImage_45;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_16 = ___0__item;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(__this, L_16, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_17);
		// equipImage.sprite = _item.itemImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___equipImage_46;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_19 = ___0__item;
		NullCheck(L_19);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = L_19->___itemImage_6;
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_20, NULL);
		// if (curSelectedItem.isEquipped)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_21 = __this->___curSelectedItem_57;
		NullCheck(L_21);
		bool L_22 = L_21->___isEquipped_2;
		if (!L_22)
		{
			goto IL_00ac;
		}
	}
	{
		// equipButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___equipButton_55;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// unEquipButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___unEquipButton_56;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		goto IL_00ce;
	}

IL_00ac:
	{
		// equipButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___equipButton_55;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// unEquipButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___unEquipButton_56;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
	}

IL_00ce:
	{
		// equipLevelTMP.text = $"??: {_item.itemCurLevel.ToString()} / {_item.itemMaxLevel.ToString()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___equipLevelTMP_47;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_32 = ___0__item;
		NullCheck(L_32);
		int32_t* L_33 = (&L_32->___itemCurLevel_13);
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_33, NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_35 = ___0__item;
		NullCheck(L_35);
		int32_t* L_36 = (&L_35->___itemMaxLevel_14);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		String_t* L_38;
		L_38 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB51DDB21688F4005D861074599149BF2D1D7950E, L_34, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_37, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, L_38);
		// switch (_item.itemPart)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_39 = ___0__item;
		NullCheck(L_39);
		int32_t L_40 = L_39->___itemPart_0;
		V_0 = L_40;
		int32_t L_41 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_41, 1)))
		{
			case 0:
			{
				goto IL_012b;
			}
			case 1:
			{
				goto IL_012b;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_0162;
			}
			case 4:
			{
				goto IL_0162;
			}
			case 5:
			{
				goto IL_0162;
			}
			case 6:
			{
				goto IL_0198;
			}
		}
	}
	{
		goto IL_0198;
	}

IL_012b:
	{
		// statTMP.text = "ATK";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_42 = __this->___statTMP_48;
		NullCheck(L_42);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_42, _stringLiteral2999D0E9B7ACFD4AFBABCB61E5261B0D6B389C27);
		// equipStatTMP.text = MoneyUnitString.GetThousandCommaText(_item.itemATK + (int)_item.itemGrade * _item.itemCurLevel);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43 = __this->___equipStatTMP_49;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_44 = ___0__item;
		NullCheck(L_44);
		int32_t L_45 = L_44->___itemATK_7;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_46 = ___0__item;
		NullCheck(L_46);
		int32_t L_47 = L_46->___itemGrade_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_48 = ___0__item;
		NullCheck(L_48);
		int32_t L_49 = L_48->___itemCurLevel_13;
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_50;
		L_50 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)((int32_t)il2cpp_codegen_add(L_45, ((int32_t)il2cpp_codegen_multiply((int32_t)L_47, L_49))))), NULL);
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_43, L_50);
		// break;
		goto IL_0198;
	}

IL_0162:
	{
		// statTMP.text = "HP";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___statTMP_48;
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_51, _stringLiteral612C3797426144C3C776DE00617309EF6A458B06);
		// equipStatTMP.text = MoneyUnitString.GetThousandCommaText(_item.itemHP + (int)_item.itemGrade * _item.itemCurLevel);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_52 = __this->___equipStatTMP_49;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_53 = ___0__item;
		NullCheck(L_53);
		float L_54 = L_53->___itemHP_10;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_55 = ___0__item;
		NullCheck(L_55);
		int32_t L_56 = L_55->___itemGrade_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_57 = ___0__item;
		NullCheck(L_57);
		int32_t L_58 = L_57->___itemCurLevel_13;
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_59;
		L_59 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)((float)il2cpp_codegen_add(L_54, ((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_56, L_58)))))), NULL);
		NullCheck(L_52);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_52, L_59);
	}

IL_0198:
	{
		// equipPartTMP.text = _item.itemPart.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___equipPartTMP_50;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_61 = ___0__item;
		NullCheck(L_61);
		int32_t* L_62 = (&L_61->___itemPart_0);
		Il2CppFakeBox<int32_t> L_63(ItemPart_tAE2C2913F4BB6BBAD5408C6338EA0684E6264A48_il2cpp_TypeInfo_var, L_62);
		String_t* L_64;
		L_64 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_63), NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_64);
		// equipDescTMP.text = _item.itemDesc.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65 = __this->___equipDescTMP_51;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_66 = ___0__item;
		NullCheck(L_66);
		String_t* L_67 = L_66->___itemDesc_5;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_67);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_65, L_68);
		// if (_item.itemCurLevel == _item.itemMaxLevel)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_69 = ___0__item;
		NullCheck(L_69);
		int32_t L_70 = L_69->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_71 = ___0__item;
		NullCheck(L_71);
		int32_t L_72 = L_71->___itemMaxLevel_14;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_72))))
		{
			goto IL_01ff;
		}
	}
	{
		// equipUpgradeCostTMP.text = $"{MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerGold)} / -";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_73 = __this->___equipUpgradeCostTMP_52;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_74;
		L_74 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_74, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_76;
		L_76 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_75), NULL);
		String_t* L_77;
		L_77 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_76, _stringLiteral2AFCFA469D9E9B05DD101B493B978A7D323F5AA2, NULL);
		NullCheck(L_73);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_73, L_77);
		goto IL_0241;
	}

IL_01ff:
	{
		// equipUpgradeCostTMP.text = $"{MoneyUnitString.GetThousandCommaText(DataManager.Instance.PlayerGold)} / {MoneyUnitString.GetThousandCommaText(curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost)}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_78 = __this->___equipUpgradeCostTMP_52;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_79;
		L_79 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_79);
		int32_t L_80;
		L_80 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_79, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_81;
		L_81 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_80), NULL);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_82 = __this->___curSelectedItem_57;
		NullCheck(L_82);
		int32_t L_83 = L_82->___itemCurLevel_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_84 = __this->___curSelectedItem_57;
		NullCheck(L_84);
		int32_t L_85 = L_84->___itemUpgradeCost_16;
		String_t* L_86;
		L_86 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)((int32_t)il2cpp_codegen_multiply(L_83, L_85))), NULL);
		String_t* L_87;
		L_87 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_81, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_86, NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_78, L_87);
	}

IL_0241:
	{
		// equipmentInfoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___equipmentInfoPanel_40;
		NullCheck(L_88);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_88, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Color MainMenuController::SetGradeColorBackground(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// switch (_item.itemGrade)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0__item;
		NullCheck(L_0);
		int32_t L_1 = L_0->___itemGrade_1;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_008c;
	}

IL_0025:
	{
		// retColor = new Color(0.75f, 0.75f, 0.75f, 1f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.75f), (0.75f), (0.75f), (1.0f), NULL);
		// break;
		goto IL_0092;
	}

IL_0042:
	{
		// retColor = new Color(0, 0.5f, 1f, 1f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (0.5f), (1.0f), (1.0f), NULL);
		// break;
		goto IL_0092;
	}

IL_005f:
	{
		// retColor = new Color(0.65f, 0f, 1f, 1f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.649999976f), (0.0f), (1.0f), (1.0f), NULL);
		// break;
		goto IL_0092;
	}

IL_007c:
	{
		// retColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_3;
		// break;
		goto IL_0092;
	}

IL_0084:
	{
		// retColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		V_0 = L_4;
		// break;
		goto IL_0092;
	}

IL_008c:
	{
		// retColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_5;
	}

IL_0092:
	{
		// return retColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		return L_6;
	}
}
// System.Void MainMenuController::BuyGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BuyGold_mD70BD69F740E3D62DBA6A3C9F9B0B8363FD0A268 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int goldNumber = 0;
		V_0 = 0;
		// if (zamPrice > DataManager.Instance.PlayerZam)
		int32_t L_0 = ___0_zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_1, NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// TriggerPopUp("?? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B, NULL);
		// return;
		return;
	}

IL_001b:
	{
		int32_t L_3 = ___0_zamPrice;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___0_zamPrice;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)50))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ___0_zamPrice;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)100))))
		{
			goto IL_0069;
		}
	}
	{
		goto IL_00d6;
	}

IL_002f:
	{
		int32_t L_6 = ___0_zamPrice;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)300))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_7 = ___0_zamPrice;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1000))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00d6;
	}

IL_0044:
	{
		// if (!GoldAttracters[0].isStopped)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = __this->___GoldAttracters_62;
		NullCheck(L_8);
		int32_t L_9 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11;
		L_11 = ParticleSystem_get_isStopped_mA7C920FFBFDBE437FED1D321EF9B568F57A1CDFA(L_10, NULL);
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		// return;
		return;
	}

IL_0054:
	{
		// goldNumber = 20000;
		V_0 = ((int32_t)20000);
		// GoldAttracters[0].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_12 = __this->___GoldAttracters_62;
		NullCheck(L_12);
		int32_t L_13 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_14, NULL);
		// break;
		goto IL_00d6;
	}

IL_0069:
	{
		// if (!GoldAttracters[1].isStopped)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_15 = __this->___GoldAttracters_62;
		NullCheck(L_15);
		int32_t L_16 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		bool L_18;
		L_18 = ParticleSystem_get_isStopped_mA7C920FFBFDBE437FED1D321EF9B568F57A1CDFA(L_17, NULL);
		if (L_18)
		{
			goto IL_0079;
		}
	}
	{
		// return;
		return;
	}

IL_0079:
	{
		// goldNumber = 50000;
		V_0 = ((int32_t)50000);
		// GoldAttracters[1].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_19 = __this->___GoldAttracters_62;
		NullCheck(L_19);
		int32_t L_20 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_21, NULL);
		// break;
		goto IL_00d6;
	}

IL_008e:
	{
		// if (!GoldAttracters[2].isStopped)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_22 = __this->___GoldAttracters_62;
		NullCheck(L_22);
		int32_t L_23 = 2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		bool L_25;
		L_25 = ParticleSystem_get_isStopped_mA7C920FFBFDBE437FED1D321EF9B568F57A1CDFA(L_24, NULL);
		if (L_25)
		{
			goto IL_009e;
		}
	}
	{
		// return;
		return;
	}

IL_009e:
	{
		// goldNumber = 200000;
		V_0 = ((int32_t)200000);
		// GoldAttracters[2].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_26 = __this->___GoldAttracters_62;
		NullCheck(L_26);
		int32_t L_27 = 2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_28, NULL);
		// break;
		goto IL_00d6;
	}

IL_00b3:
	{
		// if (!GoldAttracters[3].isStopped)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_29 = __this->___GoldAttracters_62;
		NullCheck(L_29);
		int32_t L_30 = 3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		bool L_32;
		L_32 = ParticleSystem_get_isStopped_mA7C920FFBFDBE437FED1D321EF9B568F57A1CDFA(L_31, NULL);
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		// return;
		return;
	}

IL_00c3:
	{
		// goldNumber = 1000000;
		V_0 = ((int32_t)1000000);
		// GoldAttracters[3].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_33 = __this->___GoldAttracters_62;
		NullCheck(L_33);
		int32_t L_34 = 3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_35, NULL);
	}

IL_00d6:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_36;
		L_36 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_36);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_36, 1, (-1.0f), NULL);
		// SubtractZam(zamPrice);
		int32_t L_37 = ___0_zamPrice;
		MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E(__this, L_37, NULL);
		// PlusGold(goldNumber);
		int32_t L_38 = V_0;
		MainMenuController_PlusGold_m937B60B4C4D55F2E0805C1C2B44E3A5BB72313E9(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::PlusGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PlusGold_m937B60B4C4D55F2E0805C1C2B44E3A5BB72313E9 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_goldNumber, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Count(playerGoldText, DataManager.Instance.PlayerGold, DataManager.Instance.PlayerGold + goldNumber));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerGoldText_7;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_1, NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_3, NULL);
		int32_t L_5 = ___0_goldNumber;
		RuntimeObject* L_6;
		L_6 = MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D(__this, L_0, L_2, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// DataManager.Instance.PlayerGold += goldNumber;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_8;
		L_8 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline(L_9, NULL);
		int32_t L_11 = ___0_goldNumber;
		NullCheck(L_9);
		DataManager_set_PlayerGold_m94B1D65DA9C762B6405EAF9C7F76F1488F5EB1CC_inline(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::MinusGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_MinusGold_mA5B80FC0A2CC45D85ABBD022FCA45D4015A93FB0 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_goldNumber, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Count(playerZamText, DataManager.Instance.PlayerZam, DataManager.Instance.PlayerZam - goldNumber));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerZamText_5;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_1, NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_3, NULL);
		int32_t L_5 = ___0_goldNumber;
		RuntimeObject* L_6;
		L_6 = MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D(__this, L_0, L_2, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// DataManager.Instance.playerZam -= goldNumber;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_8;
		L_8 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___playerZam_14;
		int32_t L_11 = ___0_goldNumber;
		NullCheck(L_9);
		L_9->___playerZam_14 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		// }
		return;
	}
}
// System.Void MainMenuController::PlusZam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PlusZam_m0A4C3F985A963F4269FFE7B4B6EE791341751B6D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamNumber, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Count(playerZamText, DataManager.Instance.PlayerZam, DataManager.Instance.PlayerZam + zamNumber));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerZamText_5;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_1, NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_3, NULL);
		int32_t L_5 = ___0_zamNumber;
		RuntimeObject* L_6;
		L_6 = MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D(__this, L_0, L_2, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// DataManager.Instance.playerZam += zamNumber;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_8;
		L_8 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___playerZam_14;
		int32_t L_11 = ___0_zamNumber;
		NullCheck(L_9);
		L_9->___playerZam_14 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
// System.Void MainMenuController::SubtractZam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Count(playerZamText, DataManager.Instance.PlayerZam, DataManager.Instance.PlayerZam - zamPrice));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerZamText_5;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_1, NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_3, NULL);
		int32_t L_5 = ___0_zamPrice;
		RuntimeObject* L_6;
		L_6 = MainMenuController_Count_mC958306D3C8D055068093A6A28CDFA601B16562D(__this, L_0, L_2, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// DataManager.Instance.playerZam -= zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_8;
		L_8 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___playerZam_14;
		int32_t L_11 = ___0_zamPrice;
		NullCheck(L_9);
		L_9->___playerZam_14 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		// }
		return;
	}
}
// System.Void MainMenuController::NormalDrawing1RandItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_NormalDrawing1RandItem_m5EDA0FC0BD1430C849A22AAD3812C0927BA445DD (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_7 = NULL;
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// int total = 0;
		V_0 = 0;
		// int weight = 0;
		V_1 = 0;
		// int selectNum = 0;
		V_2 = 0;
		// List<Item> gachaList = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_1 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_1, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		V_3 = L_1;
		// if (zamPrice > DataManager.Instance.PlayerZam)
		int32_t L_2 = ___0_zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_3, NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		// TriggerPopUp("?? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B, NULL);
		// return;
		return;
	}

IL_0035:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_4 = 0;
		goto IL_0097;
	}

IL_003a:
	{
		// Item.ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_5;
		L_5 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_5);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_6 = L_5->___items_27;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8;
		L_8 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_6, L_7, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = L_8->___itemGrade_1;
		V_5 = L_9;
		// if (curItemGrade == Item.ItemGrade.Normal || curItemGrade == Item.ItemGrade.Rare || curItemGrade == Item.ItemGrade.Epic)
		int32_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)3))))
		{
			goto IL_0091;
		}
	}

IL_0061:
	{
		// gachaList.Add(DataManager.Instance.items[i]);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_13 = V_3;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_14;
		L_14 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_14);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_15 = L_14->___items_27;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_17;
		L_17 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_15, L_16, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_13, L_17, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// total += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_18 = V_0;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_19;
		L_19 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_19);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_20 = L_19->___items_27;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_22;
		L_22 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_20, L_21, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->___itemDrawingWeight_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, L_23));
	}

IL_0091:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_25 = V_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_26;
		L_26 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_26);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_27 = L_26->___items_27;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_27, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_003a;
		}
	}
	{
		// selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));
		int32_t L_29 = V_0;
		float L_30;
		L_30 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		int32_t L_31;
		L_31 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_29), L_30)), NULL);
		V_2 = L_31;
		// for (int i = 0; i < gachaList.Count; i++)
		V_6 = 0;
		goto IL_010e;
	}

IL_00c7:
	{
		// weight += gachaList[i].itemDrawingWeight;
		int32_t L_32 = V_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_33 = V_3;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_35;
		L_35 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_33, L_34, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36 = L_35->___itemDrawingWeight_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, L_36));
		// if (selectNum <= weight)
		int32_t L_37 = V_2;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) > ((int32_t)L_38)))
		{
			goto IL_0108;
		}
	}
	{
		// Item newItem = new Item(gachaList[i]);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_39 = V_3;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_41;
		L_41 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_39, L_40, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_42 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)il2cpp_codegen_object_new(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D(L_42, L_41, NULL);
		V_7 = L_42;
		// inventory.AddItem(newItem);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_43 = __this->___inventory_61;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_44 = V_7;
		NullCheck(L_43);
		Inventory_AddItem_m51A0B6069C21273F41FB11D47FE17AEC5FA0A924(L_43, L_44, NULL);
		// StartCoroutine(Producing1Item(newItem));
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_45 = V_7;
		RuntimeObject* L_46;
		L_46 = MainMenuController_Producing1Item_m5B7F84461A4A87AB7DADF97571BC21FBA85EA503(__this, L_45, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_47;
		L_47 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_46, NULL);
		// break;
		goto IL_0118;
	}

IL_0108:
	{
		// for (int i = 0; i < gachaList.Count; i++)
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_010e:
	{
		// for (int i = 0; i < gachaList.Count; i++)
		int32_t L_49 = V_6;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_50 = V_3;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_50, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_00c7;
		}
	}

IL_0118:
	{
		// SubtractZam(zamPrice);
		int32_t L_52 = ___0_zamPrice;
		MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E(__this, L_52, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::NormalDrawing10RandItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_NormalDrawing10RandItem_m0979392CCB47063BBD18272A29E846DE262F5B71 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* V_3 = NULL;
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_9 = NULL;
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// int total = 0;
		V_0 = 0;
		// int weight = 0;
		V_1 = 0;
		// int selectNum = 0;
		V_2 = 0;
		// List<Item> gachaList = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_1 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_1, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		V_3 = L_1;
		// List<Item> SelectedItemList = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_2 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_2, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		V_4 = L_2;
		// if (zamPrice > DataManager.Instance.PlayerZam)
		int32_t L_3 = ___0_zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_4;
		L_4 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_4, NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		// TriggerPopUp("?? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B, NULL);
		// return;
		return;
	}

IL_003c:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_5 = 0;
		goto IL_009e;
	}

IL_0041:
	{
		// Item.ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_6;
		L_6 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_6);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_7 = L_6->___items_27;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_9;
		L_9 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_7, L_8, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = L_9->___itemGrade_1;
		V_6 = L_10;
		// if (curItemGrade == Item.ItemGrade.Normal || curItemGrade == Item.ItemGrade.Rare || curItemGrade == Item.ItemGrade.Epic)
		int32_t L_11 = V_6;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_6;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_6;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0098;
		}
	}

IL_0068:
	{
		// gachaList.Add(DataManager.Instance.items[i]);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_14 = V_3;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_15;
		L_15 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_15);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_16 = L_15->___items_27;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_18;
		L_18 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_16, L_17, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_14, L_18, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// total += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_19 = V_0;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_20;
		L_20 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_20);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_21 = L_20->___items_27;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_23;
		L_23 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_21, L_22, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24 = L_23->___itemDrawingWeight_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
	}

IL_0098:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009e:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_26 = V_5;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_27;
		L_27 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_27);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_28 = L_27->___items_27;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_28, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_29)))
		{
			goto IL_0041;
		}
	}
	{
		// for (int j = 0; j < 10; j++)
		V_7 = 0;
		goto IL_0126;
	}

IL_00b6:
	{
		// weight = 0;
		V_1 = 0;
		// selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));
		int32_t L_30 = V_0;
		float L_31;
		L_31 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		int32_t L_32;
		L_32 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_30), L_31)), NULL);
		V_2 = L_32;
		// for (int i = 0; i < gachaList.Count; i++)
		V_8 = 0;
		goto IL_0116;
	}

IL_00d5:
	{
		// weight += gachaList[i].itemDrawingWeight;
		int32_t L_33 = V_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_34 = V_3;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_36;
		L_36 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_34, L_35, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_36);
		int32_t L_37 = L_36->___itemDrawingWeight_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, L_37));
		// if (selectNum <= weight)
		int32_t L_38 = V_2;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) > ((int32_t)L_39)))
		{
			goto IL_0110;
		}
	}
	{
		// Item newItem = new Item(gachaList[i]);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_40 = V_3;
		int32_t L_41 = V_8;
		NullCheck(L_40);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_42;
		L_42 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_40, L_41, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_43 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)il2cpp_codegen_object_new(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D(L_43, L_42, NULL);
		V_9 = L_43;
		// inventory.AddItem(newItem);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_44 = __this->___inventory_61;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_45 = V_9;
		NullCheck(L_44);
		Inventory_AddItem_m51A0B6069C21273F41FB11D47FE17AEC5FA0A924(L_44, L_45, NULL);
		// SelectedItemList.Add(newItem);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_46 = V_4;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_46, L_47, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// break;
		goto IL_0120;
	}

IL_0110:
	{
		// for (int i = 0; i < gachaList.Count; i++)
		int32_t L_48 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0116:
	{
		// for (int i = 0; i < gachaList.Count; i++)
		int32_t L_49 = V_8;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_50 = V_3;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_50, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_00d5;
		}
	}

IL_0120:
	{
		// for (int j = 0; j < 10; j++)
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0126:
	{
		// for (int j = 0; j < 10; j++)
		int32_t L_53 = V_7;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)10))))
		{
			goto IL_00b6;
		}
	}
	{
		// StartCoroutine(Producing10Items(SelectedItemList));
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_54 = V_4;
		RuntimeObject* L_55;
		L_55 = MainMenuController_Producing10Items_m61D99FA2AF7375B62BC024D8AC62E3D1DBEAD091(__this, L_54, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_56;
		L_56 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_55, NULL);
		// SubtractZam(zamPrice);
		int32_t L_57 = ___0_zamPrice;
		MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E(__this, L_57, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::PremiumDrawing1RandItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PremiumDrawing1RandItem_m5C21D8210A868A1C18B14B5D5A66EEC243F0BFF0 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_5 = NULL;
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// int total = 0;
		V_0 = 0;
		// int weight = 0;
		V_1 = 0;
		// int selectNum = 0;
		V_2 = 0;
		// if (zamPrice > DataManager.Instance.PlayerZam)
		int32_t L_1 = ___0_zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_2;
		L_2 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_2, NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		// TriggerPopUp("?? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_3 = 0;
		goto IL_004f;
	}

IL_0033:
	{
		// total += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_4 = V_0;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_5;
		L_5 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_5);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_6 = L_5->___items_27;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8;
		L_8 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_6, L_7, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = L_8->___itemDrawingWeight_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_9));
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_11 = V_3;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_12);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_13 = L_12->___items_27;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_13, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0033;
		}
	}
	{
		// selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));
		int32_t L_15 = V_0;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		int32_t L_17;
		L_17 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_15), L_16)), NULL);
		V_2 = L_17;
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_4 = 0;
		goto IL_00f7;
	}

IL_007e:
	{
		// Debug.Log(DataManager.Instance.items[i].itemDrawingWeight);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_18;
		L_18 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_18);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_19 = L_18->___items_27;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_21;
		L_21 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_19, L_20, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22 = L_21->___itemDrawingWeight_17;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// weight += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_25 = V_1;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_26;
		L_26 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_26);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_27 = L_26->___items_27;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_29;
		L_29 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_27, L_28, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = L_29->___itemDrawingWeight_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, L_30));
		// if (selectNum <= weight)
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) > ((int32_t)L_32)))
		{
			goto IL_00f1;
		}
	}
	{
		// Item newItem = new Item(DataManager.Instance.items[i]);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_33;
		L_33 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_33);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_34 = L_33->___items_27;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_36;
		L_36 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_34, L_35, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_37 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)il2cpp_codegen_object_new(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D(L_37, L_36, NULL);
		V_5 = L_37;
		// inventory.AddItem(newItem);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_38 = __this->___inventory_61;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_39 = V_5;
		NullCheck(L_38);
		Inventory_AddItem_m51A0B6069C21273F41FB11D47FE17AEC5FA0A924(L_38, L_39, NULL);
		// StartCoroutine(Producing1Item(newItem));
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_40 = V_5;
		RuntimeObject* L_41;
		L_41 = MainMenuController_Producing1Item_m5B7F84461A4A87AB7DADF97571BC21FBA85EA503(__this, L_40, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_42;
		L_42 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_41, NULL);
		// break;
		goto IL_010d;
	}

IL_00f1:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00f7:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_44 = V_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_45;
		L_45 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_45);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_46 = L_45->___items_27;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_46, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_47)))
		{
			goto IL_007e;
		}
	}

IL_010d:
	{
		// SubtractZam(zamPrice);
		int32_t L_48 = ___0_zamPrice;
		MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E(__this, L_48, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::PremiumDrawing10RandItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PremiumDrawing10RandItem_m31AA5736C0ACBDFE066AB660858F0BC836DA9026 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, int32_t ___0_zamPrice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_7 = NULL;
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, 0, (-1.0f), NULL);
		// int total = 0;
		V_0 = 0;
		// int weight = 0;
		V_1 = 0;
		// int selectNum = 0;
		V_2 = 0;
		// List<Item> SelectedItemList = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_1 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_1, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		V_3 = L_1;
		// if (zamPrice > DataManager.Instance.PlayerZam)
		int32_t L_2 = ___0_zamPrice;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline(L_3, NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		// TriggerPopUp("?? ?????.");
		MainMenuController_TriggerPopUp_m7998C224A097CBEA0064B23D88E6821A8D8661FD(__this, _stringLiteral879A775F767680FF9DA51FF78EB5150E1E16703B, NULL);
		// return;
		return;
	}

IL_0035:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_4 = 0;
		goto IL_0059;
	}

IL_003a:
	{
		// total += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_5 = V_0;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_6;
		L_6 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_6);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_7 = L_6->___items_27;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_9;
		L_9 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_7, L_8, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = L_9->___itemDrawingWeight_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_10));
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_12 = V_4;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_13;
		L_13 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_13);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_14 = L_13->___items_27;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_14, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		// for (int j = 0; j < 10; j++)
		V_5 = 0;
		goto IL_00fe;
	}

IL_0074:
	{
		// weight = 0;
		V_1 = 0;
		// selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));
		int32_t L_16 = V_0;
		float L_17;
		L_17 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_16), L_17)), NULL);
		V_2 = L_18;
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		V_6 = 0;
		goto IL_00e5;
	}

IL_0093:
	{
		// weight += DataManager.Instance.items[i].itemDrawingWeight;
		int32_t L_19 = V_1;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_20;
		L_20 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_20);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_21 = L_20->___items_27;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_23;
		L_23 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_21, L_22, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24 = L_23->___itemDrawingWeight_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
		// if (selectNum <= weight)
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) > ((int32_t)L_26)))
		{
			goto IL_00df;
		}
	}
	{
		// Item newItem = new Item(DataManager.Instance.items[i]);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_27;
		L_27 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_27);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_28 = L_27->___items_27;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_30;
		L_30 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_28, L_29, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_31 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)il2cpp_codegen_object_new(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D(L_31, L_30, NULL);
		V_7 = L_31;
		// inventory.AddItem(newItem);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_32 = __this->___inventory_61;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_33 = V_7;
		NullCheck(L_32);
		Inventory_AddItem_m51A0B6069C21273F41FB11D47FE17AEC5FA0A924(L_32, L_33, NULL);
		// SelectedItemList.Add(newItem);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_34 = V_3;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_35 = V_7;
		NullCheck(L_34);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_34, L_35, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// break;
		goto IL_00f8;
	}

IL_00df:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00e5:
	{
		// for (int i = 0; i < DataManager.Instance.items.Count; i++)
		int32_t L_37 = V_6;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_38;
		L_38 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_38);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_39 = L_38->___items_27;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_39, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_40)))
		{
			goto IL_0093;
		}
	}

IL_00f8:
	{
		// for (int j = 0; j < 10; j++)
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00fe:
	{
		// for (int j = 0; j < 10; j++)
		int32_t L_42 = V_5;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)10))))
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(Producing10Items(SelectedItemList));
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_43 = V_3;
		RuntimeObject* L_44;
		L_44 = MainMenuController_Producing10Items_m61D99FA2AF7375B62BC024D8AC62E3D1DBEAD091(__this, L_43, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_44, NULL);
		// SubtractZam(zamPrice);
		int32_t L_46 = ___0_zamPrice;
		MainMenuController_SubtractZam_m98BB41A9C05F6DC97AE29DD3F5C1F74E8C0AF14E(__this, L_46, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenuController::Producing1Item(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Producing1Item_m5B7F84461A4A87AB7DADF97571BC21FBA85EA503 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* L_0 = (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD*)il2cpp_codegen_object_new(U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CProducing1ItemU3Ed__109__ctor_mC273DF6DF0CE43EDA8CC02C85DF0077D991B50A0(L_0, 0, NULL);
		U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* L_2 = L_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_3 = ___0_item;
		NullCheck(L_2);
		L_2->___item_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___item_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator MainMenuController::Producing10Items(System.Collections.Generic.List`1<Item>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_Producing10Items_m61D99FA2AF7375B62BC024D8AC62E3D1DBEAD091 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___0_items, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* L_0 = (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02*)il2cpp_codegen_object_new(U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CProducing10ItemsU3Ed__110__ctor_m26AF4AFA64CDF9DF12E2E98CFF1FCCA6AD8398CF(L_0, 0, NULL);
		U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* L_2 = L_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_3 = ___0_items;
		NullCheck(L_2);
		L_2->___items_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___items_3), (void*)L_3);
		return L_2;
	}
}
// System.Void MainMenuController::Drawing1PanelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Drawing1PanelButtonClicked_m01C6120477357D71AC4190B5C03C99662868ED2A (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// drawing1SetActiveGroup.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___drawing1SetActiveGroup_66;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// drawing1ResultPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___drawing1ResultPanel_64;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Destroy(drawing1SlotParent.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___drawing1SlotParent_71;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::Drawing10PanelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Drawing10PanelButtonClicked_m936CFEE78A2D7415E886E4D9C8C3CFD03B8884BA (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// drawing10SetActiveGroup.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___drawing10SetActiveGroup_67;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// drawing10ResultPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___drawing10ResultPanel_65;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// for(int i = 0; i < 10; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_001c:
	{
		// Destroy(drawing10SlotParent.GetChild(i).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___drawing10SlotParent_72;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// for(int i = 0; i < 10; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0036:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainMenuController::ItemGradeSound(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ItemGradeSound_m07CD657DDC08AEE6107D8AF4BC5DB5AE56B3E030 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (_item.itemGrade)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0__item;
		NullCheck(L_0);
		int32_t L_1 = L_0->___itemGrade_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0068;
			}
		}
	}
	{
		return;
	}

IL_0024:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemNormal);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_3);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_3, 3, (-1.0f), NULL);
		// break;
		return;
	}

IL_0035:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemRare);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4;
		L_4 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_4);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_4, 4, (-1.0f), NULL);
		// break;
		return;
	}

IL_0046:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemEpic);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_5;
		L_5 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_5);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_5, 5, (-1.0f), NULL);
		// break;
		return;
	}

IL_0057:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemUnique);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_6;
		L_6 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_6);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_6, 6, (-1.0f), NULL);
		// break;
		return;
	}

IL_0068:
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemLegendary);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_7;
		L_7 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_7);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_7, 7, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Single MainMenuController::ItemGradeSeconds(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainMenuController_ItemGradeSeconds_m0DAB67B4064599FBC382CCE6DE83F3DCE6BFB69D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0__item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (_item.itemGrade)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0__item;
		NullCheck(L_0);
		int32_t L_1 = L_0->___itemGrade_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0025:
	{
		// return 0.3f;
		return (0.300000012f);
	}

IL_002b:
	{
		// return 0.3f;
		return (0.300000012f);
	}

IL_0031:
	{
		// return 0.5f;
		return (0.5f);
	}

IL_0037:
	{
		// return 0.75f;
		return (0.75f);
	}

IL_003d:
	{
		// return 1f;
		return (1.0f);
	}

IL_0043:
	{
		// return 1f;
		return (1.0f);
	}
}
// System.Void MainMenuController::OnAttachedGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnAttachedGold_m7B93D9535E94214AFF987776F188200A706C04B0 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.BuyGold);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, ((int32_t)11), (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::OnAttachedZam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_OnAttachedZam_m0040D5FE11E0376F58B63244F61DD105B40B689D (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.BuyZam);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_0);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_0, ((int32_t)12), (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Setting_m07E0F55C02DE2C0DF429628716A3A4144E8CA971 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// settingsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___settingsPanel_73;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_1);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_1, 0, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Back_mEC479B71776FBA4BCBBE4E08D42D14510865AE14 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// settingsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___settingsPanel_73;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_1);
		SoundManager_SFXPlay_m6C049DD7D547729C0866893FD3495152192A5250(L_1, 0, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::BGMOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BGMOnOff_m02D7B6A9DCA32C5A2D0AD6A37C8F3E70168FB687 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// DataManager.Instance.isBGMOn = !DataManager.Instance.isBGMOn;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0;
		L_0 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		bool L_2 = L_1->___isBGMOn_24;
		NullCheck(L_0);
		L_0->___isBGMOn_24 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// if (DataManager.Instance.isBGMOn)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		bool L_4 = L_3->___isBGMOn_24;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// BGMOffToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___BGMOffToggleTMP_75;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// BGMOnToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___BGMOnToggleTMP_74;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		goto IL_0055;
	}

IL_003d:
	{
		// BGMOnToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___BGMOnToggleTMP_74;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// BGMOffToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___BGMOffToggleTMP_75;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
	}

IL_0055:
	{
		// SoundManager.Instance.BGMMuteOnOff();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9;
		L_9 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_9);
		SoundManager_BGMMuteOnOff_mB054CFB3DD9C58E9CA6A8DA97452B87CF2292DEA(L_9, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SFXOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SFXOnOff_m6CC2BEEA90FBD098BF3F531998212E94D53A7E6F (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// DataManager.Instance.isSFXOn = !DataManager.Instance.isSFXOn;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0;
		L_0 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		bool L_2 = L_1->___isSFXOn_25;
		NullCheck(L_0);
		L_0->___isSFXOn_25 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// if (DataManager.Instance.isSFXOn)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_3;
		L_3 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_3);
		bool L_4 = L_3->___isSFXOn_25;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// SFXOffToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___SFXOffToggleTMP_78;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// SFXOnToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___SFXOnToggleTMP_77;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		goto IL_0055;
	}

IL_003d:
	{
		// SFXOnToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___SFXOnToggleTMP_77;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// SFXOffToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___SFXOffToggleTMP_78;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
	}

IL_0055:
	{
		// SoundManager.Instance.SFXMuteOnOff();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9;
		L_9 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		NullCheck(L_9);
		SoundManager_SFXMuteOnOff_m8815273A04B040AAA50025F9746D17F45635C9F4(L_9, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::BGMSFXInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_BGMSFXInit_mFB4A8BA9C0BC962096E5095D02CDD06D47913A87 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// BGMToggle.isOn = DataManager.Instance.isBGMOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___BGMToggle_76;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_1;
		L_1 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_1);
		bool L_2 = L_1->___isBGMOn_24;
		NullCheck(L_0);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_0, L_2, NULL);
		// SFXToggle.isOn = DataManager.Instance.isSFXOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___SFXToggle_79;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_4;
		L_4 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_4);
		bool L_5 = L_4->___isSFXOn_25;
		NullCheck(L_3);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_3, L_5, NULL);
		// if (DataManager.Instance.isBGMOn)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_6;
		L_6 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_6);
		bool L_7 = L_6->___isBGMOn_24;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// BGMOffToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___BGMOffToggleTMP_75;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// BGMOnToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___BGMOnToggleTMP_74;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		goto IL_0068;
	}

IL_0050:
	{
		// BGMOnToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___BGMOnToggleTMP_74;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
		// BGMOffToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___BGMOffToggleTMP_75;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
	}

IL_0068:
	{
		// if (DataManager.Instance.isSFXOn)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_12;
		L_12 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_12);
		bool L_13 = L_12->___isSFXOn_25;
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// SFXOffToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___SFXOffToggleTMP_78;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)0, NULL);
		// SFXOnToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___SFXOnToggleTMP_77;
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)1, NULL);
		return;
	}

IL_008d:
	{
		// SFXOnToggleTMP.enabled = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___SFXOnToggleTMP_77;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)0, NULL);
		// SFXOffToggleTMP.enabled = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___SFXOffToggleTMP_78;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__ctor_m9727FC638FDF6BDF302E10C6351846B395013EA4 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuController/<StageChange>d__88::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStageChangeU3Ed__88__ctor_mC9105C4064E54D25E9FBAC9423EF6791B6873264 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenuController/<StageChange>d__88::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStageChangeU3Ed__88_System_IDisposable_Dispose_m580AE6A3449A288832D90A17CCD7A9C156DCA114 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenuController/<StageChange>d__88::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStageChangeU3Ed__88_MoveNext_mAA31A033E05A194369BB415E2C64B98CC6040922 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D6A1E4FD7369239CC9C2E97AF3E348201236F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* V_1 = NULL;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0290;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isStageChanging = true;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_3 = V_1;
		NullCheck(L_3);
		L_3->___isStageChanging_39 = (bool)1;
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// stageNumberTMP.text = "S T A G E " + curSelectStage;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___stageNumberTMP_26;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_7 = V_1;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___curSelectStage_36);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral49D6A1E4FD7369239CC9C2E97AF3E348201236F7, L_9, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_10);
		// stageNameTMP.color = stageSymbolicColors[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___stageNameTMP_25;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_13 = V_1;
		NullCheck(L_13);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_14 = L_13->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___curSelectStage_36;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_18);
		// gameStartButtonImage.color = stageSymbolicColors[curSelectStage - 1] * 0.97f;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_19 = V_1;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = L_19->___gameStartButtonImage_27;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_21 = V_1;
		NullCheck(L_21);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_22 = L_21->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->___curSelectStage_36;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_26, (0.970000029f), NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_27);
		// stageSelectButtonImage.color = stageSymbolicColors[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_28 = V_1;
		NullCheck(L_28);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = L_28->___stageSelectButtonImage_28;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_30 = V_1;
		NullCheck(L_30);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_31 = L_30->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->___curSelectStage_36;
		NullCheck(L_31);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_35);
		// stageSelectedButtonImage.color = stageSymbolicColors[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_36 = V_1;
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = L_36->___stageSelectedButtonImage_29;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_38 = V_1;
		NullCheck(L_38);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_39 = L_38->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->___curSelectStage_36;
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_37);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_43);
		// stageLockedButtonImage.color = stageSymbolicColors[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_44 = V_1;
		NullCheck(L_44);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = L_44->___stageLockedButtonImage_30;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_46 = V_1;
		NullCheck(L_46);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_47 = L_46->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = L_48->___curSelectStage_36;
		NullCheck(L_47);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_45);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_51);
		// Planet.GetComponent<Image>().sprite = stagePlanetSprites[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_52 = V_1;
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = L_52->___Planet_31;
		NullCheck(L_53);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54;
		L_54 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_53, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_55 = V_1;
		NullCheck(L_55);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_56 = L_55->___stagePlanetSprites_18;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_57 = V_1;
		NullCheck(L_57);
		int32_t L_58 = L_57->___curSelectStage_36;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_54, L_60, NULL);
		// SpriteState newSpriteState = new SpriteState();
		il2cpp_codegen_initobj((&V_2), sizeof(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD));
		// newSpriteState.highlightedSprite = stagePlanetPressedSprites[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_61 = V_1;
		NullCheck(L_61);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_62 = L_61->___stagePlanetPressedSprites_19;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->___curSelectStage_36;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline((&V_2), L_66, NULL);
		// newSpriteState.pressedSprite = stagePlanetPressedSprites[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_67 = V_1;
		NullCheck(L_67);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_68 = L_67->___stagePlanetPressedSprites_19;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_69 = V_1;
		NullCheck(L_69);
		int32_t L_70 = L_69->___curSelectStage_36;
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline((&V_2), L_72, NULL);
		// Planet.GetComponent<Button>().spriteState = newSpriteState;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_73 = V_1;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = L_73->___Planet_31;
		NullCheck(L_74);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_75;
		L_75 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_74, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_76 = V_2;
		NullCheck(L_75);
		Selectable_set_spriteState_mE0E2CDA8757045FE0D35BC4D9E827857F64E19ED(L_75, L_76, NULL);
		// switch (curSelectStage)
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78 = L_77->___curSelectStage_36;
		V_3 = L_78;
		int32_t L_79 = V_3;
		switch (L_79)
		{
			case 0:
			{
				goto IL_0277;
			}
			case 1:
			{
				goto IL_0196;
			}
			case 2:
			{
				goto IL_01d6;
			}
			case 3:
			{
				goto IL_01d6;
			}
		}
	}
	{
		goto IL_0277;
	}

IL_0196:
	{
		// ClearStageSelected(curSelectStage);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_80 = V_1;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = L_81->___curSelectStage_36;
		NullCheck(L_80);
		MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8(L_80, L_82, NULL);
		// stageNameTMP.text = stageNames[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_83 = V_1;
		NullCheck(L_83);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_84 = L_83->___stageNameTMP_25;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_85 = V_1;
		NullCheck(L_85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_85->___stageNames_16;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_87 = V_1;
		NullCheck(L_87);
		int32_t L_88 = L_87->___curSelectStage_36;
		NullCheck(L_86);
		int32_t L_89 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
		String_t* L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_84, L_90);
		// Planet.GetComponent<Image>().color = Color.white;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_91 = V_1;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = L_91->___Planet_31;
		NullCheck(L_92);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_93;
		L_93 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_92, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_94;
		L_94 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_93);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_93, L_94);
		// break;
		goto IL_0277;
	}

IL_01d6:
	{
		// if (DataManager.Instance.isStageClear[curSelectStage - 2])
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_95;
		L_95 = DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A(NULL);
		NullCheck(L_95);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_96 = L_95->___isStageClear_22;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_97 = V_1;
		NullCheck(L_97);
		int32_t L_98 = L_97->___curSelectStage_36;
		NullCheck(L_96);
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract(L_98, 2));
		uint8_t L_100 = (uint8_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		if (!L_100)
		{
			goto IL_0228;
		}
	}
	{
		// ClearStageSelected(curSelectStage);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_101 = V_1;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_102 = V_1;
		NullCheck(L_102);
		int32_t L_103 = L_102->___curSelectStage_36;
		NullCheck(L_101);
		MainMenuController_ClearStageSelected_m710E79566B3D57D7BEB1912A1B8B50FCD95373B8(L_101, L_103, NULL);
		// stageNameTMP.text = stageNames[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_104 = V_1;
		NullCheck(L_104);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_105 = L_104->___stageNameTMP_25;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_106 = V_1;
		NullCheck(L_106);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_106->___stageNames_16;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_108 = V_1;
		NullCheck(L_108);
		int32_t L_109 = L_108->___curSelectStage_36;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		String_t* L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_105);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_105, L_111);
		// Planet.GetComponent<Image>().color = Color.white;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_112 = V_1;
		NullCheck(L_112);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = L_112->___Planet_31;
		NullCheck(L_113);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_114;
		L_114 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_113, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_115;
		L_115 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_114, L_115);
		goto IL_0277;
	}

IL_0228:
	{
		// stageNameTMP.text = "???";
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_116 = V_1;
		NullCheck(L_116);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_117 = L_116->___stageNameTMP_25;
		NullCheck(L_117);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_117, _stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5);
		// Color tempColor = stageSymbolicColors[curSelectStage - 1];
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_118 = V_1;
		NullCheck(L_118);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_119 = L_118->___stageSymbolicColors_17;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_120 = V_1;
		NullCheck(L_120);
		int32_t L_121 = L_120->___curSelectStage_36;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_subtract(L_121, 1));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_4 = L_123;
		// tempColor.a = 0.5f;
		(&V_4)->___a_3 = (0.5f);
		// Planet.GetComponent<Image>().color = tempColor;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_124 = V_1;
		NullCheck(L_124);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = L_124->___Planet_31;
		NullCheck(L_125);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_126;
		L_126 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_125, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_127 = V_4;
		NullCheck(L_126);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_126, L_127);
		// ShowNonClearStageSelected(curSelectStage);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_128 = V_1;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = L_129->___curSelectStage_36;
		NullCheck(L_128);
		MainMenuController_ShowNonClearStageSelected_m396B7AA657734FC98A27CEDB9F5E38D27B0F3DF1(L_128, L_130, NULL);
	}

IL_0277:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_131 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_131, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_131);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0290:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isStageChanging = false;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_132 = V_1;
		NullCheck(L_132);
		L_132->___isStageChanging_39 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object MainMenuController/<StageChange>d__88::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStageChangeU3Ed__88_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2DFA1822779E672D33EA00621A34882D5E81DB0C (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenuController/<StageChange>d__88::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStageChangeU3Ed__88_System_Collections_IEnumerator_Reset_m17F9BCE9D7ABA2887FD1FC6DAA66AF4862FCC8B5 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStageChangeU3Ed__88_System_Collections_IEnumerator_Reset_m17F9BCE9D7ABA2887FD1FC6DAA66AF4862FCC8B5_RuntimeMethod_var)));
	}
}
// System.Object MainMenuController/<StageChange>d__88::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStageChangeU3Ed__88_System_Collections_IEnumerator_get_Current_m682F4D95CB0AC16667FB1B4BE8E8E24F2C617975 (U3CStageChangeU3Ed__88_t9BDACE3C3E54B2802FD45A4FECC86F6C3FA84CB6* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuController/<Count>d__93::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__93__ctor_m471FD7DD1DA1163C88235F3A85EFC0AB7EE3BEA3 (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenuController/<Count>d__93::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__93_System_IDisposable_Dispose_mCD07CE5BD858063B428E38AE80A87DBE5715B5BB (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenuController/<Count>d__93::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountU3Ed__93_MoveNext_m3388DB6CA4A818F7AE59E1A10A5EFC3688442CBF (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float start = 0;
		__this->___U3CstartU3E5__2_5 = (0.0f);
		// float end = 0.75f;
		__this->___U3CendU3E5__3_6 = (0.75f);
		// float percent = 0;
		__this->___U3CpercentU3E5__4_7 = (0.0f);
		goto IL_00a4;
	}

IL_003d:
	{
		// start += Time.deltaTime;
		float L_3 = __this->___U3CstartU3E5__2_5;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CstartU3E5__2_5 = ((float)il2cpp_codegen_add(L_3, L_4));
		// percent = start / end;
		float L_5 = __this->___U3CstartU3E5__2_5;
		float L_6 = __this->___U3CendU3E5__3_6;
		__this->___U3CpercentU3E5__4_7 = ((float)(L_5/L_6));
		// _text.text = MoneyUnitString.GetThousandCommaText((int)Mathf.Lerp(_current, _target, percent));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->____text_2;
		int32_t L_8 = __this->____current_3;
		int32_t L_9 = __this->____target_4;
		float L_10 = __this->___U3CpercentU3E5__4_7;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_8), ((float)L_9), L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)il2cpp_codegen_cast_double_to_int<int32_t>(L_11)), NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_12);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a4:
	{
		// while (percent <= 1)
		float L_13 = __this->___U3CpercentU3E5__4_7;
		if ((((float)L_13) <= ((float)(1.0f))))
		{
			goto IL_003d;
		}
	}
	{
		// _text.text = MoneyUnitString.GetThousandCommaText(_target);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->____text_2;
		int32_t L_15 = __this->____target_4;
		il2cpp_codegen_runtime_class_init_inline(MoneyUnitString_t6740C0C6FB3BF5D89DA942DFF21719331DE5168D_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = MoneyUnitString_GetThousandCommaText_m92FB1E7C68284AF6FA497B25245692993A13AA52(((double)L_15), NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_16);
		// }
		return (bool)0;
	}
}
// System.Object MainMenuController/<Count>d__93::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__93_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m63483ECA050A1CE0DE7AD8E658278B7910098F32 (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenuController/<Count>d__93::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__93_System_Collections_IEnumerator_Reset_mFB2BE75167BDE30EEBFFF6B7CA342CD473DDB679 (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountU3Ed__93_System_Collections_IEnumerator_Reset_mFB2BE75167BDE30EEBFFF6B7CA342CD473DDB679_RuntimeMethod_var)));
	}
}
// System.Object MainMenuController/<Count>d__93::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__93_System_Collections_IEnumerator_get_Current_mAB51583A45C14F27EBB234177BF8911F4B22B8B1 (U3CCountU3Ed__93_t53444177634B061E7B4E9F5B03CF0BD603EA4D64* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuController/<Producing1Item>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing1ItemU3Ed__109__ctor_mC273DF6DF0CE43EDA8CC02C85DF0077D991B50A0 (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenuController/<Producing1Item>d__109::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing1ItemU3Ed__109_System_IDisposable_Dispose_m957851B4617817EB44AD8D406A4A19E7FC567E42 (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenuController/<Producing1Item>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProducing1ItemU3Ed__109_MoveNext_m34379CD9298D1E920058C4832E7D531FC47B3C2C (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemGrade_t234E84B9CACC4AE7ECB2CBE9ED044027817401AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00fd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DRItemGradeText.text = item.itemGrade.ToString();
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___DRItemGradeText_68;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = __this->___item_3;
		NullCheck(L_6);
		int32_t* L_7 = (&L_6->___itemGrade_1);
		Il2CppFakeBox<int32_t> L_8(ItemGrade_t234E84B9CACC4AE7ECB2CBE9ED044027817401AC_il2cpp_TypeInfo_var, L_7);
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_9);
		// DRItemGradeText.color = SetGradeColorBackground(item);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_10 = V_1;
		NullCheck(L_10);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = L_10->___DRItemGradeText_68;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_12 = V_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_13 = __this->___item_3;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(L_12, L_13, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_14);
		// DRItemNameText.text = item.itemName.ToString();
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_15 = V_1;
		NullCheck(L_15);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = L_15->___DRItemNameText_69;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_17 = __this->___item_3;
		NullCheck(L_17);
		String_t* L_18 = L_17->___itemName_4;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_19);
		// GameObject cloneSlot = Instantiate(ProducingSlotPrefab, drawing1SlotParent);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___ProducingSlotPrefab_70;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___drawing1SlotParent_71;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_21, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// ItemGradeSound(item);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_25 = V_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_26 = __this->___item_3;
		NullCheck(L_25);
		MainMenuController_ItemGradeSound_m07CD657DDC08AEE6107D8AF4BC5DB5AE56B3E030(L_25, L_26, NULL);
		// cloneSlot.GetComponent<ItemSlot>().item = item;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_24;
		NullCheck(L_27);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_28;
		L_28 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_27, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_29 = __this->___item_3;
		NullCheck(L_28);
		L_28->___item_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___item_4), (void*)L_29);
		// cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = item.itemImage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_27;
		NullCheck(L_30);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_31;
		L_31 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_30, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		NullCheck(L_31);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = L_31->___ItemIcon_5;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_33 = __this->___item_3;
		NullCheck(L_33);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = L_33->___itemImage_6;
		NullCheck(L_32);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_32, L_34, NULL);
		// cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = SetGradeColorBackground(item);
		NullCheck(L_30);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_35;
		L_35 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_30, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		NullCheck(L_35);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = L_35->___gradeBackground_6;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_37 = V_1;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_38 = __this->___item_3;
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(L_37, L_38, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_39);
		// drawing1ResultPanel.SetActive(true);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_40 = V_1;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___drawing1ResultPanel_64;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_42 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_42, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00fd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// drawing1SetActiveGroup.SetActive(true);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_43 = V_1;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___drawing1SetActiveGroup_66;
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MainMenuController/<Producing1Item>d__109::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProducing1ItemU3Ed__109_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA8AB00D0419B029D044C5282263049B3E01CE64B (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenuController/<Producing1Item>d__109::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing1ItemU3Ed__109_System_Collections_IEnumerator_Reset_m80EFDE77F988616AF1507392808B7E7D5B9D162F (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProducing1ItemU3Ed__109_System_Collections_IEnumerator_Reset_m80EFDE77F988616AF1507392808B7E7D5B9D162F_RuntimeMethod_var)));
	}
}
// System.Object MainMenuController/<Producing1Item>d__109::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProducing1ItemU3Ed__109_System_Collections_IEnumerator_get_Current_m73B1DF4049CFE1C4314496BC0A1B50C2358A071B (U3CProducing1ItemU3Ed__109_t44BDB9D0BC067562D2E0BE57E70F96BD3677A0FD* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuController/<Producing10Items>d__110::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing10ItemsU3Ed__110__ctor_m26AF4AFA64CDF9DF12E2E98CFF1FCCA6AD8398CF (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenuController/<Producing10Items>d__110::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing10ItemsU3Ed__110_System_IDisposable_Dispose_m04AA5AC2CF50A645F39574D97A2BD017E2ED40EA (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenuController/<Producing10Items>d__110::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProducing10ItemsU3Ed__110_MoveNext_m0B363B2CB99B91C972665A2FE4B329D242E0D6E1 (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// drawing10ResultPanel.SetActive(true);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___drawing10ResultPanel_65;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// for (int i = 0; i < 10; i++)
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_010b;
	}

IL_0039:
	{
		// GameObject cloneSlot = Instantiate(ProducingSlotPrefab, drawing10SlotParent);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___ProducingSlotPrefab_70;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___drawing10SlotParent_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_7, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// ItemGradeSound(items[i]);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_11 = V_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_12 = __this->___items_3;
		int32_t L_13 = __this->___U3CiU3E5__2_4;
		NullCheck(L_12);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_14;
		L_14 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_12, L_13, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_11);
		MainMenuController_ItemGradeSound_m07CD657DDC08AEE6107D8AF4BC5DB5AE56B3E030(L_11, L_14, NULL);
		// cloneSlot.GetComponent<ItemSlot>().item = items[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_10;
		NullCheck(L_15);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_16;
		L_16 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_15, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_17 = __this->___items_3;
		int32_t L_18 = __this->___U3CiU3E5__2_4;
		NullCheck(L_17);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_19;
		L_19 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_17, L_18, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___item_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___item_4), (void*)L_19);
		// cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = items[i].itemImage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_15;
		NullCheck(L_20);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_21;
		L_21 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_20, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = L_21->___ItemIcon_5;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_23 = __this->___items_3;
		int32_t L_24 = __this->___U3CiU3E5__2_4;
		NullCheck(L_23);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_25;
		L_25 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_23, L_24, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_25);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = L_25->___itemImage_6;
		NullCheck(L_22);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_22, L_26, NULL);
		// cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = SetGradeColorBackground(items[i]);
		NullCheck(L_20);
		ItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487* L_27;
		L_27 = GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029(L_20, GameObject_GetComponent_TisItemSlot_t02FCD0061CC21E3649689FEFF1B6ED62F3B45487_m37150EF47BAED685B0AE0F622901BB36D38FD029_RuntimeMethod_var);
		NullCheck(L_27);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = L_27->___gradeBackground_6;
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_29 = V_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_30 = __this->___items_3;
		int32_t L_31 = __this->___U3CiU3E5__2_4;
		NullCheck(L_30);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_32;
		L_32 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_30, L_31, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_29);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = MainMenuController_SetGradeColorBackground_m778E7F7743122A747FB5C46BFB9365A083407DF7(L_29, L_32, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_33);
		// yield return new WaitForSeconds(ItemGradeSeconds(items[i]));
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_34 = V_1;
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_35 = __this->___items_3;
		int32_t L_36 = __this->___U3CiU3E5__2_4;
		NullCheck(L_35);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_37;
		L_37 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_35, L_36, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_34);
		float L_38;
		L_38 = MainMenuController_ItemGradeSeconds_m0DAB67B4064599FBC382CCE6DE83F3DCE6BFB69D(L_34, L_37, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, L_38, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < 10; i++)
		int32_t L_40 = __this->___U3CiU3E5__2_4;
		V_2 = L_40;
		int32_t L_41 = V_2;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_010b:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_42 = __this->___U3CiU3E5__2_4;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)10))))
		{
			goto IL_0039;
		}
	}
	{
		// drawing10SetActiveGroup.SetActive(true);
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_43 = V_1;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___drawing10SetActiveGroup_67;
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MainMenuController/<Producing10Items>d__110::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProducing10ItemsU3Ed__110_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16F048CA4B09BD596D8A6A27B6391A925D22147F (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenuController/<Producing10Items>d__110::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProducing10ItemsU3Ed__110_System_Collections_IEnumerator_Reset_mE39B8B1EC586DC701E76E5B21ACE1C91A5D680E2 (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProducing10ItemsU3Ed__110_System_Collections_IEnumerator_Reset_mE39B8B1EC586DC701E76E5B21ACE1C91A5D680E2_RuntimeMethod_var)));
	}
}
// System.Object MainMenuController/<Producing10Items>d__110::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProducing10ItemsU3Ed__110_System_Collections_IEnumerator_get_Current_m44DC0BA1DF90A373B2FE6CAEF3099B67B1AF758D (U3CProducing10ItemsU3Ed__110_tB2D608BBD8C85031302E2CEC63008FC35E8A2E02* __this, const RuntimeMethod* method) 
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
// System.Void Setting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting_OnEnable_m84195CFEAB7B733A5D103886796DEAA489144C8B (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
{
	{
		// MainMenuController.Instance.BGMSFXInit();
		MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* L_0;
		L_0 = MainMenuController_get_Instance_m7EA8C71DD33AF39668149C5D8F6E5B7710DA7111(NULL);
		NullCheck(L_0);
		MainMenuController_BGMSFXInit_mFB4A8BA9C0BC962096E5095D02CDD06D47913A87(L_0, NULL);
		// }
		return;
	}
}
// System.Void Setting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Setting__ctor_m69D54954D2B10B9ACE469F24F298AF9117769C51 (Setting_t90DF9056ECD7D90178A08C0D7F916A3EEEE1B5FB* __this, const RuntimeMethod* method) 
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
// System.Void Switch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Update_m1054888BEAE100C2ACBF24BF178026BEEFD07F79 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Switch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch__ctor_m5B451533A9E45C8B5AEF4629DE69167757044B92 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
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
// System.Void LayerLab.Panel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Panel_OnEnable_m9D111284BE212AFF5B5E819D26FE986131381EBA (Panel_t39E58C3B2AEBA31298D633525105C9DEB1A30351* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.Panel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Panel_OnDisable_m3185D4E97C30718AC3E3B64537F78F4BB8BDC512 (Panel_t39E58C3B2AEBA31298D633525105C9DEB1A30351* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.Panel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Panel__ctor_mFBBFF3C2CCF64CFC4E342D32802133336D31B6EA (Panel_t39E58C3B2AEBA31298D633525105C9DEB1A30351* __this, const RuntimeMethod* method) 
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
// System.Void LayerLab.PanelControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Start_mDC9B3C2ED9CB3D22F1ED05EBE8E3993824888431 (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// textTitle = transform.GetComponentInChildren<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textTitle_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textTitle_7), (void*)L_1);
		// buttonPrev.onClick.AddListener(Click_Prev);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonPrev_9;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_10;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// foreach (Transform t in panelTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransform_8;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0057_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panels.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___panels_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				NullCheck(L_19);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
			}

IL_0080_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0057_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// panels[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___panels_6;
		int32_t L_23 = __this->___page_4;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// isReady = true;
		__this->___isReady_5 = (bool)1;
		// CheckControl();
		PanelControl_CheckControl_m62D25C793FB47FCC3AFBDDDF12B3456784140B03(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Update_mBED8AAE25CEDB4E6D695484A202978B4344E10AF (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (panels.Count <= 0 || !isReady) return;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___panels_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->___isReady_5;
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (panels.Count <= 0 || !isReady) return;
		return;
	}

IL_0017:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// Click_Prev();
		PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F(__this, NULL);
		return;
	}

IL_002a:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// Click_Next();
		PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Click_Prev_mBD88DDCB14738C0C953314CE12945B39AFDFBA4F (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (page <= 0 || !isReady) return;
		return;
	}

IL_0012:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___panels_6;
		int32_t L_3 = __this->___page_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panels[page -= 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___panels_6;
		int32_t L_6 = __this->___page_4;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		V_0 = L_7;
		__this->___page_4 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// textTitle.text = panels[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___panels_6;
		int32_t L_12 = __this->___page_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// CheckControl();
		PanelControl_CheckControl_m62D25C793FB47FCC3AFBDDDF12B3456784140B03(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_Click_Next_m40C00A67D6D2B1EE0EFAF7C6702C5BF9F598729C (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page >= panels.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0016;
		}
	}
	{
		// if (page >= panels.Count - 1) return;
		return;
	}

IL_0016:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panels_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// panels[page += 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		int32_t L_7 = __this->___page_4;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		__this->___page_4 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// CheckControl();
		PanelControl_CheckControl_m62D25C793FB47FCC3AFBDDDF12B3456784140B03(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_SetArrowActive_m5A7AE5105D7679F80930D1BD6111B8806C585339 (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPrev.gameObject.SetActive(page > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrev_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0), NULL);
		// buttonNext.gameObject.SetActive(page < panels.Count - 1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonNext_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl_CheckControl_m62D25C793FB47FCC3AFBDDDF12B3456784140B03 (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textTitle.text = panels[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// SetArrowActive();
		PanelControl_SetArrowActive_m5A7AE5105D7679F80930D1BD6111B8806C585339(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControl__ctor_m921D9129B2CFC8DD1CB009020ADAB6CA0CA2FB4C (PanelControl_t91874851F27D078DE4DD224CE21DDBAA5D8DECA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> panels = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panels_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panels_6), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
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
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerSpecialMoveGage_mDE359FE1FB368610882ACBEE877D8ED4139742BE_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public float PlayerSpecialMoveGage { get => playerSpecialMoveGage; set => playerSpecialMoveGage = value; }
		float L_0 = __this->___playerSpecialMoveGage_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerHP_mB332B9EF88D362EC269DDE85DD6164C3FC626D2E_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public float PlayerHP { get => playerHP; set => playerHP = value; }
		float L_0 = __this->___playerHP_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DataManager_get_PlayerShledGage_mC0ACAFE6936A963C47CE7DCF5072FA7A287DA320_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public float PlayerShledGage { get => playerShledGage; set => playerShledGage = value; }
		float L_0 = __this->___playerShledGage_7;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerZam_mD7DD4258293B2295511C2C929568473655C5D03C_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerZam { get => playerZam; set => playerZam = value; }
		int32_t L_0 = __this->___playerZam_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerGold_m9BE1F04652608341CBE595674DA0BD328A9C0D82_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerGold { get => playerGold; set => playerGold = value; }
		int32_t L_0 = __this->___playerGold_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DataManager_get_PlayerATK_m8DAD376569096229CD55FA4B2C71DD3647621D35_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerATK { get => playerATK; set => playerATK = value; }
		int32_t L_0 = __this->___playerATK_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Sprite highlightedSprite    { get { return m_HighlightedSprite; } set { m_HighlightedSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		__this->___m_HighlightedSprite_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HighlightedSprite_0), (void*)L_0);
		// public Sprite highlightedSprite    { get { return m_HighlightedSprite; } set { m_HighlightedSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Sprite pressedSprite     { get { return m_PressedSprite; } set { m_PressedSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		__this->___m_PressedSprite_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PressedSprite_1), (void*)L_0);
		// public Sprite pressedSprite     { get { return m_PressedSprite; } set { m_PressedSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedWeapon_m0D4A90A2547E5507A753BD63878F1CA5B838F630_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedWeapon { get => curEquippedWeapon; set => curEquippedWeapon = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedWeapon_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedWeapon_m6A0CF78A5C0A4BD17D13C2442D414E2BEF557673_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedWeapon { get => curEquippedWeapon; set => curEquippedWeapon = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedWeapon_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedWeapon_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedGloves_m1FAFCEB3704916B9644E98403608EF80FD2FF4B1_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedGloves { get => curEquippedGloves; set => curEquippedGloves = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedGloves_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedGloves_mFB29A3215264D4348D379954E4273635910A3051_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedGloves { get => curEquippedGloves; set => curEquippedGloves = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedGloves_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedGloves_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedShoes_m79AC8BE50FED9A73C92D9A8EDBBF1C8AE1DE0B8D_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedShoes { get => curEquippedShoes; set => curEquippedShoes = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedShoes_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedShoes_m5D4ABA12B1B34138A882AFD14112F76F7CDA952A_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedShoes { get => curEquippedShoes; set => curEquippedShoes = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedShoes_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedShoes_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedSheld_m0FC925590A5A6D6DBB369FB6E90FCBB8A8844DB6_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedSheld { get => curEquippedSheld; set => curEquippedSheld = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedSheld_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedSheld_m3C8BC626B2551BADB165C1452417874AFEB3A4D6_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedSheld { get => curEquippedSheld; set => curEquippedSheld = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedSheld_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedSheld_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedHelmat_m960B78AC0445651468AA81C3CFAA54708C5A0780_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedHelmat { get => curEquippedHelmat; set => curEquippedHelmat = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedHelmat_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedHelmat_m0A7A4DC207B0F77278CDA66BB4D4F2208BDC8A49_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedHelmat { get => curEquippedHelmat; set => curEquippedHelmat = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedHelmat_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedHelmat_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* DataManager_get_CurEquippedArmor_mAD0C2CC0E3B3A3DC70EBBB3B9A837DF3F5B08C7D_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedArmor { get => curEquippedArmor; set => curEquippedArmor = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___curEquippedArmor_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_CurEquippedArmor_mC42AC58F1FE828B5D6B9B99D42FA9FE8DA5404F4_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Item CurEquippedArmor { get => curEquippedArmor; set => curEquippedArmor = value; }
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___0_value;
		__this->___curEquippedArmor_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curEquippedArmor_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataManager_set_PlayerGold_m94B1D65DA9C762B6405EAF9C7F76F1488F5EB1CC_inline (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PlayerGold { get => playerGold; set => playerGold = value; }
		int32_t L_0 = ___0_value;
		__this->___playerGold_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
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
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
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
