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
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
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
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Block
struct Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76;
// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// FloorDetector
struct FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A;
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
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE;
// MovingCamera
struct MovingCamera_tDA3D1483537F2863832FCC058E9EBFB6C2DC1EE5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OneToOneBlock
struct OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4;
// OneToOneHBlock
struct OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA;
// OneToThreeBlock
struct OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A;
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
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WeaponTrigger
struct WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D;
// Block/<OnHit>d__2
struct U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DamageText/<OndamageTextHUD>d__4
struct U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73;
// InGameTextViewer/<BackHpMove>d__31
struct U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521;
// InGameTextViewer/<Count>d__25
struct U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC;
// InGameTextViewer/<FadeInOutText>d__26
struct U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF;
// InGameTextViewer/<SliderInit>d__28
struct U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerController/<Attack>d__32
struct U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801;
// PlayerController/<Idle>d__24
struct U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD;
// PlayerController/<Jump>d__28
struct U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33;
// PlayerController/<Sheld>d__29
struct U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60;
// PlayerController/<SideStepLeft>d__26
struct U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311;
// PlayerController/<SideStepRight>d__27
struct U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44;
// PlayerController/<SpecialMove>d__33
struct U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13;
// PlayerTrigger/<OnHit>d__2
struct U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpawnManager/<SpawnEnemies>d__8
struct U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0025EFE5785711BC14C46A087D3CFCF0F2AC5CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral0059F042AB28F41575E46BEF2E7EDB6186841DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
IL2CPP_EXTERN_C String_t* _stringLiteral0C42B16B05B5E8A23E700681D5C258B93EEE9CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5;
IL2CPP_EXTERN_C String_t* _stringLiteral128FBD60C102FC4524F1CC2E2B0F3C36C9BFAF13;
IL2CPP_EXTERN_C String_t* _stringLiteral1725743A5D4703F03EB03384CDE46285BCEC5F43;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF4040A74BAC6B4B4262221B46CE48440E72254;
IL2CPP_EXTERN_C String_t* _stringLiteral379C6ABF04571F6C4267E7B185C52C5B3484C084;
IL2CPP_EXTERN_C String_t* _stringLiteral38B5849F48917992AC91E9759151790DC9D3CA40;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E;
IL2CPP_EXTERN_C String_t* _stringLiteral3F76B39E4701F4DEC12EAE257885B0863E1703A3;
IL2CPP_EXTERN_C String_t* _stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral6899C32DD801A13C370077CC2E64D22482DF5A13;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB04AD3B11D41B9BD2660C62E9D39F9655523AB;
IL2CPP_EXTERN_C String_t* _stringLiteral6E11E5EB6A16E514BD60D299DB55AAF4FBF39A42;
IL2CPP_EXTERN_C String_t* _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA3ED0A463C67F2F504655F521F07412E287C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral91904BFC74DCD2F90F9707D8A8BFF27701896BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralC0B2234015DA9F01C77E06796EAF19A240140F3D;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCE25B0AD23E2BD03AD70A4AFD14A289056EA4EA4;
IL2CPP_EXTERN_C String_t* _stringLiteralD06C1C399B03C93D88058CB652A54EF38CF161B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD1A6FD5006EE077AFCAA31E575603C2FF68E794F;
IL2CPP_EXTERN_C String_t* _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D;
IL2CPP_EXTERN_C String_t* _stringLiteralD83D5466885C7FB0ACD5B2E16D2977200007C304;
IL2CPP_EXTERN_C String_t* _stringLiteralE61A7124EDD346B998C700B57DA1D8AD35F21660;
IL2CPP_EXTERN_C String_t* _stringLiteralEA226C2B177070CBDF0CBCE877856D6F82D92F40;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C;
IL2CPP_EXTERN_C String_t* _stringLiteralF17FB0E984BCD5541DC82003949DB35E9C2DB5DE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__32_System_Collections_IEnumerator_Reset_m8AF235EB4FCB6185F074ABAB89505CF7E14EB74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBackHpMoveU3Ed__31_System_Collections_IEnumerator_Reset_mFF9CC46AC60DF98EBB1FCADFEAF6166C7A2D48EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountU3Ed__25_System_Collections_IEnumerator_Reset_mC5D81B345FAB22F491D8E5F6316427A7D73C91EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInOutTextU3Ed__26_System_Collections_IEnumerator_Reset_mEBA4E2B74C7D5D79E4DD767C6A101123FB954BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIdleU3Ed__24_System_Collections_IEnumerator_Reset_mD69C8AD0C9639950156E6C3E61526CB6BADAB311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpU3Ed__28_System_Collections_IEnumerator_Reset_m5C4665B56FDB2D7D6669ED66838246A2A4F83B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_m16521F7C749B0ABD5E2FDD58B10FDB93B38A3126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_mC8EFB4BBEF816ACC9501C4A67F2B65D0E5E29741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COndamageTextHUDU3Ed__4_System_Collections_IEnumerator_Reset_m497D09CBC2C0069474031E2ED1B00D010FE70DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSheldU3Ed__29_System_Collections_IEnumerator_Reset_m61193993FA987450122D65E00F259DCF53C6B501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSideStepLeftU3Ed__26_System_Collections_IEnumerator_Reset_mFE6CEE51AB03B25F7E0FC188C0ED5AF3D33DD2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSideStepRightU3Ed__27_System_Collections_IEnumerator_Reset_mB9E0D0C92D3F7BA7364E05F6E9F494C1DFF5EEE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSliderInitU3Ed__28_System_Collections_IEnumerator_Reset_m4543B1C3416FF9745205CCFACD79A4A85F64A0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemiesU3Ed__8_System_Collections_IEnumerator_Reset_m3EC22DFF23C3DC4980FD149B34851E4B4B0FDA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpecialMoveU3Ed__33_System_Collections_IEnumerator_Reset_mF862484F261F7A13CAD77CFD46974456F487725B_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// InGameTextViewer/<BackHpMove>d__31
struct U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<BackHpMove>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<BackHpMove>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<BackHpMove>d__31::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Int32 InGameTextViewer/<BackHpMove>d__31::index
	int32_t ___index_3;
};

// InGameTextViewer/<Count>d__25
struct U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<Count>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<Count>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single InGameTextViewer/<Count>d__25::_Target
	float ____Target_2;
	// System.Single InGameTextViewer/<Count>d__25::_Current
	float ____Current_3;
	// TMPro.TextMeshProUGUI InGameTextViewer/<Count>d__25::_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____Text_4;
	// System.Single InGameTextViewer/<Count>d__25::<offset>5__2
	float ___U3CoffsetU3E5__2_5;
};

// InGameTextViewer/<FadeInOutText>d__26
struct U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<FadeInOutText>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<FadeInOutText>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<FadeInOutText>d__26::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Single InGameTextViewer/<FadeInOutText>d__26::<curPos>5__2
	float ___U3CcurPosU3E5__2_3;
	// System.Single InGameTextViewer/<FadeInOutText>d__26::<maxPos>5__3
	float ___U3CmaxPosU3E5__3_4;
	// System.Single InGameTextViewer/<FadeInOutText>d__26::<percent>5__4
	float ___U3CpercentU3E5__4_5;
};

// InGameTextViewer/<SliderInit>d__28
struct U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<SliderInit>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<SliderInit>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__28::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_2;
	// System.Single InGameTextViewer/<SliderInit>d__28::curValue
	float ___curValue_3;
	// System.Single InGameTextViewer/<SliderInit>d__28::maxValue
	float ___maxValue_4;
	// InGameTextViewer InGameTextViewer/<SliderInit>d__28::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_5;
	// System.Int32 InGameTextViewer/<SliderInit>d__28::index
	int32_t ___index_6;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__28::sliderShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderShadow_7;
};

// PlayerController/<Attack>d__32
struct U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801  : public RuntimeObject
{
	// System.Int32 PlayerController/<Attack>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Attack>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Attack>d__32::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Idle>d__24
struct U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD  : public RuntimeObject
{
	// System.Int32 PlayerController/<Idle>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Idle>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// PlayerController/<Jump>d__28
struct U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33  : public RuntimeObject
{
	// System.Int32 PlayerController/<Jump>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Jump>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Jump>d__28::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Sheld>d__29
struct U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60  : public RuntimeObject
{
	// System.Int32 PlayerController/<Sheld>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Sheld>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Sheld>d__29::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
	// System.Single PlayerController/<Sheld>d__29::<timer>5__2
	float ___U3CtimerU3E5__2_3;
};

// PlayerController/<SideStepLeft>d__26
struct U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311  : public RuntimeObject
{
	// System.Int32 PlayerController/<SideStepLeft>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SideStepLeft>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SideStepLeft>d__26::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SideStepRight>d__27
struct U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44  : public RuntimeObject
{
	// System.Int32 PlayerController/<SideStepRight>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SideStepRight>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SideStepRight>d__27::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SpecialMove>d__33
struct U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13  : public RuntimeObject
{
	// System.Int32 PlayerController/<SpecialMove>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SpecialMove>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SpecialMove>d__33::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerTrigger/<OnHit>d__2
struct U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA  : public RuntimeObject
{
	// System.Int32 PlayerTrigger/<OnHit>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerTrigger/<OnHit>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlayerTrigger/<OnHit>d__2::damage
	float ___damage_2;
};

// SpawnManager/<SpawnEnemies>d__8
struct U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8  : public RuntimeObject
{
	// System.Int32 SpawnManager/<SpawnEnemies>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<SpawnEnemies>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<SpawnEnemies>d__8::<>4__this
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___U3CU3E4__this_2;
	// System.Single SpawnManager/<SpawnEnemies>d__8::timer
	float ___timer_3;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// Block/<OnHit>d__2
struct U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484  : public RuntimeObject
{
	// System.Int32 Block/<OnHit>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Block/<OnHit>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Block Block/<OnHit>d__2::<>4__this
	Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* ___U3CU3E4__this_2;
	// System.Int32 Block/<OnHit>d__2::damage
	int32_t ___damage_3;
	// UnityEngine.Vector2 Block/<OnHit>d__2::onHitPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___onHitPosition_4;
};

// DamageText/<OndamageTextHUD>d__4
struct U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73  : public RuntimeObject
{
	// System.Int32 DamageText/<OndamageTextHUD>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DamageText/<OndamageTextHUD>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Vector2 DamageText/<OndamageTextHUD>d__4::onHitPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___onHitPosition_2;
	// DamageText DamageText/<OndamageTextHUD>d__4::<>4__this
	DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* ___U3CU3E4__this_3;
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform DamageText::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_4;
	// TMPro.TextMeshProUGUI DamageText::damageTextHUD
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageTextHUD_5;
};

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Enemy::enemyName
	String_t* ___enemyName_4;
	// System.Single Enemy::curHp
	float ___curHp_5;
	// System.Single Enemy::maxHp
	float ___maxHp_6;
	// System.Single Enemy::dmg
	float ___dmg_7;
	// UnityEngine.Rigidbody2D Enemy::parentRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___parentRigid_8;
	// UnityEngine.GameObject Enemy::parentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentGameObject_9;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManager::curKillEnemyCount
	int32_t ___curKillEnemyCount_5;
	// System.Int32 GameManager::score
	int32_t ___score_6;
	// System.Int32 GameManager::combo
	int32_t ___combo_7;
};

// InGameTextViewer
struct InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider InGameTextViewer::hpBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpBar_5;
	// UnityEngine.UI.Slider InGameTextViewer::hpBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpBarShadow_6;
	// UnityEngine.UI.Slider InGameTextViewer::sheldBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sheldBar_7;
	// UnityEngine.UI.Slider InGameTextViewer::sheldBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sheldBarShadow_8;
	// UnityEngine.UI.Slider InGameTextViewer::specialMoveBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___specialMoveBar_9;
	// UnityEngine.UI.Slider InGameTextViewer::specialMoveBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___specialMoveBarShadow_10;
	// UnityEngine.GameObject InGameTextViewer::enemyHpGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyHpGroup_11;
	// UnityEngine.UI.Slider InGameTextViewer::enemyHpBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___enemyHpBar_12;
	// UnityEngine.UI.Slider InGameTextViewer::enemyHpBarShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___enemyHpBarShadow_13;
	// UnityEngine.UI.Image InGameTextViewer::enemyTypeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___enemyTypeImage_14;
	// TMPro.TextMeshProUGUI InGameTextViewer::curAndMaxEnemyHpText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___curAndMaxEnemyHpText_15;
	// System.Single InGameTextViewer::curEnemyHp
	float ___curEnemyHp_16;
	// System.Single InGameTextViewer::maxEnemyHp
	float ___maxEnemyHp_17;
	// System.Boolean InGameTextViewer::enemyGageShown
	bool ___enemyGageShown_18;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboCountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboCountText_19;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboText_20;
	// UnityEngine.Transform InGameTextViewer::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_21;
	// UnityEngine.GameObject InGameTextViewer::comboTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___comboTextPrefab_22;
	// UnityEngine.Animator InGameTextViewer::comboTextAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___comboTextAnimator_23;
	// System.Boolean[] InGameTextViewer::backGageHit
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___backGageHit_24;
};

// MovingCamera
struct MovingCamera_tDA3D1483537F2863832FCC058E9EBFB6C2DC1EE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MovingCamera::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single MovingCamera::cameraSpeed
	float ___cameraSpeed_5;
	// UnityEngine.Vector3 MovingCamera::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_6;
	// System.Single MovingCamera::cameraOffset
	float ___cameraOffset_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerState PlayerController::playerState
	int32_t ___playerState_4;
	// UnityEngine.Transform[] PlayerController::playerPos
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___playerPos_5;
	// TMPro.TextMeshProUGUI PlayerController::textText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textText_6;
	// System.Single PlayerController::swipeSensitivity
	float ___swipeSensitivity_7;
	// System.Boolean PlayerController::isJump
	bool ___isJump_8;
	// System.Boolean PlayerController::isSheld
	bool ___isSheld_9;
	// System.Boolean PlayerController::offSheld
	bool ___offSheld_10;
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
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerData::atk
	int32_t ___atk_5;
	// System.Single PlayerData::attackSpeed
	float ___attackSpeed_6;
	// System.Single PlayerData::criticalRate
	float ___criticalRate_7;
	// System.Single PlayerData::criticalDamage
	float ___criticalDamage_8;
	// System.Single PlayerData::curHp
	float ___curHp_9;
	// System.Single PlayerData::maxHp
	float ___maxHp_10;
	// System.Single PlayerData::curSheldGage
	float ___curSheldGage_11;
	// System.Single PlayerData::maxSheldGage
	float ___maxSheldGage_12;
	// System.Single PlayerData::curSpecialMoveGage
	float ___curSpecialMoveGage_13;
	// System.Single PlayerData::maxSpecialMoveGage
	float ___maxSpecialMoveGage_14;
	// System.Int32 PlayerData::def
	int32_t ___def_15;
	// System.Single PlayerData::tec
	float ___tec_16;
};

// PlayerTrigger
struct PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SheldTrigger
struct SheldTrigger_t5785513A3BC91D53F93ADF7046AB4E987A4D7C9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] SpawnManager::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_4;
	// UnityEngine.GameObject[] SpawnManager::enemies
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemies_5;
	// UnityEngine.GameObject[] SpawnManager::EnemyGroup
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___EnemyGroup_6;
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
	int32_t ___mass_10;
	// System.Int32 Block::gravity
	int32_t ___gravity_11;
};

// FloorDetector
struct FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A  : public PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0
{
	// UnityEngine.Collider2D FloorDetector::collisionBlock
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collisionBlock_4;
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

// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
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
};

// OneToOneHBlock
struct OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA  : public Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7
{
};

// OneToThreeBlock
struct OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F  : public Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7
{
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

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// InGameTextViewer/<BackHpMove>d__31

// InGameTextViewer/<BackHpMove>d__31

// InGameTextViewer/<Count>d__25

// InGameTextViewer/<Count>d__25

// InGameTextViewer/<FadeInOutText>d__26

// InGameTextViewer/<FadeInOutText>d__26

// InGameTextViewer/<SliderInit>d__28

// InGameTextViewer/<SliderInit>d__28

// PlayerController/<Attack>d__32

// PlayerController/<Attack>d__32

// PlayerController/<Idle>d__24

// PlayerController/<Idle>d__24

// PlayerController/<Jump>d__28

// PlayerController/<Jump>d__28

// PlayerController/<Sheld>d__29

// PlayerController/<Sheld>d__29

// PlayerController/<SideStepLeft>d__26

// PlayerController/<SideStepLeft>d__26

// PlayerController/<SideStepRight>d__27

// PlayerController/<SideStepRight>d__27

// PlayerController/<SpecialMove>d__33

// PlayerController/<SpecialMove>d__33

// PlayerTrigger/<OnHit>d__2

// PlayerTrigger/<OnHit>d__2

// SpawnManager/<SpawnEnemies>d__8

// SpawnManager/<SpawnEnemies>d__8

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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

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

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

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

// UnityEngine.Touch

// UnityEngine.Touch

// TMPro.VertexGradient

// TMPro.VertexGradient

// Block/<OnHit>d__2

// Block/<OnHit>d__2

// DamageText/<OndamageTextHUD>d__4

// DamageText/<OndamageTextHUD>d__4

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

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

// MovingCamera

// MovingCamera

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// PlayerController PlayerController::instance
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___instance_21;
};

// PlayerController

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields
{
	// PlayerData PlayerData::instance
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* ___instance_4;
};

// PlayerData

// PlayerTrigger

// PlayerTrigger

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
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___instance_7;
};

// SpawnManager

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// WeaponTrigger

// WeaponTrigger

// Block

// Block

// FloorDetector

// FloorDetector

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

// Monster

// Monster

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// OneToOneBlock

// OneToOneBlock

// OneToOneHBlock

// OneToOneHBlock

// OneToThreeBlock

// OneToThreeBlock

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator DamageText::OndamageTextHUD(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageText_OndamageTextHUD_m93DB6B5D60FF3989B6E2F284F36CCDB780591968 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_onHitPosition, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void DamageText/<OndamageTextHUD>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__4__ctor_m0545CE6340834386F8A6BD5A73FD84E20C8D9CC6 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Block/<OnHit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2__ctor_m8084CCFB757812D5794DD6C08A45AB6465702BF5 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// InGameTextViewer InGameTextViewer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516 (const RuntimeMethod* method) ;
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Boolean Block::CriticalCheck(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Block_CriticalCheck_m5EF8ADCD520EFBAD10CB6C7CD6D0737F97227D8D (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, float ___1_percent, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void InGameTextViewer::SpawnHUDText(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_SpawnHUDText_mED11B08E283BC97CCFC37F97168EE5C61B639141 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, String_t* ___0_damageText, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) ;
// System.Void Block::OnDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_OnDead_mB0CD193E61630421C4AAA740496CA86C41B1B9D0 (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// PlayerController PlayerController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Block::OnHit(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9 (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_onHitPosition, const RuntimeMethod* method) ;
// System.Void Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OneToOneBlock>()
inline OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator PlayerTrigger::OnHit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5 (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, float ___0_damage, const RuntimeMethod* method) ;
// System.Void PlayerTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger__ctor_mB9B02D7CCE5DB788A0D6CEBE6D6FDADAED2B7F5A (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::Count(TMPro.TextMeshProUGUI,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_Count_m13A3CD54AF0D6BDDD1E76D6DEDE793CE0D1AADD3 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__Text, float ___1__Target, float ___2__Current, const RuntimeMethod* method) ;
// PlayerData PlayerData::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::SliderInit(UnityEngine.UI.Slider,UnityEngine.UI.Slider,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___1_sliderShadow, float ___2_curValue, float ___3_maxValue, int32_t ___4_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void InGameTextViewer::EnemySliderInitReady(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_boolean, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<Count>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__25__ctor_m7823A60CE29EA99924BA378A6385D119A9240C18 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<FadeInOutText>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__26__ctor_m83972387AFA8F70DCB2A690A7447DA0ED86AC303 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DamageText>()
inline DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DamageText::Play(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Play_m51962EB9CC8AE0AD41D708A72703D41E9127EAAB (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, String_t* ___0_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<SliderInit>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__28__ctor_m427D28DC24AAEB7EA5F9D8818CE76A85E9E756FC (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::BackHpMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_BackHpMove_m5FF8E27D74D644F3CBF77AD6B141FE7A60874ED0 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<BackHpMove>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__31__ctor_m498740D78AD9A2A82C9016CCE738BF711794E613 (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___0_clearDepth, bool ___1_clearColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_backgroundColor, const RuntimeMethod* method) ;
// System.Void PlayerController::ChangeState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___0_newState, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void PlayerController::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Swipe_m5E9A77D57557D7F0DA3A31FF77C666A50C4874A4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void PlayerController/<Idle>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__24__ctor_mEB458C370EF336895C1E8297AD4E682F15B78966 (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerController::SheldToX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController/<SideStepLeft>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__26__ctor_mF95A8D726E216C2CAC6257453F5B677512B11311 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<SideStepRight>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__27__ctor_mF781DD61FF3977FEFD57B77D99B47BB2A3CF5CB4 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Jump>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__28__ctor_mCB94533BDA6B4FF9432396DD3DADA8EB4E17A501 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Sheld>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__29__ctor_mFD155A18ECD76F934A2B9EB7E637E6FAA5A84CBC (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Attack>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__32__ctor_m0D0DC67A379398D24DA2ECD4CDEC2ABF4CD4E637 (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<SpecialMove>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__33__ctor_m7AA9B269E4DA71771EAD3E294233AC7AF1A4B6A7 (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerController::Moving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Moving_mC09C5C542D7C5AADBF6FB33C44D27DB3DF572D91 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___0_dir, const RuntimeMethod* method) ;
// System.Void PlayerController::SheldOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SheldOff_m50897A79E50FD37EFF1EC9D32695E664732023E0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Parrying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Parrying_m959AFA65BFB00BA5330EA035FD47857D07BEEA18 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OneToOneHBlock>()
inline OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerTrigger/<OnHit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2__ctor_m6D68B5B5DD58FA7C72A47BF37506CF14ECE3A5E9 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnManager::SpawnEnemies(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_SpawnEnemies_m77D51C873F2AEAB363997AD779A8DC184E7F12D7 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, float ___0_timer, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void SpawnManager/<SpawnEnemies>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemiesU3Ed__8__ctor_mA0FAB291F9214A1B10EEC7480F1D335E3D04FD37 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SpawnManager::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Spawn_m7EECD94AA36394B11891AA73D913D74D0ED61F4F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::FadeInOutText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) ;
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
// System.Void DamageText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Awake_m6BD77AE2D98BC11D6AB98C53460EB2B198362608 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_4), (void*)L_0);
		// damageTextHUD = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___damageTextHUD_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___damageTextHUD_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DamageText::Play(System.String,UnityEngine.Color,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Play_m51962EB9CC8AE0AD41D708A72703D41E9127EAAB (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, String_t* ___0_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_onHitPosition, const RuntimeMethod* method) 
{
	{
		// damageTextHUD.text = text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___damageTextHUD_5;
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// damageTextHUD.color = color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___damageTextHUD_5;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* L_0 = (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73*)il2cpp_codegen_object_new(U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COndamageTextHUDU3Ed__4__ctor_m0545CE6340834386F8A6BD5A73FD84E20C8D9CC6(L_0, 0, NULL);
		U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* L_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_onHitPosition;
		NullCheck(L_2);
		L_2->___onHitPosition_2 = L_3;
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
// System.Void DamageText/<OndamageTextHUD>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__4__ctor_m0545CE6340834386F8A6BD5A73FD84E20C8D9CC6 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DamageText/<OndamageTextHUD>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__4_System_IDisposable_Dispose_m3C1187726F76EE185FF43E7BD6B3BD399338B048 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DamageText/<OndamageTextHUD>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COndamageTextHUDU3Ed__4_MoveNext_mE8876E0503A2B0A9C46E1E79E5F3E5B0D2429579 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, const RuntimeMethod* method) 
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
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector2 start = /*onHitPosition;*/Camera.main.WorldToScreenPoint(onHitPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___onHitPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_4, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		V_2 = L_8;
		// rectTransform.position = start + Vector2.up * 100;
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___rectTransform_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, (100.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_15, NULL);
		// gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(Random.Range(-150f, 150f), 1000f)/*Random.Range(-1f, 1f), 5f)*/, ForceMode2D.Impulse);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_17, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-150.0f), (150.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_19, (1000.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_18, L_20, 1, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject, 2);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_22, (2.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object DamageText/<OndamageTextHUD>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COndamageTextHUDU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m407CDB9CB9222D40EFB59B7865E24BEA43482FA0 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DamageText/<OndamageTextHUD>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COndamageTextHUDU3Ed__4_System_Collections_IEnumerator_Reset_m497D09CBC2C0069474031E2ED1B00D010FE70DB6 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COndamageTextHUDU3Ed__4_System_Collections_IEnumerator_Reset_m497D09CBC2C0069474031E2ED1B00D010FE70DB6_RuntimeMethod_var)));
	}
}
// System.Object DamageText/<OndamageTextHUD>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COndamageTextHUDU3Ed__4_System_Collections_IEnumerator_get_Current_m00DC77A3E9B9397EB9E9BFE267939477ACB762A6 (U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73* __this, const RuntimeMethod* method) 
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
// System.Void DataManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Awake_mBED5EDC55313601164C69104F2D67B067AC6183E (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
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
		((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// DataManager DataManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* DataManager_get_Instance_mAB0E5C8A4F14CAA7BB4E19FBD297F35E4BDAC14A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_0 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
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
		return (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275*)NULL;
	}

IL_000f:
	{
		// return instance;
		DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* L_2 = ((DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_mD735B7F80F3DE13E2BB45118CDA7FA619330DCDA (DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator Block::OnHit(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9 (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_onHitPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* L_0 = (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484*)il2cpp_codegen_object_new(U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnHitU3Ed__2__ctor_m8084CCFB757812D5794DD6C08A45AB6465702BF5(L_0, 0, NULL);
		U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* L_2 = L_1;
		int32_t L_3 = ___0_damage;
		NullCheck(L_2);
		L_2->___damage_3 = L_3;
		U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* L_4 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_onHitPosition;
		NullCheck(L_4);
		L_4->___onHitPosition_4 = L_5;
		return L_4;
	}
}
// System.Boolean Block::CriticalCheck(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Block_CriticalCheck_m5EF8ADCD520EFBAD10CB6C7CD6D0737F97227D8D (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, float ___1_percent, const RuntimeMethod* method) 
{
	{
		// float r = Random.Range(0f, 100f) % 100;
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (100.0f), NULL);
		// if (r < percent)
		float L_1 = ___1_percent;
		if ((!(((float)(fmodf(L_0, (100.0f)))) < ((float)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Block::OnDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_OnDead_mB0CD193E61630421C4AAA740496CA86C41B1B9D0 (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InGameTextViewer.Instance.enemyGageShown = false;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_0;
		L_0 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		NullCheck(L_0);
		L_0->___enemyGageShown_18 = (bool)0;
		// Destroy(parentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentGameObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, const RuntimeMethod* method) 
{
	{
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
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
// System.Void Block/<OnHit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2__ctor_m8084CCFB757812D5794DD6C08A45AB6465702BF5 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Block/<OnHit>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2_System_IDisposable_Dispose_m0162C6FA755C6C2A94147DDB0221099F68DCB95D (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Block/<OnHit>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnHitU3Ed__2_MoveNext_m8E2DC5A365A20A56B2C6621BAF898817988F0EB6 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* V_1 = NULL;
	bool V_2 = false;
	String_t* G_B7_0 = NULL;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* G_B6_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	String_t* G_B8_1 = NULL;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* G_B8_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0101;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool isCritical = CriticalCheck(damage, 33f);
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_4 = V_1;
		int32_t L_5 = __this->___damage_3;
		NullCheck(L_4);
		bool L_6;
		L_6 = Block_CriticalCheck_m5EF8ADCD520EFBAD10CB6C7CD6D0737F97227D8D(L_4, L_5, (33.0f), NULL);
		V_2 = L_6;
		// if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);
		int32_t L_8 = __this->___damage_3;
		int32_t L_9 = __this->___damage_3;
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_9), (1.5f))), NULL);
		__this->___damage_3 = ((int32_t)il2cpp_codegen_multiply(L_8, L_10));
	}

IL_0055:
	{
		// curHp -= damage;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_11 = V_1;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_12)->___curHp_5;
		int32_t L_14 = __this->___damage_3;
		NullCheck(L_11);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_11)->___curHp_5 = ((float)il2cpp_codegen_subtract(L_13, ((float)L_14)));
		// InGameTextViewer.Instance.enemyGageShown = true;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_15;
		L_15 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		NullCheck(L_15);
		L_15->___enemyGageShown_18 = (bool)1;
		// InGameTextViewer.Instance.maxEnemyHp = maxHp;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_16;
		L_16 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_17)->___maxHp_6;
		NullCheck(L_16);
		L_16->___maxEnemyHp_17 = L_18;
		// InGameTextViewer.Instance.curEnemyHp = curHp;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_19;
		L_19 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_20)->___curHp_5;
		NullCheck(L_19);
		L_19->___curEnemyHp_16 = L_21;
		// InGameTextViewer.Instance.SpawnHUDText(damage.ToString()/*GameManager.Instance.combo + "Combo"*/, isCritical ? Color.red : Color.white, onHitPosition);
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_22;
		L_22 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		int32_t* L_23 = (&__this->___damage_3);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		bool L_25 = V_2;
		G_B6_0 = L_24;
		G_B6_1 = L_22;
		if (L_25)
		{
			G_B7_0 = L_24;
			G_B7_1 = L_22;
			goto IL_00ae;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B8_0 = L_26;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00b3;
	}

IL_00ae:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B8_0 = L_27;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00b3:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___onHitPosition_4;
		NullCheck(G_B8_2);
		InGameTextViewer_SpawnHUDText_mED11B08E283BC97CCFC37F97168EE5C61B639141(G_B8_2, G_B8_1, G_B8_0, L_28, NULL);
		// if (curHp <= 0)
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_29)->___curHp_5;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_00d3;
		}
	}
	{
		// OnDead();
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_31 = V_1;
		NullCheck(L_31);
		Block_OnDead_mB0CD193E61630421C4AAA740496CA86C41B1B9D0(L_31, NULL);
		goto IL_011d;
	}

IL_00d3:
	{
		// gameObject.GetComponent<SpriteRenderer>().color = Color.red;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_32 = V_1;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_34;
		L_34 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_33, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_34);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_34, L_35, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_36 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_36, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_36);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0101:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpriteRenderer>().color = Color.white;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_37 = V_1;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_39;
		L_39 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_38, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_39);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_39, L_40, NULL);
	}

IL_011d:
	{
		// }
		return (bool)0;
	}
}
// System.Object Block/<OnHit>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE0F2DCE85281999960C3DB447DA1B8332CF9FE00 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Block/<OnHit>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_mC8EFB4BBEF816ACC9501C4A67F2B65D0E5E29741 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_mC8EFB4BBEF816ACC9501C4A67F2B65D0E5E29741_RuntimeMethod_var)));
	}
}
// System.Object Block/<OnHit>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__2_System_Collections_IEnumerator_get_Current_m9DA28AAEFD4C667229FDD66F9BBC465B433D19B1 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// parentGameObject = gameObject.transform.parent.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		__this->___parentGameObject_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentGameObject_9), (void*)L_3);
		// curHp = maxHp;
		float L_4 = __this->___maxHp_6;
		__this->___curHp_5 = L_4;
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
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
// System.Void Monster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Start_mC7CDE5F86FB91CC26962950A89794155B4210B85 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Monster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Update_mF611DD6E8505C5513AAD8A9E9952403582D71CBB (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Monster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster__ctor_m4E10FC18FF41A1D3156A7AC924B06AD7F3882E04 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
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
// System.Void OneToOneBlock::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneBlock_OnTriggerEnter2D_m4D4B186B9B12BC3CB5E844E0CFE1F7F1639450D0 (OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE25B0AD23E2BD03AD70A4AFD14A289056EA4EA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D);
		s_Il2CppMethodInitialized = true;
	}
	float G_B4_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	float G_B5_1 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B5_2 = NULL;
	float G_B9_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B9_1 = NULL;
	float G_B8_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B10_2 = NULL;
	{
		// if (collision.tag == "PlayerTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D, NULL);
		if (L_2)
		{
			goto IL_00c2;
		}
	}
	{
		// else if (collision.tag == "Sheld")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190, NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.Log("OnSheld");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCE25B0AD23E2BD03AD70A4AFD14A289056EA4EA4, NULL);
		// parentRigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_7, NULL);
		// parentRigid.AddForce(new Vector2(0, PlayerController.Instance.isCrushed ? 10 : 5), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_8;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9;
		L_9 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_9);
		bool L_10 = L_9->___isCrushed_11;
		G_B3_0 = (0.0f);
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = (0.0f);
			G_B4_1 = L_8;
			goto IL_005b;
		}
	}
	{
		G_B5_0 = 5;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005b:
	{
		G_B5_0 = ((int32_t)10);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), G_B5_1, ((float)G_B5_0), /*hidden argument*/NULL);
		NullCheck(G_B5_2);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(G_B5_2, L_11, 1, NULL);
		return;
	}

IL_006a:
	{
		// else if (collision.tag == "Weapon")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12 = ___0_collision;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		// parentRigid.AddForce(new Vector2(0, PlayerController.Instance.isCrushed ? 10 : 1), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_8;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16;
		L_16 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_16);
		bool L_17 = L_16->___isCrushed_11;
		G_B8_0 = (0.0f);
		G_B8_1 = L_15;
		if (L_17)
		{
			G_B9_0 = (0.0f);
			G_B9_1 = L_15;
			goto IL_0096;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0098;
	}

IL_0096:
	{
		G_B10_0 = ((int32_t)10);
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0098:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), G_B10_1, ((float)G_B10_0), /*hidden argument*/NULL);
		NullCheck(G_B10_2);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(G_B10_2, L_18, 1, NULL);
		// StartCoroutine(OnHit(1, collision.transform.position));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_19 = ___0_collision;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_21, NULL);
		RuntimeObject* L_23;
		L_23 = Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9(__this, 1, L_22, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_23, NULL);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void OneToOneBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneBlock__ctor_m22FDBB5E36134065FB45B64D99E662BC318F070F (OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* __this, const RuntimeMethod* method) 
{
	{
		Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF(__this, NULL);
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
// System.Void OneToOneHBlock::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneHBlock_OnTriggerEnter2D_m0A992CFE0F8335B63DCCB46DBD348BEE7ACC8720 (OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C42B16B05B5E8A23E700681D5C258B93EEE9CE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B5849F48917992AC91E9759151790DC9D3CA40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A6FD5006EE077AFCAA31E575603C2FF68E794F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "PlayerTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log("PlayerHitted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0C42B16B05B5E8A23E700681D5C258B93EEE9CE0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		return;
	}

IL_0028:
	{
		// else if(collision.tag == "Sheld")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		return;
	}

IL_0046:
	{
		// else if(collision.tag == "Floor")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___0_collision;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// Debug.Log("OnFloor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral38B5849F48917992AC91E9759151790DC9D3CA40, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		return;
	}

IL_006e:
	{
		// else if(collision.tag == "Weapon")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12 = ___0_collision;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (!L_14)
		{
			goto IL_00a8;
		}
	}
	{
		// Debug.Log("Smashed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD1A6FD5006EE077AFCAA31E575603C2FF68E794F, NULL);
		// StartCoroutine(OnHit(1, collision.transform.position));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_15 = ___0_collision;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_17, NULL);
		RuntimeObject* L_19;
		L_19 = Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9(__this, 1, L_18, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void OneToOneHBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneHBlock__ctor_m9B1C32338E550ED293D880760CB1320EE6C45D84 (OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* __this, const RuntimeMethod* method) 
{
	{
		Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF(__this, NULL);
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
// System.Void OneToThreeBlock::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_FixedUpdate_m0397385F5CA7A8A94F1353627730BEDA67B1D5A5 (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnCollisionEnter2D_mBD042D77AB2575F92F0299B55E79344C4EFA6C6C (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnCollisionStay2D_m26547F6B40B7E9A00D9ECE06740BF184754C27F8 (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnCollisionExit2D_mCE74855FA34C5A9EB0E4F0C5D5556ED522201F18 (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnTriggerEnter2D_m27BA7CBD30AA8D48340A5BD36C1AD3983530B02B (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnTriggerStay2D_mAF7DAD12CAC984B168A8B852BA5548F11C092BCF (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock_OnTriggerExit_mE43EDF6132695A550CC71640153E25F43580748A (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OneToThreeBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToThreeBlock__ctor_m643BB11A7EAB111F8B77CA3865209374991349A8 (OneToThreeBlock_tC13D24B9FB06ACF1450CC851A6ED5B71D34E055F* __this, const RuntimeMethod* method) 
{
	{
		Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF(__this, NULL);
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
// System.Void FloorDetector::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorDetector_OnTriggerEnter2D_mACF33823B4543C9692569AE2922E7D2F0AAC7EA7 (FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F76B39E4701F4DEC12EAE257885B0863E1703A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C);
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
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.Log("????? ????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3F76B39E4701F4DEC12EAE257885B0863E1703A3, NULL);
		// PlayerController.Instance.isCrushed = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		L_3->___isCrushed_11 = (bool)1;
		// collisionBlock = collision;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		__this->___collisionBlock_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionBlock_4), (void*)L_4);
		// StartCoroutine(OnHit(collisionBlock.GetComponent<OneToOneBlock>().dmg * 100));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = __this->___collisionBlock_4;
		NullCheck(L_5);
		OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* L_6;
		L_6 = Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB(L_5, Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_6)->___dmg_7;
		RuntimeObject* L_8;
		L_8 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, ((float)il2cpp_codegen_multiply(L_7, (100.0f))), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void FloorDetector::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorDetector_OnTriggerExit2D_m9B0F278932672D7F29D876EAC7D4A12E41F88634 (FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA226C2B177070CBDF0CBCE877856D6F82D92F40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C);
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
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log("????? ??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEA226C2B177070CBDF0CBCE877856D6F82D92F40, NULL);
		// PlayerController.Instance.isCrushed = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		L_3->___isCrushed_11 = (bool)0;
		// collisionBlock = null;
		__this->___collisionBlock_4 = (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionBlock_4), (void*)(Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52*)NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void FloorDetector::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorDetector_FixedUpdate_m24F26C56706B7F8CD6AE514E9C157F7807220423 (FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collisionBlock == null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = __this->___collisionBlock_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (PlayerController.Instance.isCrushed)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___isCrushed_11;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// StartCoroutine(OnHit(collisionBlock.GetComponent<OneToOneBlock>().dmg));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = __this->___collisionBlock_4;
		NullCheck(L_4);
		OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* L_5;
		L_5 = Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB(L_4, Component_GetComponent_TisOneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4_m491DE5A3A023E69EE3D3DB0AB7C52467938EB1DB_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_5)->___dmg_7;
		RuntimeObject* L_7;
		L_7 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void FloorDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorDetector__ctor_m70A0E27C29CD455C4D85157AEFC703EBEF79A8A3 (FloorDetector_tD88C1C0C653BB27AE6DF0CC2AEF0BE4F8796DB7A* __this, const RuntimeMethod* method) 
{
	{
		PlayerTrigger__ctor_mB9B02D7CCE5DB788A0D6CEBE6D6FDADAED2B7F5A(__this, NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
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
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
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
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// curKillEnemyCount = 0;
		__this->___curKillEnemyCount_5 = 0;
		// combo = 0;
		__this->___combo_7 = 0;
		// score = 0;
		__this->___score_6 = 0;
		// }
		return;
	}
}
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
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
		return (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)NULL;
	}

IL_000f:
	{
		// return instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_StaticFields*)il2cpp_codegen_static_fields_for(InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
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
		// StartCoroutine(Count(comboCountText, GameManager.Instance.combo, GameManager.Instance.combo + 1));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___comboCountText_19;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___combo_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___combo_7;
		RuntimeObject* L_5;
		L_5 = InGameTextViewer_Count_m13A3CD54AF0D6BDDD1E76D6DEDE793CE0D1AADD3(__this, L_0, ((float)L_2), ((float)((int32_t)il2cpp_codegen_add(L_4, 1))), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// StartCoroutine(SliderInit(hpBar, hpBarShadow, PlayerData.Instance.curHp, PlayerData.Instance.maxHp, 0));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___hpBar_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___hpBarShadow_6;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_9;
		L_9 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_9);
		float L_10 = L_9->___curHp_9;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_11;
		L_11 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_11);
		float L_12 = L_11->___maxHp_10;
		RuntimeObject* L_13;
		L_13 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_7, L_8, L_10, L_12, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
		// StartCoroutine(SliderInit(sheldBar, sheldBarShadow, PlayerData.Instance.curSheldGage, PlayerData.Instance.maxSheldGage, 1));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___sheldBar_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sheldBarShadow_8;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_17;
		L_17 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_17);
		float L_18 = L_17->___curSheldGage_11;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_19;
		L_19 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_19);
		float L_20 = L_19->___maxSheldGage_12;
		RuntimeObject* L_21;
		L_21 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_15, L_16, L_18, L_20, 1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
		// StartCoroutine(SliderInit(specialMoveBar, specialMoveBarShadow, PlayerData.Instance.curSpecialMoveGage, PlayerData.Instance.maxSpecialMoveGage, 2));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_23 = __this->___specialMoveBar_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_24 = __this->___specialMoveBarShadow_10;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_25;
		L_25 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_25);
		float L_26 = L_25->___curSpecialMoveGage_13;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_27;
		L_27 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_27);
		float L_28 = L_27->___maxSpecialMoveGage_14;
		RuntimeObject* L_29;
		L_29 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_23, L_24, L_26, L_28, 2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
		// if (enemyGageShown)
		bool L_31 = __this->___enemyGageShown_18;
		if (!L_31)
		{
			goto IL_011b;
		}
	}
	{
		// enemyHpGroup.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___enemyHpGroup_11;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// StartCoroutine(SliderInit(enemyHpBar, enemyHpBarShadow, curEnemyHp, maxEnemyHp, 3));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_33 = __this->___enemyHpBar_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_34 = __this->___enemyHpBarShadow_13;
		float L_35 = __this->___curEnemyHp_16;
		float L_36 = __this->___maxEnemyHp_17;
		RuntimeObject* L_37;
		L_37 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_33, L_34, L_35, L_36, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// curAndMaxEnemyHpText.text = curEnemyHp.ToString() + "/" + maxEnemyHp.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = __this->___curAndMaxEnemyHpText_15;
		float* L_40 = (&__this->___curEnemyHp_16);
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_40, NULL);
		float* L_42 = (&__this->___maxEnemyHp_17);
		String_t* L_43;
		L_43 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_42, NULL);
		String_t* L_44;
		L_44 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_41, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_43, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_39, L_44);
		return;
	}

IL_011b:
	{
		// if(enemyHpBarShadow.value >= 0.05)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_45 = __this->___enemyHpBarShadow_13;
		NullCheck(L_45);
		float L_46;
		L_46 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_45);
		if ((!(((double)((double)L_46)) >= ((double)(0.050000000000000003)))))
		{
			goto IL_0139;
		}
	}
	{
		// EnemySliderInitReady(false);
		InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D(__this, (bool)0, NULL);
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InGameTextViewer::Count(TMPro.TextMeshProUGUI,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_Count_m13A3CD54AF0D6BDDD1E76D6DEDE793CE0D1AADD3 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0__Text, float ___1__Target, float ___2__Current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* L_0 = (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC*)il2cpp_codegen_object_new(U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountU3Ed__25__ctor_m7823A60CE29EA99924BA378A6385D119A9240C18(L_0, 0, NULL);
		U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* L_1 = L_0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = ___0__Text;
		NullCheck(L_1);
		L_1->____Text_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____Text_4), (void*)L_2);
		U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* L_3 = L_1;
		float L_4 = ___1__Target;
		NullCheck(L_3);
		L_3->____Target_2 = L_4;
		U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* L_5 = L_3;
		float L_6 = ___2__Current;
		NullCheck(L_5);
		L_5->____Current_3 = L_6;
		return L_5;
	}
}
// System.Collections.IEnumerator InGameTextViewer::FadeInOutText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* L_0 = (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF*)il2cpp_codegen_object_new(U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInOutTextU3Ed__26__ctor_m83972387AFA8F70DCB2A690A7447DA0ED86AC303(L_0, 0, NULL);
		U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* L_1 = L_0;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___comboTextPrefab_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// clone.transform.SetParent(parentTransform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parentTransform_21;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_0 = (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42*)il2cpp_codegen_object_new(U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSliderInitU3Ed__28__ctor_m427D28DC24AAEB7EA5F9D8818CE76A85E9E756FC(L_0, 0, NULL);
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_2 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___0_slider;
		NullCheck(L_2);
		L_2->___slider_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___slider_2), (void*)L_3);
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_4 = L_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = ___1_sliderShadow;
		NullCheck(L_4);
		L_4->___sliderShadow_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sliderShadow_7), (void*)L_5);
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_6 = L_4;
		float L_7 = ___2_curValue;
		NullCheck(L_6);
		L_6->___curValue_3 = L_7;
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_8 = L_6;
		float L_9 = ___3_maxValue;
		NullCheck(L_8);
		L_8->___maxValue_4 = L_9;
		U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* L_10 = L_8;
		int32_t L_11 = ___4_index;
		NullCheck(L_10);
		L_10->___index_6 = L_11;
		return L_10;
	}
}
// System.Void InGameTextViewer::EnemySliderInitReady(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_EnemySliderInitReady_mDFC4129AC239342690A93B908387956F6F03DB5D (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_boolean, const RuntimeMethod* method) 
{
	{
		// enemyHpBar.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___enemyHpBar_12;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (1.0f));
		// enemyHpBarShadow.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___enemyHpBarShadow_13;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		// enemyHpGroup.SetActive(boolean);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___enemyHpGroup_11;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* L_0 = (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521*)il2cpp_codegen_object_new(U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBackHpMoveU3Ed__31__ctor_m498740D78AD9A2A82C9016CCE738BF711794E613(L_0, 0, NULL);
		U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* L_2 = L_1;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		L_2->___index_3 = L_3;
		return L_2;
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
		__this->___backGageHit_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backGageHit_24), (void*)L_0);
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
// System.Void InGameTextViewer/<Count>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__25__ctor_m7823A60CE29EA99924BA378A6385D119A9240C18 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<Count>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__25_System_IDisposable_Dispose_m706089D9B73CF966B8FFAE93232084F492EACA71 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<Count>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountU3Ed__25_MoveNext_mF993E73D7A660C930721405B582565D1EC87C542 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
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
		// float duration = 0.5f; // ?????? ????? ??? ????.
		V_1 = (0.5f);
		// float offset = (_Target - _Current) / duration;
		float L_3 = __this->____Target_2;
		float L_4 = __this->____Current_3;
		float L_5 = V_1;
		__this->___U3CoffsetU3E5__2_5 = ((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/L_5));
		goto IL_007e;
	}

IL_0034:
	{
		// _Current += offset * Time.deltaTime;
		float L_6 = __this->____Current_3;
		float L_7 = __this->___U3CoffsetU3E5__2_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____Current_3 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// _Text.text = ((int)_Current).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->____Text_4;
		float L_10 = __this->____Current_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007e:
	{
		// while (_Current < _Target)
		float L_12 = __this->____Current_3;
		float L_13 = __this->____Target_2;
		if ((((float)L_12) < ((float)L_13)))
		{
			goto IL_0034;
		}
	}
	{
		// _Current = _Target;
		float L_14 = __this->____Target_2;
		__this->____Current_3 = L_14;
		// _Text.text = ((int)_Current).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->____Text_4;
		float L_16 = __this->____Current_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_16);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_17);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<Count>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB7911CD5A98B550E5383BD6EA71A058085688E37 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<Count>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__25_System_Collections_IEnumerator_Reset_mC5D81B345FAB22F491D8E5F6316427A7D73C91EF (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountU3Ed__25_System_Collections_IEnumerator_Reset_mC5D81B345FAB22F491D8E5F6316427A7D73C91EF_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<Count>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__25_System_Collections_IEnumerator_get_Current_mA75B46B95918F85D55E67B5A03EB1FFCCA9624B5 (U3CCountU3Ed__25_t48F314977631E0FD52612617CB8784A5B36E1FFC* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<FadeInOutText>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__26__ctor_m83972387AFA8F70DCB2A690A7447DA0ED86AC303 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__26_System_IDisposable_Dispose_mE6678068AD683B4C45BDDDCF07CB63D872143711 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<FadeInOutText>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInOutTextU3Ed__26_MoveNext_m1A54EAEF1B9E2DCC14BDBC6B44E1EDF1D3C84782 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, const RuntimeMethod* method) 
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___comboCountText_19;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___comboCountText_19;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___comboCountText_19;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_15 = V_1;
		NullCheck(L_15);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = L_15->___comboCountText_19;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = L_20->___comboText_20;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_22 = V_1;
		NullCheck(L_22);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___comboCountText_19;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		float L_25 = L_24.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_26 = V_1;
		NullCheck(L_26);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = L_26->___comboCountText_19;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_27);
		float L_29 = L_28.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_30 = V_1;
		NullCheck(L_30);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = L_30->___comboCountText_19;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = L_35->___comboTextAnimator_23;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = L_38->___comboCountText_19;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_40 = V_1;
		NullCheck(L_40);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = L_40->___comboCountText_19;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		float L_43 = L_42.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_44 = V_1;
		NullCheck(L_44);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = L_44->___comboCountText_19;
		NullCheck(L_45);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_45);
		float L_47 = L_46.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_48 = V_1;
		NullCheck(L_48);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = L_48->___comboCountText_19;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = L_55->___comboText_20;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_57 = V_1;
		NullCheck(L_57);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = L_57->___comboCountText_19;
		NullCheck(L_58);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_58);
		float L_60 = L_59.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_61 = V_1;
		NullCheck(L_61);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = L_61->___comboCountText_19;
		NullCheck(L_62);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_62);
		float L_64 = L_63.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_65 = V_1;
		NullCheck(L_65);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = L_65->___comboCountText_19;
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
// System.Object InGameTextViewer/<FadeInOutText>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m14D31A30379F5DDF989C89EBE4B2A8CDBC196539 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__26_System_Collections_IEnumerator_Reset_mEBA4E2B74C7D5D79E4DD767C6A101123FB954BBC (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInOutTextU3Ed__26_System_Collections_IEnumerator_Reset_mEBA4E2B74C7D5D79E4DD767C6A101123FB954BBC_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<FadeInOutText>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__26_System_Collections_IEnumerator_get_Current_mEA76CD53818B0FE8BAC5D0527376777719EE8622 (U3CFadeInOutTextU3Ed__26_t3F7937D5B7DAD7AC6816827AB86F812B55D7B0FF* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<SliderInit>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__28__ctor_m427D28DC24AAEB7EA5F9D8818CE76A85E9E756FC (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__28_System_IDisposable_Dispose_mDB1402553D3198ADF12DAA4B4B51C15BC7FE5CCE (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<SliderInit>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSliderInitU3Ed__28_MoveNext_m089C66E6481330D9F6C8EBACAD4F573767D68CC7 (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* V_1 = NULL;
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
			goto IL_00e6;
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
		// if (backGageHit[index])
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_11 = V_1;
		NullCheck(L_11);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = L_11->___backGageHit_24;
		int32_t L_13 = __this->___index_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (uint8_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (!L_15)
		{
			goto IL_00d6;
		}
	}
	{
		// sliderShadow.value = Mathf.Lerp(sliderShadow.value, slider.value, Time.deltaTime * 10f);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderShadow_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_17 = __this->___sliderShadow_7;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_17);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___slider_2;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_22;
		L_22 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_18, L_20, ((float)il2cpp_codegen_multiply(L_21, (10.0f))), NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_16, L_22);
		// if(slider.value >= sliderShadow.value - 0.01f)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_23 = __this->___slider_2;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_23);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_25 = __this->___sliderShadow_7;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_25);
		if ((!(((float)L_24) >= ((float)((float)il2cpp_codegen_subtract(L_26, (0.00999999978f)))))))
		{
			goto IL_00d6;
		}
	}
	{
		// backGageHit[index] = false;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_27 = V_1;
		NullCheck(L_27);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = L_27->___backGageHit_24;
		int32_t L_29 = __this->___index_6;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (bool)0);
		// sliderShadow.value = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_30 = __this->___sliderShadow_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_31 = __this->___slider_2;
		NullCheck(L_31);
		float L_32;
		L_32 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_31);
		NullCheck(L_30);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_30, L_32);
	}

IL_00d6:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<SliderInit>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08C91ED0848EAE5790800754619E2568CC6C27E0 (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__28_System_Collections_IEnumerator_Reset_m4543B1C3416FF9745205CCFACD79A4A85F64A0C5 (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSliderInitU3Ed__28_System_Collections_IEnumerator_Reset_m4543B1C3416FF9745205CCFACD79A4A85F64A0C5_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<SliderInit>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__28_System_Collections_IEnumerator_get_Current_m97386531029AE0E4E3FB023DE904826544CFC1F6 (U3CSliderInitU3Ed__28_t674A5AB9AF34183FC374CBA4F234A3AC926D4A42* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<BackHpMove>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__31__ctor_m498740D78AD9A2A82C9016CCE738BF711794E613 (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__31_System_IDisposable_Dispose_m37A4F315D764BC0E9732EEFFD55E1E6F8AB778DA (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<BackHpMove>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBackHpMoveU3Ed__31_MoveNext_m55EE676A8C3459B917979E2B7FE4F4A907D36F77 (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, const RuntimeMethod* method) 
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
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___backGageHit_24;
		int32_t L_7 = __this->___index_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBB83F83D41221E657CBF24C9C24C39EF4A0B0B30 (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__31_System_Collections_IEnumerator_Reset_mFF9CC46AC60DF98EBB1FCADFEAF6166C7A2D48EA (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBackHpMoveU3Ed__31_System_Collections_IEnumerator_Reset_mFF9CC46AC60DF98EBB1FCADFEAF6166C7A2D48EA_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__31_System_Collections_IEnumerator_get_Current_m8F3F3B175C1C130839EB62983E66A7512D38128F (U3CBackHpMoveU3Ed__31_t53AEF643A76DEABB6EA9931F34C75089CB8B5521* __this, const RuntimeMethod* method) 
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
// System.Void MovingCamera::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingCamera_FixedUpdate_mE095F7DEE476BF0E58B26DFA13A27AD26C97AE55 (MovingCamera_tDA3D1483537F2863832FCC058E9EBFB6C2DC1EE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target.gameObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0087;
		}
	}
	{
		// targetPosition = new Vector3(transform.position.x, target.transform.position.y + cameraOffset, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___target_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		float L_10 = __this->___cameraOffset_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_5, ((float)il2cpp_codegen_add(L_9, L_10)), L_13, /*hidden argument*/NULL);
		__this->___targetPosition_6 = L_14;
		// this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, cameraSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___targetPosition_6;
		float L_19 = __this->___cameraSpeed_5;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_21, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void MovingCamera::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingCamera_OnPreCull_m5B0B53F61D4E845C271D772F8357564131A522B7 (MovingCamera_tDA3D1483537F2863832FCC058E9EBFB6C2DC1EE5* __this, const RuntimeMethod* method) 
{
	{
		// void OnPreCull() => GL.Clear(true, true, Color.black);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)1, (bool)1, L_0, NULL);
		return;
	}
}
// System.Void MovingCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingCamera__ctor_m968A4B913C4CBC427045EDC30B199A642645756C (MovingCamera_tDA3D1483537F2863832FCC058E9EBFB6C2DC1EE5* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_21;
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
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_21 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_21), (void*)__this);
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
		// ChangeState(PlayerState.Idle);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 0, NULL);
		// }
		return;
	}
}
// PlayerController PlayerController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_21;
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
		return (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)NULL;
	}

IL_000f:
	{
		// return instance;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_21;
		return L_2;
	}
}
// System.Void PlayerController::ChangeState(PlayerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___0_newState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(playerState.ToString());
		int32_t* L_0 = (&__this->___playerState_4);
		Il2CppFakeBox<int32_t> L_1(PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, L_2, NULL);
		// playerState = newState;
		int32_t L_3 = ___0_newState;
		__this->___playerState_4 = L_3;
		// StartCoroutine(playerState.ToString());
		int32_t* L_4 = (&__this->___playerState_4);
		Il2CppFakeBox<int32_t> L_5(PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// Swipe();
		PlayerController_Swipe_m5E9A77D57557D7F0DA3A31FF77C666A50C4874A4(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Swipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Swipe_m5E9A77D57557D7F0DA3A31FF77C666A50C4874A4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB04AD3B11D41B9BD2660C62E9D39F9655523AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0268;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// touchBeganPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___touchBeganPos_17 = L_3;
	}

IL_0028:
	{
		// if (touch.phase == TouchPhase.Ended)
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0280;
		}
	}
	{
		// touchEndedPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___touchEndedPos_18 = L_5;
		// touchDif = (touchEndedPos - touchBeganPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___touchEndedPos_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___touchBeganPos_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		__this->___touchDif_16 = L_8;
		// if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___touchDif_16);
		float L_10 = L_9->___y_1;
		float L_11;
		L_11 = fabsf(L_10);
		float L_12 = __this->___swipeSensitivity_7;
		if ((((float)L_11) > ((float)L_12)))
		{
			goto IL_008c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___touchDif_16);
		float L_14 = L_13->___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = __this->___swipeSensitivity_7;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_0260;
		}
	}

IL_008c:
	{
		// if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___touchDif_16);
		float L_18 = L_17->___x_0;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___touchDif_16);
		float L_20 = L_19->___y_1;
		float L_21;
		L_21 = fabsf(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___touchDif_16);
		float L_23 = L_22->___x_0;
		float L_24;
		L_24 = fabsf(L_23);
		if ((!(((float)L_21) < ((float)L_24))))
		{
			goto IL_00e2;
		}
	}
	{
		// if (positionIndex >= 2 || isJump || isOverlapped) return;
		int32_t L_25 = __this->___positionIndex_15;
		if ((((int32_t)L_25) >= ((int32_t)2)))
		{
			goto IL_00d9;
		}
	}
	{
		bool L_26 = __this->___isJump_8;
		if (L_26)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_27 = __this->___isOverlapped_12;
		if (!L_27)
		{
			goto IL_00da;
		}
	}

IL_00d9:
	{
		// if (positionIndex >= 2 || isJump || isOverlapped) return;
		return;
	}

IL_00da:
	{
		// ChangeState(PlayerState.SideStepRight);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 2, NULL);
		return;
	}

IL_00e2:
	{
		// else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___touchDif_16);
		float L_29 = L_28->___x_0;
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___touchDif_16);
		float L_31 = L_30->___y_1;
		float L_32;
		L_32 = fabsf(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___touchDif_16);
		float L_34 = L_33->___x_0;
		float L_35;
		L_35 = fabsf(L_34);
		if ((!(((float)L_32) < ((float)L_35))))
		{
			goto IL_0138;
		}
	}
	{
		// if (positionIndex <= 0 || isJump || isOverlapped) return;
		int32_t L_36 = __this->___positionIndex_15;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_012f;
		}
	}
	{
		bool L_37 = __this->___isJump_8;
		if (L_37)
		{
			goto IL_012f;
		}
	}
	{
		bool L_38 = __this->___isOverlapped_12;
		if (!L_38)
		{
			goto IL_0130;
		}
	}

IL_012f:
	{
		// if (positionIndex <= 0 || isJump || isOverlapped) return;
		return;
	}

IL_0130:
	{
		// ChangeState(PlayerState.SideStepLeft);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 1, NULL);
		return;
	}

IL_0138:
	{
		// else if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___touchDif_16);
		float L_40 = L_39->___y_1;
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_0195;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___touchDif_16);
		float L_42 = L_41->___y_1;
		float L_43;
		L_43 = fabsf(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___touchDif_16);
		float L_45 = L_44->___x_0;
		float L_46;
		L_46 = fabsf(L_45);
		if ((!(((float)L_43) > ((float)L_46))))
		{
			goto IL_0195;
		}
	}
	{
		// if (isJump)
		bool L_47 = __this->___isJump_8;
		if (!L_47)
		{
			goto IL_017c;
		}
	}
	{
		// ChangeState(PlayerState.SpecialMove);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 6, NULL);
		return;
	}

IL_017c:
	{
		// if (isSheld || isOverlapped) return;
		bool L_48 = __this->___isSheld_9;
		if (L_48)
		{
			goto IL_018c;
		}
	}
	{
		bool L_49 = __this->___isOverlapped_12;
		if (!L_49)
		{
			goto IL_018d;
		}
	}

IL_018c:
	{
		// if (isSheld || isOverlapped) return;
		return;
	}

IL_018d:
	{
		// ChangeState(PlayerState.Jump);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 3, NULL);
		return;
	}

IL_0195:
	{
		// else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = (&__this->___touchDif_16);
		float L_51 = L_50->___y_1;
		if ((!(((float)L_51) < ((float)(0.0f)))))
		{
			goto IL_0280;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&__this->___touchDif_16);
		float L_53 = L_52->___y_1;
		float L_54;
		L_54 = fabsf(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___touchDif_16);
		float L_56 = L_55->___x_0;
		float L_57;
		L_57 = fabsf(L_56);
		if ((!(((float)L_54) > ((float)L_57))))
		{
			goto IL_0280;
		}
	}
	{
		// if (!isSheld)
		bool L_58 = __this->___isSheld_9;
		if (L_58)
		{
			goto IL_0228;
		}
	}
	{
		// if (PlayerData.Instance.curSheldGage < 33.3f) { return; }
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_59;
		L_59 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_59);
		float L_60 = L_59->___curSheldGage_11;
		if ((!(((float)L_60) < ((float)(33.2999992f)))))
		{
			goto IL_01e9;
		}
	}
	{
		// if (PlayerData.Instance.curSheldGage < 33.3f) { return; }
		return;
	}

IL_01e9:
	{
		// offSheld = false;
		__this->___offSheld_10 = (bool)0;
		// anime.ResetTrigger("onSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_61 = __this->___anime_14;
		NullCheck(L_61);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_61, _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5, NULL);
		// anime.ResetTrigger("offSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_62 = __this->___anime_14;
		NullCheck(L_62);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_62, _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD, NULL);
		// anime.ResetTrigger("parryingSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_63 = __this->___anime_14;
		NullCheck(L_63);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_63, _stringLiteral6CB04AD3B11D41B9BD2660C62E9D39F9655523AB, NULL);
		// ChangeState(PlayerState.Sheld);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 4, NULL);
		return;
	}

IL_0228:
	{
		// offSheld = true;
		__this->___offSheld_10 = (bool)1;
		// anime.ResetTrigger("onSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64 = __this->___anime_14;
		NullCheck(L_64);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_64, _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5, NULL);
		// anime.ResetTrigger("offSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_65 = __this->___anime_14;
		NullCheck(L_65);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_65, _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD, NULL);
		// anime.ResetTrigger("parryingSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_66 = __this->___anime_14;
		NullCheck(L_66);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_66, _stringLiteral6CB04AD3B11D41B9BD2660C62E9D39F9655523AB, NULL);
		return;
	}

IL_0260:
	{
		// ChangeState(PlayerState.Attack);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 5, NULL);
		return;
	}

IL_0268:
	{
		// if (isJump || isSheld) return;
		bool L_67 = __this->___isJump_8;
		if (L_67)
		{
			goto IL_0278;
		}
	}
	{
		bool L_68 = __this->___isSheld_9;
		if (!L_68)
		{
			goto IL_0279;
		}
	}

IL_0278:
	{
		// if (isJump || isSheld) return;
		return;
	}

IL_0279:
	{
		// ChangeState(PlayerState.Idle);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 0, NULL);
	}

IL_0280:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Idle_m9CDA5AABECB1D8FBD80EEF2E08E568AF6D057C5C (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* L_0 = (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD*)il2cpp_codegen_object_new(U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIdleU3Ed__24__ctor_mEB458C370EF336895C1E8297AD4E682F15B78966(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void PlayerController::Moving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Moving_mC09C5C542D7C5AADBF6FB33C44D27DB3DF572D91 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___0_dir, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1725743A5D4703F03EB03384CDE46285BCEC5F43);
		s_Il2CppMethodInitialized = true;
	}
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B2_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_1 = NULL;
	{
		// positionIndex = dir == true ? positionIndex + 1 : positionIndex - 1;
		bool L_0 = ___0_dir;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = __this->___positionIndex_15;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_000e:
	{
		int32_t L_2 = __this->___positionIndex_15;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->___positionIndex_15 = G_B3_0;
		// parentTransform.localScale = (dir == true ? Vector3.one : new Vector3(-1, 1, 1));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___parentTransform_20;
		bool L_4 = ___0_dir;
		G_B4_0 = L_3;
		if (L_4)
		{
			G_B5_0 = L_3;
			goto IL_003a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_003f;
	}

IL_003a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_003f:
	{
		NullCheck(G_B6_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(G_B6_1, G_B6_0, NULL);
		// parentTransform.position = playerPos[positionIndex].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___parentTransform_20;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = __this->___playerPos_5;
		int32_t L_9 = __this->___positionIndex_15;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
		// anime.SetTrigger("doSideStep");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___anime_14;
		NullCheck(L_13);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_13, _stringLiteral1725743A5D4703F03EB03384CDE46285BCEC5F43, NULL);
		// SheldToX();
		PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::SideStepLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SideStepLeft_mA787922BC82D980109EAC2FABD3D0E4A440B8BBB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* L_0 = (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311*)il2cpp_codegen_object_new(U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSideStepLeftU3Ed__26__ctor_mF95A8D726E216C2CAC6257453F5B677512B11311(L_0, 0, NULL);
		U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::SideStepRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SideStepRight_mF886D528E7A878B4D212D4C121601F53E3BBC502 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* L_0 = (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44*)il2cpp_codegen_object_new(U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSideStepRightU3Ed__27__ctor_mF781DD61FF3977FEFD57B77D99B47BB2A3CF5CB4(L_0, 0, NULL);
		U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Jump_mEC2D82C167EA4F8AADFBDAA2BA30C72CD37867CD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* L_0 = (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33*)il2cpp_codegen_object_new(U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpU3Ed__28__ctor_mCB94533BDA6B4FF9432396DD3DADA8EB4E17A501(L_0, 0, NULL);
		U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::Sheld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Sheld_m803CF2812412DF7EF6219B67ECD8F9754E6BB653 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* L_0 = (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60*)il2cpp_codegen_object_new(U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSheldU3Ed__29__ctor_mFD155A18ECD76F934A2B9EB7E637E6FAA5A84CBC(L_0, 0, NULL);
		U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerController::SheldOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SheldOff_m50897A79E50FD37EFF1EC9D32695E664732023E0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0025EFE5785711BC14C46A087D3CFCF0F2AC5CCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textText.text = "SheldOff";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textText_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral0025EFE5785711BC14C46A087D3CFCF0F2AC5CCF);
		// anime.SetTrigger("offSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anime_14;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD, NULL);
		// SheldToX();
		PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Parrying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Parrying_m959AFA65BFB00BA5330EA035FD47857D07BEEA18 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6899C32DD801A13C370077CC2E64D22482DF5A13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA3ED0A463C67F2F504655F521F07412E287C2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textText.text = "Parrying!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textText_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral6899C32DD801A13C370077CC2E64D22482DF5A13);
		// anime.SetTrigger("doParrying");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anime_14;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral7FA3ED0A463C67F2F504655F521F07412E287C2C, NULL);
		// if (isJump)
		bool L_2 = __this->___isJump_8;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// parentRigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___parentRigid_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_4, NULL);
		// parentRigid.AddForce(new Vector2(0f, -20f), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___parentRigid_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), (-20.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_5, L_6, 1, NULL);
	}

IL_0053:
	{
		// SheldToX();
		PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA(__this, NULL);
		// anime.ResetTrigger("offSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___anime_14;
		NullCheck(L_7);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_7, _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Attack_m378CAB792CBCE586670EDD04BF2721F6EC7D9233 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* L_0 = (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801*)il2cpp_codegen_object_new(U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAttackU3Ed__32__ctor_m0D0DC67A379398D24DA2ECD4CDEC2ABF4CD4E637(L_0, 0, NULL);
		U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::SpecialMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_SpecialMove_m7A3E852EA27B549A06F559745A785F8404FA4EE1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* L_0 = (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13*)il2cpp_codegen_object_new(U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpecialMoveU3Ed__33__ctor_m7AA9B269E4DA71771EAD3E294233AC7AF1A4B6A7(L_0, 0, NULL);
		U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerController::SheldToX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// isSheld = false;
		__this->___isSheld_9 = (bool)0;
		// offSheld = false;
		__this->___offSheld_10 = (bool)0;
		// parryingSheld = false;
		__this->___parryingSheld_13 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD06C1C399B03C93D88058CB652A54EF38CF161B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Floor")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// isJump = false;
		__this->___isJump_8 = (bool)0;
		// anime.SetBool("isJump", isJump);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anime_14;
		bool L_5 = __this->___isJump_8;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, L_5, NULL);
		// gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralD06C1C399B03C93D88058CB652A54EF38CF161B1, NULL);
		NullCheck(L_6);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// private float swipeSensitivity = 10;
		__this->___swipeSensitivity_7 = (10.0f);
		// private int positionIndex = 1;
		__this->___positionIndex_15 = 1;
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
// System.Void PlayerController/<Idle>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__24__ctor_mEB458C370EF336895C1E8297AD4E682F15B78966 (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Idle>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__24_System_IDisposable_Dispose_mD69D7B0944523DD1C9FE230DC04E93DA8A82BC3E (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Idle>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIdleU3Ed__24_MoveNext_m89E2B74B8E513457C558A457F62BFA8C44A154FB (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, const RuntimeMethod* method) 
{
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
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Idle>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6998AF90F66DC8791B6F7EF357E7C0843395E92E (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Idle>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__24_System_Collections_IEnumerator_Reset_mD69C8AD0C9639950156E6C3E61526CB6BADAB311 (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIdleU3Ed__24_System_Collections_IEnumerator_Reset_mD69C8AD0C9639950156E6C3E61526CB6BADAB311_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Idle>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__24_System_Collections_IEnumerator_get_Current_m0DB9DE99D2CDAB1CF47734621A192F1662D5AC2F (U3CIdleU3Ed__24_t621BF0EA263E1FD7CE70B2C5A1F87926C8044EDD* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SideStepLeft>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__26__ctor_mF95A8D726E216C2CAC6257453F5B677512B11311 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SideStepLeft>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__26_System_IDisposable_Dispose_m8564F2415208A408E2BCD0995B9BE512142F30EB (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SideStepLeft>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSideStepLeftU3Ed__26_MoveNext_mFB146582F7F3C3E5934C5DF6E99D0691DAD5F0F6 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD83D5466885C7FB0ACD5B2E16D2977200007C304);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// textText.text = "Left Move";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___textText_6;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralD83D5466885C7FB0ACD5B2E16D2977200007C304);
		// Moving(false);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		NullCheck(L_6);
		PlayerController_Moving_mC09C5C542D7C5AADBF6FB33C44D27DB3DF572D91(L_6, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<SideStepLeft>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepLeftU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m81EB9A7FACB0772A67A93A98055DABBEEE9B00F1 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SideStepLeft>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__26_System_Collections_IEnumerator_Reset_mFE6CEE51AB03B25F7E0FC188C0ED5AF3D33DD2F7 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSideStepLeftU3Ed__26_System_Collections_IEnumerator_Reset_mFE6CEE51AB03B25F7E0FC188C0ED5AF3D33DD2F7_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SideStepLeft>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepLeftU3Ed__26_System_Collections_IEnumerator_get_Current_m50C5CE1E7615FC75BC56370DEB9258D8A1F15FC9 (U3CSideStepLeftU3Ed__26_t30DE44E5125D5AD6C7656E3413CC2D3897169311* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SideStepRight>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__27__ctor_mF781DD61FF3977FEFD57B77D99B47BB2A3CF5CB4 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SideStepRight>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__27_System_IDisposable_Dispose_mB76C248216D23066FC668A53CCF01A87EF55B993 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SideStepRight>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSideStepRightU3Ed__27_MoveNext_mC1F1D2A374DCC4EC30E72767E8C3C65F73016178 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0059F042AB28F41575E46BEF2E7EDB6186841DE5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// textText.text = "Right Move";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___textText_6;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteral0059F042AB28F41575E46BEF2E7EDB6186841DE5);
		// Moving(true);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		NullCheck(L_6);
		PlayerController_Moving_mC09C5C542D7C5AADBF6FB33C44D27DB3DF572D91(L_6, (bool)1, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<SideStepRight>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepRightU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m95A70144B107BE9BD8C24A60842584C9739A8BC3 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SideStepRight>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__27_System_Collections_IEnumerator_Reset_mB9E0D0C92D3F7BA7364E05F6E9F494C1DFF5EEE3 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSideStepRightU3Ed__27_System_Collections_IEnumerator_Reset_mB9E0D0C92D3F7BA7364E05F6E9F494C1DFF5EEE3_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SideStepRight>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepRightU3Ed__27_System_Collections_IEnumerator_get_Current_m949AE8BA481ABEC1AD1BDB51D3A81E3A94AC8F34 (U3CSideStepRightU3Ed__27_t2E9382587D1D9472E610082862F990DCF67EEF44* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Jump>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__28__ctor_mCB94533BDA6B4FF9432396DD3DADA8EB4E17A501 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Jump>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__28_System_IDisposable_Dispose_m8E04011C9845DB9404773B897EB19AA60FBE6282 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Jump>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpU3Ed__28_MoveNext_m9C78D26E0169874CB33278410C2BE106E9B78DE2 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0B2234015DA9F01C77E06796EAF19A240140F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isJump = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isJump_8 = (bool)1;
		// textText.text = "JUMP";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___textText_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralC0B2234015DA9F01C77E06796EAF19A240140F3D);
		// anime.SetBool("isJump", isJump);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___anime_14;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___isJump_8;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, L_10, NULL);
		// parentRigid.AddForce(new Vector2(0, 20f), ForceMode2D.Impulse);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		NullCheck(L_11);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = L_11->___parentRigid_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_12, L_13, 1, NULL);
		// gameObject.layer = LayerMask.NameToLayer("Player");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		int32_t L_16;
		L_16 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_15);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_15, L_16, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Jump>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m893C7B59CADDE854591CB4DFBF78AE8A3A8955A3 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Jump>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__28_System_Collections_IEnumerator_Reset_m5C4665B56FDB2D7D6669ED66838246A2A4F83B91 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpU3Ed__28_System_Collections_IEnumerator_Reset_m5C4665B56FDB2D7D6669ED66838246A2A4F83B91_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Jump>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__28_System_Collections_IEnumerator_get_Current_mB2C61E40D2C72872D1CDBE161E649F55BE781EB0 (U3CJumpU3Ed__28_t4047CAAAD1DF5108C93B3BE5B7DD107C839ACA33* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Sheld>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__29__ctor_mFD155A18ECD76F934A2B9EB7E637E6FAA5A84CBC (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Sheld>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__29_System_IDisposable_Dispose_m40DB3FB6EF60017FE351A4B48461812C864453E2 (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Sheld>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSheldU3Ed__29_MoveNext_m98ECEE961F415FEBF40544AB6829116314BA706F (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128FBD60C102FC4524F1CC2E2B0F3C36C9BFAF13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF17FB0E984BCD5541DC82003949DB35E9C2DB5DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00d3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isSheld = !isSheld;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___isSheld_9;
		NullCheck(L_4);
		L_4->___isSheld_9 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		// textText.text = "SheldOn";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___textText_6;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral128FBD60C102FC4524F1CC2E2B0F3C36C9BFAF13);
		// anime.ResetTrigger("offSheld");//???? ???
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___anime_14;
		NullCheck(L_10);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_10, _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD, NULL);
		// anime.SetTrigger("onSheld");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		NullCheck(L_11);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = L_11->___anime_14;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5, NULL);
		// float timer = 0f;
		__this->___U3CtimerU3E5__2_3 = (0.0f);
		// offSheld = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_1;
		NullCheck(L_13);
		L_13->___offSheld_10 = (bool)0;
	}

IL_0072:
	{
		// Debug.Log("While");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF17FB0E984BCD5541DC82003949DB35E9C2DB5DE, NULL);
		// timer += Time.deltaTime;
		float L_14 = __this->___U3CtimerU3E5__2_3;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_3 = ((float)il2cpp_codegen_add(L_14, L_15));
		// if (timer >= 1)
		float L_16 = __this->___U3CtimerU3E5__2_3;
		if ((!(((float)L_16) >= ((float)(1.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// SheldOff();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = V_1;
		NullCheck(L_17);
		PlayerController_SheldOff_m50897A79E50FD37EFF1EC9D32695E664732023E0(L_17, NULL);
		// yield break;
		return (bool)0;
	}

IL_00a3:
	{
		// else if (parryingSheld)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->___parryingSheld_13;
		if (!L_19)
		{
			goto IL_00b3;
		}
	}
	{
		// Parrying();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_20 = V_1;
		NullCheck(L_20);
		PlayerController_Parrying_m959AFA65BFB00BA5330EA035FD47857D07BEEA18(L_20, NULL);
		// yield break;
		return (bool)0;
	}

IL_00b3:
	{
		// else if (offSheld == true)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_21 = V_1;
		NullCheck(L_21);
		bool L_22 = L_21->___offSheld_10;
		if (!L_22)
		{
			goto IL_00c3;
		}
	}
	{
		// SheldOff();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_23 = V_1;
		NullCheck(L_23);
		PlayerController_SheldOff_m50897A79E50FD37EFF1EC9D32695E664732023E0(L_23, NULL);
		// yield break;
		return (bool)0;
	}

IL_00c3:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0072;
	}
}
// System.Object PlayerController/<Sheld>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSheldU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7EE52AE8C7E35DAA49F62F5DF20A3F0D640868E (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Sheld>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__29_System_Collections_IEnumerator_Reset_m61193993FA987450122D65E00F259DCF53C6B501 (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSheldU3Ed__29_System_Collections_IEnumerator_Reset_m61193993FA987450122D65E00F259DCF53C6B501_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Sheld>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSheldU3Ed__29_System_Collections_IEnumerator_get_Current_mA29BDEBDFF2F2537449CF18D5ADD2C2D7363DB21 (U3CSheldU3Ed__29_tF3C4B9633F6B9E70737E730F44D2C3B47E2A7A60* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Attack>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__32__ctor_m0D0DC67A379398D24DA2ECD4CDEC2ABF4CD4E637 (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Attack>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__32_System_IDisposable_Dispose_mA9298104F855C10D4D3A8C0544C7EE69E4E4C09D (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Attack>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__32_MoveNext_m257867C857631FDEEDCD511049CA2D9A04D549B2 (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91904BFC74DCD2F90F9707D8A8BFF27701896BB2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SheldToX();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA(L_4, NULL);
		// textText.text = "Attack";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___textText_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		// anime.SetTrigger("doAttack");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___anime_14;
		NullCheck(L_8);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, _stringLiteral91904BFC74DCD2F90F9707D8A8BFF27701896BB2, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Attack>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA8F56153EB3EFC14FDD8CA2AB8855B23CBA905B8 (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Attack>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__32_System_Collections_IEnumerator_Reset_m8AF235EB4FCB6185F074ABAB89505CF7E14EB74E (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__32_System_Collections_IEnumerator_Reset_m8AF235EB4FCB6185F074ABAB89505CF7E14EB74E_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Attack>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__32_System_Collections_IEnumerator_get_Current_mC8F75F12AEF9D7CFE2E87E63BFB58ED111DF357E (U3CAttackU3Ed__32_t458B7F629C69AE42859BCFC1667339ABB9D3C801* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SpecialMove>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__33__ctor_m7AA9B269E4DA71771EAD3E294233AC7AF1A4B6A7 (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SpecialMove>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__33_System_IDisposable_Dispose_m099E957E9DEDBD4FF69D10B242AF2CA0353CA29B (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SpecialMove>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpecialMoveU3Ed__33_MoveNext_m5954E2EB653422612C1FBBA8408280F1A06F6C2F (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE61A7124EDD346B998C700B57DA1D8AD35F21660);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SheldToX();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = V_1;
		NullCheck(L_4);
		PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA(L_4, NULL);
		// textText.text = "Spetial Move";
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___textText_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralE61A7124EDD346B998C700B57DA1D8AD35F21660);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<SpecialMove>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpecialMoveU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m056B4AD4C29D3B3E1B98241AFB1E74F6A9FEF756 (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SpecialMove>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__33_System_Collections_IEnumerator_Reset_mF862484F261F7A13CAD77CFD46974456F487725B (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpecialMoveU3Ed__33_System_Collections_IEnumerator_Reset_mF862484F261F7A13CAD77CFD46974456F487725B_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SpecialMove>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpecialMoveU3Ed__33_System_Collections_IEnumerator_get_Current_mCF98E839D462972FED1197F715D5ED3332C7384F (U3CSpecialMoveU3Ed__33_t8AEBA8D68CF7AFA13A9B93A9EFA36CA6FA2F4E13* __this, const RuntimeMethod* method) 
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
// System.Void PlayerData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_Awake_m106DC900F20C688FC7D7F5A75EB8E0CE907059C3 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0 = ((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___instance_4;
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
		((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
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
		// curHp = maxHp;
		float L_3 = __this->___maxHp_10;
		__this->___curHp_9 = L_3;
		// curSheldGage = /*maxSheldGage;*/ maxSheldGage;
		float L_4 = __this->___maxSheldGage_12;
		__this->___curSheldGage_11 = L_4;
		// curSpecialMoveGage = 0;
		__this->___curSpecialMoveGage_13 = (0.0f);
		// }
		return;
	}
}
// System.Void PlayerData::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_FixedUpdate_m19CB4A19091702E82192648CAB7EFF668CC183A8 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B3_0 = NULL;
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B4_1 = NULL;
	{
		// if (!PlayerController.Instance.isSheld)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0;
		L_0 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___isSheld_9;
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// curSheldGage = curSheldGage >= maxSheldGage ? maxSheldGage : curSheldGage + 0.5f;
		float L_2 = __this->___curSheldGage_11;
		float L_3 = __this->___maxSheldGage_12;
		G_B2_0 = __this;
		if ((((float)L_2) >= ((float)L_3)))
		{
			G_B3_0 = __this;
			goto IL_0029;
		}
	}
	{
		float L_4 = __this->___curSheldGage_11;
		G_B4_0 = ((float)il2cpp_codegen_add(L_4, (0.5f)));
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_0029:
	{
		float L_5 = __this->___maxSheldGage_12;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->___curSheldGage_11 = G_B4_0;
	}

IL_0034:
	{
		// }
		return;
	}
}
// PlayerData PlayerData::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0 = ((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___instance_4;
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
		return (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A*)NULL;
	}

IL_000f:
	{
		// return instance;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2 = ((PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_StaticFields*)il2cpp_codegen_static_fields_for(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mDD79CC7712EAF325215F97832BFE3403DF47DFA8 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
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
// System.Void PlayerTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTrigger_OnTriggerEnter2D_mDE8B841F16A6F809A7E30BC4EFCF7DE79D126BFE (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E11E5EB6A16E514BD60D299DB55AAF4FBF39A42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Block")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log("OnPlayer");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6E11E5EB6A16E514BD60D299DB55AAF4FBF39A42, NULL);
		// PlayerController.Instance.isOverlapped = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		L_3->___isOverlapped_12 = (bool)1;
		return;
	}

IL_0028:
	{
		// else if (collision.transform.tag == "BlockBullet")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84, NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// StartCoroutine(OnHit(collision.GetComponent<OneToOneHBlock>().dmg));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___0_collision;
		NullCheck(L_8);
		OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* L_9;
		L_9 = Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790(L_8, Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_9)->___dmg_7;
		RuntimeObject* L_11;
		L_11 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, L_10, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
	}

IL_0057:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Block")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// PlayerController.Instance.isOverlapped = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4;
		L_4 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_4);
		L_4->___isOverlapped_12 = (bool)0;
	}

IL_0022:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* L_0 = (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA*)il2cpp_codegen_object_new(U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnHitU3Ed__2__ctor_m6D68B5B5DD58FA7C72A47BF37506CF14ECE3A5E9(L_0, 0, NULL);
		U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* L_1 = L_0;
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
// System.Void PlayerTrigger/<OnHit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2__ctor_m6D68B5B5DD58FA7C72A47BF37506CF14ECE3A5E9 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerTrigger/<OnHit>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2_System_IDisposable_Dispose_mB114CCE15D57AFCD2BF629F9811730D6CF4B6AE6 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerTrigger/<OnHit>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnHitU3Ed__2_MoveNext_m6492F4ACC1DF1E1A85256017C62ED3FF5721B2B0 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, const RuntimeMethod* method) 
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
			goto IL_0066;
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
		L_3->___combo_7 = 0;
		// PlayerData.Instance.curHp -= damage;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5 = L_4;
		NullCheck(L_5);
		float L_6 = L_5->___curHp_9;
		float L_7 = __this->___damage_2;
		NullCheck(L_5);
		L_5->___curHp_9 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.red;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8;
		L_8 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_8, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_9, L_10, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.white;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12;
		L_12 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_12, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_13);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_13, L_14, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerTrigger/<OnHit>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m63CBC9BBEC824D86C91637E239E2FDCBD80083AD (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerTrigger/<OnHit>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_m16521F7C749B0ABD5E2FDD58B10FDB93B38A3126 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_m16521F7C749B0ABD5E2FDD58B10FDB93B38A3126_RuntimeMethod_var)));
	}
}
// System.Object PlayerTrigger/<OnHit>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnHitU3Ed__2_System_Collections_IEnumerator_get_Current_mAA5822151AB88F2FAD024419CD9E4F28843F3C59 (U3COnHitU3Ed__2_t447024804C4BCB1779CB37D4EAA9B935B15395FA* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral379C6ABF04571F6C4267E7B185C52C5B3484C084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Block" || collision.transform.tag == "BlockBullet")
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
			goto IL_002e;
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
		if (!L_7)
		{
			goto IL_0043;
		}
	}

IL_002e:
	{
		// Debug.Log("SheldGetTouched");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral379C6ABF04571F6C4267E7B185C52C5B3484C084, NULL);
		// PlayerController.Instance.parryingSheld = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8;
		L_8 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_8);
		L_8->___parryingSheld_13 = (bool)1;
	}

IL_0043:
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
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
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// SoundManager SoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
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
		return (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734*)NULL;
	}

IL_000f:
	{
		// return instance;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
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
// System.Void SpawnManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Awake_mFDED3E1AD4ACAC301FC5A529CF5AF24A9A92B1C1 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_0 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_7), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// StartCoroutine(SpawnEnemies(0.5f));
		RuntimeObject* L_4;
		L_4 = SpawnManager_SpawnEnemies_m77D51C873F2AEAB363997AD779A8DC184E7F12D7(__this, (0.5f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// SpawnManager SpawnManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* SpawnManager_get_Instance_m0BC3E4B00F6D984E7581AC75DE0E32B25EDE5FDD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_0 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_7;
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
		return (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC*)NULL;
	}

IL_000f:
	{
		// return instance;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_2 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_7;
		return L_2;
	}
}
// System.Void SpawnManager::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Spawn_m7EECD94AA36394B11891AA73D913D74D0ED61F4F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(enemies[0], spawnPoints[0].position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___enemies_5;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___spawnPoints_4;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Instantiate(enemies[1], spawnPoints[1].position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___enemies_5;
		NullCheck(L_9);
		int32_t L_10 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___spawnPoints_4;
		NullCheck(L_12);
		int32_t L_13 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Instantiate(enemies[2], spawnPoints[2].position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___enemies_5;
		NullCheck(L_18);
		int32_t L_19 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___spawnPoints_4;
		NullCheck(L_21);
		int32_t L_22 = 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_24, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnManager::SpawnEnemies(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_SpawnEnemies_m77D51C873F2AEAB363997AD779A8DC184E7F12D7 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, float ___0_timer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* L_0 = (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8*)il2cpp_codegen_object_new(U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnEnemiesU3Ed__8__ctor_mA0FAB291F9214A1B10EEC7480F1D335E3D04FD37(L_0, 0, NULL);
		U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* L_2 = L_1;
		float L_3 = ___0_timer;
		NullCheck(L_2);
		L_2->___timer_3 = L_3;
		return L_2;
	}
}
// System.Void SpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager__ctor_m8DD503A0FFE79FA38CF0B7F013E54D24A04D166A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
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
// System.Void SpawnManager/<SpawnEnemies>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemiesU3Ed__8__ctor_mA0FAB291F9214A1B10EEC7480F1D335E3D04FD37 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnManager/<SpawnEnemies>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemiesU3Ed__8_System_IDisposable_Dispose_m42ABACB3A1CE7D513A7FA64465E9697A037AFB12 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<SpawnEnemies>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemiesU3Ed__8_MoveNext_m4245B772BBA7C4A9B5167F9C887BF538E9FB1536 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// Spawn();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_4 = V_1;
		NullCheck(L_4);
		SpawnManager_Spawn_m7EECD94AA36394B11891AA73D913D74D0ED61F4F(L_4, NULL);
		// yield return new WaitForSeconds(timer);
		float L_5 = __this->___timer_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_001e;
	}
}
// System.Object SpawnManager/<SpawnEnemies>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemiesU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m31F77895A3A2FD52D354219ED65831FDA7371A1B (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnManager/<SpawnEnemies>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemiesU3Ed__8_System_Collections_IEnumerator_Reset_m3EC22DFF23C3DC4980FD149B34851E4B4B0FDA66 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemiesU3Ed__8_System_Collections_IEnumerator_Reset_m3EC22DFF23C3DC4980FD149B34851E4B4B0FDA66_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<SpawnEnemies>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemiesU3Ed__8_System_Collections_IEnumerator_get_Current_m889DB73BBB1B038CA16BF3FB24DD6D01915FB287 (U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8* __this, const RuntimeMethod* method) 
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
// System.Void WeaponTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponTrigger_OnTriggerEnter2D_m9D5CBC92A9B599BE30288113DEFB6A28BF2CB0C9 (WeaponTrigger_t5D41CCD0ADA9554CD2AACA4A04483590AB6E5B9D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B4_0 = NULL;
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* G_B5_1 = NULL;
	{
		// if (collision.tag == "Block" || collision.tag == "BlockBullet")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84, NULL);
		if (!L_5)
		{
			goto IL_009d;
		}
	}

IL_0024:
	{
		// GameManager.Instance.combo += 1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6;
		L_6 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->___combo_7;
		NullCheck(L_7);
		L_7->___combo_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// PlayerData.Instance.curSpecialMoveGage = PlayerData.Instance.curSpecialMoveGage >= PlayerData.Instance.maxSpecialMoveGage ? PlayerData.Instance.maxSpecialMoveGage : PlayerData.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_9;
		L_9 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_10;
		L_10 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_10);
		float L_11 = L_10->___curSpecialMoveGage_13;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_12;
		L_12 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_12);
		float L_13 = L_12->___maxSpecialMoveGage_14;
		G_B3_0 = L_9;
		if ((((float)L_11) >= ((float)L_13)))
		{
			G_B4_0 = L_9;
			goto IL_0077;
		}
	}
	{
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_14;
		L_14 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_14);
		float L_15 = L_14->___curSpecialMoveGage_13;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16;
		L_16 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_16);
		int32_t L_17 = L_16->___combo_7;
		int32_t L_18;
		L_18 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_17, 0, ((int32_t)50), NULL);
		G_B5_0 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply((0.100000001f), ((float)L_18)))));
		G_B5_1 = G_B3_0;
		goto IL_0081;
	}

IL_0077:
	{
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_19;
		L_19 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		NullCheck(L_19);
		float L_20 = L_19->___maxSpecialMoveGage_14;
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0081:
	{
		NullCheck(G_B5_1);
		G_B5_1->___curSpecialMoveGage_13 = G_B5_0;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(InGameTextViewer.Instance.FadeInOutText());
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_21;
		L_21 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InGameTextViewer_FadeInOutText_m792F43A7D9AB9CAB77416AA0A33ADCB95678CE90(L_21, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
	}

IL_009d:
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
