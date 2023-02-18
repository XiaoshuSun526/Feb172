#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Func`1<System.Collections.Generic.IEnumerator`1<BTAI.BTState>>
struct Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEnumerator`1<BTAI.BTState>
struct IEnumerator_1_tF99D2634DF0E2A094E4CCE685A5E1F02E287DF0C;
// System.Collections.Generic.List`1<BTAI.BTNode>
struct List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal>
struct List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12;
// BTAI.BTNode[]
struct BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// BTAI.SendSignal[]
struct SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// BTAI.WaitForAnimatorSignal[]
struct WaitForAnimatorSignalU5BU5D_t48CB3C5753CB3143533DDB3AFF557134D23AE74C;
// BTAI.Action
struct Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// BTAI.BTNode
struct BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A;
// BTAI.Block
struct Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6;
// BTAI.Branch
struct Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3;
// BTAI.Condition
struct Condition_t76FE17E90C7458B84D6016A78A1C028400074367;
// BTAI.ConditionalBranch
struct ConditionalBranch_tAF661C273B9ACE867F98FE019091D04110CEC3E7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// BTAI.Log
struct Log_t8E3BD85BDA0ABFF0330B3AAADFADC3954AFA255B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// BTAI.RandomSequence
struct RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10;
// BTAI.Repeat
struct Repeat_t118E7A4A4693550648D8504A2BFCB8A276D52FD8;
// BTAI.Root
struct Root_t8023A60F0BD06214427FD9BC5AA07991BAFE37E3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BTAI.Selector
struct Selector_t535F5A55AF5880CFAA6A93C16C36C8EBA5498592;
// BTAI.SendSignal
struct SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B;
// BTAI.SetActive
struct SetActive_t93A2F9E2FC91D92F3E4C992A55C27B559FE050F8;
// BTAI.SetBool
struct SetBool_tE46D165EBC4CC6DDCCF480D0BF2C78506F4B62FB;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// BTAI.Terminate
struct Terminate_t0F0CA234B405AC13847AED3A80CC47AF7E4FD5BD;
// BTAI.Trigger
struct Trigger_t19C418566CF60FA64781464BF4AEDE47069BD9C0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BTAI.Wait
struct Wait_t9FE7F023BBB8A88A723B5EB58C338DD6992ADBF6;
// BTAI.WaitForAnimatorSignal
struct WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44;
// BTAI.WaitForAnimatorState
struct WaitForAnimatorState_tC55AAD9C3BBB603985900954BCE3467BC0329E88;
// BTAI.While
struct While_t199EE73BA632AE06E69C8AA0B7E62CE8D283FB64;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF99D2634DF0E2A094E4CCE685A5E1F02E287DF0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE24D1B69CCFE8082E7153DFF752EA0D4FDF2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral1D36844D14058C4B64A9E62DE39422B72CC457B3;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED40E6CD8893F0FC445984E698F7B5B29EA58D9;
IL2CPP_EXTERN_C String_t* _stringLiteral28C984C43F3CA4C4894ED9FE401A6626B5BCFB72;
IL2CPP_EXTERN_C String_t* _stringLiteral3E823A844969471A2141EEC02122F7C4D0A3925A;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF6143E07D7B3D76ADD97ADBBCA9BC24B4D78EB;
IL2CPP_EXTERN_C String_t* _stringLiteral561E0D773EA98260CA6271C5A6263A0164F8D688;
IL2CPP_EXTERN_C String_t* _stringLiteral66AC71A1E84DB1FFB445C76019E3B5F439F51CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA7200A5679507EBF0AA08BE282BA0EAD27D565;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral7C3DA6EA93E2544CF8187A5A6F32A33007CDD9A4;
IL2CPP_EXTERN_C String_t* _stringLiteral868F9FD931D9979C5691B4A7A77254E129CFD737;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral875F7B7E3C4289918BF6DE6C19FE7E2F91FE2910;
IL2CPP_EXTERN_C String_t* _stringLiteral88528BF215E676F04A08CD93DAA9876CE2BDB8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E02A461072F25F58026328D593F9D8887AA8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A01CBB9410C62425A25771024163589FC05758;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBehaviours_TisSendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B_m43DD17689FC573718572AFF7482B77CEB2D57E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m88AE18CF2ED3CFD7882340E2D0EFA7F4998C49F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m124465136A80C1BADFA5C18B90E51F3792A9037A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selector_Tick_m1039C22D8CC1AD55D3AE1A957986C559B8887D21_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<BTAI.BTNode>
struct List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal>
struct List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaitForAnimatorSignalU5BU5D_t48CB3C5753CB3143533DDB3AFF557134D23AE74C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaitForAnimatorSignalU5BU5D_t48CB3C5753CB3143533DDB3AFF557134D23AE74C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// BTAI.BTNode
struct BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<BTAI.WaitForAnimatorSignal>
struct Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* ____current_3;
};

// BTAI.Action
struct Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.Action BTAI.Action::fn
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___fn_0;
	// System.Func`1<System.Collections.Generic.IEnumerator`1<BTAI.BTState>> BTAI.Action::coroutineFactory
	Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60* ___coroutineFactory_1;
	// System.Collections.Generic.IEnumerator`1<BTAI.BTState> BTAI.Action::coroutine
	RuntimeObject* ___coroutine_2;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// BTAI.Branch
struct Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.Int32 BTAI.Branch::activeChild
	int32_t ___activeChild_0;
	// System.Collections.Generic.List`1<BTAI.BTNode> BTAI.Branch::children
	List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* ___children_1;
};

// BTAI.Condition
struct Condition_t76FE17E90C7458B84D6016A78A1C028400074367  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.Func`1<System.Boolean> BTAI.Condition::fn
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// BTAI.Log
struct Log_t8E3BD85BDA0ABFF0330B3AAADFADC3954AFA255B  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.String BTAI.Log::msg
	String_t* ___msg_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// BTAI.SetActive
struct SetActive_t93A2F9E2FC91D92F3E4C992A55C27B559FE050F8  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// UnityEngine.GameObject BTAI.SetActive::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	// System.Boolean BTAI.SetActive::active
	bool ___active_1;
};

// BTAI.SetBool
struct SetBool_tE46D165EBC4CC6DDCCF480D0BF2C78506F4B62FB  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// UnityEngine.Animator BTAI.SetBool::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_0;
	// System.Int32 BTAI.SetBool::id
	int32_t ___id_1;
	// System.Boolean BTAI.SetBool::value
	bool ___value_2;
	// System.String BTAI.SetBool::triggerName
	String_t* ___triggerName_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// BTAI.Terminate
struct Terminate_t0F0CA234B405AC13847AED3A80CC47AF7E4FD5BD  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
};

// BTAI.Trigger
struct Trigger_t19C418566CF60FA64781464BF4AEDE47069BD9C0  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// UnityEngine.Animator BTAI.Trigger::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_0;
	// System.Int32 BTAI.Trigger::id
	int32_t ___id_1;
	// System.String BTAI.Trigger::triggerName
	String_t* ___triggerName_2;
	// System.Boolean BTAI.Trigger::set
	bool ___set_3;
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

// BTAI.Wait
struct Wait_t9FE7F023BBB8A88A723B5EB58C338DD6992ADBF6  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.Single BTAI.Wait::seconds
	float ___seconds_0;
	// System.Single BTAI.Wait::future
	float ___future_1;
};

// BTAI.WaitForAnimatorSignal
struct WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// System.Boolean BTAI.WaitForAnimatorSignal::isSet
	bool ___isSet_0;
	// System.String BTAI.WaitForAnimatorSignal::name
	String_t* ___name_1;
	// System.Int32 BTAI.WaitForAnimatorSignal::id
	int32_t ___id_2;
};

// BTAI.WaitForAnimatorState
struct WaitForAnimatorState_tC55AAD9C3BBB603985900954BCE3467BC0329E88  : public BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A
{
	// UnityEngine.Animator BTAI.WaitForAnimatorState::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_0;
	// System.Int32 BTAI.WaitForAnimatorState::id
	int32_t ___id_1;
	// System.Int32 BTAI.WaitForAnimatorState::layer
	int32_t ___layer_2;
	// System.String BTAI.WaitForAnimatorState::stateName
	String_t* ___stateName_3;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7103AA9F623828E7639D77437021473D2F8BD112B3DFA0E6A241DE905D752275
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___7103AA9F623828E7639D77437021473D2F8BD112B3DFA0E6A241DE905D752275_0;
};

// BTAI.Block
struct Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6  : public Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3
{
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// BTAI.Selector
struct Selector_t535F5A55AF5880CFAA6A93C16C36C8EBA5498592  : public Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// BTAI.ConditionalBranch
struct ConditionalBranch_tAF661C273B9ACE867F98FE019091D04110CEC3E7  : public Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6
{
	// System.Func`1<System.Boolean> BTAI.ConditionalBranch::fn
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn_2;
	// System.Boolean BTAI.ConditionalBranch::tested
	bool ___tested_3;
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

// BTAI.RandomSequence
struct RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10  : public Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6
{
	// System.Int32[] BTAI.RandomSequence::m_Weight
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Weight_2;
	// System.Int32[] BTAI.RandomSequence::m_AddedWeight
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_AddedWeight_3;
};

// BTAI.Repeat
struct Repeat_t118E7A4A4693550648D8504A2BFCB8A276D52FD8  : public Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6
{
	// System.Int32 BTAI.Repeat::count
	int32_t ___count_2;
	// System.Int32 BTAI.Repeat::currentCount
	int32_t ___currentCount_3;
};

// BTAI.Root
struct Root_t8023A60F0BD06214427FD9BC5AA07991BAFE37E3  : public Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6
{
	// System.Boolean BTAI.Root::isTerminated
	bool ___isTerminated_2;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// BTAI.While
struct While_t199EE73BA632AE06E69C8AA0B7E62CE8D283FB64  : public Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6
{
	// System.Func`1<System.Boolean> BTAI.While::fn
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn_2;
};

// System.Func`1<System.Collections.Generic.IEnumerator`1<BTAI.BTState>>
struct Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BTAI.SendSignal
struct SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B  : public StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7
{
	// System.String BTAI.SendSignal::signal
	String_t* ___signal_4;
	// System.Single BTAI.SendSignal::time
	float ___time_5;
	// System.Boolean BTAI.SendSignal::fired
	bool ___fired_6;
	// System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal> BTAI.SendSignal::listeners
	List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* ___listeners_7;
};
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
// BTAI.BTNode[]
struct BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46  : public RuntimeArray
{
	ALIGN_FIELD (8) BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* m_Items[1];

	inline BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// BTAI.SendSignal[]
struct SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8  : public RuntimeArray
{
	ALIGN_FIELD (8) SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* m_Items[1];

	inline SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* value)
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


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Animator::GetBehaviours<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Animator_GetBehaviours_TisRuntimeObject_mE19F9DC5C51E268E5D2B12C39DF77D1450DB4B7D_gshared (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void BTAI.Branch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Branch__ctor_mFC4D30AF462D95F876DE85C2237EF1249FCB2525 (Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<BTAI.BTNode>::get_Count()
inline int32_t List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<BTAI.BTNode>::get_Item(System.Int32)
inline BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0 (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* (*) (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<BTAI.BTNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49 (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* __this, int32_t ___index0, BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B*, int32_t, BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void BTAI.BTNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9 (BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.Generic.IEnumerator`1<BTAI.BTState>>::Invoke()
inline RuntimeObject* Func_1_Invoke_m69B3266D92178A460E2FE8ED59FDDE75F4EC744B_inline (Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void BTAI.Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0 (Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6* __this, const RuntimeMethod* method) ;
// BTAI.BTState BTAI.Block::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_Tick_m76C076025E87ABBE558E9847A83B93E0561D70D0 (Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// BTAI.Branch BTAI.Branch::OpenBranch(BTAI.BTNode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3* Branch_OpenBranch_m050AD6CC00D44492390EBBE41F1E1720EA95D218 (Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3* __this, BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* ___children0, const RuntimeMethod* method) ;
// System.Void BTAI.RandomSequence::PickNewChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSequence_PickNewChild_mD26C96837AC7CB66A7C8C940CEAE329CD82B7D62 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, int32_t ___stateID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void BTAI.SendSignal::Register(UnityEngine.Animator,System.String,BTAI.WaitForAnimatorSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_Register_m230A0057B6F67ECE4AEBE8A0FE7E643483327544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* ___node2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BTAI.SendSignal::SetFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_SetFalse_mE59FED8AAAF37A73CB98ED46B28012D07696DF3D (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal>::GetEnumerator()
inline Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07 (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC (*) (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BTAI.WaitForAnimatorSignal>::Dispose()
inline void Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140 (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<BTAI.WaitForAnimatorSignal>::get_Current()
inline WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_inline (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC* __this, const RuntimeMethod* method)
{
	return ((  WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* (*) (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BTAI.WaitForAnimatorSignal>::MoveNext()
inline bool Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Animator::GetBehaviours<BTAI.SendSignal>()
inline SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* Animator_GetBehaviours_TisSendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B_m43DD17689FC573718572AFF7482B77CEB2D57E68 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method)
{
	return ((  SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* (*) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, const RuntimeMethod*))Animator_GetBehaviours_TisRuntimeObject_mE19F9DC5C51E268E5D2B12C39DF77D1450DB4B7D_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal>::Add(T)
inline void List_1_Add_m88AE18CF2ED3CFD7882340E2D0EFA7F4998C49F4_inline (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* __this, WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12*, WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<BTAI.WaitForAnimatorSignal>::.ctor()
inline void List_1__ctor_m124465136A80C1BADFA5C18B90E51F3792A9037A (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BTAI.Selector::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector__ctor_m204664A00C23AB07613FCB9E9EADD0852B2183F2 (Selector_t535F5A55AF5880CFAA6A93C16C36C8EBA5498592* __this, bool ___shuffle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* V_2 = NULL;
	{
		// public Selector(bool shuffle)
		Branch__ctor_mFC4D30AF462D95F876DE85C2237EF1249FCB2525(__this, NULL);
		// if (shuffle)
		bool L_0 = ___shuffle0;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// var n = children.Count;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_1 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_2;
		L_2 = List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline(L_1, List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_005d;
	}

IL_0017:
	{
		// n--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// var k = Mathf.FloorToInt(Random.value * (n + 1));
		float L_4;
		L_4 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_add(L_5, 1))))), NULL);
		V_1 = L_6;
		// var value = children[k];
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_7 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_8 = V_1;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_9;
		L_9 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_7, L_8, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		V_2 = L_9;
		// children[k] = children[n];
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_10 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_11 = V_1;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_12 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_13 = V_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_14;
		L_14 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_12, L_13, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49(L_10, L_11, L_14, List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49_RuntimeMethod_var);
		// children[n] = value;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_15 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_16 = V_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_17 = V_2;
		List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49(L_15, L_16, L_17, List_1_set_Item_m74E786F8DDB7BBA5690B45C17D53F3FC45FBFB49_RuntimeMethod_var);
	}

IL_005d:
	{
		// while (n > 1)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			goto IL_0017;
		}
	}

IL_0061:
	{
		// }
		return;
	}
}
// BTAI.BTState BTAI.Selector::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Selector_Tick_m1039C22D8CC1AD55D3AE1A957986C559B8887D21 (Selector_t535F5A55AF5880CFAA6A93C16C36C8EBA5498592* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var childState = children[activeChild].Tick();
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_0 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_1 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_2;
		L_2 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_0, L_1, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* BTAI.BTState BTAI.BTNode::Tick() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0066;
			}
		}
	}
	{
		goto IL_006f;
	}

IL_002f:
	{
		// activeChild = 0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = 0;
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0038:
	{
		// activeChild++;
		int32_t L_5 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (activeChild == children.Count)
		int32_t L_6 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_7 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_8;
		L_8 = List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline(L_7, List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0062;
		}
	}
	{
		// activeChild = 0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = 0;
		// return BTState.Failure;
		return (int32_t)(0);
	}

IL_0062:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_0064:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_0066:
	{
		// activeChild = 0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = 0;
		// return BTState.Abort;
		return (int32_t)(3);
	}

IL_006f:
	{
		// throw new System.Exception("This should never happen, but clearly it has.");
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C3DA6EA93E2544CF8187A5A6F32A33007CDD9A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Selector_Tick_m1039C22D8CC1AD55D3AE1A957986C559B8887D21_RuntimeMethod_var)));
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
// System.Void BTAI.Action::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m716DF65B72FB5BD964C0CC0EA59EBA4350613EC9 (Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___fn0, const RuntimeMethod* method) 
{
	{
		// public Action(System.Action fn)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.fn = fn;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___fn0;
		__this->___fn_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fn_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void BTAI.Action::.ctor(System.Func`1<System.Collections.Generic.IEnumerator`1<BTAI.BTState>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m46D1F86BE3FD83F63128A309C66BD79AD44D60A0 (Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255* __this, Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60* ___coroutineFactory0, const RuntimeMethod* method) 
{
	{
		// public Action(System.Func<IEnumerator<BTState>> coroutineFactory)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.coroutineFactory = coroutineFactory;
		Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60* L_0 = ___coroutineFactory0;
		__this->___coroutineFactory_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutineFactory_1), (void*)L_0);
		// }
		return;
	}
}
// BTAI.BTState BTAI.Action::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Action_Tick_mA0F1E17B1B66B9A238B604410524038E9A9CBCA3 (Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF99D2634DF0E2A094E4CCE685A5E1F02E287DF0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (fn != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___fn_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// fn();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___fn_0;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0015:
	{
		// if (coroutine == null)
		RuntimeObject* L_2 = __this->___coroutine_2;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// coroutine = coroutineFactory();
		Func_1_tA11D8CEB7674E4B1928E7A2C863D18CE11DF7B60* L_3 = __this->___coroutineFactory_1;
		RuntimeObject* L_4;
		L_4 = Func_1_Invoke_m69B3266D92178A460E2FE8ED59FDDE75F4EC744B_inline(L_3, NULL);
		__this->___coroutine_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_2), (void*)L_4);
	}

IL_002e:
	{
		// if (!coroutine.MoveNext())
		RuntimeObject* L_5 = __this->___coroutine_2;
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0044;
		}
	}
	{
		// coroutine = null;
		__this->___coroutine_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_2), (void*)(RuntimeObject*)NULL);
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0044:
	{
		// var result = coroutine.Current;
		RuntimeObject* L_7 = __this->___coroutine_2;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<BTAI.BTState>::get_Current() */, IEnumerator_1_tF99D2634DF0E2A094E4CCE685A5E1F02E287DF0C_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
		// if (result == BTState.Continue)
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_0056:
	{
		// coroutine = null;
		__this->___coroutine_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_2), (void*)(RuntimeObject*)NULL);
		// return result;
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.String BTAI.Action::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Action_ToString_m2DC40EDE5D0658B1F6E6E1FF916B7B105D5D4612 (Action_tF0870DC10089E2AF5F5E69CD4F659684CD7AE255* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66AC71A1E84DB1FFB445C76019E3B5F439F51CCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Action : " + fn.Method.ToString();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___fn_0;
		MethodInfo_t* L_1;
		L_1 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral66AC71A1E84DB1FFB445C76019E3B5F439F51CCD, L_2, NULL);
		return L_3;
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
// System.Void BTAI.Condition::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition__ctor_mDB66353E977C3E6A1C5D94FA6B3492CF35743279 (Condition_t76FE17E90C7458B84D6016A78A1C028400074367* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn0, const RuntimeMethod* method) 
{
	{
		// public Condition(System.Func<bool> fn)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.fn = fn;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___fn0;
		__this->___fn_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fn_0), (void*)L_0);
		// }
		return;
	}
}
// BTAI.BTState BTAI.Condition::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Condition_Tick_m51C8880AB6D94C98C25B94C90E2DCEB850D80104 (Condition_t76FE17E90C7458B84D6016A78A1C028400074367* __this, const RuntimeMethod* method) 
{
	{
		// return fn() ? BTState.Success : BTState.Failure;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___fn_0;
		bool L_1;
		L_1 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		return (int32_t)(1);
	}
}
// System.String BTAI.Condition::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Condition_ToString_m6CB96ADA9F1D85DF4075BA2C938E05AAD5174857 (Condition_t76FE17E90C7458B84D6016A78A1C028400074367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral561E0D773EA98260CA6271C5A6263A0164F8D688);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Condition : " + fn.Method.ToString();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___fn_0;
		MethodInfo_t* L_1;
		L_1 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral561E0D773EA98260CA6271C5A6263A0164F8D688, L_2, NULL);
		return L_3;
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
// System.Void BTAI.ConditionalBranch::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalBranch__ctor_m339A004F7F20008C296AD441533CF2DAA4EF5454 (ConditionalBranch_tAF661C273B9ACE867F98FE019091D04110CEC3E7* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn0, const RuntimeMethod* method) 
{
	{
		// public ConditionalBranch(System.Func<bool> fn)
		Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0(__this, NULL);
		// this.fn = fn;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___fn0;
		__this->___fn_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fn_2), (void*)L_0);
		// }
		return;
	}
}
// BTAI.BTState BTAI.ConditionalBranch::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConditionalBranch_Tick_mCCCFFA6E9D245E860FFB18FCD62952DCB00C139C (ConditionalBranch_tAF661C273B9ACE867F98FE019091D04110CEC3E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!tested)
		bool L_0 = __this->___tested_3;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// tested = fn();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = __this->___fn_2;
		bool L_2;
		L_2 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_1, NULL);
		__this->___tested_3 = L_2;
	}

IL_0019:
	{
		// if (tested)
		bool L_3 = __this->___tested_3;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// var result = base.Tick();
		int32_t L_4;
		L_4 = Block_Tick_m76C076025E87ABBE558E9847A83B93E0561D70D0(__this, NULL);
		V_0 = L_4;
		// if (result == BTState.Continue)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_002e;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_002e:
	{
		// tested = false;
		__this->___tested_3 = (bool)0;
		// return result;
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0037:
	{
		// return BTState.Failure;
		return (int32_t)(0);
	}
}
// System.String BTAI.ConditionalBranch::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConditionalBranch_ToString_m4DD98149F0BB642AD74DCE34834C007DA2FDFDF3 (ConditionalBranch_tAF661C273B9ACE867F98FE019091D04110CEC3E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E823A844969471A2141EEC02122F7C4D0A3925A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "ConditionalBranch : " + fn.Method.ToString();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___fn_2;
		MethodInfo_t* L_1;
		L_1 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3E823A844969471A2141EEC02122F7C4D0A3925A, L_2, NULL);
		return L_3;
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
// System.Void BTAI.While::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void While__ctor_m3211DAE4D528FF19D30B3CCAE50D44D023004169 (While_t199EE73BA632AE06E69C8AA0B7E62CE8D283FB64* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn0, const RuntimeMethod* method) 
{
	{
		// public While(System.Func<bool> fn)
		Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0(__this, NULL);
		// this.fn = fn;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___fn0;
		__this->___fn_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fn_2), (void*)L_0);
		// }
		return;
	}
}
// BTAI.BTState BTAI.While::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t While_Tick_m3CA56E2A890548AEFF704D1207EA89598988B755 (While_t199EE73BA632AE06E69C8AA0B7E62CE8D283FB64* __this, const RuntimeMethod* method) 
{
	{
		// if (fn())
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___fn_2;
		bool L_1;
		L_1 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// base.Tick();
		int32_t L_2;
		L_2 = Block_Tick_m76C076025E87ABBE558E9847A83B93E0561D70D0(__this, NULL);
		goto IL_001e;
	}

IL_0016:
	{
		// ResetChildren();
		VirtualActionInvoker0::Invoke(6 /* System.Void BTAI.Branch::ResetChildren() */, __this);
		// return BTState.Failure;
		return (int32_t)(0);
	}

IL_001e:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}
}
// System.String BTAI.While::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* While_ToString_mE7D7F302928DE1F600EC684D139CDA44528E4BBB (While_t199EE73BA632AE06E69C8AA0B7E62CE8D283FB64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C984C43F3CA4C4894ED9FE401A6626B5BCFB72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "While : " + fn.Method.ToString();
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___fn_2;
		MethodInfo_t* L_1;
		L_1 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral28C984C43F3CA4C4894ED9FE401A6626B5BCFB72, L_2, NULL);
		return L_3;
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
// BTAI.BTState BTAI.Block::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_Tick_m76C076025E87ABBE558E9847A83B93E0561D70D0 (Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (children[activeChild].Tick())
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_0 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_1 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_2;
		L_2 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_0, L_1, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* BTAI.BTState BTAI.BTNode::Tick() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001b;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_001b:
	{
		// activeChild++;
		int32_t L_4 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (activeChild == children.Count)
		int32_t L_5 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_6 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_7;
		L_7 = List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline(L_6, List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0045;
		}
	}
	{
		// activeChild = 0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = 0;
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0045:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}
}
// System.Void BTAI.Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0 (Block_t0FD97A7F58768ABE6C6081147A9D9CEA918255B6* __this, const RuntimeMethod* method) 
{
	{
		Branch__ctor_mFC4D30AF462D95F876DE85C2237EF1249FCB2525(__this, NULL);
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
// BTAI.BTState BTAI.Root::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Root_Tick_m4A514D148909FFD221ABD383034700ED00A8B15E (Root_t8023A60F0BD06214427FD9BC5AA07991BAFE37E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (isTerminated) return BTState.Abort;
		bool L_0 = __this->___isTerminated_2;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (isTerminated) return BTState.Abort;
		return (int32_t)(3);
	}

IL_000a:
	{
		// switch (children[activeChild].Tick())
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_1 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_2 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_3;
		L_3 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_1, L_2, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* BTAI.BTState BTAI.BTNode::Tick() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_002d:
	{
		// isTerminated = true;
		__this->___isTerminated_2 = (bool)1;
		// return BTState.Abort;
		return (int32_t)(3);
	}

IL_0036:
	{
		// activeChild++;
		int32_t L_7 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if (activeChild == children.Count)
		int32_t L_8 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_9 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_10;
		L_10 = List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline(L_9, List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_000a;
		}
	}
	{
		// activeChild = 0;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = 0;
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.Void BTAI.Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m844473ABEE78325D14029CA45AD5465DC161EA87 (Root_t8023A60F0BD06214427FD9BC5AA07991BAFE37E3* __this, const RuntimeMethod* method) 
{
	{
		Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0(__this, NULL);
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
// System.Void BTAI.Repeat::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Repeat__ctor_m0053180BC6AE28E7F0AB259A51269483FC287A59 (Repeat_t118E7A4A4693550648D8504A2BFCB8A276D52FD8* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		// public int count = 1;
		__this->___count_2 = 1;
		// public Repeat(int count)
		Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0(__this, NULL);
		// this.count = count;
		int32_t L_0 = ___count0;
		__this->___count_2 = L_0;
		// }
		return;
	}
}
// BTAI.BTState BTAI.Repeat::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Repeat_Tick_mB90960CBCBDEDBEE013414FF44BD6CA2B45EB789 (Repeat_t118E7A4A4693550648D8504A2BFCB8A276D52FD8* __this, const RuntimeMethod* method) 
{
	{
		// if (count > 0 && currentCount < count)
		int32_t L_0 = __this->___count_2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = __this->___currentCount_3;
		int32_t L_2 = __this->___count_2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0049;
		}
	}
	{
		// var result = base.Tick();
		int32_t L_3;
		L_3 = Block_Tick_m76C076025E87ABBE558E9847A83B93E0561D70D0(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_0022:
	{
		// currentCount++;
		int32_t L_4 = __this->___currentCount_3;
		__this->___currentCount_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// if (currentCount == count)
		int32_t L_5 = __this->___currentCount_3;
		int32_t L_6 = __this->___count_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0047;
		}
	}
	{
		// currentCount = 0;
		__this->___currentCount_3 = 0;
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0047:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_0049:
	{
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.String BTAI.Repeat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Repeat_ToString_mAA11E33A281CDF461D3D9E36FD631E7DEBA72312 (Repeat_t118E7A4A4693550648D8504A2BFCB8A276D52FD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8E02A461072F25F58026328D593F9D8887AA8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Repeat Until : " + currentCount + " / " + count;
		int32_t* L_0 = (&__this->___currentCount_3);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		int32_t* L_2 = (&__this->___count_2);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralA8E02A461072F25F58026328D593F9D8887AA8D6, L_1, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_3, NULL);
		return L_4;
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
// System.Void BTAI.RandomSequence::.ctor(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSequence__ctor_m9D10E70D04917BACB4DFA4C089D483C352093CB4 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___weight0, const RuntimeMethod* method) 
{
	{
		// public RandomSequence(int[] weight = null)
		Block__ctor_mFB0748AC4EF4D169196C1BFA458969A532F41AD0(__this, NULL);
		// activeChild = -1;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = (-1);
		// m_Weight = weight;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___weight0;
		__this->___m_Weight_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Weight_2), (void*)L_0);
		// }
		return;
	}
}
// BTAI.Branch BTAI.RandomSequence::OpenBranch(BTAI.BTNode[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3* RandomSequence_OpenBranch_m140798C7A19074DC05E5B8C56B9D20B93D59F635 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* ___children0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// m_AddedWeight = new int[children.Length];
		BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* L_0 = ___children0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___m_AddedWeight_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AddedWeight_3), (void*)L_1);
		// for (int i = 0; i < children.Length; ++i)
		V_0 = 0;
		goto IL_0054;
	}

IL_0012:
	{
		// int weight = 0;
		V_1 = 0;
		// int previousWeight = 0;
		V_2 = 0;
		// if (m_Weight == null || m_Weight.Length <= i)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_Weight_2;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___m_Weight_2;
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) > ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}

IL_0029:
	{
		// weight = 1;
		V_1 = 1;
		goto IL_0036;
	}

IL_002d:
	{
		// weight = m_Weight[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_Weight_2;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
	}

IL_0036:
	{
		// if (i > 0)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// previousWeight = m_AddedWeight[i - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___m_AddedWeight_3;
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
	}

IL_0045:
	{
		// m_AddedWeight[i] = weight + previousWeight;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___m_AddedWeight_3;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, L_17)));
		// for (int i = 0; i < children.Length; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < children.Length; ++i)
		int32_t L_19 = V_0;
		BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* L_20 = ___children0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// return base.OpenBranch(children);
		BTNodeU5BU5D_tDF5ECBCF290EF2AFEF4FD37CA939C07B0D276D46* L_21 = ___children0;
		Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3* L_22;
		L_22 = Branch_OpenBranch_m050AD6CC00D44492390EBBE41F1E1720EA95D218(__this, L_21, NULL);
		return L_22;
	}
}
// BTAI.BTState BTAI.RandomSequence::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomSequence_Tick_m115F59620394B3114B4B81916265C6106F217F36 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (activeChild == -1)
		int32_t L_0 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// PickNewChild();
		RandomSequence_PickNewChild_mD26C96837AC7CB66A7C8C940CEAE329CD82B7D62(__this, NULL);
	}

IL_000f:
	{
		// var result = children[activeChild].Tick();
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_1 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_2 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0;
		BTNode_tEB5E519F9011A758CE2E235C9360083F1B0AE37A* L_3;
		L_3 = List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0(L_1, L_2, List_1_get_Item_mCCCDD7A5BBD814B54BD7FE7F66A8B064E3512CE0_RuntimeMethod_var);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* BTAI.BTState BTAI.BTNode::Tick() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_002c;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_002c:
	{
		// PickNewChild();
		RandomSequence_PickNewChild_mD26C96837AC7CB66A7C8C940CEAE329CD82B7D62(__this, NULL);
		// return result;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void BTAI.RandomSequence::PickNewChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSequence_PickNewChild_mD26C96837AC7CB66A7C8C940CEAE329CD82B7D62 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int choice = Random.Range(0, m_AddedWeight[m_AddedWeight.Length - 1]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_AddedWeight_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___m_AddedWeight_3;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < m_AddedWeight.Length; ++i)
		V_1 = 0;
		goto IL_0035;
	}

IL_001c:
	{
		// if (choice - m_AddedWeight[i] <= 0)
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___m_AddedWeight_3;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_9))) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// activeChild = i;
		int32_t L_10 = V_1;
		((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0 = L_10;
		// break;
		return;
	}

IL_0031:
	{
		// for (int i = 0; i < m_AddedWeight.Length; ++i)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < m_AddedWeight.Length; ++i)
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___m_AddedWeight_3;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.String BTAI.RandomSequence::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RandomSequence_ToString_m2D723E77B2E70F7A346EAF9728B68114E95BAE71 (RandomSequence_tB9C869F9E7B1D11846829203A6F0EA13C5348E10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF6143E07D7B3D76ADD97ADBBCA9BC24B4D78EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return "Random Sequence : " + activeChild + "/" + children.Count;
		int32_t* L_0 = (&((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___activeChild_0);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		List_1_tEB73F0C4F55F82760D53588232718FA9389E6A1B* L_2 = ((Branch_t4532E46FF9460D2F2F360893458584D3CC7E87E3*)__this)->___children_1;
		int32_t L_3;
		L_3 = List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_inline(L_2, List_1_get_Count_mDABEF74D928A936AA6E7A59CBE0DB1C8C329A45E_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral3EF6143E07D7B3D76ADD97ADBBCA9BC24B4D78EB, L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_4, NULL);
		return L_5;
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
// System.Void BTAI.Wait::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait__ctor_m33B91BE27E670A3B2019D05B44AF8E63C9F747E0 (Wait_t9FE7F023BBB8A88A723B5EB58C338DD6992ADBF6* __this, float ___seconds0, const RuntimeMethod* method) 
{
	{
		// float future = -1;
		__this->___future_1 = (-1.0f);
		// public Wait(float seconds)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.seconds = seconds;
		float L_0 = ___seconds0;
		__this->___seconds_0 = L_0;
		// }
		return;
	}
}
// BTAI.BTState BTAI.Wait::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wait_Tick_m848132F609C96368AB9AA6A5402F5CDFFDF30D69 (Wait_t9FE7F023BBB8A88A723B5EB58C338DD6992ADBF6* __this, const RuntimeMethod* method) 
{
	{
		// if (future < 0)
		float L_0 = __this->___future_1;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// future = Time.time + seconds;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___seconds_0;
		__this->___future_1 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_001f:
	{
		// if (Time.time >= future)
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_4 = __this->___future_1;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// future = -1;
		__this->___future_1 = (-1.0f);
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0039:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}
}
// System.String BTAI.Wait::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Wait_ToString_mCC3B37D3EE3FB65FA58524F3F828BEC7C67EA2D6 (Wait_t9FE7F023BBB8A88A723B5EB58C338DD6992ADBF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE24D1B69CCFE8082E7153DFF752EA0D4FDF2FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return "Wait : " + (future - Time.time) + " / " + seconds;
		float L_0 = __this->___future_1;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		float* L_3 = (&__this->___seconds_0);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral1AE24D1B69CCFE8082E7153DFF752EA0D4FDF2FF, L_2, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_4, NULL);
		return L_5;
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
// System.Void BTAI.Trigger::.ctor(UnityEngine.Animator,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger__ctor_m2091AE53B939FEADDFB18164D6266790376914B5 (Trigger_t19C418566CF60FA64781464BF4AEDE47069BD9C0* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, bool ___set2, const RuntimeMethod* method) 
{
	{
		// bool set = true;
		__this->___set_3 = (bool)1;
		// public Trigger(Animator animator, string name, bool set = true)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.id = Animator.StringToHash(name);
		String_t* L_0 = ___name1;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		__this->___id_1 = L_1;
		// this.animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator0;
		__this->___animator_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_0), (void*)L_2);
		// this.triggerName = name;
		String_t* L_3 = ___name1;
		__this->___triggerName_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triggerName_2), (void*)L_3);
		// this.set = set;
		bool L_4 = ___set2;
		__this->___set_3 = L_4;
		// }
		return;
	}
}
// BTAI.BTState BTAI.Trigger::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Trigger_Tick_m40C95FE18857220D4D1FBC5BA1258DDAEBDA52B1 (Trigger_t19C418566CF60FA64781464BF4AEDE47069BD9C0* __this, const RuntimeMethod* method) 
{
	{
		// if (set)
		bool L_0 = __this->___set_3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// animator.SetTrigger(id);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_0;
		int32_t L_2 = __this->___id_1;
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_1, L_2, NULL);
		goto IL_002c;
	}

IL_001b:
	{
		// animator.ResetTrigger(id);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_0;
		int32_t L_4 = __this->___id_1;
		Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011(L_3, L_4, NULL);
	}

IL_002c:
	{
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.String BTAI.Trigger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Trigger_ToString_mA8BE8C7F98A0E58BAE1C78EA4B2B6D59E0A59CF6 (Trigger_t19C418566CF60FA64781464BF4AEDE47069BD9C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875F7B7E3C4289918BF6DE6C19FE7E2F91FE2910);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Trigger : " + triggerName;
		String_t* L_0 = __this->___triggerName_2;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875F7B7E3C4289918BF6DE6C19FE7E2F91FE2910, L_0, NULL);
		return L_1;
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
// System.Void BTAI.SetBool::.ctor(UnityEngine.Animator,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetBool__ctor_m984BEC9973C7F7CA65EB5DE44D4C81E8C5575842 (SetBool_tE46D165EBC4CC6DDCCF480D0BF2C78506F4B62FB* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, bool ___value2, const RuntimeMethod* method) 
{
	{
		// public SetBool(Animator animator, string name, bool value)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.id = Animator.StringToHash(name);
		String_t* L_0 = ___name1;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		__this->___id_1 = L_1;
		// this.animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator0;
		__this->___animator_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_0), (void*)L_2);
		// this.value = value;
		bool L_3 = ___value2;
		__this->___value_2 = L_3;
		// this.triggerName = name;
		String_t* L_4 = ___name1;
		__this->___triggerName_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triggerName_3), (void*)L_4);
		// }
		return;
	}
}
// BTAI.BTState BTAI.SetBool::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SetBool_Tick_mE27B7739ED0AF3375BB88D23A3C2B6AA4F224BCC (SetBool_tE46D165EBC4CC6DDCCF480D0BF2C78506F4B62FB* __this, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(id, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_0;
		int32_t L_1 = __this->___id_1;
		bool L_2 = __this->___value_2;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_0, L_1, L_2, NULL);
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.String BTAI.SetBool::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetBool_ToString_m546FC48F45557CA78B07B311690C6139DDFC065E (SetBool_tE46D165EBC4CC6DDCCF480D0BF2C78506F4B62FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A01CBB9410C62425A25771024163589FC05758);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "SetBool : " + triggerName + " = " + value.ToString();
		String_t* L_0 = __this->___triggerName_3;
		bool* L_1 = (&__this->___value_2);
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralD8A01CBB9410C62425A25771024163589FC05758, L_0, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_2, NULL);
		return L_3;
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
// System.Void BTAI.WaitForAnimatorState::.ctor(UnityEngine.Animator,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForAnimatorState__ctor_mC741C0D35220EAC6B6F9EF862EBFA5BBF6581B36 (WaitForAnimatorState_tC55AAD9C3BBB603985900954BCE3467BC0329E88* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, int32_t ___layer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88528BF215E676F04A08CD93DAA9876CE2BDB8E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WaitForAnimatorState(Animator animator, string name, int layer = 0)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.id = Animator.StringToHash(name);
		String_t* L_0 = ___name1;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		__this->___id_1 = L_1;
		// if (!animator.HasState(layer, this.id))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___animator0;
		int32_t L_3 = ___layer2;
		int32_t L_4 = __this->___id_1;
		bool L_5;
		L_5 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("The animator does not have state: " + name);
		String_t* L_6 = ___name1;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral88528BF215E676F04A08CD93DAA9876CE2BDB8E0, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_7, NULL);
	}

IL_0031:
	{
		// this.animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = ___animator0;
		__this->___animator_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_0), (void*)L_8);
		// this.layer = layer;
		int32_t L_9 = ___layer2;
		__this->___layer_2 = L_9;
		// this.stateName = name;
		String_t* L_10 = ___name1;
		__this->___stateName_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateName_3), (void*)L_10);
		// }
		return;
	}
}
// BTAI.BTState BTAI.WaitForAnimatorState::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitForAnimatorState_Tick_mB3F6C02975A645717336208EB99866845356583A (WaitForAnimatorState_tC55AAD9C3BBB603985900954BCE3467BC0329E88* __this, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var state = animator.GetCurrentAnimatorStateInfo(layer);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_0;
		int32_t L_1 = __this->___layer_2;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, L_1, NULL);
		V_0 = L_2;
		// if (state.fullPathHash == this.id || state.shortNameHash == this.id)
		int32_t L_3;
		L_3 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F((&V_0), NULL);
		int32_t L_4 = __this->___id_1;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5;
		L_5 = AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004((&V_0), NULL);
		int32_t L_6 = __this->___id_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		// return BTState.Success;
		return (int32_t)(1);
	}

IL_0032:
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}
}
// System.String BTAI.WaitForAnimatorState::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaitForAnimatorState_ToString_m8B9A5946947FCD8E033E0504A2CC7B7E1BF02F29 (WaitForAnimatorState_tC55AAD9C3BBB603985900954BCE3467BC0329E88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D36844D14058C4B64A9E62DE39422B72CC457B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Wait For State : " + stateName;
		String_t* L_0 = __this->___stateName_3;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D36844D14058C4B64A9E62DE39422B72CC457B3, L_0, NULL);
		return L_1;
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
// System.Void BTAI.SetActive::.ctor(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive__ctor_m782BD8C5DCA3BDA1B0E167FA8246938C24E58B80 (SetActive_t93A2F9E2FC91D92F3E4C992A55C27B559FE050F8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, bool ___active1, const RuntimeMethod* method) 
{
	{
		// public SetActive(GameObject gameObject, bool active)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.gameObject = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		__this->___gameObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_0), (void*)L_0);
		// this.active = active;
		bool L_1 = ___active1;
		__this->___active_1 = L_1;
		// }
		return;
	}
}
// BTAI.BTState BTAI.SetActive::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SetActive_Tick_m795C6051B8A672EB7BDD83BA8FFA99123B37BD76 (SetActive_t93A2F9E2FC91D92F3E4C992A55C27B559FE050F8* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(this.active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_0;
		bool L_1 = __this->___active_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.String BTAI.SetActive::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetActive_ToString_m5B903FD6558D253CED741E53C416FBE18790EEDF (SetActive_t93A2F9E2FC91D92F3E4C992A55C27B559FE050F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868F9FD931D9979C5691B4A7A77254E129CFD737);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Set Active : " + gameObject.name + " = " + active;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool* L_2 = (&__this->___active_1);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral868F9FD931D9979C5691B4A7A77254E129CFD737, L_1, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_3, NULL);
		return L_4;
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
// System.Void BTAI.WaitForAnimatorSignal::.ctor(UnityEngine.Animator,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForAnimatorSignal__ctor_m8F55D099C96617FF07A081B521DCD9EA989BB18D (WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, String_t* ___state2, int32_t ___layer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88528BF215E676F04A08CD93DAA9876CE2BDB8E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WaitForAnimatorSignal(Animator animator, string name, string state, int layer = 0)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name1;
		__this->___name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_0);
		// this.id = Animator.StringToHash(name);
		String_t* L_1 = ___name1;
		int32_t L_2;
		L_2 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_1, NULL);
		__this->___id_2 = L_2;
		// if (!animator.HasState(layer, this.id))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = ___animator0;
		int32_t L_4 = ___layer3;
		int32_t L_5 = __this->___id_2;
		bool L_6;
		L_6 = Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.LogError("The animator does not have state: " + name);
		String_t* L_7 = ___name1;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral88528BF215E676F04A08CD93DAA9876CE2BDB8E0, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		return;
	}

IL_003a:
	{
		// SendSignal.Register(animator, name, this);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = ___animator0;
		String_t* L_10 = ___name1;
		SendSignal_Register_m230A0057B6F67ECE4AEBE8A0FE7E643483327544(L_9, L_10, __this, NULL);
		// }
		return;
	}
}
// BTAI.BTState BTAI.WaitForAnimatorSignal::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitForAnimatorSignal_Tick_mE16B14FC253BFDFC106DA42DFF1D50107451161F (WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* __this, const RuntimeMethod* method) 
{
	{
		// if (!isSet)
		bool L_0 = __this->___isSet_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return BTState.Continue;
		return (int32_t)(2);
	}

IL_000a:
	{
		// isSet = false;
		__this->___isSet_0 = (bool)0;
		// return BTState.Success;
		return (int32_t)(1);
	}
}
// System.String BTAI.WaitForAnimatorSignal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaitForAnimatorSignal_ToString_m9040EE1E881D2383BF23A7FE0119877C4AB2A5A5 (WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED40E6CD8893F0FC445984E698F7B5B29EA58D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Wait For Animator Signal : " + name;
		String_t* L_0 = __this->___name_1;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1ED40E6CD8893F0FC445984E698F7B5B29EA58D9, L_0, NULL);
		return L_1;
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
// BTAI.BTState BTAI.Terminate::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terminate_Tick_mC3AEC6498F5F98325871BE1B6E443BBCE69CE1FC (Terminate_t0F0CA234B405AC13847AED3A80CC47AF7E4FD5BD* __this, const RuntimeMethod* method) 
{
	{
		// return BTState.Abort;
		return (int32_t)(3);
	}
}
// System.Void BTAI.Terminate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terminate__ctor_mA373161DC850B90166DAFA45832F1F1D388D6A02 (Terminate_t0F0CA234B405AC13847AED3A80CC47AF7E4FD5BD* __this, const RuntimeMethod* method) 
{
	{
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
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
// System.Void BTAI.Log::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m55B5B1198C10989FCE89E23F7EADB3CE5CCED953 (Log_t8E3BD85BDA0ABFF0330B3AAADFADC3954AFA255B* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		// public Log(string msg)
		BTNode__ctor_m4EE39547116CF6F029E13D3C7A4971EFC62FF8A9(__this, NULL);
		// this.msg = msg;
		String_t* L_0 = ___msg0;
		__this->___msg_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_0), (void*)L_0);
		// }
		return;
	}
}
// BTAI.BTState BTAI.Log::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Log_Tick_mC8601BE010D53F25FC5005D03F3D6D0386EBEC1C (Log_t8E3BD85BDA0ABFF0330B3AAADFADC3954AFA255B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// return BTState.Success;
		return (int32_t)(1);
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
// System.Void BTAI.SendSignal::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_OnStateEnter_mA6D5CED156B2F11123F2A09DCB7A14D761D48EF9 (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		// fired = false;
		__this->___fired_6 = (bool)0;
		// SetFalse();
		SendSignal_SetFalse_mE59FED8AAAF37A73CB98ED46B28012D07696DF3D(__this, NULL);
		// }
		return;
	}
}
// System.Void BTAI.SendSignal::SetFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_SetFalse_mE59FED8AAAF37A73CB98ED46B28012D07696DF3D (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var n in listeners)
		List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* L_0 = __this->___listeners_7;
		Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC L_1;
		L_1 = List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07(L_0, List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140((&V_0), Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (var n in listeners)
				WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* L_2;
				L_2 = Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_inline((&V_0), Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_RuntimeMethod_var);
				// n.isSet = false;
				L_2->___isSet_0 = (bool)0;
			}

IL_001b_1:
			{
				// foreach (var n in listeners)
				bool L_3;
				L_3 = Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B((&V_0), Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void BTAI.SendSignal::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_OnStateExit_mA65D0E7569166BB9B4D2F8444EA01A8D98A6C751 (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		// SetFalse();
		SendSignal_SetFalse_mE59FED8AAAF37A73CB98ED46B28012D07696DF3D(__this, NULL);
		// }
		return;
	}
}
// System.Void BTAI.SendSignal::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_OnStateUpdate_m0B17B4D9F452A41CCD6C797E1AC4898F1B9AE0F0 (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!fired && stateInfo.normalizedTime >= time)
		bool L_0 = __this->___fired_6;
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		float L_1;
		L_1 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&___stateInfo1), NULL);
		float L_2 = __this->___time_5;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0052;
		}
	}
	{
		// foreach (var n in listeners)
		List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* L_3 = __this->___listeners_7;
		Enumerator_t7C1BFE51C4FE67BCB650459458FC827CDF2FCDDC L_4;
		L_4 = List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07(L_3, List_1_GetEnumerator_mD88596627DEE18885CADD968E9D3E5F1ECE68D07_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140((&V_0), Enumerator_Dispose_mD66F7C05CF950AAA7E145FA2DFE9A14ED1AFD140_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0025_1:
			{
				// foreach (var n in listeners)
				WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* L_5;
				L_5 = Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_inline((&V_0), Enumerator_get_Current_m3710B6FAC70B1DA804D2090CBE6F7C0B7E3D7DE9_RuntimeMethod_var);
				// n.isSet = true;
				L_5->___isSet_0 = (bool)1;
			}

IL_0032_1:
			{
				// foreach (var n in listeners)
				bool L_6;
				L_6 = Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B((&V_0), Enumerator_MoveNext_m6350DF3E767882797AD7D15EC480A9808A82667B_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// fired = true;
		__this->___fired_6 = (bool)1;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void BTAI.SendSignal::Register(UnityEngine.Animator,System.String,BTAI.WaitForAnimatorSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal_Register_m230A0057B6F67ECE4AEBE8A0FE7E643483327544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, String_t* ___name1, WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* ___node2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Animator_GetBehaviours_TisSendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B_m43DD17689FC573718572AFF7482B77CEB2D57E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m88AE18CF2ED3CFD7882340E2D0EFA7F4998C49F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA7200A5679507EBF0AA08BE282BA0EAD27D565);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* V_1 = NULL;
	int32_t V_2 = 0;
	SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* V_3 = NULL;
	{
		// var found = false;
		V_0 = (bool)0;
		// foreach (var ss in animator.GetBehaviours<SendSignal>())
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___animator0;
		SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* L_1;
		L_1 = Animator_GetBehaviours_TisSendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B_m43DD17689FC573718572AFF7482B77CEB2D57E68(L_0, Animator_GetBehaviours_TisSendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B_m43DD17689FC573718572AFF7482B77CEB2D57E68_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_000d:
	{
		// foreach (var ss in animator.GetBehaviours<SendSignal>())
		SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (ss.signal == name)
		SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* L_6 = V_3;
		String_t* L_7 = L_6->___signal_4;
		String_t* L_8 = ___name1;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		// found = true;
		V_0 = (bool)1;
		// ss.listeners.Add(node);
		SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* L_10 = V_3;
		List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* L_11 = L_10->___listeners_7;
		WaitForAnimatorSignal_t2F077EC93203F54404F435886852132B8289CF44* L_12 = ___node2;
		List_1_Add_m88AE18CF2ED3CFD7882340E2D0EFA7F4998C49F4_inline(L_11, L_12, List_1_Add_m88AE18CF2ED3CFD7882340E2D0EFA7F4998C49F4_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0031:
	{
		// foreach (var ss in animator.GetBehaviours<SendSignal>())
		int32_t L_14 = V_2;
		SendSignalU5BU5D_tF441C027196D8DBB4A0E142A84A6EB4D0FCBC6F8* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// if (!found) Debug.LogError("Signal does not exist in animator: " + name);
		bool L_16 = V_0;
		if (L_16)
		{
			goto IL_004a;
		}
	}
	{
		// if (!found) Debug.LogError("Signal does not exist in animator: " + name);
		String_t* L_17 = ___name1;
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6AA7200A5679507EBF0AA08BE282BA0EAD27D565, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_18, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void BTAI.SendSignal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendSignal__ctor_m142E0D141ABDD68D67F2ECDBA80CEBE356043BFD (SendSignal_t8ACE3D3BFFA118FB080A48C4291FB9294F1C2A7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m124465136A80C1BADFA5C18B90E51F3792A9037A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string signal = "";
		__this->___signal_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signal_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// List<WaitForAnimatorSignal> listeners = new List<WaitForAnimatorSignal>();
		List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12* L_0 = (List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12*)il2cpp_codegen_object_new(List_1_t6733BCE4C7DC7AEEDE7EED15F1BDA1B50E047E12_il2cpp_TypeInfo_var);
		List_1__ctor_m124465136A80C1BADFA5C18B90E51F3792A9037A(L_0, List_1__ctor_m124465136A80C1BADFA5C18B90E51F3792A9037A_RuntimeMethod_var);
		__this->___listeners_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listeners_7), (void*)L_0);
		StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
