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
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
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
// AssembleTip
struct AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851;
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
// EffectManager
struct EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
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
// InGameTextViewer/<BackHpMove>d__38
struct U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4;
// InGameTextViewer/<Count>d__32
struct U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3;
// InGameTextViewer/<FadeInOutText>d__33
struct U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB;
// InGameTextViewer/<SliderInit>d__35
struct U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerController/<Attack>d__31
struct U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E;
// PlayerController/<Idle>d__22
struct U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE;
// PlayerController/<Jump>d__26
struct U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6;
// PlayerController/<Sheld>d__28
struct U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3;
// PlayerController/<SideStepLeft>d__24
struct U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375;
// PlayerController/<SideStepRight>d__25
struct U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3;
// PlayerController/<SpecialMove>d__32
struct U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A;
// PlayerTrigger/<OnHit>d__6
struct U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpawnManager/<SpawnEnemies>d__8
struct U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerState_t8CFE11F620A9C5D1AA5D165BF2045B5A8284CFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COndamageTextHUDU3Ed__4_tD2ECF0190274AD6801B1940D56619722F3B3CA73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemiesU3Ed__8_t4C77B76335ABCF5EFB140F89F0FC358B8445A8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B10CE92F0BB26735E806ACCA27751E9CF0A7859C9D0FCDBD4011C0C5E60C8C9_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0025EFE5785711BC14C46A087D3CFCF0F2AC5CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral0059F042AB28F41575E46BEF2E7EDB6186841DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
IL2CPP_EXTERN_C String_t* _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5;
IL2CPP_EXTERN_C String_t* _stringLiteral128FBD60C102FC4524F1CC2E2B0F3C36C9BFAF13;
IL2CPP_EXTERN_C String_t* _stringLiteral1725743A5D4703F03EB03384CDE46285BCEC5F43;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF4040A74BAC6B4B4262221B46CE48440E72254;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E;
IL2CPP_EXTERN_C String_t* _stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral6899C32DD801A13C370077CC2E64D22482DF5A13;
IL2CPP_EXTERN_C String_t* _stringLiteral7C87C6BD2EEF5465D17899D0B16CCC43594E97DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA3ED0A463C67F2F504655F521F07412E287C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral91904BFC74DCD2F90F9707D8A8BFF27701896BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C;
IL2CPP_EXTERN_C String_t* _stringLiteralC0B2234015DA9F01C77E06796EAF19A240140F3D;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD06C1C399B03C93D88058CB652A54EF38CF161B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D;
IL2CPP_EXTERN_C String_t* _stringLiteralD83D5466885C7FB0ACD5B2E16D2977200007C304;
IL2CPP_EXTERN_C String_t* _stringLiteralE61A7124EDD346B998C700B57DA1D8AD35F21660;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76_m55F6F09CBB88C1618A52696F2CCA3ACBA743502F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__31_System_Collections_IEnumerator_Reset_m0320BB5545AC944FF5AD85F107B462EC3174B269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBackHpMoveU3Ed__38_System_Collections_IEnumerator_Reset_mA8C587630D515DA3F1E36AA74D38842B5538C8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountU3Ed__32_System_Collections_IEnumerator_Reset_mB1B52B5294A4E1BEDC50779A40E83E4CE831C82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInOutTextU3Ed__33_System_Collections_IEnumerator_Reset_m7F2C57938F8B925922DF1EAD84391B7B3983CDDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIdleU3Ed__22_System_Collections_IEnumerator_Reset_m9F20B15D35AAD01867933F77A003AC0EF2CAE345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpU3Ed__26_System_Collections_IEnumerator_Reset_mE61C225B9693B856417D7938CEEAF1B27C7616DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnHitU3Ed__2_System_Collections_IEnumerator_Reset_mC8EFB4BBEF816ACC9501C4A67F2B65D0E5E29741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnHitU3Ed__6_System_Collections_IEnumerator_Reset_mBD6036D5A505C16C972DD8E7AFCDA00EBDE31FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COndamageTextHUDU3Ed__4_System_Collections_IEnumerator_Reset_m497D09CBC2C0069474031E2ED1B00D010FE70DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSheldU3Ed__28_System_Collections_IEnumerator_Reset_mBFF5066A2332BFDA2A45A2EEC81586BAAA1EB3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSideStepLeftU3Ed__24_System_Collections_IEnumerator_Reset_mA793222C3FDDBF80715AE7E0C595CB155D038F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSideStepRightU3Ed__25_System_Collections_IEnumerator_Reset_m68430856FB47E32303DF08051CCAA12A004F647D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSliderInitU3Ed__35_System_Collections_IEnumerator_Reset_mFFDEFFD21EDB9C40A884732C90C1253949441F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemiesU3Ed__8_System_Collections_IEnumerator_Reset_m3EC22DFF23C3DC4980FD149B34851E4B4B0FDA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpecialMoveU3Ed__32_System_Collections_IEnumerator_Reset_m7FC18F6C3EBD3084347BB8CB3642347FFED5E331_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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

// InGameTextViewer/<BackHpMove>d__38
struct U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<BackHpMove>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<BackHpMove>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<BackHpMove>d__38::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Int32 InGameTextViewer/<BackHpMove>d__38::index
	int32_t ___index_3;
};

// InGameTextViewer/<Count>d__32
struct U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<Count>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<Count>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single InGameTextViewer/<Count>d__32::_Target
	float ____Target_2;
	// System.Single InGameTextViewer/<Count>d__32::_Current
	float ____Current_3;
	// TMPro.TextMeshProUGUI InGameTextViewer/<Count>d__32::_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____Text_4;
	// System.Single InGameTextViewer/<Count>d__32::<offset>5__2
	float ___U3CoffsetU3E5__2_5;
};

// InGameTextViewer/<FadeInOutText>d__33
struct U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<FadeInOutText>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<FadeInOutText>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InGameTextViewer InGameTextViewer/<FadeInOutText>d__33::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_2;
	// System.Single InGameTextViewer/<FadeInOutText>d__33::<curPos>5__2
	float ___U3CcurPosU3E5__2_3;
	// System.Single InGameTextViewer/<FadeInOutText>d__33::<maxPos>5__3
	float ___U3CmaxPosU3E5__3_4;
	// System.Single InGameTextViewer/<FadeInOutText>d__33::<percent>5__4
	float ___U3CpercentU3E5__4_5;
};

// InGameTextViewer/<SliderInit>d__35
struct U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51  : public RuntimeObject
{
	// System.Int32 InGameTextViewer/<SliderInit>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InGameTextViewer/<SliderInit>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__35::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_2;
	// System.Single InGameTextViewer/<SliderInit>d__35::curValue
	float ___curValue_3;
	// System.Single InGameTextViewer/<SliderInit>d__35::maxValue
	float ___maxValue_4;
	// InGameTextViewer InGameTextViewer/<SliderInit>d__35::<>4__this
	InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* ___U3CU3E4__this_5;
	// System.Int32 InGameTextViewer/<SliderInit>d__35::index
	int32_t ___index_6;
	// UnityEngine.UI.Slider InGameTextViewer/<SliderInit>d__35::sliderShadow
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderShadow_7;
};

// PlayerController/<Attack>d__31
struct U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E  : public RuntimeObject
{
	// System.Int32 PlayerController/<Attack>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Attack>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Attack>d__31::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Idle>d__22
struct U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE  : public RuntimeObject
{
	// System.Int32 PlayerController/<Idle>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Idle>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// PlayerController/<Jump>d__26
struct U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6  : public RuntimeObject
{
	// System.Int32 PlayerController/<Jump>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Jump>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Jump>d__26::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<Sheld>d__28
struct U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3  : public RuntimeObject
{
	// System.Int32 PlayerController/<Sheld>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Sheld>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Sheld>d__28::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SideStepLeft>d__24
struct U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375  : public RuntimeObject
{
	// System.Int32 PlayerController/<SideStepLeft>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SideStepLeft>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SideStepLeft>d__24::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SideStepRight>d__25
struct U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3  : public RuntimeObject
{
	// System.Int32 PlayerController/<SideStepRight>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SideStepRight>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SideStepRight>d__25::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
};

// PlayerController/<SpecialMove>d__32
struct U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A  : public RuntimeObject
{
	// System.Int32 PlayerController/<SpecialMove>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<SpecialMove>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<SpecialMove>d__32::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// AssembleTip
struct AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D AssembleTip::curBlockRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___curBlockRigid_4;
	// System.Single AssembleTip::curMass
	float ___curMass_5;
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

// EffectManager
struct EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EffectManager::Effects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Effects_5;
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
	// UnityEngine.Rigidbody2D Enemy::parentRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___parentRigid_9;
	// UnityEngine.GameObject Enemy::parentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentGameObject_10;
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
	// UnityEngine.UI.Image InGameTextViewer::enemyImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___enemyImage_16;
	// UnityEngine.Sprite InGameTextViewer::monsterBossImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterBossImage_17;
	// UnityEngine.Sprite InGameTextViewer::monsterEliteImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterEliteImage_18;
	// UnityEngine.Sprite InGameTextViewer::monsterImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___monsterImage_19;
	// UnityEngine.Sprite InGameTextViewer::block1X1Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X1Image_20;
	// UnityEngine.Sprite InGameTextViewer::block1X2Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X2Image_21;
	// UnityEngine.Sprite InGameTextViewer::block1X3Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___block1X3Image_22;
	// System.Single InGameTextViewer::curEnemyHp
	float ___curEnemyHp_23;
	// System.Single InGameTextViewer::maxEnemyHp
	float ___maxEnemyHp_24;
	// System.Boolean InGameTextViewer::enemyGageShown
	bool ___enemyGageShown_25;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboCountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboCountText_26;
	// TMPro.TextMeshProUGUI InGameTextViewer::comboText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboText_27;
	// UnityEngine.Transform InGameTextViewer::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_28;
	// UnityEngine.GameObject InGameTextViewer::comboTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___comboTextPrefab_29;
	// UnityEngine.Animator InGameTextViewer::comboTextAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___comboTextAnimator_30;
	// System.Boolean[] InGameTextViewer::backGageHit
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___backGageHit_31;
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
	// System.Boolean PlayerController::isOverlapped
	bool ___isOverlapped_10;
	// System.Boolean PlayerController::parryingSheld
	bool ___parryingSheld_11;
	// UnityEngine.Animator PlayerController::anime
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anime_12;
	// System.Int32 PlayerController::positionIndex
	int32_t ___positionIndex_13;
	// UnityEngine.Vector2 PlayerController::touchDif
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchDif_14;
	// UnityEngine.Vector2 PlayerController::touchBeganPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchBeganPos_15;
	// UnityEngine.Vector2 PlayerController::touchEndedPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchEndedPos_16;
	// UnityEngine.Rigidbody2D PlayerController::parentRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___parentRigid_17;
	// UnityEngine.Transform PlayerController::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_18;
	// System.Single PlayerController::timer
	float ___timer_20;
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
	int32_t ___mass_11;
	// System.Int32 Block::gravity
	int32_t ___gravity_12;
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
	// System.Boolean OneToOneBlock::isOverlappedPlayer
	bool ___isOverlappedPlayer_13;
	// System.Boolean OneToOneBlock::isCrushedPlayer
	bool ___isCrushedPlayer_14;
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

// InGameTextViewer/<BackHpMove>d__38

// InGameTextViewer/<BackHpMove>d__38

// InGameTextViewer/<Count>d__32

// InGameTextViewer/<Count>d__32

// InGameTextViewer/<FadeInOutText>d__33

// InGameTextViewer/<FadeInOutText>d__33

// InGameTextViewer/<SliderInit>d__35

// InGameTextViewer/<SliderInit>d__35

// PlayerController/<Attack>d__31

// PlayerController/<Attack>d__31

// PlayerController/<Idle>d__22

// PlayerController/<Idle>d__22

// PlayerController/<Jump>d__26

// PlayerController/<Jump>d__26

// PlayerController/<Sheld>d__28

// PlayerController/<Sheld>d__28

// PlayerController/<SideStepLeft>d__24

// PlayerController/<SideStepLeft>d__24

// PlayerController/<SideStepRight>d__25

// PlayerController/<SideStepRight>d__25

// PlayerController/<SpecialMove>d__32

// PlayerController/<SpecialMove>d__32

// PlayerTrigger/<OnHit>d__6

// PlayerTrigger/<OnHit>d__6

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

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
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B10CE92F0BB26735E806ACCA27751E9CF0A7859C9D0FCDBD4011C0C5E60C8C9
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___5B10CE92F0BB26735E806ACCA27751E9CF0A7859C9D0FCDBD4011C0C5E60C8C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_1;
};

// <PrivateImplementationDetails>

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

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

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

// UnityEngine.Sprite

// UnityEngine.Sprite

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

// AssembleTip

// AssembleTip

// DamageText

// DamageText

// DataManager
struct DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275_StaticFields
{
	// DataManager DataManager::instance
	DataManager_tE86238CF20D1A233E0ADDA21C619896E5F278275* ___instance_4;
};

// DataManager

// EffectManager
struct EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields
{
	// EffectManager EffectManager::instance
	EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* ___instance_4;
};

// EffectManager

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
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___instance_19;
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
struct PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0_StaticFields
{
	// PlayerTrigger PlayerTrigger::instance
	PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* ___instance_4;
};

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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.GameObject EffectManager::intToEffectType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EffectManager_intToEffectType_mB487E84CE82C14BD5253648988E8CC8CEDCF8357 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, int32_t ___0_num, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody2D::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_mass_mC8854F0E26585A11D4420B9F5570AB4E75192AE1 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_mass_mC2E292A62264D605120FC65C713BB35503CE35B1 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_value, const RuntimeMethod* method) ;
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
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
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
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Block/<OnHit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__2__ctor_m8084CCFB757812D5794DD6C08A45AB6465702BF5 (U3COnHitU3Ed__2_t933A5CCEC215CEBA1F4C0922A988469F7F20F484* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// InGameTextViewer InGameTextViewer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516 (const RuntimeMethod* method) ;
// EffectManager EffectManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* EffectManager_get_Instance_m526CEBF6FD3213C141E5B8CF7C49F665379BA7C8 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void EffectManager::SpawnEffect(System.Int32[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_SpawnEffect_m2FC0F2E011EE75854775C408922F9DF4CE44B0D5 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_goNums, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_spawnPos, const RuntimeMethod* method) ;
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Boolean Block::CriticalCheck(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Block_CriticalCheck_m5EF8ADCD520EFBAD10CB6C7CD6D0737F97227D8D (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, float ___1_percent, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void InGameTextViewer::SetEnemyImage(System.Boolean,System.Single,System.Single,EnemyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameTextViewer_SetEnemyImage_m35B324B45ED9D36AFBABF4C764D41AAC67F1F0E1 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, bool ___0_Shown, float ___1_curHP, float ___2_maxHP, int32_t ___3_enemeyType, const RuntimeMethod* method) ;
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
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// PlayerController PlayerController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966 (const RuntimeMethod* method) ;
// PlayerTrigger PlayerTrigger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* PlayerTrigger_get_Instance_m78615663D3AF31C726C21C728539B7A0C8780A70 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerTrigger::OnHit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5 (PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* __this, float ___0_damage, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Block::OnHit(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9 (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, int32_t ___0_damage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_onHitPosition, const RuntimeMethod* method) ;
// System.Void Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m03C82E6CA5BC9C7A8ED4E801FA7DBADE4B01CBDF (Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* __this, const RuntimeMethod* method) ;
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
// System.Void InGameTextViewer/<Count>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__32__ctor_m10FF1EE67122CACD4D2867DF4B95B804359430E1 (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<FadeInOutText>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__33__ctor_m5407E5F2EA8E4A35F2C651DF69DA8B50BB1AC999 (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
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
// System.Void InGameTextViewer/<SliderInit>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__35__ctor_mFAB792F4D911F316F05D0128AF9E14090E4AFBA9 (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InGameTextViewer::BackHpMove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InGameTextViewer_BackHpMove_m5FF8E27D74D644F3CBF77AD6B141FE7A60874ED0 (InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void InGameTextViewer/<BackHpMove>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__38__ctor_mF4804151EE380987D1E9B21CA1953FF4CA1267D5 (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
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
// System.Void PlayerController/<Idle>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__22__ctor_m9CC976EDA50D783B8EAA878EFFCC13F1EEF15A89 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerController::SheldToX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SheldToX_m1A6A391EC5E8B9B2F9F0F1EAE4300637FFE49BBA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController/<SideStepLeft>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__24__ctor_m177068B08288EBA447BB5D1276B842AEFBAAE94B (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<SideStepRight>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__25__ctor_m0644162483FF23AC10E6AAB91A86ABE31C3EC9EA (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Jump>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__26__ctor_mFF9069879F6EC1FCAA9110FD8E56B232A566BA38 (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Sheld>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__28__ctor_mD4F30051696DBF9460C0C6FC847BBF823AB5AA65 (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<Attack>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__31__ctor_mE06CF6E649752DAFC1E92B6A0D2531F97A6AFD1B (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PlayerController/<SpecialMove>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__32__ctor_m17C153702E47F7964B564CA8B20825A51C9E5AC3 (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
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
// System.Void PlayerTrigger/<OnHit>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHitU3Ed__6__ctor_m8B6ACCD95242744CE059DF6BCC6DA28263012F4F (U3COnHitU3Ed__6_tDE463699EDAFE4253FDABC37974FAD8C07BF5368* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnManager::SpawnEnemies(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_SpawnEnemies_m77D51C873F2AEAB363997AD779A8DC184E7F12D7 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, float ___0_timer, const RuntimeMethod* method) ;
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
// System.Void EffectManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_Awake_m11061642972011CF348CB8196451C00B3C9E76BD (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_0 = ((EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields*)il2cpp_codegen_static_fields_for(EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var))->___instance_4;
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
		((EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields*)il2cpp_codegen_static_fields_for(EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields*)il2cpp_codegen_static_fields_for(EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
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
// EffectManager EffectManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* EffectManager_get_Instance_m526CEBF6FD3213C141E5B8CF7C49F665379BA7C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_0 = ((EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields*)il2cpp_codegen_static_fields_for(EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var))->___instance_4;
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
		return (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C*)NULL;
	}

IL_000f:
	{
		// return instance;
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_2 = ((EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_StaticFields*)il2cpp_codegen_static_fields_for(EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void EffectManager::SpawnEffect(System.Int32[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectManager_SpawnEffect_m2FC0F2E011EE75854775C408922F9DF4CE44B0D5 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_goNums, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_spawnPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// foreach (int num in goNums)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_goNums;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0046;
	}

IL_0006:
	{
		// foreach (int num in goNums)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// effectObject = intToEffectType(num);
		int32_t L_5 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = EffectManager_intToEffectType_mB487E84CE82C14BD5253648988E8CC8CEDCF8357(__this, L_5, NULL);
		V_0 = L_6;
		// if (effectObject == null) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_001c;
		}
	}
	{
		// if (effectObject == null) return;
		return;
	}

IL_001c:
	{
		// GameObject clone = Instantiate(effectObject, spawnPos, Quaternion.identity, gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___1_spawnPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_9, L_11, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// Destroy(clone, 2f);//Effect Ending ????? ????
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_15, (2.0f), NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0046:
	{
		// foreach (int num in goNums)
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject EffectManager::intToEffectType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EffectManager_intToEffectType_mB487E84CE82C14BD5253648988E8CC8CEDCF8357 (EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* __this, int32_t ___0_num, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_num;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_005e;
			}
			case 4:
			{
				goto IL_0067;
			}
			case 5:
			{
				goto IL_0070;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_0082;
			}
			case 8:
			{
				goto IL_008b;
			}
			case 9:
			{
				goto IL_0094;
			}
			case 10:
			{
				goto IL_009e;
			}
			case 11:
			{
				goto IL_00a8;
			}
			case 12:
			{
				goto IL_00b2;
			}
			case 13:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00c6;
	}

IL_0043:
	{
		// return Effects[0];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___Effects_5;
		NullCheck(L_1);
		int32_t L_2 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}

IL_004c:
	{
		// return Effects[1];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___Effects_5;
		NullCheck(L_4);
		int32_t L_5 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_0055:
	{
		// return Effects[2];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___Effects_5;
		NullCheck(L_7);
		int32_t L_8 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_005e:
	{
		// return Effects[3];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___Effects_5;
		NullCheck(L_10);
		int32_t L_11 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0067:
	{
		// return Effects[4];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___Effects_5;
		NullCheck(L_13);
		int32_t L_14 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return L_15;
	}

IL_0070:
	{
		// return Effects[5];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___Effects_5;
		NullCheck(L_16);
		int32_t L_17 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return L_18;
	}

IL_0079:
	{
		// return Effects[6];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___Effects_5;
		NullCheck(L_19);
		int32_t L_20 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return L_21;
	}

IL_0082:
	{
		// return Effects[7];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___Effects_5;
		NullCheck(L_22);
		int32_t L_23 = 7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		return L_24;
	}

IL_008b:
	{
		// return Effects[8];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___Effects_5;
		NullCheck(L_25);
		int32_t L_26 = 8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		return L_27;
	}

IL_0094:
	{
		// return Effects[9];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___Effects_5;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		return L_30;
	}

IL_009e:
	{
		// return Effects[10];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___Effects_5;
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		return L_33;
	}

IL_00a8:
	{
		// return Effects[11];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___Effects_5;
		NullCheck(L_34);
		int32_t L_35 = ((int32_t)11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		return L_36;
	}

IL_00b2:
	{
		// return Effects[12];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37 = __this->___Effects_5;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		return L_39;
	}

IL_00bc:
	{
		// return Effects[13];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___Effects_5;
		NullCheck(L_40);
		int32_t L_41 = ((int32_t)13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		return L_42;
	}

IL_00c6:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
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
// System.Void AssembleTip::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssembleTip_Awake_m98065E3DFE2346D5A355A5ED727E9F76A1D1B9A3 (AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// curMass = curMass = curBlockRigid.mass;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___curBlockRigid_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Rigidbody2D_get_mass_mC8854F0E26585A11D4420B9F5570AB4E75192AE1(L_0, NULL);
		float L_2 = L_1;
		V_0 = L_2;
		__this->___curMass_5 = L_2;
		float L_3 = V_0;
		__this->___curMass_5 = L_3;
		// }
		return;
	}
}
// System.Void AssembleTip::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssembleTip_OnTriggerEnter2D_m68718FE8EA6C3AA972B5B0C0FAAB170113E4192B (AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
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
			goto IL_0032;
		}
	}
	{
		// curBlockRigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___curBlockRigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_4, NULL);
		// curBlockRigid.mass = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___curBlockRigid_4;
		NullCheck(L_5);
		Rigidbody2D_set_mass_mC2E292A62264D605120FC65C713BB35503CE35B1(L_5, (0.0f), NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void AssembleTip::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssembleTip_OnTriggerStay2D_mE41B75DBE9182C4293E787E07BEF3FB30E1FA40E (AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AssembleTip::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssembleTip_OnTriggerExit2D_m5CFCECD3E8875A59F14495B913A42A45955F4878 (AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9A4DA33EB1F3E2359896E044A79CF7F316645E);
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
			goto IL_0023;
		}
	}
	{
		// curBlockRigid.mass = curMass;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___curBlockRigid_4;
		float L_4 = __this->___curMass_5;
		NullCheck(L_3);
		Rigidbody2D_set_mass_mC2E292A62264D605120FC65C713BB35503CE35B1(L_3, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AssembleTip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssembleTip__ctor_m011F37F1E1A13D02FB1A9CCFDDC661792174D916 (AssembleTip_t5B202A6D0E6F03B79E2BD549CE095F79AC728851* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InGameTextViewer.Instance.enemyGageShown = false;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_0;
		L_0 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		NullCheck(L_0);
		L_0->___enemyGageShown_25 = (bool)0;
		// EffectManager.Instance.SpawnEffect(new int[]{ 0, 1, 2, 3, 4, 5, 6 }, transform.position);
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_1;
		L_1 = EffectManager_get_Instance_m526CEBF6FD3213C141E5B8CF7C49F665379BA7C8(NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E1A613AA4B331588D97B5FEEF1FAABE8E8138D8C488EE9122B8533BFDDA3C189_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		NullCheck(L_1);
		EffectManager_SpawnEffect_m2FC0F2E011EE75854775C408922F9DF4CE44B0D5(L_1, L_3, L_7, NULL);
		// Destroy(parentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentGameObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
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
			goto IL_00f3;
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
		float L_13 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_12)->___curHp_6;
		int32_t L_14 = __this->___damage_3;
		NullCheck(L_11);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_11)->___curHp_6 = ((float)il2cpp_codegen_subtract(L_13, ((float)L_14)));
		// InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_15;
		L_15 = InGameTextViewer_get_Instance_m13773DD7578086691E18E8133AB2FA9C5AD84516(NULL);
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_16)->___curHp_6;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_18)->___maxHp_7;
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_20)->___enemyType_4;
		NullCheck(L_15);
		InGameTextViewer_SetEnemyImage_m35B324B45ED9D36AFBABF4C764D41AAC67F1F0E1(L_15, (bool)1, L_17, L_19, L_21, NULL);
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
			goto IL_00a0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B8_0 = L_26;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00a5;
	}

IL_00a0:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B8_0 = L_27;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00a5:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___onHitPosition_4;
		NullCheck(G_B8_2);
		InGameTextViewer_SpawnHUDText_mED11B08E283BC97CCFC37F97168EE5C61B639141(G_B8_2, G_B8_1, G_B8_0, L_28, NULL);
		// if (curHp <= 0)
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_29)->___curHp_6;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// OnDead();
		Block_t93F87C2AAA9348AD5D7F39D890FD6B6B23AD26E7* L_31 = V_1;
		NullCheck(L_31);
		Block_OnDead_mB0CD193E61630421C4AAA740496CA86C41B1B9D0(L_31, NULL);
		goto IL_010f;
	}

IL_00c5:
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

IL_00f3:
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

IL_010f:
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
		__this->___parentGameObject_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentGameObject_10), (void*)L_3);
		// curHp = maxHp;
		float L_4 = __this->___maxHp_7;
		__this->___curHp_6 = L_4;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B10CE92F0BB26735E806ACCA27751E9CF0A7859C9D0FCDBD4011C0C5E60C8C9_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D);
		s_Il2CppMethodInitialized = true;
	}
	float G_B10_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B10_1 = NULL;
	float G_B9_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	float G_B11_1 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B11_2 = NULL;
	float G_B15_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B15_1 = NULL;
	float G_B14_0 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	float G_B16_1 = 0.0f;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B16_2 = NULL;
	{
		// if (collision.tag == "PlayerTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// isOverlappedPlayer = true;
		__this->___isOverlappedPlayer_13 = (bool)1;
		// PlayerController.Instance.isOverlapped = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		L_3->___isOverlapped_10 = (bool)1;
		return;
	}

IL_0025:
	{
		// else if(collision.tag == "Floor")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_6)
		{
			goto IL_00a6;
		}
	}
	{
		// if (!isOverlappedPlayer)
		bool L_7 = __this->___isOverlappedPlayer_13;
		if (L_7)
		{
			goto IL_0076;
		}
	}
	{
		// EffectManager.Instance.SpawnEffect(new int[] { 11, 12, 13 }, transform.position);
		EffectManager_t76C2ED7C3914558F88CB1F2A9E8589813DC6221C* L_8;
		L_8 = EffectManager_get_Instance_m526CEBF6FD3213C141E5B8CF7C49F665379BA7C8(NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B10CE92F0BB26735E806ACCA27751E9CF0A7859C9D0FCDBD4011C0C5E60C8C9_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		NullCheck(L_8);
		EffectManager_SpawnEffect_m2FC0F2E011EE75854775C408922F9DF4CE44B0D5(L_8, L_10, L_14, NULL);
		// Destroy(parentGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentGameObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
		return;
	}

IL_0076:
	{
		// else if(isOverlappedPlayer)
		bool L_16 = __this->___isOverlappedPlayer_13;
		if (!L_16)
		{
			goto IL_0141;
		}
	}
	{
		// isCrushedPlayer = true;
		__this->___isCrushedPlayer_14 = (bool)1;
		// StartCoroutine(PlayerTrigger.Instance.OnHit(dmg * 100));
		PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* L_17;
		L_17 = PlayerTrigger_get_Instance_m78615663D3AF31C726C21C728539B7A0C8780A70(NULL);
		float L_18 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___dmg_8;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(L_17, ((float)il2cpp_codegen_multiply(L_18, (100.0f))), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		return;
	}

IL_00a6:
	{
		// else if (collision.tag == "Sheld")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21 = ___0_collision;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190, NULL);
		if (!L_23)
		{
			goto IL_00ed;
		}
	}
	{
		// parentRigid.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_24);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_24, L_25, NULL);
		// parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 10 : 5), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_26 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_9;
		bool L_27 = __this->___isCrushedPlayer_14;
		G_B9_0 = (0.0f);
		G_B9_1 = L_26;
		if (L_27)
		{
			G_B10_0 = (0.0f);
			G_B10_1 = L_26;
			goto IL_00de;
		}
	}
	{
		G_B11_0 = 5;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00e0;
	}

IL_00de:
	{
		G_B11_0 = ((int32_t)10);
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00e0:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), G_B11_1, ((float)G_B11_0), /*hidden argument*/NULL);
		NullCheck(G_B11_2);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(G_B11_2, L_28, 1, NULL);
		return;
	}

IL_00ed:
	{
		// else if (collision.tag == "Weapon")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_29 = ___0_collision;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_29, NULL);
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		// parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 10 : 1), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_32 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___parentRigid_9;
		bool L_33 = __this->___isCrushedPlayer_14;
		G_B14_0 = (0.0f);
		G_B14_1 = L_32;
		if (L_33)
		{
			G_B15_0 = (0.0f);
			G_B15_1 = L_32;
			goto IL_0115;
		}
	}
	{
		G_B16_0 = 1;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_0117;
	}

IL_0115:
	{
		G_B16_0 = ((int32_t)10);
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_0117:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), G_B16_1, ((float)G_B16_0), /*hidden argument*/NULL);
		NullCheck(G_B16_2);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(G_B16_2, L_34, 1, NULL);
		// StartCoroutine(OnHit(1, collision.transform.position));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_35 = ___0_collision;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_37, NULL);
		RuntimeObject* L_39;
		L_39 = Block_OnHit_mD584F24AD709E9A964584556EB0E7CF1607EC7B9(__this, 1, L_38, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_40;
		L_40 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_39, NULL);
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void OneToOneBlock::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneBlock_OnTriggerExit2D_m8E33C19AB26146EB37745AE0BC07D8F71779C3A3 (OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "PlayerTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralD392EF6A3BD7051BDE60A1BD6B2867F51A90D26D, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// isOverlappedPlayer = false;
		__this->___isOverlappedPlayer_13 = (bool)0;
		// PlayerController.Instance.isOverlapped = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_3);
		L_3->___isOverlapped_10 = (bool)0;
		return;
	}

IL_0025:
	{
		// else if (collision.tag == "Floor")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_collision;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// isCrushedPlayer = false;
		__this->___isCrushedPlayer_14 = (bool)0;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void OneToOneBlock::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneToOneBlock_FixedUpdate_mD8CC23934A9871EB4D7F9BD50B67DC37566200F2 (OneToOneBlock_t7BE66D9CBC97D885D50930C0EF844015646FBDE4* __this, const RuntimeMethod* method) 
{
	{
		// if (isCrushedPlayer)
		bool L_0 = __this->___isCrushedPlayer_14;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// StartCoroutine(PlayerTrigger.Instance.OnHit(dmg));
		PlayerTrigger_tBFD95042CE698B12CEA80E90225DA39CD81AEEC0* L_1;
		L_1 = PlayerTrigger_get_Instance_m78615663D3AF31C726C21C728539B7A0C8780A70(NULL);
		float L_2 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___dmg_8;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_001f:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral428D89C14B02583BB9127B7C5C6F1625F0961190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
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
			goto IL_001e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		return;
	}

IL_001e:
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
			goto IL_003c;
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

IL_003c:
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
			goto IL_005a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		return;
	}

IL_005a:
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
			goto IL_008a;
		}
	}
	{
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

IL_008a:
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___comboCountText_26;
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
		bool L_31 = __this->___enemyGageShown_25;
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
		float L_35 = __this->___curEnemyHp_23;
		float L_36 = __this->___maxEnemyHp_24;
		RuntimeObject* L_37;
		L_37 = InGameTextViewer_SliderInit_m529DED46FADE9C2F6C92E774E2D462C3AFAE314B(__this, L_33, L_34, L_35, L_36, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// curAndMaxEnemyHpText.text = curEnemyHp.ToString() + "/" + maxEnemyHp.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = __this->___curAndMaxEnemyHpText_15;
		float* L_40 = (&__this->___curEnemyHp_23);
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_40, NULL);
		float* L_42 = (&__this->___maxEnemyHp_24);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* L_0 = (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3*)il2cpp_codegen_object_new(U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountU3Ed__32__ctor_m10FF1EE67122CACD4D2867DF4B95B804359430E1(L_0, 0, NULL);
		U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* L_1 = L_0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = ___0__Text;
		NullCheck(L_1);
		L_1->____Text_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____Text_4), (void*)L_2);
		U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* L_3 = L_1;
		float L_4 = ___1__Target;
		NullCheck(L_3);
		L_3->____Target_2 = L_4;
		U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* L_5 = L_3;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* L_0 = (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB*)il2cpp_codegen_object_new(U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInOutTextU3Ed__33__ctor_m5407E5F2EA8E4A35F2C651DF69DA8B50BB1AC999(L_0, 0, NULL);
		U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* L_1 = L_0;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___comboTextPrefab_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// clone.transform.SetParent(parentTransform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parentTransform_28;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_0 = (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51*)il2cpp_codegen_object_new(U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSliderInitU3Ed__35__ctor_mFAB792F4D911F316F05D0128AF9E14090E4AFBA9(L_0, 0, NULL);
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_2 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___0_slider;
		NullCheck(L_2);
		L_2->___slider_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___slider_2), (void*)L_3);
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_4 = L_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = ___1_sliderShadow;
		NullCheck(L_4);
		L_4->___sliderShadow_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sliderShadow_7), (void*)L_5);
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_6 = L_4;
		float L_7 = ___2_curValue;
		NullCheck(L_6);
		L_6->___curValue_3 = L_7;
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_8 = L_6;
		float L_9 = ___3_maxValue;
		NullCheck(L_8);
		L_8->___maxValue_4 = L_9;
		U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* L_10 = L_8;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* L_0 = (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4*)il2cpp_codegen_object_new(U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBackHpMoveU3Ed__38__ctor_mF4804151EE380987D1E9B21CA1953FF4CA1267D5(L_0, 0, NULL);
		U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* L_2 = L_1;
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
		__this->___enemyGageShown_25 = L_0;
		// maxEnemyHp = maxHP;
		float L_1 = ___2_maxHP;
		__this->___maxEnemyHp_24 = L_1;
		// curEnemyHp = curHP;
		float L_2 = ___1_curHP;
		__this->___curEnemyHp_23 = L_2;
		int32_t L_3 = ___3_enemeyType;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_005d;
			}
			case 4:
			{
				goto IL_0092;
			}
			case 5:
			{
				goto IL_006f;
			}
			case 6:
			{
				goto IL_0081;
			}
		}
	}
	{
		return;
	}

IL_0039:
	{
		// enemyImage.sprite = monsterImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___enemyImage_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___monsterImage_19;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// break;
		return;
	}

IL_004b:
	{
		// enemyImage.sprite = monsterBossImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___enemyImage_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___monsterBossImage_17;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// break;
		return;
	}

IL_005d:
	{
		// enemyImage.sprite = block1X1Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___enemyImage_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = __this->___block1X1Image_20;
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_9, NULL);
		// break;
		return;
	}

IL_006f:
	{
		// enemyImage.sprite = block1X2Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___enemyImage_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___block1X2Image_21;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
		// break;
		return;
	}

IL_0081:
	{
		// enemyImage.sprite = block1X3Image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___enemyImage_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = __this->___block1X3Image_22;
		NullCheck(L_12);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_12, L_13, NULL);
	}

IL_0092:
	{
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
		__this->___backGageHit_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backGageHit_31), (void*)L_0);
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
// System.Void InGameTextViewer/<Count>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__32__ctor_m10FF1EE67122CACD4D2867DF4B95B804359430E1 (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<Count>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__32_System_IDisposable_Dispose_m0EEAB1BE673D7E8A7FB5E533F560FC4427573700 (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<Count>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountU3Ed__32_MoveNext_mB79629DA310DE7C4D5164180B68C11ABE0439E39 (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, const RuntimeMethod* method) 
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
// System.Object InGameTextViewer/<Count>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m077BB04403DA1DA1DC55DF99589686897FDB7C3A (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<Count>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountU3Ed__32_System_Collections_IEnumerator_Reset_mB1B52B5294A4E1BEDC50779A40E83E4CE831C82C (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountU3Ed__32_System_Collections_IEnumerator_Reset_mB1B52B5294A4E1BEDC50779A40E83E4CE831C82C_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<Count>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountU3Ed__32_System_Collections_IEnumerator_get_Current_m663C6BB367642ED2DD6041E695774CA9BD9020F2 (U3CCountU3Ed__32_t92FA1AABF2755D24A691F490E75D06FE105B74A3* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<FadeInOutText>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__33__ctor_m5407E5F2EA8E4A35F2C651DF69DA8B50BB1AC999 (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__33_System_IDisposable_Dispose_mD5DEAEA8EA20403F5A54A48170DED41662395EF2 (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<FadeInOutText>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInOutTextU3Ed__33_MoveNext_m8232D7F98A71A2363E3E3F80D46C206BFDAA30A0 (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, const RuntimeMethod* method) 
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___comboCountText_26;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___comboCountText_26;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___comboCountText_26;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_15 = V_1;
		NullCheck(L_15);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = L_15->___comboCountText_26;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = L_20->___comboText_27;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_22 = V_1;
		NullCheck(L_22);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = L_22->___comboCountText_26;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		float L_25 = L_24.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_26 = V_1;
		NullCheck(L_26);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = L_26->___comboCountText_26;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_27);
		float L_29 = L_28.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_30 = V_1;
		NullCheck(L_30);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = L_30->___comboCountText_26;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = L_35->___comboTextAnimator_30;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = L_38->___comboCountText_26;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_40 = V_1;
		NullCheck(L_40);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = L_40->___comboCountText_26;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		float L_43 = L_42.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_44 = V_1;
		NullCheck(L_44);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = L_44->___comboCountText_26;
		NullCheck(L_45);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_45);
		float L_47 = L_46.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_48 = V_1;
		NullCheck(L_48);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = L_48->___comboCountText_26;
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
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = L_55->___comboText_27;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_57 = V_1;
		NullCheck(L_57);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = L_57->___comboCountText_26;
		NullCheck(L_58);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_58);
		float L_60 = L_59.___r_0;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_61 = V_1;
		NullCheck(L_61);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = L_61->___comboCountText_26;
		NullCheck(L_62);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_62);
		float L_64 = L_63.___g_1;
		InGameTextViewer_tB159030DB2BED6D5A94089474B18812C9B6C1104* L_65 = V_1;
		NullCheck(L_65);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = L_65->___comboCountText_26;
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
// System.Object InGameTextViewer/<FadeInOutText>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79067EA2CB95E2886E49A4884FFBF028F3D86C84 (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<FadeInOutText>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutTextU3Ed__33_System_Collections_IEnumerator_Reset_m7F2C57938F8B925922DF1EAD84391B7B3983CDDC (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInOutTextU3Ed__33_System_Collections_IEnumerator_Reset_m7F2C57938F8B925922DF1EAD84391B7B3983CDDC_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<FadeInOutText>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutTextU3Ed__33_System_Collections_IEnumerator_get_Current_m5FA24447BB979B3C94BADF8BE5B7FA7B6AADEEDF (U3CFadeInOutTextU3Ed__33_t6548480156385DA0FE4118DDE9E6554B7CB8B8DB* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<SliderInit>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__35__ctor_mFAB792F4D911F316F05D0128AF9E14090E4AFBA9 (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__35_System_IDisposable_Dispose_m305C01903473FAEBA1B7E544A5D525A613C71423 (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<SliderInit>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSliderInitU3Ed__35_MoveNext_m7307ECAACDCC176F28C07810BA49559B811F830A (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, const RuntimeMethod* method) 
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
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = L_11->___backGageHit_31;
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
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = L_27->___backGageHit_31;
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
// System.Object InGameTextViewer/<SliderInit>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF5C6C59FE84C8D72165DE17A2E4AC384DA597817 (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<SliderInit>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSliderInitU3Ed__35_System_Collections_IEnumerator_Reset_mFFDEFFD21EDB9C40A884732C90C1253949441F65 (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSliderInitU3Ed__35_System_Collections_IEnumerator_Reset_mFFDEFFD21EDB9C40A884732C90C1253949441F65_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<SliderInit>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSliderInitU3Ed__35_System_Collections_IEnumerator_get_Current_m7CE33921836DE8190005AEDC079F5EF6F647A88C (U3CSliderInitU3Ed__35_t5239AFAB1BF7CA88C2967E6921B6A87916D36D51* __this, const RuntimeMethod* method) 
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
// System.Void InGameTextViewer/<BackHpMove>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__38__ctor_mF4804151EE380987D1E9B21CA1953FF4CA1267D5 (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__38_System_IDisposable_Dispose_mD45F5C7B91300CF7664AB9A76F5F883CB6967136 (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InGameTextViewer/<BackHpMove>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBackHpMoveU3Ed__38_MoveNext_mE0E94C73906E78A7B10687190AF2F32AD044951D (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, const RuntimeMethod* method) 
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
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = L_5->___backGageHit_31;
		int32_t L_7 = __this->___index_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
		// }
		return (bool)0;
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6DF41424FA7251AA76E78D46A52F4B76F90CC936 (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InGameTextViewer/<BackHpMove>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBackHpMoveU3Ed__38_System_Collections_IEnumerator_Reset_mA8C587630D515DA3F1E36AA74D38842B5538C8DA (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBackHpMoveU3Ed__38_System_Collections_IEnumerator_Reset_mA8C587630D515DA3F1E36AA74D38842B5538C8DA_RuntimeMethod_var)));
	}
}
// System.Object InGameTextViewer/<BackHpMove>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBackHpMoveU3Ed__38_System_Collections_IEnumerator_get_Current_m690A6BCBF7846FCEF15D80B7E7FF2317A27553E5 (U3CBackHpMoveU3Ed__38_tD9509AFF9BCD183D2578854030AD1F893A699DC4* __this, const RuntimeMethod* method) 
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
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_19;
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
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_19 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_19), (void*)__this);
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
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_19;
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
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_19;
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
			goto IL_0227;
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
		__this->___touchBeganPos_15 = L_3;
	}

IL_0028:
	{
		// if (touch.phase == TouchPhase.Ended)
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_023f;
		}
	}
	{
		// touchEndedPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___touchEndedPos_16 = L_5;
		// touchDif = (touchEndedPos - touchBeganPos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___touchEndedPos_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___touchBeganPos_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		__this->___touchDif_14 = L_8;
		// if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___touchDif_14);
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___touchDif_14);
		float L_14 = L_13->___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = __this->___swipeSensitivity_7;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_021f;
		}
	}

IL_008c:
	{
		// if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___touchDif_14);
		float L_18 = L_17->___x_0;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___touchDif_14);
		float L_20 = L_19->___y_1;
		float L_21;
		L_21 = fabsf(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___touchDif_14);
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
		int32_t L_25 = __this->___positionIndex_13;
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
		bool L_27 = __this->___isOverlapped_10;
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___touchDif_14);
		float L_29 = L_28->___x_0;
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___touchDif_14);
		float L_31 = L_30->___y_1;
		float L_32;
		L_32 = fabsf(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___touchDif_14);
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
		int32_t L_36 = __this->___positionIndex_13;
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
		bool L_38 = __this->___isOverlapped_10;
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___touchDif_14);
		float L_40 = L_39->___y_1;
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_0195;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___touchDif_14);
		float L_42 = L_41->___y_1;
		float L_43;
		L_43 = fabsf(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___touchDif_14);
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
		bool L_49 = __this->___isOverlapped_10;
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = (&__this->___touchDif_14);
		float L_51 = L_50->___y_1;
		if ((!(((float)L_51) < ((float)(0.0f)))))
		{
			goto IL_023f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&__this->___touchDif_14);
		float L_53 = L_52->___y_1;
		float L_54;
		L_54 = fabsf(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___touchDif_14);
		float L_56 = L_55->___x_0;
		float L_57;
		L_57 = fabsf(L_56);
		if ((!(((float)L_54) > ((float)L_57))))
		{
			goto IL_023f;
		}
	}
	{
		// if (!isSheld)
		bool L_58 = __this->___isSheld_9;
		if (L_58)
		{
			goto IL_023f;
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
			goto IL_01e6;
		}
	}
	{
		// if (PlayerData.Instance.curSheldGage < 33.3f) { return; }
		return;
	}

IL_01e6:
	{
		// PlayerData.Instance.curSheldGage -= 40f;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_61;
		L_61 = PlayerData_get_Instance_mABC758012B59002BFDAB163DAEC8A6DAB14FA592(NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_62 = L_61;
		NullCheck(L_62);
		float L_63 = L_62->___curSheldGage_11;
		NullCheck(L_62);
		L_62->___curSheldGage_11 = ((float)il2cpp_codegen_subtract(L_63, (40.0f)));
		// timer = 0;
		__this->___timer_20 = (0.0f);
		// anime.ResetTrigger("onSheld");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64 = __this->___anime_12;
		NullCheck(L_64);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_64, _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5, NULL);
		// ChangeState(PlayerState.Sheld);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 4, NULL);
		return;
	}

IL_021f:
	{
		// ChangeState(PlayerState.Attack);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 5, NULL);
		return;
	}

IL_0227:
	{
		// if (isJump || isSheld) return;
		bool L_65 = __this->___isJump_8;
		if (L_65)
		{
			goto IL_0237;
		}
	}
	{
		bool L_66 = __this->___isSheld_9;
		if (!L_66)
		{
			goto IL_0238;
		}
	}

IL_0237:
	{
		// if (isJump || isSheld) return;
		return;
	}

IL_0238:
	{
		// ChangeState(PlayerState.Idle);
		PlayerController_ChangeState_m3948CCDD8B3BDA526EEB5B8B9BE8FDC72F2FA3E8(__this, 0, NULL);
	}

IL_023f:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* L_0 = (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE*)il2cpp_codegen_object_new(U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIdleU3Ed__22__ctor_m9CC976EDA50D783B8EAA878EFFCC13F1EEF15A89(L_0, 0, NULL);
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
		int32_t L_1 = __this->___positionIndex_13;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_000e:
	{
		int32_t L_2 = __this->___positionIndex_13;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->___positionIndex_13 = G_B3_0;
		// parentTransform.localScale = (dir == true ? Vector3.one : new Vector3(-1, 1, 1));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___parentTransform_18;
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
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___parentTransform_18;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = __this->___playerPos_5;
		int32_t L_9 = __this->___positionIndex_13;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
		// anime.SetTrigger("doSideStep");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___anime_12;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* L_0 = (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375*)il2cpp_codegen_object_new(U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSideStepLeftU3Ed__24__ctor_m177068B08288EBA447BB5D1276B842AEFBAAE94B(L_0, 0, NULL);
		U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* L_1 = L_0;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* L_0 = (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3*)il2cpp_codegen_object_new(U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSideStepRightU3Ed__25__ctor_m0644162483FF23AC10E6AAB91A86ABE31C3EC9EA(L_0, 0, NULL);
		U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* L_1 = L_0;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* L_0 = (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6*)il2cpp_codegen_object_new(U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpU3Ed__26__ctor_mFF9069879F6EC1FCAA9110FD8E56B232A566BA38(L_0, 0, NULL);
		U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* L_1 = L_0;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* L_0 = (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3*)il2cpp_codegen_object_new(U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSheldU3Ed__28__ctor_mD4F30051696DBF9460C0C6FC847BBF823AB5AA65(L_0, 0, NULL);
		U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* L_1 = L_0;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anime_12;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anime_12;
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
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___parentRigid_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_4, NULL);
		// parentRigid.AddForce(new Vector2(0f, -20f), ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___parentRigid_17;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___anime_12;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* L_0 = (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E*)il2cpp_codegen_object_new(U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAttackU3Ed__31__ctor_mE06CF6E649752DAFC1E92B6A0D2531F97A6AFD1B(L_0, 0, NULL);
		U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* L_1 = L_0;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* L_0 = (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A*)il2cpp_codegen_object_new(U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpecialMoveU3Ed__32__ctor_m17C153702E47F7964B564CA8B20825A51C9E5AC3(L_0, 0, NULL);
		U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* L_1 = L_0;
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
		// parryingSheld = false;
		__this->___parryingSheld_11 = (bool)0;
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anime_12;
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
		__this->___positionIndex_13 = 1;
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
// System.Void PlayerController/<Idle>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__22__ctor_m9CC976EDA50D783B8EAA878EFFCC13F1EEF15A89 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Idle>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__22_System_IDisposable_Dispose_m91FE1A28B0CFDD573ED5F5961F4EDDA154AFBDC0 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Idle>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIdleU3Ed__22_MoveNext_mFC8E4029D1DCA409AD86C36F9875BA54DEC824A3 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, const RuntimeMethod* method) 
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
// System.Object PlayerController/<Idle>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9FEAB280B7C810638695AD1DC1B16BDC8C59F883 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Idle>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIdleU3Ed__22_System_Collections_IEnumerator_Reset_m9F20B15D35AAD01867933F77A003AC0EF2CAE345 (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIdleU3Ed__22_System_Collections_IEnumerator_Reset_m9F20B15D35AAD01867933F77A003AC0EF2CAE345_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Idle>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIdleU3Ed__22_System_Collections_IEnumerator_get_Current_m51EC271513075B8371B2F16EE43328FE2F48B12C (U3CIdleU3Ed__22_tD1E7FE203ACA3A896DF2B3C88690F9177885C3AE* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SideStepLeft>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__24__ctor_m177068B08288EBA447BB5D1276B842AEFBAAE94B (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SideStepLeft>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__24_System_IDisposable_Dispose_m7AE20D0D0AE55CB1C3B6B72A3BD5322DCA503E09 (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SideStepLeft>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSideStepLeftU3Ed__24_MoveNext_m3ACF3C58DB32B427330D707FBC190640A6EF21F3 (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, const RuntimeMethod* method) 
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
// System.Object PlayerController/<SideStepLeft>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepLeftU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m345FAD5E32DFC210DB4BC4A68C6F75659350DB05 (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SideStepLeft>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepLeftU3Ed__24_System_Collections_IEnumerator_Reset_mA793222C3FDDBF80715AE7E0C595CB155D038F93 (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSideStepLeftU3Ed__24_System_Collections_IEnumerator_Reset_mA793222C3FDDBF80715AE7E0C595CB155D038F93_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SideStepLeft>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepLeftU3Ed__24_System_Collections_IEnumerator_get_Current_mC856E845BF46AD555B1175353697CD8B8B82CF8A (U3CSideStepLeftU3Ed__24_tCCECC1CB66DB704C923DCC281F069EB77F931375* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SideStepRight>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__25__ctor_m0644162483FF23AC10E6AAB91A86ABE31C3EC9EA (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SideStepRight>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__25_System_IDisposable_Dispose_m83CB31F91BBD145F30D31AEF3892E5BD9F144DBE (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SideStepRight>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSideStepRightU3Ed__25_MoveNext_m25F59605DF53681AAA15B576E6F480CBBD0F42F7 (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, const RuntimeMethod* method) 
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
// System.Object PlayerController/<SideStepRight>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepRightU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47601361D2044ABDF6D8A03FBCB6619C23AD7E06 (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SideStepRight>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSideStepRightU3Ed__25_System_Collections_IEnumerator_Reset_m68430856FB47E32303DF08051CCAA12A004F647D (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSideStepRightU3Ed__25_System_Collections_IEnumerator_Reset_m68430856FB47E32303DF08051CCAA12A004F647D_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SideStepRight>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSideStepRightU3Ed__25_System_Collections_IEnumerator_get_Current_m61399D6DA0758BB95DE8E24A593FB49D291D4DE5 (U3CSideStepRightU3Ed__25_t213876DD77E59061361E516AEA53D0A5913AA2C3* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Jump>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__26__ctor_mFF9069879F6EC1FCAA9110FD8E56B232A566BA38 (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Jump>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__26_System_IDisposable_Dispose_mCFCABF6995F85FBAD9DC6B2000D92AA5705EA103 (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Jump>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpU3Ed__26_MoveNext_m5903F5ED1C8CBDFBDADD6CDD156CFA62AD4B0F64 (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C);
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
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
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
		// anime.SetTrigger("doJump");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___anime_12;
		NullCheck(L_8);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, _stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C, NULL);
		// anime.SetBool("isJump", isJump);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___anime_12;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->___isJump_8;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, L_12, NULL);
		// parentRigid.AddForce(new Vector2(0, 20f), ForceMode2D.Impulse);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_1;
		NullCheck(L_13);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = L_13->___parentRigid_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (0.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_14, L_15, 1, NULL);
		// gameObject.layer = LayerMask.NameToLayer("Player");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		int32_t L_18;
		L_18 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_17);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_17, L_18, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Jump>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA72F99E22D8E36FDE84B841EAC82281173270B4 (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Jump>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpU3Ed__26_System_Collections_IEnumerator_Reset_mE61C225B9693B856417D7938CEEAF1B27C7616DD (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpU3Ed__26_System_Collections_IEnumerator_Reset_mE61C225B9693B856417D7938CEEAF1B27C7616DD_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Jump>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpU3Ed__26_System_Collections_IEnumerator_get_Current_m0352346618A8A75922FC208AA459D95CB3458FAF (U3CJumpU3Ed__26_t7726EA48A1B1220555A45542A1CAF7105B09B3F6* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Sheld>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__28__ctor_mD4F30051696DBF9460C0C6FC847BBF823AB5AA65 (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Sheld>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__28_System_IDisposable_Dispose_mF2183D439E48C8FE4C1DD9724FED9BDC8C294FFD (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Sheld>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSheldU3Ed__28_MoveNext_m7C565F8BD4AF61237F5B9D8A318A76DDDF553A28 (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128FBD60C102FC4524F1CC2E2B0F3C36C9BFAF13);
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
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
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
		// anime.SetTrigger("onSheld");
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = V_1;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = L_9->___anime_12;
		NullCheck(L_10);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_10, _stringLiteral10426521D36EB2943898BCFD2D2A17D3316B1FC5, NULL);
	}

IL_004d:
	{
		// timer += Time.deltaTime;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___timer_20;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_11);
		L_11->___timer_20 = ((float)il2cpp_codegen_add(L_13, L_14));
		// if (timer >= 1)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___timer_20;
		if ((!(((float)L_16) >= ((float)(1.0f)))))
		{
			goto IL_0074;
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

IL_0074:
	{
		// else if (parryingSheld)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->___parryingSheld_11;
		if (!L_19)
		{
			goto IL_0084;
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

IL_0084:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_004d;
	}
}
// System.Object PlayerController/<Sheld>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSheldU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7F739DE8EF926F6FDCEDBFE2C7532F80A1350F09 (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Sheld>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSheldU3Ed__28_System_Collections_IEnumerator_Reset_mBFF5066A2332BFDA2A45A2EEC81586BAAA1EB3E1 (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSheldU3Ed__28_System_Collections_IEnumerator_Reset_mBFF5066A2332BFDA2A45A2EEC81586BAAA1EB3E1_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Sheld>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSheldU3Ed__28_System_Collections_IEnumerator_get_Current_mA79C28F9E109B1965572CB2D1235051A63672DEB (U3CSheldU3Ed__28_tAD68C28AE7DE08383A7A1E045EA9B8301D496CD3* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<Attack>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__31__ctor_mE06CF6E649752DAFC1E92B6A0D2531F97A6AFD1B (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<Attack>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__31_System_IDisposable_Dispose_m680B080D3A4B036D5D6BD38449F071CFD092F903 (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Attack>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__31_MoveNext_m3B41F73017DFEF17EDE0A9608B64849142970DC9 (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, const RuntimeMethod* method) 
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
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___anime_12;
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
// System.Object PlayerController/<Attack>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m45C797CAE4FD99DB6E55C2262843EF4C0F884DCE (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<Attack>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__31_System_Collections_IEnumerator_Reset_m0320BB5545AC944FF5AD85F107B462EC3174B269 (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__31_System_Collections_IEnumerator_Reset_m0320BB5545AC944FF5AD85F107B462EC3174B269_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Attack>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__31_System_Collections_IEnumerator_get_Current_mBF54BF74CCDBDCAE789B733870C5DEFA8D199F70 (U3CAttackU3Ed__31_tA9F582059D909D0DD213CE9395804A781834EF1E* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<SpecialMove>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__32__ctor_m17C153702E47F7964B564CA8B20825A51C9E5AC3 (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<SpecialMove>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__32_System_IDisposable_Dispose_m1BDA29BE0C1B674559F6AAA74C5B642F9ACA0F40 (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<SpecialMove>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpecialMoveU3Ed__32_MoveNext_mB217DE23DEFC81B51C8929633D996D3C76CE95EC (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, const RuntimeMethod* method) 
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
// System.Object PlayerController/<SpecialMove>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpecialMoveU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D3C92983B6881553E4668A69CF8739804549E6E (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<SpecialMove>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpecialMoveU3Ed__32_System_Collections_IEnumerator_Reset_m7FC18F6C3EBD3084347BB8CB3642347FFED5E331 (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpecialMoveU3Ed__32_System_Collections_IEnumerator_Reset_m7FC18F6C3EBD3084347BB8CB3642347FFED5E331_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<SpecialMove>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpecialMoveU3Ed__32_System_Collections_IEnumerator_get_Current_m4762AB7156E82B0163B8DE9AAD427DDA64C73DB6 (U3CSpecialMoveU3Ed__32_tC4478AA10029339D96DB7AF9CEFA5BABFF578F7A* __this, const RuntimeMethod* method) 
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
		// curSheldGage = maxSheldGage;/*maxSheldGage;*
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
		// Destroy(this.gameObject);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3E147F17B7C7E43670C7D15AB111FAD87FFE84);
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
		if (L_2)
		{
			goto IL_0041;
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
			goto IL_0041;
		}
	}
	{
		// StartCoroutine(OnHit(collision.GetComponent<OneToOneHBlock>().dmg));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		NullCheck(L_7);
		OneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA* L_8;
		L_8 = Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790(L_7, Component_GetComponent_TisOneToOneHBlock_t016EF65F23743375A56D844B98032C43CF89CDBA_mACAC5D2DEE77E3BCD9DB9C0611619EF9AA2DA790_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_8)->___dmg_8;
		RuntimeObject* L_10;
		L_10 = PlayerTrigger_OnHit_m7C3CD2E9CB75FF9242609EB058DD6D30A533E0A5(__this, L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
	}

IL_0041:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "BlockTrigger")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralEEF1BA163249E03833E6B7106D83A7AE118BF34C, NULL);
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
			goto IL_0039;
		}
	}

IL_002e:
	{
		// PlayerController.Instance.parryingSheld = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8;
		L_8 = PlayerController_get_Instance_m304823623518B0D034B8A0510EECC8D1C4093966(NULL);
		NullCheck(L_8);
		L_8->___parryingSheld_11 = (bool)1;
	}

IL_0039:
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
		// PlayerData.Instance.curSpecialMoveGage = (PlayerData.Instance.curSpecialMoveGage >= PlayerData.Instance.maxSpecialMoveGage) ? PlayerData.Instance.maxSpecialMoveGage : PlayerData.Instance.curSpecialMoveGage + 0.1f * Mathf.Clamp(GameManager.Instance.combo, 0, 50);
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
