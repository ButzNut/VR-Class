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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// RootMotion.FinalIK.FBIKChain[]
struct FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8;
// RootMotion.FinalIK.IKEffector[]
struct IKEffectorU5BU5D_tF57EFF27A961FE1998A31AA3F57D994EB6C241C6;
// RootMotion.FinalIK.IKMappingBone[]
struct IKMappingBoneU5BU5D_t01BAA3AFD642B1EEE3E535045541FDD05453B342;
// RootMotion.FinalIK.IKMappingLimb[]
struct IKMappingLimbU5BU5D_tE6DBC6326781F6E37BE68B105CFC9A3DFF18DFA8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// RootMotion.FinalIK.FBBIKHeadEffector/BendBone[]
struct BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0;
// RootMotion.FinalIK.FBIKChain/ChildConstraint[]
struct ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A;
// RootMotion.FinalIK.IKMapping/BoneMap[]
struct BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7;
// RootMotion.FinalIK.IKSolver/Bone[]
struct BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593;
// RootMotion.FinalIK.IKSolver/Node[]
struct NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20;
// RootMotion.FinalIK.IKSolver/Point[]
struct PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB;
// RootMotion.FinalIK.IKSolverVR/VirtualBone[]
struct VirtualBoneU5BU5D_t48E9E7A2B983C44A2DF2BC6FF28EA36D99701846;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// RootMotion.BipedReferences
struct BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// RootMotion.FinalIK.FBBIKHeadEffector
struct FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545;
// RootMotion.FinalIK.FBIKChain
struct FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4;
// RootMotion.FinalIK.FullBodyBipedIK
struct FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// RootMotion.FinalIK.IKConstraintBend
struct IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B;
// RootMotion.FinalIK.IKEffector
struct IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6;
// RootMotion.FinalIK.IKMapping
struct IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B;
// RootMotion.FinalIK.IKMappingBone
struct IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3;
// RootMotion.FinalIK.IKMappingLimb
struct IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D;
// RootMotion.FinalIK.IKMappingSpine
struct IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB;
// RootMotion.FinalIK.IKSolver
struct IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623;
// RootMotion.FinalIK.IKSolverAim
struct IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789;
// RootMotion.FinalIK.IKSolverArm
struct IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D;
// RootMotion.FinalIK.IKSolverFullBody
struct IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42;
// RootMotion.FinalIK.IKSolverFullBodyBiped
struct IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55;
// RootMotion.FinalIK.IKSolverHeuristic
struct IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// RootMotion.FinalIK.RotationLimit
struct RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// RootMotion.FinalIK.FBBIKHeadEffector/BendBone
struct BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540;
// RootMotion.FinalIK.FBIKChain/ChildConstraint
struct ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E;
// RootMotion.FinalIK.IKMapping/BoneMap
struct BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1;
// RootMotion.FinalIK.IKSolver/Bone
struct Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF;
// RootMotion.FinalIK.IKSolver/IterationDelegate
struct IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633;
// RootMotion.FinalIK.IKSolver/Node
struct Node_tEA311F89C5AADCD12594674635F7F815659FBC9D;
// RootMotion.FinalIK.IKSolver/Point
struct Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9;
// RootMotion.FinalIK.IKSolver/UpdateDelegate
struct UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD;
// RootMotion.FinalIK.IKSolverVR/Arm
struct Arm_tBB9696204237D5FD5D679036101C50155CF19A30;
// RootMotion.FinalIK.IKSolverVR/BodyPart
struct BodyPart_tB2726BD211EB7928AEBF84532464087FD1B2E1E0;
// RootMotion.Warning/Logger
struct Logger_tC7A433B56305082BD52A69C362F663BDA1077283;

IL2CPP_EXTERN_C RuntimeClass* Arm_tBB9696204237D5FD5D679036101C50155CF19A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_tEA311F89C5AADCD12594674635F7F815659FBC9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003C237E1AE6B20D76E3EF01922F3C4B14CB89AD;
IL2CPP_EXTERN_C String_t* _stringLiteral05B2D4ED69B5B0A5CDA8E3D5EBAED9E019CE646A;
IL2CPP_EXTERN_C String_t* _stringLiteral0B265D0CCFBA84FD7853C1B0BADF564C5370CDDC;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC5F9E07256CEB29BD7A970F760C1F47CBE41A4;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF125BB0FD152BF942CE63C0BE4C8A876D74B13;
IL2CPP_EXTERN_C String_t* _stringLiteral1F030496F5D21BC17F56ACDA8166987A9C13FFB3;
IL2CPP_EXTERN_C String_t* _stringLiteral22149C45360800AB310D93BCEC3AC1E900FA9514;
IL2CPP_EXTERN_C String_t* _stringLiteral24E0222049ABA5831AF1853F7DB49426A3BC13D5;
IL2CPP_EXTERN_C String_t* _stringLiteral35B2171981CF45AC56351C9BC845E11D2ECC0729;
IL2CPP_EXTERN_C String_t* _stringLiteral38718D750B683930B90DB4E21D45F5EA4F183B04;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA5FFABC80E56E93A031E8E99F734B4449BCE61;
IL2CPP_EXTERN_C String_t* _stringLiteral3D73BF8F24BE964ABFC746323C52146317283172;
IL2CPP_EXTERN_C String_t* _stringLiteral44F812F3AE08C4DDF841DF13687AE61A68DD0DD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4A2E82E54F791F6334549A1813061B44BBAACD02;
IL2CPP_EXTERN_C String_t* _stringLiteral50537881996932127FF2A83C492BAE686D8D7004;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFFCF5227EC09E47B72E165CA45B12E3ABDA26E;
IL2CPP_EXTERN_C String_t* _stringLiteral903F60C83AC5275294F904A9EE73C0D6E8DB4692;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06;
IL2CPP_EXTERN_C String_t* _stringLiteralA428F53EDDB977F99780C0BF66D04B2FCFB5207F;
IL2CPP_EXTERN_C String_t* _stringLiteralA86B99D1E0E7B13F1AA0979E3A44920266A22783;
IL2CPP_EXTERN_C String_t* _stringLiteralB14C902CCAC9EC075B95BAA6219D1E59D49E02EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F2F0CE2D8508ABC4A66A38C43755F635032D6B;
IL2CPP_EXTERN_C String_t* _stringLiteralB32033EAEC7B44BF8B4EB4C040DE8A8232F488AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D28A1BEA13C3263BCBF4A669F43F6706D40D5A;
IL2CPP_EXTERN_C String_t* _stringLiteralBB892EA2A579961F5CFCEFC71BD8EF4088636A10;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2AB7BD7F05008E50A0DCCE7E02E1454222D194;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A05B045F39801BCD94A3E0F6F758BC4FD1AC72;
IL2CPP_EXTERN_C String_t* _stringLiteralC65F374C7AE2FC44025B7D2B43A0AB214A564E12;
IL2CPP_EXTERN_C String_t* _stringLiteralDA247EFB9785E4C0E515B762D81E70669E3F705C;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5;
IL2CPP_EXTERN_C String_t* _stringLiteralE501810477E1695C81CC21B9CDCE633337435963;
IL2CPP_EXTERN_C String_t* _stringLiteralE9AC12FDB5549DF07486E3EF14973197AA1893EF;
IL2CPP_EXTERN_C String_t* _stringLiteralEB09C8ABA65A52F7D39166F2BB3C954738DB13F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD664C018947432087F9E52A0DFB456C499DE3A;
IL2CPP_EXTERN_C String_t* _stringLiteralF18C3595BF0087E74E0319EB6871CBFB961A2ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralF3BE9A1FD69FCACC2A385B37A2A9E8EF6F75FF8A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0;
struct ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A;
struct BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7;
struct BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593;
struct NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20;
struct PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// RootMotion.BipedReferences
struct BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.BipedReferences::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_0;
	// UnityEngine.Transform RootMotion.BipedReferences::pelvis
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pelvis_1;
	// UnityEngine.Transform RootMotion.BipedReferences::leftThigh
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThigh_2;
	// UnityEngine.Transform RootMotion.BipedReferences::leftCalf
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftCalf_3;
	// UnityEngine.Transform RootMotion.BipedReferences::leftFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftFoot_4;
	// UnityEngine.Transform RootMotion.BipedReferences::rightThigh
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThigh_5;
	// UnityEngine.Transform RootMotion.BipedReferences::rightCalf
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightCalf_6;
	// UnityEngine.Transform RootMotion.BipedReferences::rightFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightFoot_7;
	// UnityEngine.Transform RootMotion.BipedReferences::leftUpperArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperArm_8;
	// UnityEngine.Transform RootMotion.BipedReferences::leftForearm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftForearm_9;
	// UnityEngine.Transform RootMotion.BipedReferences::leftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHand_10;
	// UnityEngine.Transform RootMotion.BipedReferences::rightUpperArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperArm_11;
	// UnityEngine.Transform RootMotion.BipedReferences::rightForearm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightForearm_12;
	// UnityEngine.Transform RootMotion.BipedReferences::rightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHand_13;
	// UnityEngine.Transform RootMotion.BipedReferences::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_14;
	// UnityEngine.Transform[] RootMotion.BipedReferences::spine
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spine_15;
	// UnityEngine.Transform[] RootMotion.BipedReferences::eyes
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___eyes_16;
};

// RootMotion.FinalIK.FBIKChain
struct FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4  : public RuntimeObject
{
	// System.Single RootMotion.FinalIK.FBIKChain::pin
	float ___pin_0;
	// System.Single RootMotion.FinalIK.FBIKChain::pull
	float ___pull_1;
	// System.Single RootMotion.FinalIK.FBIKChain::push
	float ___push_2;
	// System.Single RootMotion.FinalIK.FBIKChain::pushParent
	float ___pushParent_3;
	// System.Single RootMotion.FinalIK.FBIKChain::reach
	float ___reach_4;
	// RootMotion.FinalIK.FBIKChain/Smoothing RootMotion.FinalIK.FBIKChain::reachSmoothing
	int32_t ___reachSmoothing_5;
	// RootMotion.FinalIK.FBIKChain/Smoothing RootMotion.FinalIK.FBIKChain::pushSmoothing
	int32_t ___pushSmoothing_6;
	// RootMotion.FinalIK.IKSolver/Node[] RootMotion.FinalIK.FBIKChain::nodes
	NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* ___nodes_7;
	// System.Int32[] RootMotion.FinalIK.FBIKChain::children
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___children_8;
	// RootMotion.FinalIK.FBIKChain/ChildConstraint[] RootMotion.FinalIK.FBIKChain::childConstraints
	ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* ___childConstraints_9;
	// RootMotion.FinalIK.IKConstraintBend RootMotion.FinalIK.FBIKChain::bendConstraint
	IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* ___bendConstraint_10;
	// System.Single RootMotion.FinalIK.FBIKChain::rootLength
	float ___rootLength_11;
	// System.Boolean RootMotion.FinalIK.FBIKChain::initiated
	bool ___initiated_12;
	// System.Single RootMotion.FinalIK.FBIKChain::length
	float ___length_13;
	// System.Single RootMotion.FinalIK.FBIKChain::distance
	float ___distance_14;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.FBIKChain::p
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___p_15;
	// System.Single RootMotion.FinalIK.FBIKChain::reachForce
	float ___reachForce_16;
	// System.Single RootMotion.FinalIK.FBIKChain::pullParentSum
	float ___pullParentSum_17;
	// System.Single[] RootMotion.FinalIK.FBIKChain::crossFades
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___crossFades_18;
	// System.Single RootMotion.FinalIK.FBIKChain::sqrMag1
	float ___sqrMag1_19;
	// System.Single RootMotion.FinalIK.FBIKChain::sqrMag2
	float ___sqrMag2_20;
	// System.Single RootMotion.FinalIK.FBIKChain::sqrMagDif
	float ___sqrMagDif_21;
};

// RootMotion.FinalIK.IKMapping
struct IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B  : public RuntimeObject
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

// RootMotion.Warning
struct Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED  : public RuntimeObject
{
};

struct Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_StaticFields
{
	// System.Boolean RootMotion.Warning::logged
	bool ___logged_0;
};

// RootMotion.FinalIK.FBIKChain/ChildConstraint
struct ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E  : public RuntimeObject
{
	// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::pushElasticity
	float ___pushElasticity_0;
	// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::pullElasticity
	float ___pullElasticity_1;
	// UnityEngine.Transform RootMotion.FinalIK.FBIKChain/ChildConstraint::bone1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone1_2;
	// UnityEngine.Transform RootMotion.FinalIK.FBIKChain/ChildConstraint::bone2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone2_3;
	// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::<nominalDistance>k__BackingField
	float ___U3CnominalDistanceU3Ek__BackingField_4;
	// System.Boolean RootMotion.FinalIK.FBIKChain/ChildConstraint::<isRigid>k__BackingField
	bool ___U3CisRigidU3Ek__BackingField_5;
	// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::crossFade
	float ___crossFade_6;
	// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::inverseCrossFade
	float ___inverseCrossFade_7;
	// System.Int32 RootMotion.FinalIK.FBIKChain/ChildConstraint::chain1Index
	int32_t ___chain1Index_8;
	// System.Int32 RootMotion.FinalIK.FBIKChain/ChildConstraint::chain2Index
	int32_t ___chain2Index_9;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// RootMotion.FinalIK.IKMappingBone
struct IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3  : public IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B
{
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingBone::bone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone_0;
	// System.Single RootMotion.FinalIK.IKMappingBone::maintainRotationWeight
	float ___maintainRotationWeight_1;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingBone::boneMap
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___boneMap_2;
};

// RootMotion.FinalIK.IKMappingLimb
struct IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D  : public IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B
{
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingLimb::parentBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentBone_0;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingLimb::bone1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone1_1;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingLimb::bone2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone2_2;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingLimb::bone3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone3_3;
	// System.Single RootMotion.FinalIK.IKMappingLimb::maintainRotationWeight
	float ___maintainRotationWeight_4;
	// System.Single RootMotion.FinalIK.IKMappingLimb::weight
	float ___weight_5;
	// System.Boolean RootMotion.FinalIK.IKMappingLimb::updatePlaneRotations
	bool ___updatePlaneRotations_6;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingLimb::boneMapParent
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___boneMapParent_7;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingLimb::boneMap1
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___boneMap1_8;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingLimb::boneMap2
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___boneMap2_9;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingLimb::boneMap3
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___boneMap3_10;
};

// RootMotion.FinalIK.IKMappingSpine
struct IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB  : public IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B
{
	// UnityEngine.Transform[] RootMotion.FinalIK.IKMappingSpine::spineBones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spineBones_0;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingSpine::leftUpperArmBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperArmBone_1;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingSpine::rightUpperArmBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperArmBone_2;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingSpine::leftThighBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThighBone_3;
	// UnityEngine.Transform RootMotion.FinalIK.IKMappingSpine::rightThighBone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThighBone_4;
	// System.Int32 RootMotion.FinalIK.IKMappingSpine::iterations
	int32_t ___iterations_5;
	// System.Single RootMotion.FinalIK.IKMappingSpine::twistWeight
	float ___twistWeight_6;
	// System.Int32 RootMotion.FinalIK.IKMappingSpine::rootNodeIndex
	int32_t ___rootNodeIndex_7;
	// RootMotion.FinalIK.IKMapping/BoneMap[] RootMotion.FinalIK.IKMappingSpine::spine
	BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* ___spine_8;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingSpine::leftUpperArm
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___leftUpperArm_9;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingSpine::rightUpperArm
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___rightUpperArm_10;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingSpine::leftThigh
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___leftThigh_11;
	// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingSpine::rightThigh
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___rightThigh_12;
	// System.Boolean RootMotion.FinalIK.IKMappingSpine::useFABRIK
	bool ___useFABRIK_13;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// RootMotion.FinalIK.IKConstraintBend
struct IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.FinalIK.IKConstraintBend::bone1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone1_0;
	// UnityEngine.Transform RootMotion.FinalIK.IKConstraintBend::bone2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone2_1;
	// UnityEngine.Transform RootMotion.FinalIK.IKConstraintBend::bone3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone3_2;
	// UnityEngine.Transform RootMotion.FinalIK.IKConstraintBend::bendGoal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bendGoal_3;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_4;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKConstraintBend::rotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationOffset_5;
	// System.Single RootMotion.FinalIK.IKConstraintBend::weight
	float ___weight_6;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::defaultLocalDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultLocalDirection_7;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::defaultChildDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultChildDirection_8;
	// System.Single RootMotion.FinalIK.IKConstraintBend::clampF
	float ___clampF_9;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::chainIndex1
	int32_t ___chainIndex1_10;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::nodeIndex1
	int32_t ___nodeIndex1_11;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::chainIndex2
	int32_t ___chainIndex2_12;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::nodeIndex2
	int32_t ___nodeIndex2_13;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::chainIndex3
	int32_t ___chainIndex3_14;
	// System.Int32 RootMotion.FinalIK.IKConstraintBend::nodeIndex3
	int32_t ___nodeIndex3_15;
	// System.Boolean RootMotion.FinalIK.IKConstraintBend::<initiated>k__BackingField
	bool ___U3CinitiatedU3Ek__BackingField_16;
	// System.Boolean RootMotion.FinalIK.IKConstraintBend::limbOrientationsSet
	bool ___limbOrientationsSet_17;
};

// RootMotion.FinalIK.IKEffector
struct IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.FinalIK.IKEffector::bone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone_0;
	// UnityEngine.Transform RootMotion.FinalIK.IKEffector::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_1;
	// System.Single RootMotion.FinalIK.IKEffector::positionWeight
	float ___positionWeight_2;
	// System.Single RootMotion.FinalIK.IKEffector::rotationWeight
	float ___rotationWeight_3;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKEffector::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_4;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKEffector::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_5;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKEffector::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_6;
	// System.Boolean RootMotion.FinalIK.IKEffector::<isEndEffector>k__BackingField
	bool ___U3CisEndEffectorU3Ek__BackingField_7;
	// System.Boolean RootMotion.FinalIK.IKEffector::effectChildNodes
	bool ___effectChildNodes_8;
	// System.Single RootMotion.FinalIK.IKEffector::maintainRelativePositionWeight
	float ___maintainRelativePositionWeight_9;
	// UnityEngine.Transform[] RootMotion.FinalIK.IKEffector::childBones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___childBones_10;
	// UnityEngine.Transform RootMotion.FinalIK.IKEffector::planeBone1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone1_11;
	// UnityEngine.Transform RootMotion.FinalIK.IKEffector::planeBone2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone2_12;
	// UnityEngine.Transform RootMotion.FinalIK.IKEffector::planeBone3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone3_13;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKEffector::planeRotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___planeRotationOffset_14;
	// System.Single RootMotion.FinalIK.IKEffector::posW
	float ___posW_15;
	// System.Single RootMotion.FinalIK.IKEffector::rotW
	float ___rotW_16;
	// UnityEngine.Vector3[] RootMotion.FinalIK.IKEffector::localPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___localPositions_17;
	// System.Boolean RootMotion.FinalIK.IKEffector::usePlaneNodes
	bool ___usePlaneNodes_18;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKEffector::animatedPlaneRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___animatedPlaneRotation_19;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKEffector::animatedPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___animatedPosition_20;
	// System.Boolean RootMotion.FinalIK.IKEffector::firstUpdate
	bool ___firstUpdate_21;
	// System.Int32 RootMotion.FinalIK.IKEffector::chainIndex
	int32_t ___chainIndex_22;
	// System.Int32 RootMotion.FinalIK.IKEffector::nodeIndex
	int32_t ___nodeIndex_23;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane1ChainIndex
	int32_t ___plane1ChainIndex_24;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane1NodeIndex
	int32_t ___plane1NodeIndex_25;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane2ChainIndex
	int32_t ___plane2ChainIndex_26;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane2NodeIndex
	int32_t ___plane2NodeIndex_27;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane3ChainIndex
	int32_t ___plane3ChainIndex_28;
	// System.Int32 RootMotion.FinalIK.IKEffector::plane3NodeIndex
	int32_t ___plane3NodeIndex_29;
	// System.Int32[] RootMotion.FinalIK.IKEffector::childChainIndexes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___childChainIndexes_30;
	// System.Int32[] RootMotion.FinalIK.IKEffector::childNodeIndexes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___childNodeIndexes_31;
};

// RootMotion.FinalIK.IKSolver
struct IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623  : public RuntimeObject
{
	// System.Boolean RootMotion.FinalIK.IKSolver::executedInEditor
	bool ___executedInEditor_0;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver::IKPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___IKPosition_1;
	// System.Single RootMotion.FinalIK.IKSolver::IKPositionWeight
	float ___IKPositionWeight_2;
	// System.Boolean RootMotion.FinalIK.IKSolver::<initiated>k__BackingField
	bool ___U3CinitiatedU3Ek__BackingField_3;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPreInitiate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreInitiate_4;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPostInitiate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostInitiate_5;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPreUpdate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreUpdate_6;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPostUpdate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostUpdate_7;
	// System.Boolean RootMotion.FinalIK.IKSolver::firstInitiation
	bool ___firstInitiation_8;
	// UnityEngine.Transform RootMotion.FinalIK.IKSolver::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_9;
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

// RootMotion.FinalIK.FBBIKHeadEffector/BendBone
struct BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.FinalIK.FBBIKHeadEffector/BendBone::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector/BendBone::weight
	float ___weight_1;
	// UnityEngine.Quaternion RootMotion.FinalIK.FBBIKHeadEffector/BendBone::defaultLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultLocalRotation_2;
};

// RootMotion.FinalIK.IKMapping/BoneMap
struct BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.FinalIK.IKMapping/BoneMap::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::chainIndex
	int32_t ___chainIndex_1;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::nodeIndex
	int32_t ___nodeIndex_2;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::defaultLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultLocalPosition_3;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::defaultLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultLocalRotation_4;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::localSwingAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localSwingAxis_5;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::localTwistAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localTwistAxis_6;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::planePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planePosition_7;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::ikPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ikPosition_8;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::defaultLocalTargetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultLocalTargetRotation_9;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::maintainRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___maintainRotation_10;
	// System.Single RootMotion.FinalIK.IKMapping/BoneMap::length
	float ___length_11;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::animatedRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___animatedRotation_12;
	// UnityEngine.Transform RootMotion.FinalIK.IKMapping/BoneMap::planeBone1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone1_13;
	// UnityEngine.Transform RootMotion.FinalIK.IKMapping/BoneMap::planeBone2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone2_14;
	// UnityEngine.Transform RootMotion.FinalIK.IKMapping/BoneMap::planeBone3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone3_15;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane1ChainIndex
	int32_t ___plane1ChainIndex_16;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane1NodeIndex
	int32_t ___plane1NodeIndex_17;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane2ChainIndex
	int32_t ___plane2ChainIndex_18;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane2NodeIndex
	int32_t ___plane2NodeIndex_19;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane3ChainIndex
	int32_t ___plane3ChainIndex_20;
	// System.Int32 RootMotion.FinalIK.IKMapping/BoneMap::plane3NodeIndex
	int32_t ___plane3NodeIndex_21;
};

// RootMotion.FinalIK.IKSolver/Point
struct Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9  : public RuntimeObject
{
	// UnityEngine.Transform RootMotion.FinalIK.IKSolver/Point::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Single RootMotion.FinalIK.IKSolver/Point::weight
	float ___weight_1;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver/Point::solverPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___solverPosition_2;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolver/Point::solverRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___solverRotation_3;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver/Point::defaultLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultLocalPosition_4;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolver/Point::defaultLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultLocalRotation_5;
};

// RootMotion.FinalIK.IKSolverVR/BodyPart
struct BodyPart_tB2726BD211EB7928AEBF84532464087FD1B2E1E0  : public RuntimeObject
{
	// System.Single RootMotion.FinalIK.IKSolverVR/BodyPart::<sqrMag>k__BackingField
	float ___U3CsqrMagU3Ek__BackingField_0;
	// System.Single RootMotion.FinalIK.IKSolverVR/BodyPart::<mag>k__BackingField
	float ___U3CmagU3Ek__BackingField_1;
	// RootMotion.FinalIK.IKSolverVR/VirtualBone[] RootMotion.FinalIK.IKSolverVR/BodyPart::bones
	VirtualBoneU5BU5D_t48E9E7A2B983C44A2DF2BC6FF28EA36D99701846* ___bones_2;
	// System.Boolean RootMotion.FinalIK.IKSolverVR/BodyPart::initiated
	bool ___initiated_3;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/BodyPart::rootPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootPosition_4;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverVR/BodyPart::rootRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rootRotation_5;
	// System.Int32 RootMotion.FinalIK.IKSolverVR/BodyPart::index
	int32_t ___index_6;
	// System.Int32 RootMotion.FinalIK.IKSolverVR/BodyPart::LOD
	int32_t ___LOD_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// RootMotion.FinalIK.IKSolverArm
struct IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D  : public IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623
{
	// System.Single RootMotion.FinalIK.IKSolverArm::IKRotationWeight
	float ___IKRotationWeight_10;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverArm::IKRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___IKRotation_11;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::chest
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___chest_12;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::shoulder
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___shoulder_13;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::upperArm
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___upperArm_14;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::forearm
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___forearm_15;
	// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::hand
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* ___hand_16;
	// System.Boolean RootMotion.FinalIK.IKSolverArm::isLeft
	bool ___isLeft_17;
	// RootMotion.FinalIK.IKSolverVR/Arm RootMotion.FinalIK.IKSolverArm::arm
	Arm_tBB9696204237D5FD5D679036101C50155CF19A30* ___arm_18;
	// UnityEngine.Vector3[] RootMotion.FinalIK.IKSolverArm::positions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions_19;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.IKSolverArm::rotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___rotations_20;
};

// RootMotion.FinalIK.IKSolverFullBody
struct IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42  : public IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623
{
	// System.Int32 RootMotion.FinalIK.IKSolverFullBody::iterations
	int32_t ___iterations_10;
	// RootMotion.FinalIK.FBIKChain[] RootMotion.FinalIK.IKSolverFullBody::chain
	FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* ___chain_11;
	// RootMotion.FinalIK.IKEffector[] RootMotion.FinalIK.IKSolverFullBody::effectors
	IKEffectorU5BU5D_tF57EFF27A961FE1998A31AA3F57D994EB6C241C6* ___effectors_12;
	// RootMotion.FinalIK.IKMappingSpine RootMotion.FinalIK.IKSolverFullBody::spineMapping
	IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* ___spineMapping_13;
	// RootMotion.FinalIK.IKMappingBone[] RootMotion.FinalIK.IKSolverFullBody::boneMappings
	IKMappingBoneU5BU5D_t01BAA3AFD642B1EEE3E535045541FDD05453B342* ___boneMappings_14;
	// RootMotion.FinalIK.IKMappingLimb[] RootMotion.FinalIK.IKSolverFullBody::limbMappings
	IKMappingLimbU5BU5D_tE6DBC6326781F6E37BE68B105CFC9A3DFF18DFA8* ___limbMappings_15;
	// System.Boolean RootMotion.FinalIK.IKSolverFullBody::FABRIKPass
	bool ___FABRIKPass_16;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnPreRead
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreRead_17;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnPreSolve
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreSolve_18;
	// RootMotion.FinalIK.IKSolver/IterationDelegate RootMotion.FinalIK.IKSolverFullBody::OnPreIteration
	IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* ___OnPreIteration_19;
	// RootMotion.FinalIK.IKSolver/IterationDelegate RootMotion.FinalIK.IKSolverFullBody::OnPostIteration
	IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* ___OnPostIteration_20;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnPreBend
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreBend_21;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnPostSolve
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostSolve_22;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnStoreDefaultLocalState
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnStoreDefaultLocalState_23;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolverFullBody::OnFixTransforms
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnFixTransforms_24;
};

// RootMotion.FinalIK.IKSolverHeuristic
struct IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484  : public IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623
{
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverHeuristic::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_10;
	// System.Single RootMotion.FinalIK.IKSolverHeuristic::tolerance
	float ___tolerance_11;
	// System.Int32 RootMotion.FinalIK.IKSolverHeuristic::maxIterations
	int32_t ___maxIterations_12;
	// System.Boolean RootMotion.FinalIK.IKSolverHeuristic::useRotationLimits
	bool ___useRotationLimits_13;
	// System.Boolean RootMotion.FinalIK.IKSolverHeuristic::XY
	bool ___XY_14;
	// RootMotion.FinalIK.IKSolver/Bone[] RootMotion.FinalIK.IKSolverHeuristic::bones
	BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* ___bones_15;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverHeuristic::lastLocalDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastLocalDirection_16;
	// System.Single RootMotion.FinalIK.IKSolverHeuristic::chainLength
	float ___chainLength_17;
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

// RootMotion.FinalIK.IKSolver/Bone
struct Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF  : public Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9
{
	// System.Single RootMotion.FinalIK.IKSolver/Bone::length
	float ___length_6;
	// System.Single RootMotion.FinalIK.IKSolver/Bone::sqrMag
	float ___sqrMag_7;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver/Bone::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_8;
	// RootMotion.FinalIK.RotationLimit RootMotion.FinalIK.IKSolver/Bone::_rotationLimit
	RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* ____rotationLimit_9;
	// System.Boolean RootMotion.FinalIK.IKSolver/Bone::isLimited
	bool ___isLimited_10;
};

// RootMotion.FinalIK.IKSolver/Node
struct Node_tEA311F89C5AADCD12594674635F7F815659FBC9D  : public Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9
{
	// System.Single RootMotion.FinalIK.IKSolver/Node::length
	float ___length_6;
	// System.Single RootMotion.FinalIK.IKSolver/Node::effectorPositionWeight
	float ___effectorPositionWeight_7;
	// System.Single RootMotion.FinalIK.IKSolver/Node::effectorRotationWeight
	float ___effectorRotationWeight_8;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver/Node::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_9;
};

// RootMotion.FinalIK.IKSolverVR/Arm
struct Arm_tBB9696204237D5FD5D679036101C50155CF19A30  : public BodyPart_tB2726BD211EB7928AEBF84532464087FD1B2E1E0
{
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverVR/Arm::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_8;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::positionWeight
	float ___positionWeight_9;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::rotationWeight
	float ___rotationWeight_10;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::shoulderRotationWeight
	float ___shoulderRotationWeight_11;
	// RootMotion.FinalIK.IKSolverVR/Arm/ShoulderRotationMode RootMotion.FinalIK.IKSolverVR/Arm::shoulderRotationMode
	int32_t ___shoulderRotationMode_12;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::shoulderTwistWeight
	float ___shoulderTwistWeight_13;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::shoulderYawOffset
	float ___shoulderYawOffset_14;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::shoulderPitchOffset
	float ___shoulderPitchOffset_15;
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverVR/Arm::bendGoal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bendGoal_16;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::bendGoalWeight
	float ___bendGoalWeight_17;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::swivelOffset
	float ___swivelOffset_18;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::wristToPalmAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wristToPalmAxis_19;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::palmToThumbAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___palmToThumbAxis_20;
	// System.Single RootMotion.FinalIK.IKSolverVR/Arm::armLengthMlp
	float ___armLengthMlp_21;
	// UnityEngine.AnimationCurve RootMotion.FinalIK.IKSolverVR/Arm::stretchCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___stretchCurve_22;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::IKPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___IKPosition_23;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverVR/Arm::IKRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___IKRotation_24;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::bendDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bendDirection_25;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::handPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handPositionOffset_26;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::<position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField_27;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverVR/Arm::<rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrotationU3Ek__BackingField_28;
	// System.Boolean RootMotion.FinalIK.IKSolverVR/Arm::hasShoulder
	bool ___hasShoulder_29;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::chestForwardAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___chestForwardAxis_30;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::chestUpAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___chestUpAxis_31;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverVR/Arm::chestRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___chestRotation_32;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::chestForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___chestForward_33;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::chestUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___chestUp_34;
	// UnityEngine.Quaternion RootMotion.FinalIK.IKSolverVR/Arm::forearmRelToUpperArm
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forearmRelToUpperArm_35;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR/Arm::upperArmBendAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upperArmBendAxis_36;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RootMotion.FinalIK.IKSolverAim
struct IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789  : public IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484
{
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverAim::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_18;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_19;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::poleAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___poleAxis_20;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::polePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___polePosition_21;
	// System.Single RootMotion.FinalIK.IKSolverAim::poleWeight
	float ___poleWeight_22;
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverAim::poleTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___poleTarget_23;
	// System.Single RootMotion.FinalIK.IKSolverAim::clampWeight
	float ___clampWeight_24;
	// System.Int32 RootMotion.FinalIK.IKSolverAim::clampSmoothing
	int32_t ___clampSmoothing_25;
	// RootMotion.FinalIK.IKSolver/IterationDelegate RootMotion.FinalIK.IKSolverAim::OnPreIteration
	IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* ___OnPreIteration_26;
	// System.Single RootMotion.FinalIK.IKSolverAim::step
	float ___step_27;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::clampedIKPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clampedIKPosition_28;
	// RootMotion.FinalIK.RotationLimit RootMotion.FinalIK.IKSolverAim::transformLimit
	RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* ___transformLimit_29;
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverAim::lastTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lastTransform_30;
};

// RootMotion.FinalIK.IKSolverFullBodyBiped
struct IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55  : public IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42
{
	// UnityEngine.Transform RootMotion.FinalIK.IKSolverFullBodyBiped::rootNode
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rootNode_25;
	// System.Single RootMotion.FinalIK.IKSolverFullBodyBiped::spineStiffness
	float ___spineStiffness_26;
	// System.Single RootMotion.FinalIK.IKSolverFullBodyBiped::pullBodyVertical
	float ___pullBodyVertical_27;
	// System.Single RootMotion.FinalIK.IKSolverFullBodyBiped::pullBodyHorizontal
	float ___pullBodyHorizontal_28;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverFullBodyBiped::<pullBodyOffset>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpullBodyOffsetU3Ek__BackingField_29;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverFullBodyBiped::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_30;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RootMotion.FinalIK.IKSolver/IterationDelegate
struct IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633  : public MulticastDelegate_t
{
};

// RootMotion.FinalIK.IKSolver/UpdateDelegate
struct UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD  : public MulticastDelegate_t
{
};

// RootMotion.Warning/Logger
struct Logger_tC7A433B56305082BD52A69C362F663BDA1077283  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// RootMotion.FinalIK.FBBIKHeadEffector
struct FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.FinalIK.FullBodyBipedIK RootMotion.FinalIK.FBBIKHeadEffector::ik
	FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* ___ik_4;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::positionWeight
	float ___positionWeight_5;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::bodyWeight
	float ___bodyWeight_6;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::thighWeight
	float ___thighWeight_7;
	// System.Boolean RootMotion.FinalIK.FBBIKHeadEffector::handsPullBody
	bool ___handsPullBody_8;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::rotationWeight
	float ___rotationWeight_9;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::bodyClampWeight
	float ___bodyClampWeight_10;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::headClampWeight
	float ___headClampWeight_11;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::bendWeight
	float ___bendWeight_12;
	// RootMotion.FinalIK.FBBIKHeadEffector/BendBone[] RootMotion.FinalIK.FBBIKHeadEffector::bendBones
	BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* ___bendBones_13;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::CCDWeight
	float ___CCDWeight_14;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::roll
	float ___roll_15;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::damper
	float ___damper_16;
	// UnityEngine.Transform[] RootMotion.FinalIK.FBBIKHeadEffector::CCDBones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___CCDBones_17;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::postStretchWeight
	float ___postStretchWeight_18;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::maxStretch
	float ___maxStretch_19;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::stretchDamper
	float ___stretchDamper_20;
	// System.Boolean RootMotion.FinalIK.FBBIKHeadEffector::fixHead
	bool ___fixHead_21;
	// UnityEngine.Transform[] RootMotion.FinalIK.FBBIKHeadEffector::stretchBones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___stretchBones_22;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::chestDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___chestDirection_23;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::chestDirectionWeight
	float ___chestDirectionWeight_24;
	// UnityEngine.Transform[] RootMotion.FinalIK.FBBIKHeadEffector::chestBones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___chestBones_25;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.FBBIKHeadEffector::OnPostHeadEffectorFK
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostHeadEffectorFK_26;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_27;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::headToBody
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headToBody_28;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::shoulderCenterToHead
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shoulderCenterToHead_29;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::headToLeftThigh
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headToLeftThigh_30;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::headToRightThigh
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headToRightThigh_31;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::leftShoulderPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftShoulderPos_32;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::rightShoulderPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightShoulderPos_33;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::shoulderDist
	float ___shoulderDist_34;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::leftShoulderDist
	float ___leftShoulderDist_35;
	// System.Single RootMotion.FinalIK.FBBIKHeadEffector::rightShoulderDist
	float ___rightShoulderDist_36;
	// UnityEngine.Quaternion RootMotion.FinalIK.FBBIKHeadEffector::chestRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___chestRotation_37;
	// UnityEngine.Quaternion RootMotion.FinalIK.FBBIKHeadEffector::headRotationRelativeToRoot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___headRotationRelativeToRoot_38;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.FBBIKHeadEffector::ccdDefaultLocalRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___ccdDefaultLocalRotations_39;
	// UnityEngine.Vector3 RootMotion.FinalIK.FBBIKHeadEffector::headLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headLocalPosition_40;
	// UnityEngine.Quaternion RootMotion.FinalIK.FBBIKHeadEffector::headLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___headLocalRotation_41;
	// UnityEngine.Vector3[] RootMotion.FinalIK.FBBIKHeadEffector::stretchLocalPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___stretchLocalPositions_42;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.FBBIKHeadEffector::stretchLocalRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___stretchLocalRotations_43;
	// UnityEngine.Vector3[] RootMotion.FinalIK.FBBIKHeadEffector::chestLocalPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___chestLocalPositions_44;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.FBBIKHeadEffector::chestLocalRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___chestLocalRotations_45;
	// System.Int32 RootMotion.FinalIK.FBBIKHeadEffector::bendBonesCount
	int32_t ___bendBonesCount_46;
	// System.Int32 RootMotion.FinalIK.FBBIKHeadEffector::ccdBonesCount
	int32_t ___ccdBonesCount_47;
	// System.Int32 RootMotion.FinalIK.FBBIKHeadEffector::stretchBonesCount
	int32_t ___stretchBonesCount_48;
	// System.Int32 RootMotion.FinalIK.FBBIKHeadEffector::chestBonesCount
	int32_t ___chestBonesCount_49;
};

// RootMotion.FinalIK.RotationLimit
struct RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 RootMotion.FinalIK.RotationLimit::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_4;
	// UnityEngine.Quaternion RootMotion.FinalIK.RotationLimit::defaultLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultLocalRotation_5;
	// System.Boolean RootMotion.FinalIK.RotationLimit::<defaultLocalRotationOverride>k__BackingField
	bool ___U3CdefaultLocalRotationOverrideU3Ek__BackingField_6;
	// System.Boolean RootMotion.FinalIK.RotationLimit::initiated
	bool ___initiated_7;
	// System.Boolean RootMotion.FinalIK.RotationLimit::applicationQuit
	bool ___applicationQuit_8;
	// System.Boolean RootMotion.FinalIK.RotationLimit::defaultLocalRotationSet
	bool ___defaultLocalRotationSet_9;
};

// RootMotion.SolverManager
struct SolverManager_t622D4F561ECBEF2A4ACBA9452CB50B381C8ECAFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean RootMotion.SolverManager::fixTransforms
	bool ___fixTransforms_4;
	// UnityEngine.Animator RootMotion.SolverManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.Animation RootMotion.SolverManager::legacy
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___legacy_6;
	// System.Boolean RootMotion.SolverManager::updateFrame
	bool ___updateFrame_7;
	// System.Boolean RootMotion.SolverManager::componentInitiated
	bool ___componentInitiated_8;
	// System.Boolean RootMotion.SolverManager::skipSolverUpdate
	bool ___skipSolverUpdate_9;
};

// RootMotion.FinalIK.IK
struct IK_t8026AD64782C89DB3C8933F61F5E287C0542C4A1  : public SolverManager_t622D4F561ECBEF2A4ACBA9452CB50B381C8ECAFD
{
};

// RootMotion.FinalIK.FullBodyBipedIK
struct FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31  : public IK_t8026AD64782C89DB3C8933F61F5E287C0542C4A1
{
	// RootMotion.BipedReferences RootMotion.FinalIK.FullBodyBipedIK::references
	BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* ___references_10;
	// RootMotion.FinalIK.IKSolverFullBodyBiped RootMotion.FinalIK.FullBodyBipedIK::solver
	IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* ___solver_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// RootMotion.FinalIK.FBBIKHeadEffector/BendBone[]
struct BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0  : public RuntimeArray
{
	ALIGN_FIELD (8) BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* m_Items[1];

	inline BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
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
// RootMotion.FinalIK.IKSolver/Node[]
struct NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* m_Items[1];

	inline Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tEA311F89C5AADCD12594674635F7F815659FBC9D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tEA311F89C5AADCD12594674635F7F815659FBC9D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// RootMotion.FinalIK.FBIKChain/ChildConstraint[]
struct ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A  : public RuntimeArray
{
	ALIGN_FIELD (8) ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* m_Items[1];

	inline ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// RootMotion.FinalIK.FBIKChain[]
struct FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8  : public RuntimeArray
{
	ALIGN_FIELD (8) FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* m_Items[1];

	inline FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// RootMotion.FinalIK.IKMapping/BoneMap[]
struct BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* m_Items[1];

	inline BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RootMotion.FinalIK.IKSolver/Bone[]
struct BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593  : public RuntimeArray
{
	ALIGN_FIELD (8) Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* m_Items[1];

	inline Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* value)
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
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RootMotion.FinalIK.IKSolver/Point[]
struct PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB  : public RuntimeArray
{
	ALIGN_FIELD (8) Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* m_Items[1];

	inline Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void RootMotion.FinalIK.IKSolver/UpdateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971 (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/IterationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IterationDelegate__ctor_mCC7801F7424A5FD35398D44D33401DC377F06E0F (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnStoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone_StoreDefaultLocalState_mE0937615C838493CE9004D9A89C94A9A4F8BE5B4 (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone_FixTransforms_m7D17A3230D27A1ABEEDD44F33DFD0260EDC902B2 (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::ChestDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_ChestDirection_mFF5E8F1C37FF24D7AC462882170E3F4E6A43952C (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::SpineBend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_SpineBend_mA849B85EFC4F89E224697B7F6DBCDDC866448003 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::CCDPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_CCDPass_mE57B610718E32E11409237E1AB2D333B3355DE3C (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/UpdateDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.QuaTools::ClampRotation(UnityEngine.Quaternion,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaTools_ClampRotation_m893FB34571A5F98B3F689C72DF24A92A70F10813 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, float ___clampWeight1, int32_t ___clampSmoothing2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::Solve(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_Solve_m5545F453A38573513398E23D4C013C24F92F8115 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos21, float ___nominalDistance2, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKEffector RootMotion.FinalIK.IKSolverFullBodyBiped::get_leftShoulderEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* IKSolverFullBodyBiped_get_leftShoulderEffector_m5B500D488CCB816846DEF6F9920E55849E1FF17D (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::LerpSolverPosition(RootMotion.FinalIK.IKEffector,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* ___effector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___weight2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset3, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKEffector RootMotion.FinalIK.IKSolverFullBodyBiped::get_rightShoulderEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* IKSolverFullBodyBiped_get_rightShoulderEffector_m857EA0866A539F70708E4062B1053F3B0352AE4F (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.QuaTools::FromToRotation(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaTools_FromToRotation_m6E0FABD688435575CDF23358353774C589090B7C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKEffector RootMotion.FinalIK.IKSolverFullBodyBiped::get_bodyEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* IKSolverFullBodyBiped_get_bodyEffector_m453A029B8AD978266B390B3CBA2CA3A340526E85 (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverFullBodyBiped::get_pullBodyOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverFullBodyBiped_get_pullBodyOffset_mEED59ADEB0E0807409370A9CB4AE4A55B098FA65_inline (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKEffector RootMotion.FinalIK.IKSolverFullBodyBiped::get_leftThighEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* IKSolverFullBodyBiped_get_leftThighEffector_m16A228821AC6868B43FBACDBAF64E5FC7E805B10 (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKEffector RootMotion.FinalIK.IKSolverFullBodyBiped::get_rightThighEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* IKSolverFullBodyBiped_get_rightThighEffector_m8B07B53D3B8A827814412F74F22C411DA3434FF8 (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::PostStretching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_PostStretching_mD5555C0BF13710FE204BFD7DF0C0F45C7683806B (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.V3Tools::ClampDirection(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V3Tools_ClampDirection_mA45DE5CD033E81309F81F3F0EC3EBEC58C424856 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalDirection1, float ___clampWeight2, int32_t ___clampSmoothing3, bool* ___changed4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKSolver/Node RootMotion.FinalIK.IKEffector::GetNode(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* IKEffector_GetNode_m919ED6ABE94554CF56C517C1BB1C8FB1BFBD026E (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKConstraintBend::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend__ctor_m72A917EBEA90665F22C7AF2285A2B607122BD254 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::SetNodes(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SetNodes_m08ED7F11CADADACC12CD94DC30466F649B88B563 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___boneTransforms0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/Node::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m6718FD33145987A2A314DDE6E2909328CF2BB11D (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::CalculateBoneLengths(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_CalculateBoneLengths_m9E5B6FE72FA68F8D9DBB35B8D4510A4629E10795 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_Initiate_mC4E5A42D73C522A2ABDA74D314E29FB70C2B6B60 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKConstraintBend::SetBones(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_SetBones_m2AE368645B32687B38ECF7127F32E4E3A513CB18 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKConstraintBend::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_Initiate_mF76A726966AFB156FC34D2104A40E765341D63B2 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::OnPreSolve(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_OnPreSolve_m3295A32F8DCD2616C7BBFD695C5E079D3CC2899F (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void RootMotion.Warning::Log(System.String,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224 (String_t* ___message0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___context1, bool ___logInEditMode2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::Reach(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Reach_m28ECC07B03F77D5C813C4660DF09DDEE8A498B6D (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::Push(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_Push_m42C46C8250D2963DDCE5B60C03D739E6B286A084 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::SolveTrigonometric(RootMotion.FinalIK.IKSolverFullBody,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveTrigonometric_m5B82E5BD21024C232DE687304585D92FD3DFFDD2 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, bool ___calculateBendDirection1, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKConstraintBend::get_initiated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC_inline (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::GetDir(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_GetDir_m11B4BB5F8B732C273A1A7B1617BC4504A3A6D685 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::GetDirToBendPoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_GetDirToBendPoint_m36F8ED8C223B38886D12EFDF6344C6098168D66D (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bendDirection1, float ___directionMagnitude2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::Stage1(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Stage1_m5DD7EDFF631CC1FDEDA2407B5733C20EC6E43FFF (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::ForwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_ForwardReach_m2EC750D02885A9E635F8EE4F04C552A04CBB540A (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::SolveChildConstraints(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveChildConstraints_m4345CAD8F9B3200608AD67409CA50D5F0D97B0DF (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::SolveFABRIKJoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___length2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::BackwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_BackwardReach_m0A64E3B9546C7C6CFB276F7057966A64804B069F (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::SolveConstraintSystems(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveConstraintSystems_mB36E33EB105B1B6DB00BED2DBE28CE682109807F (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::Stage2(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Stage2_mBACA0B63045A39CB05D207FDE04B50C824B305F4 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain::SolveLinearConstraint(RootMotion.FinalIK.IKSolver/Node,RootMotion.FinalIK.IKSolver/Node,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveLinearConstraint_mA15FB9D92D2AC6F89234D0FD20F6516373AA64F8 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___node10, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___node21, float ___crossFade2, float ___distance3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::Solve(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_Solve_m61CDB2661D0492E74A1DBBCF2B4CE49E0F0155C7 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Int32 RootMotion.FinalIK.IKSolverFullBody::GetChainIndex(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKSolverFullBody_GetChainIndex_mC05A7048016E3C1AAE9677E022BE1BA16BC01F9C (IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::set_nominalDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildConstraint_set_nominalDistance_m73CB497B7A44C9218A892DBDAA4C4D8A881A6631_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::set_isRigid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildConstraint_set_isRigid_mFA046F0C6CFC2BC0C6BCB2D6D72B4E1B18FF2517_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.FBIKChain/ChildConstraint::get_isRigid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChildConstraint_get_isRigid_m03375CC788F744BE4FA7F0FABF6B1FE7374A49A7_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) ;
// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::get_nominalDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Warning/Logger::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline (Logger_tC7A433B56305082BD52A69C362F663BDA1077283* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverFullBody::GetChainAndNodeIndexes(UnityEngine.Transform,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4 (IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, int32_t* ___chainIndex1, int32_t* ___nodeIndex2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::OrthoToLimb(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_OrthoToLimb_m99759AE102DA2A152BC5091EA5593C2AF220D5DE (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::OrthoToBone1(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_OrthoToBone1_m81174AC5CEB2D94EF0FF79517A65BEA47B9999E4 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKConstraintBend::set_initiated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKConstraintBend_set_initiated_mC960BE5B19EAFC99129C859264C19316637A4D39_inline (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___tangent1, const RuntimeMethod* method) ;
// RootMotion.FinalIK.IKSolver/Node RootMotion.FinalIK.IKSolverFullBody::GetNode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76 (IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* __this, int32_t ___chainIndex0, int32_t ___nodeIndex1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKEffector::set_isEndEffector(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKEffector_set_isEndEffector_m825305CBB9F84ED87E204EF63991BAFD48FC2468_inline (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKEffector::GetPosition(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKEffector_GetPosition_m55E588081B50368B1BC5E6C7237007309BB81FD7 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___planeRotationOffset1, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKEffector::get_isEndEffector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKEffector_get_isEndEffector_m8CB821207AA2E57EE5A64ECBB7D967D783EE107C_inline (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.FinalIK.IKEffector::GetPlaneRotation(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IKEffector_GetPlaneRotation_m395BD094AC7408FFEBB45FF97F50E12A6A39CEF5 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap,RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalSwingAxis_m59A9A11DD0661E24E83E09FE0605B92571DD4AD6 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___bone10, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___bone21, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::UpdatePlane(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, bool ___rotation0, bool ___position1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::get_lastAnimatedTargetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoneMap_get_lastAnimatedTargetRotation_m688D98C7FF6DB426B48E3ED09B6F044F604049FC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.QuaTools::RotationToLocalSpace(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaTools_RotationToLocalSpace_m37DCBE1249C02133072879242A19F075FC6DC582 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___space0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::GetTargetRotation(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoneMap_GetTargetRotation_m371E186AE030CE104F59C33D1B146D3EAF421BBD (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::GetPlanePosition(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoneMap_GetPlanePosition_m8FB01D030902BFA24945F3021C8957A9D7EAC20D (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Swing(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Swing_m7FB6C7ABA38D5B80A5504618644534169006828A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___weight2, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKMapping/BoneMap::get_isNodeBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoneMap_get_isNodeBone_mD75B158BC5B6CF86FF6242C82CFA6A75FFC72BDA (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKMapping::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMapping_IsValid_mFF2010491110E822FF33C42D026EDE387D9C8628 (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::FixTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, bool ___position0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Initiate(UnityEngine.Transform,RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::MaintainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_MaintainRotation_mD7693BB7245BDCA8237842FAB5138AEAFE3DEC31 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToMaintain(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToMaintain_m9782F34990CAB767A66F943A8DA536D8602B92F6 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, float ___weight0, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKMapping::BoneIsValid(UnityEngine.Transform,RootMotion.FinalIK.IKSolver,System.String&,RootMotion.Warning/Logger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMapping_BoneIsValid_m8CCF86588D146836AD979F1536325A84D1F79176 (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone0, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver1, String_t** ___message2, Logger_tC7A433B56305082BD52A69C362F663BDA1077283* ___logger3, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMappingLimb::SetBones(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_SetBones_m0E08BD4EDF53F2BEEC3F6457E38B5A12E6A23F04 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentBone3, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetPlane(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone22, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone33, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalSwingAxis_mFA6313585175F52A410D3CD50B243AA4F143B465 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___swingTarget0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Swing(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Swing_mAB4A601818F4EB6B611D159324D3D65BCEB09DCC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___swingTarget0, float ___weight1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::FixToNode(RootMotion.FinalIK.IKSolverFullBody,System.Single,RootMotion.FinalIK.IKSolver/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_FixToNode_m634B758931B94FA518E906136B2C0D575C948584 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___fixNode2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToPlane(RootMotion.FinalIK.IKSolverFullBody,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToEffector(RootMotion.FinalIK.IKSolverFullBody,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToEffector_m55A227B2BCFD7FF0FE8A27198ECC3FB605172E4F (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMappingSpine::SetBones(UnityEngine.Transform[],UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_SetBones_m9FA7748D996BA6C9F7EBFEE8D3EBA2B3CB496E51 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spineBones0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperArmBone1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperArmBone2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThighBone3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThighBone4, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetIKPosition_m04FFD7715B14ABC280B3FD69E7F229C33A4B76B4 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLength(RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLength_mD16EAF16CA9991AC7BD1F449068F266DE8054D95 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___nextBone0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalTwistAxis(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalTwistAxis_mC59C9E3FB60FBA56CB1BD270AD8987E045DF892B (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___twistDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalDirection1, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKMappingSpine::UseFABRIK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMappingSpine_UseFABRIK_m8E815CBEC2AE8091690C3611524DBB85F05BAD4F (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMappingSpine::ForwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_ForwardReach_mD2BFF795AE99D62D3CBC32FD5CDCBB8024AACE3E (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMappingSpine::BackwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_BackwardReach_m2C69F0A51F16709E71C023068E85C0A24D18B07D (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMappingSpine::MapToSolverPositions(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_MapToSolverPositions_m2E17557CC931421353860C4403538BB2E235F3D9 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping::SolveFABRIKJoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKMapping_SolveFABRIKJoint_m6B880F03BFBF78C1004F184C292B7220E44E262C (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___length2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetToIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetToIKPosition_mB7B0650493B3EAD519E6F3B8E5D85196E59FA0D4 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Twist(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Twist_mBA98F54C266DD04A83E0845FCE0CE9C5F4CCBBF0 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___twistDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalDirection1, float ___weight2, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver::set_initiated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKSolver_set_initiated_m5E37F888F705B3E5238C6EA54A70E5022928D47B_inline (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver::Initiate(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_Initiate_m86CFC89AADD30E0396199398E858A737DB674466 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.IKSolver::get_initiated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7_inline (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Hierarchy::IsAncestor(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_IsAncestor_m0F86DF78830C8BA7BB9D1E2095590A2D635E04B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ancestor1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<RootMotion.FinalIK.RotationLimit>()
inline RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::get_transformAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::get_transformPoleAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_get_transformPoleAxis_mF50192DD044C88D2CA2B32F373B49F6F9B7A1095 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) ;
// RootMotion.FinalIK.RotationLimit RootMotion.FinalIK.IKSolver/Bone::get_rotationLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.RotationLimit::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationLimit_Disable_mB342EF44F0CCCF281F77169A33721A856E893B4E (RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_LogWarning_m003521FB5561B0E545804837BCAF32EA151ED9E6 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean RootMotion.FinalIK.RotationLimit::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RotationLimit_Apply_m9159A9138AAED151CE1ECCBD4AEF1EA019E7F617 (RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::GetClampedIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_GetClampedIKPosition_m81BCC5C3C79C263203F533180775436A5B12436C (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single RootMotion.FinalIK.IKSolverAim::GetAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKSolverAim_GetAngle_m02C5AF9EA398E09580D7D8A769809241C9294618 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/IterationDelegate::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_inline (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverAim::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_Solve_m7EF7C5CB197C879BC5D698BB418F0C5A18E96BBB (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverAim::RotateToTarget(UnityEngine.Vector3,RootMotion.FinalIK.IKSolver/Bone,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_RotateToTarget_m917ADA8DCF8FC8ED849CE81125208CDDAC157AFA (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* ___bone1, float ___weight2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverHeuristic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverHeuristic__ctor_m7E48119F73890D2996216F5A3F23DCBC170ADD19 (IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484* __this, const RuntimeMethod* method) ;
// UnityEngine.Object RootMotion.Hierarchy::ContainsDuplicate(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Hierarchy_ContainsDuplicate_mCCE3B783801171E39894D577BB2F94454282D19D (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___objects0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/Point::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver/Point::FixTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverArm::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Read_m9A990756BD9C89ABA38E48BAB7957F7A928ACC19 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverArm::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Solve_m5F2859303B0730404418EA05461FF6A665B58060 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverArm::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Write_m284E0C63460CC8012837207D367E55F7DEA3D652 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverVR/Arm::Solve(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arm_Solve_m5211C595304A17150600E9B7070D12E6FC1925BA (Arm_tBB9696204237D5FD5D679036101C50155CF19A30* __this, bool ___isLeft0, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverVR/BodyPart::Read(UnityEngine.Vector3[],UnityEngine.Quaternion[],System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPart_Read_m47B5DD9CC7663DAEEDEC1EF8DC81501CDFCAE831 (BodyPart_tB2726BD211EB7928AEBF84532464087FD1B2E1E0* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___rotations1, bool ___hasChest2, bool ___hasNeck3, bool ___hasShoulders4, bool ___hasToes5, bool ___hasLegs6, int32_t ___rootIndex7, int32_t ___index8, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverVR/Arm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arm__ctor_mFA6618D62F8F1B35E8715E2783D5AFA63109C25E (Arm_tBB9696204237D5FD5D679036101C50155CF19A30* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver__ctor_m96C6D17591BF2A748D0E092FE36BF9B1A2878892 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_Start_mE1C4D3E516D7B93849C419D2C6F73B88E6169292 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ik.solver.OnPreRead += OnPreRead;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_0 = __this->___ik_4;
		NullCheck(L_0);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_1 = L_0->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1;
		NullCheck(L_2);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_3 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_2)->___OnPreRead_17;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_4 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_4, __this, (intptr_t)((void*)FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_2)->___OnPreRead_17 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_5, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_2)->___OnPreRead_17), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_5, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnPreIteration += Iterate;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_6 = __this->___ik_4;
		NullCheck(L_6);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_7 = L_6->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_8 = L_7;
		NullCheck(L_8);
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_9 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_8)->___OnPreIteration_19;
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_10 = (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)il2cpp_codegen_object_new(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IterationDelegate__ctor_mCC7801F7424A5FD35398D44D33401DC377F06E0F(L_10, __this, (intptr_t)((void*)FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		NullCheck(L_8);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_8)->___OnPreIteration_19 = ((IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)CastclassSealed((RuntimeObject*)L_11, IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_8)->___OnPreIteration_19), (void*)((IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)CastclassSealed((RuntimeObject*)L_11, IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var)));
		// ik.solver.OnPostUpdate += OnPostUpdate;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_12 = __this->___ik_4;
		NullCheck(L_12);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_13 = L_12->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_14 = L_13;
		NullCheck(L_14);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_15 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_14)->___OnPostUpdate_7;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_16 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_16, __this, (intptr_t)((void*)FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C_RuntimeMethod_var), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_15, L_16, NULL);
		NullCheck(L_14);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_14)->___OnPostUpdate_7 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_17, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_14)->___OnPostUpdate_7), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_17, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnStoreDefaultLocalState += OnStoreDefaultLocalState;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_18 = __this->___ik_4;
		NullCheck(L_18);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_19 = L_18->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_20 = L_19;
		NullCheck(L_20);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_21 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_20)->___OnStoreDefaultLocalState_23;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_22 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_22, __this, (intptr_t)((void*)FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE_RuntimeMethod_var), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_21, L_22, NULL);
		NullCheck(L_20);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_20)->___OnStoreDefaultLocalState_23 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_23, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_20)->___OnStoreDefaultLocalState_23), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_23, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnFixTransforms += OnFixTransforms;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_24 = __this->___ik_4;
		NullCheck(L_24);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_25 = L_24->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_26 = L_25;
		NullCheck(L_26);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_27 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_26)->___OnFixTransforms_24;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_28 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_28, __this, (intptr_t)((void*)FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8_RuntimeMethod_var), NULL);
		Delegate_t* L_29;
		L_29 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_27, L_28, NULL);
		NullCheck(L_26);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_26)->___OnFixTransforms_24 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_29, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_26)->___OnFixTransforms_24), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_29, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// OnStoreDefaultLocalState();
		FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE(__this, NULL);
		// headRotationRelativeToRoot = Quaternion.Inverse(ik.references.root.rotation) * ik.references.head.rotation;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_30 = __this->___ik_4;
		NullCheck(L_30);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_31 = L_30->___references_10;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31->___root_0;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_33, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_35 = __this->___ik_4;
		NullCheck(L_35);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_36 = L_35->___references_10;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36->___head_14;
		NullCheck(L_37);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_37, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_34, L_38, NULL);
		__this->___headRotationRelativeToRoot_38 = L_39;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnStoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* V_0 = NULL;
	int32_t V_1 = 0;
	BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	{
		// foreach (BendBone bendBone in bendBones) {
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_0 = __this->___bendBones_13;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		// foreach (BendBone bendBone in bendBones) {
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (bendBone != null) bendBone.StoreDefaultLocalState();
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_5 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// if (bendBone != null) bendBone.StoreDefaultLocalState();
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_7 = V_2;
		NullCheck(L_7);
		BendBone_StoreDefaultLocalState_mE0937615C838493CE9004D9A89C94A9A4F8BE5B4(L_7, NULL);
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// foreach (BendBone bendBone in bendBones) {
		int32_t L_9 = V_1;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// ccdDefaultLocalRotations = new Quaternion[CCDBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->___CCDBones_17;
		NullCheck(L_11);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_12 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)));
		__this->___ccdDefaultLocalRotations_39 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ccdDefaultLocalRotations_39), (void*)L_12);
		// for (int i = 0; i < CCDBones.Length; i++) {
		V_4 = 0;
		goto IL_007c;
	}

IL_0044:
	{
		// if (CCDBones[i] != null) ccdDefaultLocalRotations[i] = CCDBones[i].localRotation;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = __this->___CCDBones_17;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		// if (CCDBones[i] != null) ccdDefaultLocalRotations[i] = CCDBones[i].localRotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_19 = __this->___ccdDefaultLocalRotations_39;
		int32_t L_20 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___CCDBones_17;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_25);
	}

IL_0075:
	{
		// for (int i = 0; i < CCDBones.Length; i++) {
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < CCDBones.Length; i++) {
		int32_t L_27 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = __this->___CCDBones_17;
		NullCheck(L_28);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_0044;
		}
	}
	{
		// headLocalPosition = ik.references.head.localPosition;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_30 = __this->___ik_4;
		NullCheck(L_30);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_31 = L_30->___references_10;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31->___head_14;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_32, NULL);
		__this->___headLocalPosition_40 = L_33;
		// headLocalRotation = ik.references.head.localRotation;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_34 = __this->___ik_4;
		NullCheck(L_34);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_35 = L_34->___references_10;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35->___head_14;
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_36, NULL);
		__this->___headLocalRotation_41 = L_37;
		// stretchLocalPositions = new Vector3[stretchBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_38 = __this->___stretchBones_22;
		NullCheck(L_38);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)));
		__this->___stretchLocalPositions_42 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stretchLocalPositions_42), (void*)L_39);
		// stretchLocalRotations = new Quaternion[stretchBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_40 = __this->___stretchBones_22;
		NullCheck(L_40);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_41 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)));
		__this->___stretchLocalRotations_43 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stretchLocalRotations_43), (void*)L_41);
		// for (int i = 0; i < stretchBones.Length; i++) {
		V_7 = 0;
		goto IL_0144;
	}

IL_00ef:
	{
		// if (stretchBones[i] != null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_42 = __this->___stretchBones_22;
		int32_t L_43 = V_7;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_013d;
		}
	}
	{
		// stretchLocalPositions[i] = stretchBones[i].localPosition;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = __this->___stretchLocalPositions_42;
		int32_t L_49 = V_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_50 = __this->___stretchBones_22;
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_53, NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		// stretchLocalRotations[i] = stretchBones[i].localRotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_55 = __this->___stretchLocalRotations_43;
		int32_t L_56 = V_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_57 = __this->___stretchBones_22;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_60, NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_61);
	}

IL_013d:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_62 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0144:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_63 = V_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_64 = __this->___stretchBones_22;
		NullCheck(L_64);
		V_9 = (bool)((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))))? 1 : 0);
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_00ef;
		}
	}
	{
		// chestLocalPositions = new Vector3[chestBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_66 = __this->___chestBones_25;
		NullCheck(L_66);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)));
		__this->___chestLocalPositions_44 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestLocalPositions_44), (void*)L_67);
		// chestLocalRotations = new Quaternion[chestBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_68 = __this->___chestBones_25;
		NullCheck(L_68);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_69 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)));
		__this->___chestLocalRotations_45 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestLocalRotations_45), (void*)L_69);
		// for (int i = 0; i < chestBones.Length; i++) {
		V_10 = 0;
		goto IL_01d6;
	}

IL_0181:
	{
		// if (chestBones[i] != null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_70 = __this->___chestBones_25;
		int32_t L_71 = V_10;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_73, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_74;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_01cf;
		}
	}
	{
		// chestLocalPositions[i] = chestBones[i].localPosition;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = __this->___chestLocalPositions_44;
		int32_t L_77 = V_10;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_78 = __this->___chestBones_25;
		int32_t L_79 = V_10;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_81, NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_82);
		// chestLocalRotations[i] = chestBones[i].localRotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_83 = __this->___chestLocalRotations_45;
		int32_t L_84 = V_10;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_85 = __this->___chestBones_25;
		int32_t L_86 = V_10;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_88, NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_89);
	}

IL_01cf:
	{
		// for (int i = 0; i < chestBones.Length; i++) {
		int32_t L_90 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01d6:
	{
		// for (int i = 0; i < chestBones.Length; i++) {
		int32_t L_91 = V_10;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_92 = __this->___chestBones_25;
		NullCheck(L_92);
		V_12 = (bool)((((int32_t)L_91) < ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length))))? 1 : 0);
		bool L_93 = V_12;
		if (L_93)
		{
			goto IL_0181;
		}
	}
	{
		// bendBonesCount = bendBones.Length;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_94 = __this->___bendBones_13;
		NullCheck(L_94);
		__this->___bendBonesCount_46 = ((int32_t)(((RuntimeArray*)L_94)->max_length));
		// ccdBonesCount = CCDBones.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_95 = __this->___CCDBones_17;
		NullCheck(L_95);
		__this->___ccdBonesCount_47 = ((int32_t)(((RuntimeArray*)L_95)->max_length));
		// stretchBonesCount = stretchBones.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_96 = __this->___stretchBones_22;
		NullCheck(L_96);
		__this->___stretchBonesCount_48 = ((int32_t)(((RuntimeArray*)L_96)->max_length));
		// chestBonesCount = chestBones.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_97 = __this->___chestBones_25;
		NullCheck(L_97);
		__this->___chestBonesCount_49 = ((int32_t)(((RuntimeArray*)L_97)->max_length));
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnFixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* V_1 = NULL;
	int32_t V_2 = 0;
	BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!enabled) return;
		goto IL_01a4;
	}

IL_0013:
	{
		// foreach (BendBone bendBone in bendBones) {
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_2 = __this->___bendBones_13;
		V_1 = L_2;
		V_2 = 0;
		goto IL_003a;
	}

IL_001f:
	{
		// foreach (BendBone bendBone in bendBones) {
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (bendBone != null) bendBone.FixTransforms();
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_7 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// if (bendBone != null) bendBone.FixTransforms();
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_9 = V_3;
		NullCheck(L_9);
		BendBone_FixTransforms_m7D17A3230D27A1ABEEDD44F33DFD0260EDC902B2(L_9, NULL);
	}

IL_0035:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003a:
	{
		// foreach (BendBone bendBone in bendBones) {
		int32_t L_11 = V_2;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// for (int i = 0; i < CCDBones.Length; i++) {
		V_5 = 0;
		goto IL_007e;
	}

IL_0045:
	{
		// if (CCDBones[i] != null) CCDBones[i].localRotation = ccdDefaultLocalRotations[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = __this->___CCDBones_17;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		// if (CCDBones[i] != null) CCDBones[i].localRotation = ccdDefaultLocalRotations[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_19 = __this->___CCDBones_17;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_23 = __this->___ccdDefaultLocalRotations_39;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_26, NULL);
	}

IL_0077:
	{
		// for (int i = 0; i < CCDBones.Length; i++) {
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < CCDBones.Length; i++) {
		int32_t L_28 = V_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_29 = __this->___CCDBones_17;
		NullCheck(L_29);
		V_7 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_7;
		if (L_30)
		{
			goto IL_0045;
		}
	}
	{
		// ik.references.head.localPosition = headLocalPosition;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_31 = __this->___ik_4;
		NullCheck(L_31);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_32 = L_31->___references_10;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = L_32->___head_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___headLocalPosition_40;
		NullCheck(L_33);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_33, L_34, NULL);
		// ik.references.head.localRotation = headLocalRotation;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_35 = __this->___ik_4;
		NullCheck(L_35);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_36 = L_35->___references_10;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36->___head_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = __this->___headLocalRotation_41;
		NullCheck(L_37);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_37, L_38, NULL);
		// for (int i = 0; i < stretchBones.Length; i++) {
		V_8 = 0;
		goto IL_0124;
	}

IL_00cd:
	{
		// if (stretchBones[i] != null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_39 = __this->___stretchBones_22;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_011d;
		}
	}
	{
		// stretchBones[i].localPosition = stretchLocalPositions[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_45 = __this->___stretchBones_22;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = __this->___stretchLocalPositions_42;
		int32_t L_50 = V_8;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_48);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_52, NULL);
		// stretchBones[i].localRotation = stretchLocalRotations[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_53 = __this->___stretchBones_22;
		int32_t L_54 = V_8;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_57 = __this->___stretchLocalRotations_43;
		int32_t L_58 = V_8;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_56);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_56, L_60, NULL);
	}

IL_011d:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0124:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_62 = V_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_63 = __this->___stretchBones_22;
		NullCheck(L_63);
		V_10 = (bool)((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length))))? 1 : 0);
		bool L_64 = V_10;
		if (L_64)
		{
			goto IL_00cd;
		}
	}
	{
		// for (int i = 0; i < chestBones.Length; i++) {
		V_11 = 0;
		goto IL_0192;
	}

IL_013b:
	{
		// if (chestBones[i] != null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_65 = __this->___chestBones_25;
		int32_t L_66 = V_11;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_69;
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_018b;
		}
	}
	{
		// chestBones[i].localPosition = chestLocalPositions[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_71 = __this->___chestBones_25;
		int32_t L_72 = V_11;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = __this->___chestLocalPositions_44;
		int32_t L_76 = V_11;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_74);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_74, L_78, NULL);
		// chestBones[i].localRotation = chestLocalRotations[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_79 = __this->___chestBones_25;
		int32_t L_80 = V_11;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_83 = __this->___chestLocalRotations_45;
		int32_t L_84 = V_11;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_82);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_82, L_86, NULL);
	}

IL_018b:
	{
		// for (int i = 0; i < chestBones.Length; i++) {
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0192:
	{
		// for (int i = 0; i < chestBones.Length; i++) {
		int32_t L_88 = V_11;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_89 = __this->___chestBones_25;
		NullCheck(L_89);
		V_13 = (bool)((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))))? 1 : 0);
		bool L_90 = V_13;
		if (L_90)
		{
			goto IL_013b;
		}
	}

IL_01a4:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnPreRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B11_0 = 0;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!enabled) return;
		goto IL_0311;
	}

IL_0013:
	{
		// if (!gameObject.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (!gameObject.activeInHierarchy) return;
		goto IL_0311;
	}

IL_002a:
	{
		// if (ik.solver.iterations == 0) return;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_5 = __this->___ik_4;
		NullCheck(L_5);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_6 = L_5->___solver_11;
		NullCheck(L_6);
		int32_t L_7 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_6)->___iterations_10;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// if (ik.solver.iterations == 0) return;
		goto IL_0311;
	}

IL_0046:
	{
		// ik.solver.FABRIKPass = handsPullBody;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_9 = __this->___ik_4;
		NullCheck(L_9);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_10 = L_9->___solver_11;
		bool L_11 = __this->___handsPullBody_8;
		NullCheck(L_10);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_10)->___FABRIKPass_16 = L_11;
		// if (bendBonesCount != bendBones.Length || ccdBonesCount != CCDBones.Length || stretchBonesCount != stretchBones.Length || chestBonesCount != chestBones.Length) OnStoreDefaultLocalState();
		int32_t L_12 = __this->___bendBonesCount_46;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_13 = __this->___bendBones_13;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_14 = __this->___ccdBonesCount_47;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___CCDBones_17;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_16 = __this->___stretchBonesCount_48;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = __this->___stretchBones_22;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_18 = __this->___chestBonesCount_49;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_19 = __this->___chestBones_25;
		NullCheck(L_19);
		G_B11_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B11_0 = 1;
	}

IL_00a2:
	{
		V_3 = (bool)G_B11_0;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		// if (bendBonesCount != bendBones.Length || ccdBonesCount != CCDBones.Length || stretchBonesCount != stretchBones.Length || chestBonesCount != chestBones.Length) OnStoreDefaultLocalState();
		FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE(__this, NULL);
	}

IL_00ad:
	{
		// ChestDirection();
		FBBIKHeadEffector_ChestDirection_mFF5E8F1C37FF24D7AC462882170E3F4E6A43952C(__this, NULL);
		// SpineBend ();
		FBBIKHeadEffector_SpineBend_mA849B85EFC4F89E224697B7F6DBCDDC866448003(__this, NULL);
		// CCDPass();
		FBBIKHeadEffector_CCDPass_mE57B610718E32E11409237E1AB2D333B3355DE3C(__this, NULL);
		// offset = transform.position - ik.references.head.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_23 = __this->___ik_4;
		NullCheck(L_23);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_24 = L_23->___references_10;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___head_14;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_26, NULL);
		__this->___offset_27 = L_27;
		// shoulderDist = Vector3.Distance(ik.references.leftUpperArm.position, ik.references.rightUpperArm.position);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_28 = __this->___ik_4;
		NullCheck(L_28);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_29 = L_28->___references_10;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___leftUpperArm_8;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_32 = __this->___ik_4;
		NullCheck(L_32);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_33 = L_32->___references_10;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___rightUpperArm_11;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36;
		L_36 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_31, L_35, NULL);
		__this->___shoulderDist_34 = L_36;
		// leftShoulderDist = Vector3.Distance(ik.references.head.position, ik.references.leftUpperArm.position);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_37 = __this->___ik_4;
		NullCheck(L_37);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_38 = L_37->___references_10;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = L_38->___head_14;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_41 = __this->___ik_4;
		NullCheck(L_41);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_42 = L_41->___references_10;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = L_42->___leftUpperArm_8;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45;
		L_45 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_40, L_44, NULL);
		__this->___leftShoulderDist_35 = L_45;
		// rightShoulderDist = Vector3.Distance(ik.references.head.position, ik.references.rightUpperArm.position);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_46 = __this->___ik_4;
		NullCheck(L_46);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_47 = L_46->___references_10;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = L_47->___head_14;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_50 = __this->___ik_4;
		NullCheck(L_50);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_51 = L_50->___references_10;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = L_51->___rightUpperArm_11;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54;
		L_54 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_49, L_53, NULL);
		__this->___rightShoulderDist_36 = L_54;
		// headToBody = ik.solver.rootNode.position - ik.references.head.position;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_55 = __this->___ik_4;
		NullCheck(L_55);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_56 = L_55->___solver_11;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = L_56->___rootNode_25;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_59 = __this->___ik_4;
		NullCheck(L_59);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_60 = L_59->___references_10;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = L_60->___head_14;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_58, L_62, NULL);
		__this->___headToBody_28 = L_63;
		// headToLeftThigh = ik.references.leftThigh.position - ik.references.head.position;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_64 = __this->___ik_4;
		NullCheck(L_64);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_65 = L_64->___references_10;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = L_65->___leftThigh_2;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_68 = __this->___ik_4;
		NullCheck(L_68);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_69 = L_68->___references_10;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = L_69->___head_14;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_67, L_71, NULL);
		__this->___headToLeftThigh_30 = L_72;
		// headToRightThigh = ik.references.rightThigh.position - ik.references.head.position;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_73 = __this->___ik_4;
		NullCheck(L_73);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_74 = L_73->___references_10;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = L_74->___rightThigh_5;
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_75, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_77 = __this->___ik_4;
		NullCheck(L_77);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_78 = L_77->___references_10;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = L_78->___head_14;
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_80, NULL);
		__this->___headToRightThigh_31 = L_81;
		// leftShoulderPos = ik.references.leftUpperArm.position + offset * bodyWeight;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_82 = __this->___ik_4;
		NullCheck(L_82);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_83 = L_82->___references_10;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = L_83->___leftUpperArm_8;
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->___offset_27;
		float L_87 = __this->___bodyWeight_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_86, L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_88, NULL);
		__this->___leftShoulderPos_32 = L_89;
		// rightShoulderPos = ik.references.rightUpperArm.position + offset * bodyWeight;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_90 = __this->___ik_4;
		NullCheck(L_90);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_91 = L_90->___references_10;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92 = L_91->___rightUpperArm_11;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = __this->___offset_27;
		float L_95 = __this->___bodyWeight_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_96, NULL);
		__this->___rightShoulderPos_33 = L_97;
		// chestRotation = Quaternion.LookRotation(ik.references.head.position - ik.references.leftUpperArm.position, ik.references.rightUpperArm.position - ik.references.leftUpperArm.position);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_98 = __this->___ik_4;
		NullCheck(L_98);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_99 = L_98->___references_10;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = L_99->___head_14;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_100, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_102 = __this->___ik_4;
		NullCheck(L_102);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_103 = L_102->___references_10;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104 = L_103->___leftUpperArm_8;
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_101, L_105, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_107 = __this->___ik_4;
		NullCheck(L_107);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_108 = L_107->___references_10;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = L_108->___rightUpperArm_11;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_111 = __this->___ik_4;
		NullCheck(L_111);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_112 = L_111->___references_10;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = L_112->___leftUpperArm_8;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_110, L_114, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_116;
		L_116 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_106, L_115, NULL);
		__this->___chestRotation_37 = L_116;
		// if (OnPostHeadEffectorFK != null) OnPostHeadEffectorFK ();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_117 = __this->___OnPostHeadEffectorFK_26;
		V_4 = (bool)((!(((RuntimeObject*)(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)L_117) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_118 = V_4;
		if (!L_118)
		{
			goto IL_0311;
		}
	}
	{
		// if (OnPostHeadEffectorFK != null) OnPostHeadEffectorFK ();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_119 = __this->___OnPostHeadEffectorFK_26;
		NullCheck(L_119);
		UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline(L_119, NULL);
	}

IL_0311:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::SpineBend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_SpineBend_mA849B85EFC4F89E224697B7F6DBCDDC866448003 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		// float w = bendWeight * ik.solver.IKPositionWeight;
		float L_0 = __this->___bendWeight_12;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_1 = __this->___ik_4;
		NullCheck(L_1);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1->___solver_11;
		NullCheck(L_2);
		float L_3 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_2)->___IKPositionWeight_2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_3));
		// if (w <= 0f) return;
		float L_4 = V_0;
		V_3 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// if (w <= 0f) return;
		goto IL_011a;
	}

IL_002d:
	{
		// if (bendBones.Length == 0) return;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_6 = __this->___bendBones_13;
		NullCheck(L_6);
		V_4 = (bool)((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// if (bendBones.Length == 0) return;
		goto IL_011a;
	}

IL_0042:
	{
		// Quaternion rotation = transform.rotation * Quaternion.Inverse(ik.references.root.rotation * headRotationRelativeToRoot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_10 = __this->___ik_4;
		NullCheck(L_10);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_11 = L_10->___references_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___root_0;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___headRotationRelativeToRoot_38;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_13, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_16, NULL);
		V_1 = L_17;
		// rotation = QuaTools.ClampRotation(rotation, bodyClampWeight, 2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		float L_19 = __this->___bodyClampWeight_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = QuaTools_ClampRotation_m893FB34571A5F98B3F689C72DF24A92A70F10813(L_18, L_19, 2, NULL);
		V_1 = L_20;
		// float step = 1f / bendBones.Length;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_21 = __this->___bendBones_13;
		NullCheck(L_21);
		V_2 = ((float)((1.0f)/((float)((int32_t)(((RuntimeArray*)L_21)->max_length)))));
		// for (int i = 0; i < bendBones.Length; i++) {
		V_5 = 0;
		goto IL_0108;
	}

IL_009b:
	{
		// if (bendBones[i].transform != null) {
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_22 = __this->___bendBones_13;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0101;
		}
	}
	{
		// bendBones[i].transform.rotation = Quaternion.Lerp(Quaternion.identity, rotation, step * bendBones[i].weight * w) * bendBones[i].transform.rotation;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_29 = __this->___bendBones_13;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = L_32->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_1;
		float L_36 = V_2;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_37 = __this->___bendBones_13;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		float L_41 = L_40->___weight_1;
		float L_42 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_34, L_35, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_36, L_41)), L_42)), NULL);
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_44 = __this->___bendBones_13;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = L_47->___transform_0;
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_43, L_49, NULL);
		NullCheck(L_33);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_33, L_50, NULL);
	}

IL_0101:
	{
		// for (int i = 0; i < bendBones.Length; i++) {
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0108:
	{
		// for (int i = 0; i < bendBones.Length; i++) {
		int32_t L_52 = V_5;
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_53 = __this->___bendBones_13;
		NullCheck(L_53);
		V_7 = (bool)((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))))? 1 : 0);
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_009b;
		}
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::CCDPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_CCDPass_mE57B610718E32E11409237E1AB2D333B3355DE3C (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	{
		// float w = CCDWeight * ik.solver.IKPositionWeight;
		float L_0 = __this->___CCDWeight_14;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_1 = __this->___ik_4;
		NullCheck(L_1);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1->___solver_11;
		NullCheck(L_2);
		float L_3 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_2)->___IKPositionWeight_2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_3));
		// if (w <= 0f) return;
		float L_4 = V_0;
		V_1 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// if (w <= 0f) return;
		goto IL_0125;
	}

IL_002d:
	{
		// for (int i = CCDBones.Length - 1; i > -1; i--) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___CCDBones_17;
		NullCheck(L_6);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
		goto IL_0118;
	}

IL_003d:
	{
		// Quaternion r = Quaternion.FromToRotation(ik.references.head.position - CCDBones[i].position, transform.position - CCDBones[i].position) * CCDBones[i].rotation;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_7 = __this->___ik_4;
		NullCheck(L_7);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_8 = L_7->___references_10;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___head_14;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->___CCDBones_17;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_19 = __this->___CCDBones_17;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_16, L_24, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___CCDBones_17;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_30, NULL);
		V_3 = L_31;
		// float d = Mathf.Lerp((CCDBones.Length - i) / CCDBones.Length, 1f, roll);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___CCDBones_17;
		NullCheck(L_32);
		int32_t L_33 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_34 = __this->___CCDBones_17;
		NullCheck(L_34);
		float L_35 = __this->___roll_15;
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_32)->max_length)), L_33))/((int32_t)(((RuntimeArray*)L_34)->max_length))))), (1.0f), L_35, NULL);
		V_4 = L_36;
		// float a = Quaternion.Angle(Quaternion.identity, r);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_3;
		float L_39;
		L_39 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_37, L_38, NULL);
		V_5 = L_39;
		// a = Mathf.Lerp(0f, a, (damper - a) / damper);
		float L_40 = V_5;
		float L_41 = __this->___damper_16;
		float L_42 = V_5;
		float L_43 = __this->___damper_16;
		float L_44;
		L_44 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_40, ((float)(((float)il2cpp_codegen_subtract(L_41, L_42))/L_43)), NULL);
		V_5 = L_44;
		// CCDBones[i].rotation = Quaternion.RotateTowards(CCDBones[i].rotation, r, a * w * d);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_45 = __this->___CCDBones_17;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_49 = __this->___CCDBones_17;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_52, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = V_3;
		float L_55 = V_5;
		float L_56 = V_0;
		float L_57 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline(L_53, L_54, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_55, L_56)), L_57)), NULL);
		NullCheck(L_48);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_48, L_58, NULL);
		// for (int i = CCDBones.Length - 1; i > -1; i--) {
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
	}

IL_0118:
	{
		// for (int i = CCDBones.Length - 1; i > -1; i--) {
		int32_t L_60 = V_2;
		V_6 = (bool)((((int32_t)L_60) > ((int32_t)(-1)))? 1 : 0);
		bool L_61 = V_6;
		if (L_61)
		{
			goto IL_003d;
		}
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::Iterate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, int32_t ___iteration0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!enabled) return;
		goto IL_035d;
	}

IL_0015:
	{
		// if (!gameObject.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		V_7 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// if (!gameObject.activeInHierarchy) return;
		goto IL_035d;
	}

IL_002e:
	{
		// if (ik.solver.iterations == 0) return;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_5 = __this->___ik_4;
		NullCheck(L_5);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_6 = L_5->___solver_11;
		NullCheck(L_6);
		int32_t L_7 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_6)->___iterations_10;
		V_8 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// if (ik.solver.iterations == 0) return;
		goto IL_035d;
	}

IL_004c:
	{
		// leftShoulderPos = transform.position + (leftShoulderPos - transform.position).normalized * leftShoulderDist;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___leftShoulderPos_32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		V_9 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		float L_16 = __this->___leftShoulderDist_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_17, NULL);
		__this->___leftShoulderPos_32 = L_18;
		// rightShoulderPos = transform.position + (rightShoulderPos - transform.position).normalized * rightShoulderDist;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___rightShoulderPos_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		V_9 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		float L_26 = __this->___rightShoulderDist_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_27, NULL);
		__this->___rightShoulderPos_33 = L_28;
		// Solve (ref leftShoulderPos, ref rightShoulderPos, shoulderDist);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___leftShoulderPos_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___rightShoulderPos_33);
		float L_31 = __this->___shoulderDist_34;
		FBBIKHeadEffector_Solve_m5545F453A38573513398E23D4C013C24F92F8115(__this, L_29, L_30, L_31, NULL);
		// LerpSolverPosition(ik.solver.leftShoulderEffector, leftShoulderPos, positionWeight * ik.solver.IKPositionWeight, ik.solver.leftShoulderEffector.positionOffset);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_32 = __this->___ik_4;
		NullCheck(L_32);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_33 = L_32->___solver_11;
		NullCheck(L_33);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_34;
		L_34 = IKSolverFullBodyBiped_get_leftShoulderEffector_m5B500D488CCB816846DEF6F9920E55849E1FF17D(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___leftShoulderPos_32;
		float L_36 = __this->___positionWeight_5;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_37 = __this->___ik_4;
		NullCheck(L_37);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_38 = L_37->___solver_11;
		NullCheck(L_38);
		float L_39 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_38)->___IKPositionWeight_2;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_40 = __this->___ik_4;
		NullCheck(L_40);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_41 = L_40->___solver_11;
		NullCheck(L_41);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_42;
		L_42 = IKSolverFullBodyBiped_get_leftShoulderEffector_m5B500D488CCB816846DEF6F9920E55849E1FF17D(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42->___positionOffset_6;
		FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20(__this, L_34, L_35, ((float)il2cpp_codegen_multiply(L_36, L_39)), L_43, NULL);
		// LerpSolverPosition(ik.solver.rightShoulderEffector, rightShoulderPos, positionWeight * ik.solver.IKPositionWeight, ik.solver.rightShoulderEffector.positionOffset);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_44 = __this->___ik_4;
		NullCheck(L_44);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_45 = L_44->___solver_11;
		NullCheck(L_45);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_46;
		L_46 = IKSolverFullBodyBiped_get_rightShoulderEffector_m857EA0866A539F70708E4062B1053F3B0352AE4F(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___rightShoulderPos_33;
		float L_48 = __this->___positionWeight_5;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_49 = __this->___ik_4;
		NullCheck(L_49);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_50 = L_49->___solver_11;
		NullCheck(L_50);
		float L_51 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_50)->___IKPositionWeight_2;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_52 = __this->___ik_4;
		NullCheck(L_52);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_53 = L_52->___solver_11;
		NullCheck(L_53);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_54;
		L_54 = IKSolverFullBodyBiped_get_rightShoulderEffector_m857EA0866A539F70708E4062B1053F3B0352AE4F(L_53, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = L_54->___positionOffset_6;
		FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20(__this, L_46, L_47, ((float)il2cpp_codegen_multiply(L_48, L_51)), L_55, NULL);
		// Quaternion chestRotationSolved = Quaternion.LookRotation(transform.position - leftShoulderPos, rightShoulderPos - leftShoulderPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___leftShoulderPos_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_57, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___rightShoulderPos_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = __this->___leftShoulderPos_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_60, L_61, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_59, L_62, NULL);
		V_0 = L_63;
		// Quaternion rBody = QuaTools.FromToRotation(chestRotation, chestRotationSolved);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = __this->___chestRotation_37;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = QuaTools_FromToRotation_m6E0FABD688435575CDF23358353774C589090B7C(L_64, L_65, NULL);
		V_1 = L_66;
		// Vector3 headToBodySolved = rBody * headToBody;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___headToBody_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_67, L_68, NULL);
		V_2 = L_69;
		// LerpSolverPosition(ik.solver.bodyEffector, transform.position + headToBodySolved, positionWeight * ik.solver.IKPositionWeight, ik.solver.bodyEffector.positionOffset - ik.solver.pullBodyOffset);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_70 = __this->___ik_4;
		NullCheck(L_70);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_71 = L_70->___solver_11;
		NullCheck(L_71);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_72;
		L_72 = IKSolverFullBodyBiped_get_bodyEffector_m453A029B8AD978266B390B3CBA2CA3A340526E85(L_71, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_75, NULL);
		float L_77 = __this->___positionWeight_5;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_78 = __this->___ik_4;
		NullCheck(L_78);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_79 = L_78->___solver_11;
		NullCheck(L_79);
		float L_80 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_79)->___IKPositionWeight_2;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_81 = __this->___ik_4;
		NullCheck(L_81);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_82 = L_81->___solver_11;
		NullCheck(L_82);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_83;
		L_83 = IKSolverFullBodyBiped_get_bodyEffector_m453A029B8AD978266B390B3CBA2CA3A340526E85(L_82, NULL);
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = L_83->___positionOffset_6;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_85 = __this->___ik_4;
		NullCheck(L_85);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_86 = L_85->___solver_11;
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = IKSolverFullBodyBiped_get_pullBodyOffset_mEED59ADEB0E0807409370A9CB4AE4A55B098FA65_inline(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_84, L_87, NULL);
		FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20(__this, L_72, L_76, ((float)il2cpp_codegen_multiply(L_77, L_80)), L_88, NULL);
		// Quaternion rThighs = Quaternion.Lerp(Quaternion.identity, rBody, thighWeight);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90 = V_1;
		float L_91 = __this->___thighWeight_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_92;
		L_92 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_89, L_90, L_91, NULL);
		V_3 = L_92;
		// Vector3 headToLeftThighSolved = rThighs * headToLeftThigh;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = __this->___headToLeftThigh_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_93, L_94, NULL);
		V_4 = L_95;
		// Vector3 headToRightThighSolved = rThighs * headToRightThigh;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = __this->___headToRightThigh_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_96, L_97, NULL);
		V_5 = L_98;
		// LerpSolverPosition(ik.solver.leftThighEffector, transform.position + headToLeftThighSolved, positionWeight * ik.solver.IKPositionWeight, (ik.solver.bodyEffector.positionOffset - ik.solver.pullBodyOffset) + ik.solver.leftThighEffector.positionOffset);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_99 = __this->___ik_4;
		NullCheck(L_99);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_100 = L_99->___solver_11;
		NullCheck(L_100);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_101;
		L_101 = IKSolverFullBodyBiped_get_leftThighEffector_m16A228821AC6868B43FBACDBAF64E5FC7E805B10(L_100, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_103, L_104, NULL);
		float L_106 = __this->___positionWeight_5;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_107 = __this->___ik_4;
		NullCheck(L_107);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_108 = L_107->___solver_11;
		NullCheck(L_108);
		float L_109 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_108)->___IKPositionWeight_2;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_110 = __this->___ik_4;
		NullCheck(L_110);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_111 = L_110->___solver_11;
		NullCheck(L_111);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_112;
		L_112 = IKSolverFullBodyBiped_get_bodyEffector_m453A029B8AD978266B390B3CBA2CA3A340526E85(L_111, NULL);
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = L_112->___positionOffset_6;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_114 = __this->___ik_4;
		NullCheck(L_114);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_115 = L_114->___solver_11;
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = IKSolverFullBodyBiped_get_pullBodyOffset_mEED59ADEB0E0807409370A9CB4AE4A55B098FA65_inline(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_113, L_116, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_118 = __this->___ik_4;
		NullCheck(L_118);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_119 = L_118->___solver_11;
		NullCheck(L_119);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_120;
		L_120 = IKSolverFullBodyBiped_get_leftThighEffector_m16A228821AC6868B43FBACDBAF64E5FC7E805B10(L_119, NULL);
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = L_120->___positionOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_117, L_121, NULL);
		FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20(__this, L_101, L_105, ((float)il2cpp_codegen_multiply(L_106, L_109)), L_122, NULL);
		// LerpSolverPosition(ik.solver.rightThighEffector, transform.position + headToRightThighSolved, positionWeight * ik.solver.IKPositionWeight, (ik.solver.bodyEffector.positionOffset - ik.solver.pullBodyOffset) + ik.solver.rightThighEffector.positionOffset);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_123 = __this->___ik_4;
		NullCheck(L_123);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_124 = L_123->___solver_11;
		NullCheck(L_124);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_125;
		L_125 = IKSolverFullBodyBiped_get_rightThighEffector_m8B07B53D3B8A827814412F74F22C411DA3434FF8(L_124, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_127, L_128, NULL);
		float L_130 = __this->___positionWeight_5;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_131 = __this->___ik_4;
		NullCheck(L_131);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_132 = L_131->___solver_11;
		NullCheck(L_132);
		float L_133 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_132)->___IKPositionWeight_2;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_134 = __this->___ik_4;
		NullCheck(L_134);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_135 = L_134->___solver_11;
		NullCheck(L_135);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_136;
		L_136 = IKSolverFullBodyBiped_get_bodyEffector_m453A029B8AD978266B390B3CBA2CA3A340526E85(L_135, NULL);
		NullCheck(L_136);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = L_136->___positionOffset_6;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_138 = __this->___ik_4;
		NullCheck(L_138);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_139 = L_138->___solver_11;
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = IKSolverFullBodyBiped_get_pullBodyOffset_mEED59ADEB0E0807409370A9CB4AE4A55B098FA65_inline(L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_137, L_140, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_142 = __this->___ik_4;
		NullCheck(L_142);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_143 = L_142->___solver_11;
		NullCheck(L_143);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_144;
		L_144 = IKSolverFullBodyBiped_get_rightThighEffector_m8B07B53D3B8A827814412F74F22C411DA3434FF8(L_143, NULL);
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = L_144->___positionOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_141, L_145, NULL);
		FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20(__this, L_125, L_129, ((float)il2cpp_codegen_multiply(L_130, L_133)), L_146, NULL);
	}

IL_035d:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnPostUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!enabled) return;
		goto IL_00b7;
	}

IL_0013:
	{
		// if (!gameObject.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (!gameObject.activeInHierarchy) return;
		goto IL_00b7;
	}

IL_002a:
	{
		// PostStretching ();
		FBBIKHeadEffector_PostStretching_mD5555C0BF13710FE204BFD7DF0C0F45C7683806B(__this, NULL);
		// Quaternion headRotation = QuaTools.FromToRotation(ik.references.head.rotation, transform.rotation);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_5 = __this->___ik_4;
		NullCheck(L_5);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_6 = L_5->___references_10;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___head_14;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = QuaTools_FromToRotation_m6E0FABD688435575CDF23358353774C589090B7C(L_8, L_10, NULL);
		V_0 = L_11;
		// headRotation = QuaTools.ClampRotation(headRotation, headClampWeight, 2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		float L_13 = __this->___headClampWeight_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = QuaTools_ClampRotation_m893FB34571A5F98B3F689C72DF24A92A70F10813(L_12, L_13, 2, NULL);
		V_0 = L_14;
		// ik.references.head.rotation = Quaternion.Lerp(Quaternion.identity, headRotation, rotationWeight * ik.solver.IKPositionWeight) * ik.references.head.rotation;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_15 = __this->___ik_4;
		NullCheck(L_15);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_16 = L_15->___references_10;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___head_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_0;
		float L_20 = __this->___rotationWeight_9;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_21 = __this->___ik_4;
		NullCheck(L_21);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_22 = L_21->___solver_11;
		NullCheck(L_22);
		float L_23 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_22)->___IKPositionWeight_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_23)), NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_25 = __this->___ik_4;
		NullCheck(L_25);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_26 = L_25->___references_10;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___head_14;
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_24, L_28, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_29, NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::ChestDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_ChestDirection_mFF5E8F1C37FF24D7AC462882170E3F4E6A43952C (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_5 = NULL;
	int32_t V_6 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	{
		// float w = chestDirectionWeight * ik.solver.IKPositionWeight;
		float L_0 = __this->___chestDirectionWeight_24;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_1 = __this->___ik_4;
		NullCheck(L_1);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1->___solver_11;
		NullCheck(L_2);
		float L_3 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_2)->___IKPositionWeight_2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_3));
		// if (w <= 0f) return;
		float L_4 = V_0;
		V_3 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// if (w <= 0f) return;
		goto IL_00ed;
	}

IL_002d:
	{
		// bool changed = false;
		V_1 = (bool)0;
		// chestDirection = RootMotion.V3Tools.ClampDirection(chestDirection, ik.references.root.forward, 0.45f, 2, out changed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___chestDirection_23;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_7 = __this->___ik_4;
		NullCheck(L_7);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_8 = L_7->___references_10;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___root_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = V3Tools_ClampDirection_mA45DE5CD033E81309F81F3F0EC3EBEC58C424856(L_6, L_10, (0.449999988f), 2, (&V_1), NULL);
		__this->___chestDirection_23 = L_11;
		// if (chestDirection == Vector3.zero) return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___chestDirection_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_14;
		L_14 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_12, L_13, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// if (chestDirection == Vector3.zero) return;
		goto IL_00ed;
	}

IL_0075:
	{
		// Quaternion q = Quaternion.FromToRotation (ik.references.root.forward, chestDirection);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_16 = __this->___ik_4;
		NullCheck(L_16);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_17 = L_16->___references_10;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17->___root_0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___chestDirection_23;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_19, L_20, NULL);
		V_2 = L_21;
		// q = Quaternion.Lerp (Quaternion.identity, q, w * (1f / chestBones.Length));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_2;
		float L_24 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = __this->___chestBones_25;
		NullCheck(L_25);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_22, L_23, ((float)il2cpp_codegen_multiply(L_24, ((float)((1.0f)/((float)((int32_t)(((RuntimeArray*)L_25)->max_length))))))), NULL);
		V_2 = L_26;
		// foreach (Transform bone in chestBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_27 = __this->___chestBones_25;
		V_5 = L_27;
		V_6 = 0;
		goto IL_00e5;
	}

IL_00c1:
	{
		// foreach (Transform bone in chestBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = V_5;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = L_31;
		// bone.rotation = q * bone.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_7;
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_33, L_35, NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_36, NULL);
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e5:
	{
		// foreach (Transform bone in chestBones) {
		int32_t L_38 = V_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_39 = V_5;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_00c1;
		}
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::PostStretching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_PostStretching_mD5555C0BF13710FE204BFD7DF0C0F45C7683806B (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B12_0 = 0;
	{
		// float w = postStretchWeight * ik.solver.IKPositionWeight;
		float L_0 = __this->___postStretchWeight_18;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_1 = __this->___ik_4;
		NullCheck(L_1);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1->___solver_11;
		NullCheck(L_2);
		float L_3 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_2)->___IKPositionWeight_2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_3));
		// if (w > 0f) {
		float L_4 = V_0;
		V_1 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0108;
		}
	}
	{
		// Vector3 stretch = Vector3.ClampMagnitude(transform.position - ik.references.head.position, maxStretch);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_8 = __this->___ik_4;
		NullCheck(L_8);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_9 = L_8->___references_10;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___head_14;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_11, NULL);
		float L_13 = __this->___maxStretch_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// stretch *= w;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// stretchDamper = Mathf.Max (stretchDamper, 0f);
		float L_18 = __this->___stretchDamper_20;
		float L_19;
		L_19 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, (0.0f), NULL);
		__this->___stretchDamper_20 = L_19;
		// if (stretchDamper > 0f) stretch /= (1f + stretch.magnitude) * (1f + stretchDamper);
		float L_20 = __this->___stretchDamper_20;
		V_3 = (bool)((((float)L_20) > ((float)(0.0f)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00aa;
		}
	}
	{
		// if (stretchDamper > 0f) stretch /= (1f + stretch.magnitude) * (1f + stretchDamper);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_24 = __this->___stretchDamper_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((1.0f), L_23)), ((float)il2cpp_codegen_add((1.0f), L_24)))), NULL);
		V_2 = L_25;
	}

IL_00aa:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		V_4 = 0;
		goto IL_00f5;
	}

IL_00af:
	{
		// if (stretchBones[i] != null) stretchBones[i].position += stretch / stretchBones.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___stretchBones_22;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_30;
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00ee;
		}
	}
	{
		// if (stretchBones[i] != null) stretchBones[i].position += stretch / stretchBones.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___stretchBones_22;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_39 = __this->___stretchBones_22;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_38, ((float)((int32_t)(((RuntimeArray*)L_39)->max_length))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_40, NULL);
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_41, NULL);
	}

IL_00ee:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00f5:
	{
		// for (int i = 0; i < stretchBones.Length; i++) {
		int32_t L_43 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_44 = __this->___stretchBones_22;
		NullCheck(L_44);
		V_6 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0);
		bool L_45 = V_6;
		if (L_45)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_0108:
	{
		// if (fixHead && ik.solver.IKPositionWeight > 0f) ik.references.head.position = transform.position;
		bool L_46 = __this->___fixHead_21;
		if (!L_46)
		{
			goto IL_0129;
		}
	}
	{
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_47 = __this->___ik_4;
		NullCheck(L_47);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_48 = L_47->___solver_11;
		NullCheck(L_48);
		float L_49 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_48)->___IKPositionWeight_2;
		G_B12_0 = ((((float)L_49) > ((float)(0.0f)))? 1 : 0);
		goto IL_012a;
	}

IL_0129:
	{
		G_B12_0 = 0;
	}

IL_012a:
	{
		V_7 = (bool)G_B12_0;
		bool L_50 = V_7;
		if (!L_50)
		{
			goto IL_0151;
		}
	}
	{
		// if (fixHead && ik.solver.IKPositionWeight > 0f) ik.references.head.position = transform.position;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_51 = __this->___ik_4;
		NullCheck(L_51);
		BipedReferences_tB81EAC296E626B0341A07AAD3A63E245F1519171* L_52 = L_51->___references_10;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = L_52->___head_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		NullCheck(L_53);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_53, L_55, NULL);
	}

IL_0151:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::LerpSolverPosition(RootMotion.FinalIK.IKEffector,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_LerpSolverPosition_mD2E1B5F5558ED0ED14AFE803D62E78051EBCEC20 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* ___effector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___weight2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset3, const RuntimeMethod* method) 
{
	{
		// effector.GetNode(ik.solver).solverPosition = Vector3.Lerp(effector.GetNode(ik.solver).solverPosition, position + offset, weight);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_0 = ___effector0;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_1 = __this->___ik_4;
		NullCheck(L_1);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_2 = L_1->___solver_11;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKEffector_GetNode_m919ED6ABE94554CF56C517C1BB1C8FB1BFBD026E(L_0, L_2, NULL);
		IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* L_4 = ___effector0;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_5 = __this->___ik_4;
		NullCheck(L_5);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_6 = L_5->___solver_11;
		NullCheck(L_4);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7;
		L_7 = IKEffector_GetNode_m919ED6ABE94554CF56C517C1BB1C8FB1BFBD026E(L_4, L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_7)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___offset3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		float L_12 = ___weight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_11, L_12, NULL);
		NullCheck(L_3);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2 = L_13;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::Solve(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_Solve_m5545F453A38573513398E23D4C013C24F92F8115 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos21, float ___nominalDistance2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		// Vector3 direction = pos2 - pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// float distance = direction.magnitude;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_5;
		// if (distance == nominalDistance) return;
		float L_6 = V_1;
		float L_7 = ___nominalDistance2;
		V_4 = (bool)((((float)L_6) == ((float)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		// if (distance == nominalDistance) return;
		goto IL_007f;
	}

IL_0027:
	{
		// if (distance == 0f) return;
		float L_9 = V_1;
		V_5 = (bool)((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		// if (distance == 0f) return;
		goto IL_007f;
	}

IL_0037:
	{
		// float force = 1f;
		V_2 = (1.0f);
		// force *= 1f - nominalDistance / distance;
		float L_11 = V_2;
		float L_12 = ___nominalDistance2;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_12/L_13))))));
		// Vector3 offset = direction * force * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (0.5f), NULL);
		V_3 = L_17;
		// pos1 += offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18 = L_22;
		// pos2 -= offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_26, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_27;
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector_OnDestroy_m38D4AF42422B163A9FFB7FC5334185EB748D2421 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (ik != null) {
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_0 = __this->___ik_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00f2;
		}
	}
	{
		// ik.solver.OnPreRead -= OnPreRead;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_3 = __this->___ik_4;
		NullCheck(L_3);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_4 = L_3->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_5 = L_4;
		NullCheck(L_5);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_6 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_5)->___OnPreRead_17;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_7 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_7, __this, (intptr_t)((void*)FBBIKHeadEffector_OnPreRead_m7EFB370D641A41B63EB256A33E8DD598E883B58A_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		NullCheck(L_5);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_5)->___OnPreRead_17 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_8, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_5)->___OnPreRead_17), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_8, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnPreIteration -= Iterate;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_9 = __this->___ik_4;
		NullCheck(L_9);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_10 = L_9->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_11 = L_10;
		NullCheck(L_11);
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_12 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_11)->___OnPreIteration_19;
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_13 = (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)il2cpp_codegen_object_new(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		IterationDelegate__ctor_mCC7801F7424A5FD35398D44D33401DC377F06E0F(L_13, __this, (intptr_t)((void*)FBBIKHeadEffector_Iterate_m121BBFC7BC63366EF1E8832C830E95AB19644A14_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		NullCheck(L_11);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_11)->___OnPreIteration_19 = ((IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)CastclassSealed((RuntimeObject*)L_14, IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_11)->___OnPreIteration_19), (void*)((IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)CastclassSealed((RuntimeObject*)L_14, IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633_il2cpp_TypeInfo_var)));
		// ik.solver.OnPostUpdate -= OnPostUpdate;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_15 = __this->___ik_4;
		NullCheck(L_15);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_16 = L_15->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_17 = L_16;
		NullCheck(L_17);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_18 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_17)->___OnPostUpdate_7;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_19 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_19, __this, (intptr_t)((void*)FBBIKHeadEffector_OnPostUpdate_mB6D98D3AAA31C4536634F7F18F9895DA5E31BE1C_RuntimeMethod_var), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_18, L_19, NULL);
		NullCheck(L_17);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_17)->___OnPostUpdate_7 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_20, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_17)->___OnPostUpdate_7), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_20, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnStoreDefaultLocalState -= OnStoreDefaultLocalState;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_21 = __this->___ik_4;
		NullCheck(L_21);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_22 = L_21->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_23 = L_22;
		NullCheck(L_23);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_24 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_23)->___OnStoreDefaultLocalState_23;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_25 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_25, __this, (intptr_t)((void*)FBBIKHeadEffector_OnStoreDefaultLocalState_mF3ED14A8997957C40C88DB2FC47E287C58E258EE_RuntimeMethod_var), NULL);
		Delegate_t* L_26;
		L_26 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_24, L_25, NULL);
		NullCheck(L_23);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_23)->___OnStoreDefaultLocalState_23 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_26, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_23)->___OnStoreDefaultLocalState_23), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_26, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
		// ik.solver.OnFixTransforms -= OnFixTransforms;
		FullBodyBipedIK_tA74E21F4C4A86F5332C03814B60632E900B59E31* L_27 = __this->___ik_4;
		NullCheck(L_27);
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_28 = L_27->___solver_11;
		IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* L_29 = L_28;
		NullCheck(L_29);
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_30 = ((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_29)->___OnFixTransforms_24;
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_31 = (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)il2cpp_codegen_object_new(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971(L_31, __this, (intptr_t)((void*)FBBIKHeadEffector_OnFixTransforms_mFF4B4FDF9980E7542D729C90695152C3B9057BD8_RuntimeMethod_var), NULL);
		Delegate_t* L_32;
		L_32 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_30, L_31, NULL);
		NullCheck(L_29);
		((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_29)->___OnFixTransforms_24 = ((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_32, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42*)L_29)->___OnFixTransforms_24), (void*)((UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)CastclassSealed((RuntimeObject*)L_32, UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD_il2cpp_TypeInfo_var)));
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBBIKHeadEffector__ctor_m20095ED97500CF4A0A14B0590E7A7DF0C450A5A7 (FBBIKHeadEffector_tD1F41EB4118DB4DDF739FD568E15445FB61D2545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0f, 1f)] public float positionWeight = 1f;
		__this->___positionWeight_5 = (1.0f);
		// [Range(0f, 1f)] public float bodyWeight = 0.8f;
		__this->___bodyWeight_6 = (0.800000012f);
		// [Range(0f, 1f)] public float thighWeight = 0.8f;
		__this->___thighWeight_7 = (0.800000012f);
		// public bool handsPullBody = true;
		__this->___handsPullBody_8 = (bool)1;
		// [Range(0f, 1f)] public float rotationWeight = 0f;
		__this->___rotationWeight_9 = (0.0f);
		// [Range(0f, 1f)] public float bodyClampWeight = 0.5f;
		__this->___bodyClampWeight_10 = (0.5f);
		// [Range(0f, 1f)] public float headClampWeight = 0.5f;
		__this->___headClampWeight_11 = (0.5f);
		// [Range(0f, 1f)] public float bendWeight = 1f;
		__this->___bendWeight_12 = (1.0f);
		// public BendBone[] bendBones = new BendBone[0];
		BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0* L_0 = (BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0*)(BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0*)SZArrayNew(BendBoneU5BU5D_tF683F93D332832301A7C2BD62EB4FD27598A8DF0_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___bendBones_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bendBones_13), (void*)L_0);
		// [Range(0f, 1f)] public float CCDWeight = 1f;
		__this->___CCDWeight_14 = (1.0f);
		// [Range(0f, 1f)] public float roll = 0f;
		__this->___roll_15 = (0.0f);
		// [Range(0f, 1000f)] public float damper = 500f;
		__this->___damper_16 = (500.0f);
		// public Transform[] CCDBones = new Transform[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___CCDBones_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CCDBones_17), (void*)L_1);
		// [Range(0f, 1f)] public float postStretchWeight = 1f;
		__this->___postStretchWeight_18 = (1.0f);
		// public float maxStretch = 0.1f;
		__this->___maxStretch_19 = (0.100000001f);
		// public float stretchDamper = 0f;
		__this->___stretchDamper_20 = (0.0f);
		// public Transform[] stretchBones = new Transform[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___stretchBones_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stretchBones_22), (void*)L_2);
		// public Vector3 chestDirection = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___chestDirection_23 = L_3;
		// [Range(0f, 1f)] public float chestDirectionWeight = 1f;
		__this->___chestDirectionWeight_24 = (1.0f);
		// public Transform[] chestBones = new Transform[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___chestBones_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestBones_25), (void*)L_4);
		// private Quaternion[] ccdDefaultLocalRotations = new Quaternion[0];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_5 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___ccdDefaultLocalRotations_39 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ccdDefaultLocalRotations_39), (void*)L_5);
		// private Vector3[] stretchLocalPositions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___stretchLocalPositions_42 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stretchLocalPositions_42), (void*)L_6);
		// private Quaternion[] stretchLocalRotations = new Quaternion[0];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___stretchLocalRotations_43 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stretchLocalRotations_43), (void*)L_7);
		// private Vector3[] chestLocalPositions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___chestLocalPositions_44 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestLocalPositions_44), (void*)L_8);
		// private Quaternion[] chestLocalRotations = new Quaternion[0];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___chestLocalRotations_45 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chestLocalRotations_45), (void*)L_9);
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
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone__ctor_mE32EA7A741DE02BDD873102EB2D6E55837BF4310 (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0f, 1f)] public float weight = 0.5f;
		__this->___weight_1 = (0.5f);
		// private Quaternion defaultLocalRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___defaultLocalRotation_2 = L_0;
		// public BendBone() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public BendBone() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::.ctor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone__ctor_m721163784B128B0D015775A4BA058BE29C38AC3A (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, float ___weight1, const RuntimeMethod* method) 
{
	{
		// [Range(0f, 1f)] public float weight = 0.5f;
		__this->___weight_1 = (0.5f);
		// private Quaternion defaultLocalRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___defaultLocalRotation_2 = L_0;
		// public BendBone(Transform transform, float weight) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transform0;
		__this->___transform_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_0), (void*)L_1);
		// this.weight = weight;
		float L_2 = ___weight1;
		__this->___weight_1 = L_2;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone_StoreDefaultLocalState_mE0937615C838493CE9004D9A89C94A9A4F8BE5B4 (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, const RuntimeMethod* method) 
{
	{
		// defaultLocalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___defaultLocalRotation_2 = L_1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBBIKHeadEffector/BendBone::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BendBone_FixTransforms_m7D17A3230D27A1ABEEDD44F33DFD0260EDC902B2 (BendBone_t46462C2ABF0D1D669762B19C5FCCA810172AD540* __this, const RuntimeMethod* method) 
{
	{
		// transform.localRotation = defaultLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = __this->___defaultLocalRotation_2;
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_1, NULL);
		// }
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
// System.Void RootMotion.FinalIK.FBIKChain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain__ctor_m7848273825C1CEBBE75473138D9D95AB9F0AAE81 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float pull = 1f;
		__this->___pull_1 = (1.0f);
		// public float reach = 0.1f;
		__this->___reach_4 = (0.100000001f);
		// public Smoothing reachSmoothing = Smoothing.Exponential;
		__this->___reachSmoothing_5 = 1;
		// public Smoothing pushSmoothing = Smoothing.Exponential;
		__this->___pushSmoothing_6 = 1;
		// public IKSolver.Node[] nodes = new IKSolver.Node[0];
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = (NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)SZArrayNew(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___nodes_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_7), (void*)L_0);
		// public int[] children = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___children_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_8), (void*)L_1);
		// public ChildConstraint[] childConstraints = new ChildConstraint[0];
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_2 = (ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A*)(ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A*)SZArrayNew(ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childConstraints_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childConstraints_9), (void*)L_2);
		// public IKConstraintBend bendConstraint = new IKConstraintBend();
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_3 = (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B*)il2cpp_codegen_object_new(IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IKConstraintBend__ctor_m72A917EBEA90665F22C7AF2285A2B607122BD254(L_3, NULL);
		__this->___bendConstraint_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bendConstraint_10), (void*)L_3);
		// public FBIKChain() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public FBIKChain() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::.ctor(System.Single,System.Single,UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain__ctor_m3B2A8E062B310330E31838948539CD8B97860276 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, float ___pin0, float ___pull1, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodeTransforms2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float pull = 1f;
		__this->___pull_1 = (1.0f);
		// public float reach = 0.1f;
		__this->___reach_4 = (0.100000001f);
		// public Smoothing reachSmoothing = Smoothing.Exponential;
		__this->___reachSmoothing_5 = 1;
		// public Smoothing pushSmoothing = Smoothing.Exponential;
		__this->___pushSmoothing_6 = 1;
		// public IKSolver.Node[] nodes = new IKSolver.Node[0];
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = (NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)SZArrayNew(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___nodes_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_7), (void*)L_0);
		// public int[] children = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___children_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_8), (void*)L_1);
		// public ChildConstraint[] childConstraints = new ChildConstraint[0];
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_2 = (ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A*)(ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A*)SZArrayNew(ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childConstraints_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childConstraints_9), (void*)L_2);
		// public IKConstraintBend bendConstraint = new IKConstraintBend();
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_3 = (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B*)il2cpp_codegen_object_new(IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IKConstraintBend__ctor_m72A917EBEA90665F22C7AF2285A2B607122BD254(L_3, NULL);
		__this->___bendConstraint_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bendConstraint_10), (void*)L_3);
		// public FBIKChain (float pin, float pull, params Transform[] nodeTransforms) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pin = pin;
		float L_4 = ___pin0;
		__this->___pin_0 = L_4;
		// this.pull = pull;
		float L_5 = ___pull1;
		__this->___pull_1 = L_5;
		// SetNodes(nodeTransforms);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = ___nodeTransforms2;
		FBIKChain_SetNodes_m08ED7F11CADADACC12CD94DC30466F649B88B563(__this, L_6, NULL);
		// children = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___children_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_8), (void*)L_7);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::SetNodes(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SetNodes_m08ED7F11CADADACC12CD94DC30466F649B88B563 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___boneTransforms0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tEA311F89C5AADCD12594674635F7F815659FBC9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// nodes = new IKSolver.Node[boneTransforms.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___boneTransforms0;
		NullCheck(L_0);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_1 = (NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20*)SZArrayNew(NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___nodes_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_7), (void*)L_1);
		// for (int i = 0; i < boneTransforms.Length; i++) {
		V_0 = 0;
		goto IL_0029;
	}

IL_0013:
	{
		// nodes[i] = new IKSolver.Node(boneTransforms[i]);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_2 = __this->___nodes_7;
		int32_t L_3 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = ___boneTransforms0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8 = (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D*)il2cpp_codegen_object_new(Node_tEA311F89C5AADCD12594674635F7F815659FBC9D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Node__ctor_m6718FD33145987A2A314DDE6E2909328CF2BB11D(L_8, L_7, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D*)L_8);
		// for (int i = 0; i < boneTransforms.Length; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < boneTransforms.Length; i++) {
		int32_t L_10 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = ___boneTransforms0;
		NullCheck(L_11);
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 RootMotion.FinalIK.FBIKChain::GetNodeIndex(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBIKChain_GetNodeIndex_m70F9D81AD51EB964D08169EB64F91F0723871878 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___boneTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (int i = 0; i < nodes.Length; i++) {
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		// if (nodes[i].transform == boneTransform) return i;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = __this->___nodes_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___boneTransform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		// if (nodes[i].transform == boneTransform) return i;
		int32_t L_8 = V_0;
		V_2 = L_8;
		goto IL_0039;
	}

IL_0021:
	{
		// for (int i = 0; i < nodes.Length; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < nodes.Length; i++) {
		int32_t L_10 = V_0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_11 = __this->___nodes_7;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_0039;
	}

IL_0039:
	{
		// }
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Boolean RootMotion.FinalIK.FBIKChain::IsValid(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBIKChain_IsValid_mF8B48D1AE992F1D6D8B548DA7E7BCF0CF5E2D42F (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, String_t** ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50537881996932127FF2A83C492BAE686D8D7004);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2AB7BD7F05008E50A0DCCE7E02E1454222D194);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* V_2 = NULL;
	int32_t V_3 = 0;
	Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* V_4 = NULL;
	bool V_5 = false;
	{
		// if (nodes.Length == 0) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = __this->___nodes_7;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// message = "FBIK chain contains no nodes.";
		String_t** L_2 = ___message0;
		*((RuntimeObject**)L_2) = (RuntimeObject*)_stringLiteralBD2AB7BD7F05008E50A0DCCE7E02E1454222D194;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)_stringLiteralBD2AB7BD7F05008E50A0DCCE7E02E1454222D194);
		// return false;
		V_1 = (bool)0;
		goto IL_0059;
	}

IL_001b:
	{
		// foreach (IKSolver.Node node in nodes) if (node.transform == null) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_3 = __this->___nodes_7;
		V_2 = L_3;
		V_3 = 0;
		goto IL_004f;
	}

IL_0027:
	{
		// foreach (IKSolver.Node node in nodes) if (node.transform == null) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// foreach (IKSolver.Node node in nodes) if (node.transform == null) {
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8 = V_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		// message = "Node transform is null in FBIK chain.";
		String_t** L_12 = ___message0;
		*((RuntimeObject**)L_12) = (RuntimeObject*)_stringLiteral50537881996932127FF2A83C492BAE686D8D7004;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)_stringLiteral50537881996932127FF2A83C492BAE686D8D7004);
		// return false;
		V_1 = (bool)0;
		goto IL_0059;
	}

IL_004b:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		// foreach (IKSolver.Node node in nodes) if (node.transform == null) {
		int32_t L_14 = V_3;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Initiate_mF5DE6FD7BA4FA7208FE30B7E962487363FF76DE7 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* V_0 = NULL;
	int32_t V_1 = 0;
	Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* V_2 = NULL;
	ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* V_3 = NULL;
	int32_t V_4 = 0;
	ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* V_5 = NULL;
	bool V_6 = false;
	{
		// initiated = false;
		__this->___initiated_12 = (bool)0;
		// foreach (IKSolver.Node node in nodes) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = __this->___nodes_7;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002f;
	}

IL_0014:
	{
		// foreach (IKSolver.Node node in nodes) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// node.solverPosition = node.transform.position;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_5 = V_2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_6)->___transform_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_5);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_5)->___solverPosition_2 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		// foreach (IKSolver.Node node in nodes) {
		int32_t L_10 = V_1;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// CalculateBoneLengths(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_12 = ___solver0;
		FBIKChain_CalculateBoneLengths_m9E5B6FE72FA68F8D9DBB35B8D4510A4629E10795(__this, L_12, NULL);
		// foreach (ChildConstraint c in childConstraints) c.Initiate(solver as IKSolverFullBody);
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_13 = __this->___childConstraints_9;
		V_3 = L_13;
		V_4 = 0;
		goto IL_005f;
	}

IL_004a:
	{
		// foreach (ChildConstraint c in childConstraints) c.Initiate(solver as IKSolverFullBody);
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		// foreach (ChildConstraint c in childConstraints) c.Initiate(solver as IKSolverFullBody);
		ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* L_18 = V_5;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_19 = ___solver0;
		NullCheck(L_18);
		ChildConstraint_Initiate_mC4E5A42D73C522A2ABDA74D314E29FB70C2B6B60(L_18, L_19, NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005f:
	{
		// foreach (ChildConstraint c in childConstraints) c.Initiate(solver as IKSolverFullBody);
		int32_t L_21 = V_4;
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		// if (nodes.Length == 3) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_23 = __this->___nodes_7;
		NullCheck(L_23);
		V_6 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))) == ((int32_t)3))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		// bendConstraint.SetBones(nodes[0].transform, nodes[1].transform, nodes[2].transform);
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_25 = __this->___bendConstraint_10;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_26 = __this->___nodes_7;
		NullCheck(L_26);
		int32_t L_27 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_28)->___transform_0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_30 = __this->___nodes_7;
		NullCheck(L_30);
		int32_t L_31 = 1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_32)->___transform_0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_34 = __this->___nodes_7;
		NullCheck(L_34);
		int32_t L_35 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_36)->___transform_0;
		NullCheck(L_25);
		IKConstraintBend_SetBones_m2AE368645B32687B38ECF7127F32E4E3A513CB18(L_25, L_29, L_33, L_37, NULL);
		// bendConstraint.Initiate(solver as IKSolverFullBody);
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_38 = __this->___bendConstraint_10;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_39 = ___solver0;
		NullCheck(L_38);
		IKConstraintBend_Initiate_mF76A726966AFB156FC34D2104A40E765341D63B2(L_38, L_39, NULL);
	}

IL_00b9:
	{
		// crossFades = new float[children.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___children_8;
		NullCheck(L_40);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)));
		__this->___crossFades_18 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crossFades_18), (void*)L_41);
		// initiated = true;
		__this->___initiated_12 = (bool)1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::ReadPose(RootMotion.FinalIK.IKSolverFullBody,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_ReadPose_m683DAAD259DF7E2371217CF5AFC3E6CE13F69759 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, bool ___fullBody1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B26_0 = 0;
	{
		// if (!initiated) return;
		bool L_0 = __this->___initiated_12;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0294;
	}

IL_0013:
	{
		// for (int i = 0; i < nodes.Length; i++) {
		V_1 = 0;
		goto IL_004e;
	}

IL_0017:
	{
		// nodes[i].solverPosition = nodes[i].transform.position + nodes[i].offset;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_2 = __this->___nodes_7;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_6 = __this->___nodes_7;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_9)->___transform_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_12 = __this->___nodes_7;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_16, NULL);
		NullCheck(L_5);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_5)->___solverPosition_2 = L_17;
		// for (int i = 0; i < nodes.Length; i++) {
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < nodes.Length; i++) {
		int32_t L_19 = V_1;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_20 = __this->___nodes_7;
		NullCheck(L_20);
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0017;
		}
	}
	{
		// CalculateBoneLengths(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_22 = ___solver0;
		FBIKChain_CalculateBoneLengths_m9E5B6FE72FA68F8D9DBB35B8D4510A4629E10795(__this, L_22, NULL);
		// if (fullBody) {
		bool L_23 = ___fullBody1;
		V_3 = L_23;
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_0294;
		}
	}
	{
		// for (int i = 0; i < childConstraints.Length; i++) childConstraints[i].OnPreSolve(solver);
		V_4 = 0;
		goto IL_0089;
	}

IL_0073:
	{
		// for (int i = 0; i < childConstraints.Length; i++) childConstraints[i].OnPreSolve(solver);
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_25 = __this->___childConstraints_9;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_29 = ___solver0;
		NullCheck(L_28);
		ChildConstraint_OnPreSolve_m3295A32F8DCD2616C7BBFD695C5E079D3CC2899F(L_28, L_29, NULL);
		// for (int i = 0; i < childConstraints.Length; i++) childConstraints[i].OnPreSolve(solver);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < childConstraints.Length; i++) childConstraints[i].OnPreSolve(solver);
		int32_t L_31 = V_4;
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_32 = __this->___childConstraints_9;
		NullCheck(L_32);
		V_5 = (bool)((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0073;
		}
	}
	{
		// if (children.Length > 0) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___children_8;
		NullCheck(L_34);
		V_6 = (bool)((!(((uint32_t)(((RuntimeArray*)L_34)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_018c;
		}
	}
	{
		// float pullSum = nodes[nodes.Length - 1].effectorPositionWeight;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_36 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_37 = __this->___nodes_7;
		NullCheck(L_37);
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_37)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		float L_40 = L_39->___effectorPositionWeight_7;
		V_7 = L_40;
		// for (int i = 0; i < children.Length; i++) pullSum += solver.chain[children[i]].nodes[0].effectorPositionWeight * solver.chain[children[i]].pull;
		V_8 = 0;
		goto IL_0109;
	}

IL_00cc:
	{
		// for (int i = 0; i < children.Length; i++) pullSum += solver.chain[children[i]].nodes[0].effectorPositionWeight * solver.chain[children[i]].pull;
		float L_41 = V_7;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_42 = ___solver0;
		NullCheck(L_42);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_43 = L_42->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->___children_8;
		int32_t L_45 = V_8;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		int32_t L_48 = L_47;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_49 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_50 = L_49->___nodes_7;
		NullCheck(L_50);
		int32_t L_51 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		float L_53 = L_52->___effectorPositionWeight_7;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_54 = ___solver0;
		NullCheck(L_54);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_55 = L_54->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->___children_8;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		int32_t L_60 = L_59;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_61 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62 = L_61->___pull_1;
		V_7 = ((float)il2cpp_codegen_add(L_41, ((float)il2cpp_codegen_multiply(L_53, L_62))));
		// for (int i = 0; i < children.Length; i++) pullSum += solver.chain[children[i]].nodes[0].effectorPositionWeight * solver.chain[children[i]].pull;
		int32_t L_63 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0109:
	{
		// for (int i = 0; i < children.Length; i++) pullSum += solver.chain[children[i]].nodes[0].effectorPositionWeight * solver.chain[children[i]].pull;
		int32_t L_64 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___children_8;
		NullCheck(L_65);
		V_9 = (bool)((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))? 1 : 0);
		bool L_66 = V_9;
		if (L_66)
		{
			goto IL_00cc;
		}
	}
	{
		// pullSum = Mathf.Clamp(pullSum, 1f, Mathf.Infinity);
		float L_67 = V_7;
		float L_68;
		L_68 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_67, (1.0f), (std::numeric_limits<float>::infinity()), NULL);
		V_7 = L_68;
		// for (int i = 0; i < children.Length; i++) {
		V_10 = 0;
		goto IL_0179;
	}

IL_0133:
	{
		// crossFades[i] = (solver.chain[children[i]].nodes[0].effectorPositionWeight * solver.chain[children[i]].pull) / pullSum;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___crossFades_18;
		int32_t L_70 = V_10;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_71 = ___solver0;
		NullCheck(L_71);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_72 = L_71->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___children_8;
		int32_t L_74 = V_10;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		int32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		int32_t L_77 = L_76;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_78 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_79 = L_78->___nodes_7;
		NullCheck(L_79);
		int32_t L_80 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		float L_82 = L_81->___effectorPositionWeight_7;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_83 = ___solver0;
		NullCheck(L_83);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_84 = L_83->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___children_8;
		int32_t L_86 = V_10;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_84);
		int32_t L_89 = L_88;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_90 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		float L_91 = L_90->___pull_1;
		float L_92 = V_7;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (float)((float)(((float)il2cpp_codegen_multiply(L_82, L_91))/L_92)));
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_93 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0179:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_94 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___children_8;
		NullCheck(L_95);
		V_11 = (bool)((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length))))? 1 : 0);
		bool L_96 = V_11;
		if (L_96)
		{
			goto IL_0133;
		}
	}
	{
	}

IL_018c:
	{
		// pullParentSum = 0f;
		__this->___pullParentSum_17 = (0.0f);
		// for (int i = 0; i < children.Length; i++) pullParentSum += solver.chain[children[i]].pull;
		V_12 = 0;
		goto IL_01c4;
	}

IL_019c:
	{
		// for (int i = 0; i < children.Length; i++) pullParentSum += solver.chain[children[i]].pull;
		float L_97 = __this->___pullParentSum_17;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_98 = ___solver0;
		NullCheck(L_98);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_99 = L_98->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = __this->___children_8;
		int32_t L_101 = V_12;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		int32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_99);
		int32_t L_104 = L_103;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_105 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		float L_106 = L_105->___pull_1;
		__this->___pullParentSum_17 = ((float)il2cpp_codegen_add(L_97, L_106));
		// for (int i = 0; i < children.Length; i++) pullParentSum += solver.chain[children[i]].pull;
		int32_t L_107 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_01c4:
	{
		// for (int i = 0; i < children.Length; i++) pullParentSum += solver.chain[children[i]].pull;
		int32_t L_108 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___children_8;
		NullCheck(L_109);
		V_13 = (bool)((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))? 1 : 0);
		bool L_110 = V_13;
		if (L_110)
		{
			goto IL_019c;
		}
	}
	{
		// pullParentSum = Mathf.Clamp(pullParentSum, 1f, Mathf.Infinity);
		float L_111 = __this->___pullParentSum_17;
		float L_112;
		L_112 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_111, (1.0f), (std::numeric_limits<float>::infinity()), NULL);
		__this->___pullParentSum_17 = L_112;
		// if (nodes.Length == 3) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_113 = __this->___nodes_7;
		NullCheck(L_113);
		V_14 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_113)->max_length))) == ((int32_t)3))? 1 : 0);
		bool L_114 = V_14;
		if (!L_114)
		{
			goto IL_022f;
		}
	}
	{
		// reachForce = reach * Mathf.Clamp(nodes[2].effectorPositionWeight, 0f, 1f);
		float L_115 = __this->___reach_4;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_116 = __this->___nodes_7;
		NullCheck(L_116);
		int32_t L_117 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		float L_119 = L_118->___effectorPositionWeight_7;
		float L_120;
		L_120 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_119, (0.0f), (1.0f), NULL);
		__this->___reachForce_16 = ((float)il2cpp_codegen_multiply(L_115, L_120));
		goto IL_023a;
	}

IL_022f:
	{
		// } else reachForce = 0f;
		__this->___reachForce_16 = (0.0f);
	}

IL_023a:
	{
		// if (push > 0f && nodes.Length > 1) distance = Vector3.Distance(nodes[0].transform.position, nodes[nodes.Length - 1].transform.position);
		float L_121 = __this->___push_2;
		if ((!(((float)L_121) > ((float)(0.0f)))))
		{
			goto IL_0254;
		}
	}
	{
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_122 = __this->___nodes_7;
		NullCheck(L_122);
		G_B26_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_122)->max_length))) > ((int32_t)1))? 1 : 0);
		goto IL_0255;
	}

IL_0254:
	{
		G_B26_0 = 0;
	}

IL_0255:
	{
		V_15 = (bool)G_B26_0;
		bool L_123 = V_15;
		if (!L_123)
		{
			goto IL_0293;
		}
	}
	{
		// if (push > 0f && nodes.Length > 1) distance = Vector3.Distance(nodes[0].transform.position, nodes[nodes.Length - 1].transform.position);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_124 = __this->___nodes_7;
		NullCheck(L_124);
		int32_t L_125 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_126)->___transform_0;
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_127, NULL);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_129 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_130 = __this->___nodes_7;
		NullCheck(L_130);
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_130)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_132)->___transform_0;
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
		float L_135;
		L_135 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_128, L_134, NULL);
		__this->___distance_14 = L_135;
	}

IL_0293:
	{
	}

IL_0294:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::CalculateBoneLengths(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_CalculateBoneLengths_m9E5B6FE72FA68F8D9DBB35B8D4510A4629E10795 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A2E82E54F791F6334549A1813061B44BBAACD02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE501810477E1695C81CC21B9CDCE633337435963);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// length = 0f;
		__this->___length_13 = (0.0f);
		// for (int i = 0; i < nodes.Length - 1; i++) {
		V_0 = 0;
		goto IL_00ec;
	}

IL_0013:
	{
		// nodes[i].length = Vector3.Distance(nodes[i].transform.position, nodes[i + 1].transform.position);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = __this->___nodes_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_4 = __this->___nodes_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_7)->___transform_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_10 = __this->___nodes_7;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___transform_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_15, NULL);
		NullCheck(L_3);
		L_3->___length_6 = L_16;
		// length += nodes[i].length;
		float L_17 = __this->___length_13;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_18 = __this->___nodes_7;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		float L_22 = L_21->___length_6;
		__this->___length_13 = ((float)il2cpp_codegen_add(L_17, L_22));
		// if (nodes[i].length == 0) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_23 = __this->___nodes_7;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		float L_27 = L_26->___length_6;
		V_1 = (bool)((((float)L_27) == ((float)(0.0f)))? 1 : 0);
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_00e7;
		}
	}
	{
		// Warning.Log("Bone " + nodes[i].transform.name + " - " + nodes[i + 1].transform.name + " length is zero, can not solve.", nodes[i].transform);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral4A2E82E54F791F6334549A1813061B44BBAACD02);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4A2E82E54F791F6334549A1813061B44BBAACD02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_32 = __this->___nodes_7;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_35)->___transform_0;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_36, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_37);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_31;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_40 = __this->___nodes_7;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_43)->___transform_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_45);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_39;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralE501810477E1695C81CC21B9CDCE633337435963);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE501810477E1695C81CC21B9CDCE633337435963);
		String_t* L_47;
		L_47 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_46, NULL);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_48 = __this->___nodes_7;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_51)->___transform_0;
		Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224(L_47, L_52, (bool)0, NULL);
		// return;
		goto IL_020d;
	}

IL_00e7:
	{
		// for (int i = 0; i < nodes.Length - 1; i++) {
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ec:
	{
		// for (int i = 0; i < nodes.Length - 1; i++) {
		int32_t L_54 = V_0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_55 = __this->___nodes_7;
		NullCheck(L_55);
		V_2 = (bool)((((int32_t)L_54) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_55)->max_length)), 1))))? 1 : 0);
		bool L_56 = V_2;
		if (L_56)
		{
			goto IL_0013;
		}
	}
	{
		// for (int i = 0; i < children.Length; i++) {
		V_3 = 0;
		goto IL_0191;
	}

IL_0107:
	{
		// solver.chain[children[i]].rootLength = (solver.chain[children[i]].nodes[0].transform.position - nodes[nodes.Length - 1].transform.position).magnitude;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_57 = ___solver0;
		NullCheck(L_57);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_58 = L_57->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->___children_8;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_58);
		int32_t L_63 = L_62;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_64 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_65 = ___solver0;
		NullCheck(L_65);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_66 = L_65->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___children_8;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		int32_t L_71 = L_70;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_72 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_73 = L_72->___nodes_7;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_75)->___transform_0;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_78 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_79 = __this->___nodes_7;
		NullCheck(L_79);
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_79)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_81)->___transform_0;
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_83, NULL);
		V_4 = L_84;
		float L_85;
		L_85 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		NullCheck(L_64);
		L_64->___rootLength_11 = L_85;
		// if (solver.chain[children[i]].rootLength == 0f) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_86 = ___solver0;
		NullCheck(L_86);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_87 = L_86->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = __this->___children_8;
		int32_t L_89 = V_3;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_87);
		int32_t L_92 = L_91;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_93 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		float L_94 = L_93->___rootLength_11;
		V_5 = (bool)((((float)L_94) == ((float)(0.0f)))? 1 : 0);
		bool L_95 = V_5;
		if (!L_95)
		{
			goto IL_018c;
		}
	}
	{
		// return;
		goto IL_020d;
	}

IL_018c:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0191:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_97 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = __this->___children_8;
		NullCheck(L_98);
		V_6 = (bool)((((int32_t)L_97) < ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length))))? 1 : 0);
		bool L_99 = V_6;
		if (L_99)
		{
			goto IL_0107;
		}
	}
	{
		// if (nodes.Length == 3) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_100 = __this->___nodes_7;
		NullCheck(L_100);
		V_7 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))) == ((int32_t)3))? 1 : 0);
		bool L_101 = V_7;
		if (!L_101)
		{
			goto IL_020d;
		}
	}
	{
		// sqrMag1 = nodes[0].length * nodes[0].length;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_102 = __this->___nodes_7;
		NullCheck(L_102);
		int32_t L_103 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		float L_105 = L_104->___length_6;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_106 = __this->___nodes_7;
		NullCheck(L_106);
		int32_t L_107 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_108);
		float L_109 = L_108->___length_6;
		__this->___sqrMag1_19 = ((float)il2cpp_codegen_multiply(L_105, L_109));
		// sqrMag2 = nodes[1].length * nodes[1].length;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_110 = __this->___nodes_7;
		NullCheck(L_110);
		int32_t L_111 = 1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		float L_113 = L_112->___length_6;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_114 = __this->___nodes_7;
		NullCheck(L_114);
		int32_t L_115 = 1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		float L_117 = L_116->___length_6;
		__this->___sqrMag2_20 = ((float)il2cpp_codegen_multiply(L_113, L_117));
		// sqrMagDif = sqrMag1 - sqrMag2;
		float L_118 = __this->___sqrMag1_19;
		float L_119 = __this->___sqrMag2_20;
		__this->___sqrMagDif_21 = ((float)il2cpp_codegen_subtract(L_118, L_119));
	}

IL_020d:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::Reach(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Reach_m28ECC07B03F77D5C813C4660DF09DDEE8A498B6D (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// if (!initiated) return;
		bool L_0 = __this->___initiated_12;
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0181;
	}

IL_0015:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Reach(solver);
		V_6 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Reach(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_2 = ___solver0;
		NullCheck(L_2);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_3 = L_2->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___children_8;
		int32_t L_5 = V_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		NullCheck(L_9);
		FBIKChain_Reach_m28ECC07B03F77D5C813C4660DF09DDEE8A498B6D(L_9, L_10, NULL);
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Reach(solver);
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Reach(solver);
		int32_t L_12 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___children_8;
		NullCheck(L_13);
		V_7 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_7;
		if (L_14)
		{
			goto IL_001a;
		}
	}
	{
		// if (reachForce <= 0f) return;
		float L_15 = __this->___reachForce_16;
		V_8 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		// if (reachForce <= 0f) return;
		goto IL_0181;
	}

IL_0064:
	{
		// Vector3 solverDirection = nodes[2].solverPosition - nodes[0].solverPosition;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_17 = __this->___nodes_7;
		NullCheck(L_17);
		int32_t L_18 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_19)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_21 = __this->___nodes_7;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_23)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_24, NULL);
		V_0 = L_25;
		// if (solverDirection == Vector3.zero) return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_28;
		L_28 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_26, L_27, NULL);
		V_9 = L_28;
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009a;
		}
	}
	{
		// if (solverDirection == Vector3.zero) return;
		goto IL_0181;
	}

IL_009a:
	{
		// float solverLength = solverDirection.magnitude;
		float L_30;
		L_30 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_30;
		// Vector3 straight = (solverDirection / solverLength) * length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_31, L_32, NULL);
		float L_34 = __this->___length_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		V_2 = L_35;
		// float delta = Mathf.Clamp(solverLength / length, 1 - reachForce, 1 + reachForce) - 1f;
		float L_36 = V_1;
		float L_37 = __this->___length_13;
		float L_38 = __this->___reachForce_16;
		float L_39 = __this->___reachForce_16;
		float L_40;
		L_40 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_36/L_37)), ((float)il2cpp_codegen_subtract((1.0f), L_38)), ((float)il2cpp_codegen_add((1.0f), L_39)), NULL);
		V_3 = ((float)il2cpp_codegen_subtract(L_40, (1.0f)));
		// delta = Mathf.Clamp(delta + reachForce, -1f, 1f);
		float L_41 = V_3;
		float L_42 = __this->___reachForce_16;
		float L_43;
		L_43 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_41, L_42)), (-1.0f), (1.0f), NULL);
		V_3 = L_43;
		// switch (reachSmoothing) {
		int32_t L_44 = __this->___reachSmoothing_5;
		V_11 = L_44;
		int32_t L_45 = V_11;
		V_10 = L_45;
		int32_t L_46 = V_10;
		if ((((int32_t)L_46) == ((int32_t)1)))
		{
			goto IL_0113;
		}
	}
	{
		goto IL_010c;
	}

IL_010c:
	{
		int32_t L_47 = V_10;
		if ((((int32_t)L_47) == ((int32_t)2)))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0121;
	}

IL_0113:
	{
		// delta *= delta;
		float L_48 = V_3;
		float L_49 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_48, L_49));
		// break;
		goto IL_0121;
	}

IL_0119:
	{
		// delta *= delta * delta;
		float L_50 = V_3;
		float L_51 = V_3;
		float L_52 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_50, ((float)il2cpp_codegen_multiply(L_51, L_52))));
		// break;
		goto IL_0121;
	}

IL_0121:
	{
		// Vector3 offset = straight * Mathf.Clamp(delta, 0f, solverLength);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_2;
		float L_54 = V_3;
		float L_55 = V_1;
		float L_56;
		L_56 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_54, (0.0f), L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, L_56, NULL);
		V_4 = L_57;
		// nodes[0].solverPosition += offset * (1f - nodes[0].effectorPositionWeight);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_58 = __this->___nodes_7;
		NullCheck(L_58);
		int32_t L_59 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_61 = L_60;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_61)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_4;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_64 = __this->___nodes_7;
		NullCheck(L_64);
		int32_t L_65 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		float L_67 = L_66->___effectorPositionWeight_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, ((float)il2cpp_codegen_subtract((1.0f), L_67)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_68, NULL);
		NullCheck(L_61);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_61)->___solverPosition_2 = L_69;
		// nodes[2].solverPosition += offset;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_70 = __this->___nodes_7;
		NullCheck(L_70);
		int32_t L_71 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_73 = L_72;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_73)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_75, NULL);
		NullCheck(L_73);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_73)->___solverPosition_2 = L_76;
	}

IL_0181:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::Push(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_Push_m42C46C8250D2963DDCE5B60C03D739E6B286A084 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// Vector3 sum = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// for (int i = 0; i < children.Length; i++) {
		V_5 = 0;
		goto IL_004b;
	}

IL_000c:
	{
		// sum += solver.chain[children[i]].Push(solver) * solver.chain[children[i]].pushParent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_2 = ___solver0;
		NullCheck(L_2);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_3 = L_2->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___children_8;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = FBIKChain_Push_m42C46C8250D2963DDCE5B60C03D739E6B286A084(L_9, L_10, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_12 = ___solver0;
		NullCheck(L_12);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_13 = L_12->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___children_8;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		int32_t L_18 = L_17;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_19 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		float L_20 = L_19->___pushParent_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_21, NULL);
		V_0 = L_22;
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_24 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___children_8;
		NullCheck(L_25);
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_000c;
		}
	}
	{
		// nodes[nodes.Length - 1].solverPosition += sum;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_27 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_28 = __this->___nodes_7;
		NullCheck(L_28);
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_28)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_31 = L_30;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_31)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		NullCheck(L_31);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_31)->___solverPosition_2 = L_34;
		// if (nodes.Length < 2) return Vector3.zero;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_35 = __this->___nodes_7;
		NullCheck(L_35);
		V_7 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))) < ((int32_t)2))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_009c;
		}
	}
	{
		// if (nodes.Length < 2) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_8 = L_37;
		goto IL_018a;
	}

IL_009c:
	{
		// if (push <= 0f) return Vector3.zero;
		float L_38 = __this->___push_2;
		V_9 = (bool)((((int32_t)((!(((float)L_38) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_00be;
		}
	}
	{
		// if (push <= 0f) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_8 = L_40;
		goto IL_018a;
	}

IL_00be:
	{
		// Vector3 solverDirection = nodes[2].solverPosition - nodes[0].solverPosition;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_41 = __this->___nodes_7;
		NullCheck(L_41);
		int32_t L_42 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_43)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_45 = __this->___nodes_7;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_47)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_44, L_48, NULL);
		V_1 = L_49;
		// float solverLength = solverDirection.magnitude;
		float L_50;
		L_50 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_2 = L_50;
		// if (solverLength == 0f) return Vector3.zero;
		float L_51 = V_2;
		V_10 = (bool)((((float)L_51) == ((float)(0.0f)))? 1 : 0);
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_0100;
		}
	}
	{
		// if (solverLength == 0f) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_8 = L_53;
		goto IL_018a;
	}

IL_0100:
	{
		// float f = 1f - (solverLength / distance);
		float L_54 = V_2;
		float L_55 = __this->___distance_14;
		V_3 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_54/L_55))));
		// if (f <= 0f) return Vector3.zero;
		float L_56 = V_3;
		V_11 = (bool)((((int32_t)((!(((float)L_56) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_0129;
		}
	}
	{
		// if (f <= 0f) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_8 = L_58;
		goto IL_018a;
	}

IL_0129:
	{
		// switch (pushSmoothing) {
		int32_t L_59 = __this->___pushSmoothing_6;
		V_13 = L_59;
		int32_t L_60 = V_13;
		V_12 = L_60;
		int32_t L_61 = V_12;
		if ((((int32_t)L_61) == ((int32_t)1)))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_013c;
	}

IL_013c:
	{
		int32_t L_62 = V_12;
		if ((((int32_t)L_62) == ((int32_t)2)))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0151;
	}

IL_0143:
	{
		// f *= f;
		float L_63 = V_3;
		float L_64 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_63, L_64));
		// break;
		goto IL_0151;
	}

IL_0149:
	{
		// f *= f * f;
		float L_65 = V_3;
		float L_66 = V_3;
		float L_67 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_65, ((float)il2cpp_codegen_multiply(L_66, L_67))));
		// break;
		goto IL_0151;
	}

IL_0151:
	{
		// Vector3 p = -solverDirection * f * push;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_68, NULL);
		float L_70 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, L_70, NULL);
		float L_72 = __this->___push_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_71, L_72, NULL);
		V_4 = L_73;
		// nodes[0].solverPosition += p;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_74 = __this->___nodes_7;
		NullCheck(L_74);
		int32_t L_75 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_77 = L_76;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_77)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_79, NULL);
		NullCheck(L_77);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_77)->___solverPosition_2 = L_80;
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_4;
		V_8 = L_81;
		goto IL_018a;
	}

IL_018a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_8;
		return L_82;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::SolveTrigonometric(RootMotion.FinalIK.IKSolverFullBody,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveTrigonometric_m5B82E5BD21024C232DE687304585D92FD3DFFDD2 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, bool ___calculateBendDirection1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	{
		// if (!initiated) return;
		bool L_0 = __this->___initiated_12;
		V_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0130;
	}

IL_0015:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].SolveTrigonometric(solver, calculateBendDirection);
		V_7 = 0;
		goto IL_0038;
	}

IL_001a:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].SolveTrigonometric(solver, calculateBendDirection);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_2 = ___solver0;
		NullCheck(L_2);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_3 = L_2->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___children_8;
		int32_t L_5 = V_7;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = L_7;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		bool L_11 = ___calculateBendDirection1;
		NullCheck(L_9);
		FBIKChain_SolveTrigonometric_m5B82E5BD21024C232DE687304585D92FD3DFFDD2(L_9, L_10, L_11, NULL);
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].SolveTrigonometric(solver, calculateBendDirection);
		int32_t L_12 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].SolveTrigonometric(solver, calculateBendDirection);
		int32_t L_13 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___children_8;
		NullCheck(L_14);
		V_8 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_8;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		// if (nodes.Length != 3) return;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_16 = __this->___nodes_7;
		NullCheck(L_16);
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		// if (nodes.Length != 3) return;
		goto IL_0130;
	}

IL_0063:
	{
		// Vector3 solverDirection = nodes[2].solverPosition - nodes[0].solverPosition;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_18 = __this->___nodes_7;
		NullCheck(L_18);
		int32_t L_19 = 2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_20)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_22 = __this->___nodes_7;
		NullCheck(L_22);
		int32_t L_23 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_24)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_25, NULL);
		V_0 = L_26;
		// float solverLength = solverDirection.magnitude;
		float L_27;
		L_27 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_27;
		// if (solverLength == 0f) return;
		float L_28 = V_1;
		V_10 = (bool)((((float)L_28) == ((float)(0.0f)))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_009e;
		}
	}
	{
		// if (solverLength == 0f) return;
		goto IL_0130;
	}

IL_009e:
	{
		// float maxMag = Mathf.Clamp(solverLength, 0f, length * maxLimbLength);
		float L_30 = V_1;
		float L_31 = __this->___length_13;
		float L_32;
		L_32 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_30, (0.0f), ((float)il2cpp_codegen_multiply(L_31, (0.999989986f))), NULL);
		V_2 = L_32;
		// Vector3 direction = (solverDirection / solverLength) * maxMag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_33, L_34, NULL);
		float L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		V_3 = L_37;
		// Vector3 bendDirection = calculateBendDirection && bendConstraint.initiated? bendConstraint.GetDir(solver): nodes[1].solverPosition - nodes[0].solverPosition;
		bool L_38 = ___calculateBendDirection1;
		if (!L_38)
		{
			goto IL_00d4;
		}
	}
	{
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_39 = __this->___bendConstraint_10;
		NullCheck(L_39);
		bool L_40;
		L_40 = IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC_inline(L_39, NULL);
		if (L_40)
		{
			goto IL_00f5;
		}
	}

IL_00d4:
	{
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_41 = __this->___nodes_7;
		NullCheck(L_41);
		int32_t L_42 = 1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_43)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_45 = __this->___nodes_7;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_47)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_44, L_48, NULL);
		G_B13_0 = L_49;
		goto IL_0101;
	}

IL_00f5:
	{
		IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* L_50 = __this->___bendConstraint_10;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_51 = ___solver0;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = IKConstraintBend_GetDir_m11B4BB5F8B732C273A1A7B1617BC4504A3A6D685(L_50, L_51, NULL);
		G_B13_0 = L_52;
	}

IL_0101:
	{
		V_4 = G_B13_0;
		// Vector3 toBendPoint = GetDirToBendPoint(direction, bendDirection, maxMag);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
		float L_55 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = FBIKChain_GetDirToBendPoint_m36F8ED8C223B38886D12EFDF6344C6098168D66D(__this, L_53, L_54, L_55, NULL);
		V_5 = L_56;
		// nodes[1].solverPosition = nodes[0].solverPosition + toBendPoint;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_57 = __this->___nodes_7;
		NullCheck(L_57);
		int32_t L_58 = 1;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_60 = __this->___nodes_7;
		NullCheck(L_60);
		int32_t L_61 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_62)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_64, NULL);
		NullCheck(L_59);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_59)->___solverPosition_2 = L_65;
	}

IL_0130:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::Stage1(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Stage1_m5DD7EDFF631CC1FDEDA2407B5733C20EC6E43FFF (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage1(solver);
		V_1 = 0;
		goto IL_001f;
	}

IL_0005:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage1(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		NullCheck(L_0);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_1 = L_0->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___children_8;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = L_5;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_8 = ___solver0;
		NullCheck(L_7);
		FBIKChain_Stage1_m5DD7EDFF631CC1FDEDA2407B5733C20EC6E43FFF(L_7, L_8, NULL);
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage1(solver);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage1(solver);
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___children_8;
		NullCheck(L_11);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// if (children.Length == 0) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___children_8;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)(((RuntimeArray*)L_13)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// ForwardReach(nodes[nodes.Length - 1].solverPosition);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_15 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_16 = __this->___nodes_7;
		NullCheck(L_16);
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_18)->___solverPosition_2;
		FBIKChain_ForwardReach_m2EC750D02885A9E635F8EE4F04C552A04CBB540A(__this, L_19, NULL);
		// return;
		goto IL_01b5;
	}

IL_005f:
	{
		// Vector3 centroid = nodes[nodes.Length - 1].solverPosition;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_20 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_21 = __this->___nodes_7;
		NullCheck(L_21);
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_23)->___solverPosition_2;
		V_0 = L_24;
		// SolveChildConstraints(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_25 = ___solver0;
		FBIKChain_SolveChildConstraints_m4345CAD8F9B3200608AD67409CA50D5F0D97B0DF(__this, L_25, NULL);
		// for (int i = 0; i < children.Length; i++) {
		V_4 = 0;
		goto IL_0177;
	}

IL_0086:
	{
		// Vector3 childPosition = solver.chain[children[i]].nodes[0].solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_26 = ___solver0;
		NullCheck(L_26);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_27 = L_26->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___children_8;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		int32_t L_32 = L_31;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_33 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_34 = L_33->___nodes_7;
		NullCheck(L_34);
		int32_t L_35 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_36)->___solverPosition_2;
		V_5 = L_37;
		// if (solver.chain[children[i]].rootLength > 0) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_38 = ___solver0;
		NullCheck(L_38);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_39 = L_38->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___children_8;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		int32_t L_44 = L_43;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_45 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		float L_46 = L_45->___rootLength_11;
		V_6 = (bool)((((float)L_46) > ((float)(0.0f)))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_0118;
		}
	}
	{
		// childPosition = SolveFABRIKJoint(nodes[nodes.Length - 1].solverPosition, solver.chain[children[i]].nodes[0].solverPosition, solver.chain[children[i]].rootLength);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_48 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_49 = __this->___nodes_7;
		NullCheck(L_49);
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_49)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_51)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_53 = ___solver0;
		NullCheck(L_53);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_54 = L_53->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___children_8;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_54);
		int32_t L_59 = L_58;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_60 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_61 = L_60->___nodes_7;
		NullCheck(L_61);
		int32_t L_62 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_63)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_65 = ___solver0;
		NullCheck(L_65);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_66 = L_65->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___children_8;
		int32_t L_68 = V_4;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		int32_t L_71 = L_70;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_72 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		float L_73 = L_72->___rootLength_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5(__this, L_52, L_64, L_73, NULL);
		V_5 = L_74;
	}

IL_0118:
	{
		// if (pullParentSum > 0) centroid += (childPosition - nodes[nodes.Length - 1].solverPosition) * (solver.chain[children[i]].pull / pullParentSum);
		float L_75 = __this->___pullParentSum_17;
		V_7 = (bool)((((float)L_75) > ((float)(0.0f)))? 1 : 0);
		bool L_76 = V_7;
		if (!L_76)
		{
			goto IL_0170;
		}
	}
	{
		// if (pullParentSum > 0) centroid += (childPosition - nodes[nodes.Length - 1].solverPosition) * (solver.chain[children[i]].pull / pullParentSum);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_5;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_79 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_80 = __this->___nodes_7;
		NullCheck(L_80);
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_80)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_82)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_83, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_85 = ___solver0;
		NullCheck(L_85);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_86 = L_85->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___children_8;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		int32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_86);
		int32_t L_91 = L_90;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_92 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		float L_93 = L_92->___pull_1;
		float L_94 = __this->___pullParentSum_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_84, ((float)(L_93/L_94)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_77, L_95, NULL);
		V_0 = L_96;
	}

IL_0170:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_97 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_0177:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_98 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___children_8;
		NullCheck(L_99);
		V_8 = (bool)((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))? 1 : 0);
		bool L_100 = V_8;
		if (L_100)
		{
			goto IL_0086;
		}
	}
	{
		// ForwardReach(Vector3.Lerp(centroid, nodes[nodes.Length - 1].solverPosition, pin));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_102 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_103 = __this->___nodes_7;
		NullCheck(L_103);
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_103)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_105)->___solverPosition_2;
		float L_107 = __this->___pin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_101, L_106, L_107, NULL);
		FBIKChain_ForwardReach_m2EC750D02885A9E635F8EE4F04C552A04CBB540A(__this, L_108, NULL);
	}

IL_01b5:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::Stage2(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_Stage2_mBACA0B63045A39CB05D207FDE04B50C824B305F4 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// BackwardReach(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position1;
		FBIKChain_BackwardReach_m0A64E3B9546C7C6CFB276F7057966A64804B069F(__this, L_0, NULL);
		// int it = Mathf.Clamp(solver.iterations, 2, 4);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_1 = ___solver0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___iterations_10;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 2, 4, NULL);
		V_0 = L_3;
		// if (childConstraints.Length > 0) {
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_4 = __this->___childConstraints_9;
		NullCheck(L_4);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// for (int i = 0; i < it; i++) SolveConstraintSystems(solver);
		V_2 = 0;
		goto IL_0036;
	}

IL_002a:
	{
		// for (int i = 0; i < it; i++) SolveConstraintSystems(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_6 = ___solver0;
		FBIKChain_SolveConstraintSystems_mB36E33EB105B1B6DB00BED2DBE28CE682109807F(__this, L_6, NULL);
		// for (int i = 0; i < it; i++) SolveConstraintSystems(solver);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < it; i++) SolveConstraintSystems(solver);
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_002a;
		}
	}
	{
	}

IL_003f:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage2(solver, nodes[nodes.Length - 1].solverPosition);
		V_4 = 0;
		goto IL_0077;
	}

IL_0044:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage2(solver, nodes[nodes.Length - 1].solverPosition);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_11 = ___solver0;
		NullCheck(L_11);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_12 = L_11->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___children_8;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		int32_t L_17 = L_16;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_18 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_19 = ___solver0;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_20 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_21 = __this->___nodes_7;
		NullCheck(L_21);
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_23)->___solverPosition_2;
		NullCheck(L_18);
		FBIKChain_Stage2_mBACA0B63045A39CB05D207FDE04B50C824B305F4(L_18, L_19, L_24, NULL);
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage2(solver, nodes[nodes.Length - 1].solverPosition);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0077:
	{
		// for (int i = 0; i < children.Length; i++) solver.chain[children[i]].Stage2(solver, nodes[nodes.Length - 1].solverPosition);
		int32_t L_26 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___children_8;
		NullCheck(L_27);
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::SolveConstraintSystems(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveConstraintSystems_mB36E33EB105B1B6DB00BED2DBE28CE682109807F (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// SolveChildConstraints(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		FBIKChain_SolveChildConstraints_m4345CAD8F9B3200608AD67409CA50D5F0D97B0DF(__this, L_0, NULL);
		// for (int i = 0; i < children.Length; i++) {
		V_0 = 0;
		goto IL_005d;
	}

IL_000d:
	{
		// SolveLinearConstraint(nodes[nodes.Length - 1], solver.chain[children[i]].nodes[0], crossFades[i], solver.chain[children[i]].rootLength);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_1 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_2 = __this->___nodes_7;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		NullCheck(L_5);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_6 = L_5->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___children_8;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		int32_t L_11 = L_10;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_12 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_13 = L_12->___nodes_7;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___crossFades_18;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_20 = ___solver0;
		NullCheck(L_20);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_21 = L_20->___chain_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___children_8;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		int32_t L_26 = L_25;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_27 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		float L_28 = L_27->___rootLength_11;
		FBIKChain_SolveLinearConstraint_mA15FB9D92D2AC6F89234D0FD20F6516373AA64F8(__this, L_4, L_15, L_19, L_28, NULL);
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < children.Length; i++) {
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___children_8;
		NullCheck(L_31);
		V_1 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_1;
		if (L_32)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::SolveFABRIKJoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___length2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return pos2 + (pos1 - pos2).normalized * length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_5 = ___length2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_6, NULL);
		V_1 = L_7;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.FBIKChain::GetDirToBendPoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FBIKChain_GetDirToBendPoint_m36F8ED8C223B38886D12EFDF6344C6098168D66D (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bendDirection1, float ___directionMagnitude2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float x = ((directionMagnitude * directionMagnitude) + sqrMagDif) / 2f / directionMagnitude;
		float L_0 = ___directionMagnitude2;
		float L_1 = ___directionMagnitude2;
		float L_2 = __this->___sqrMagDif_21;
		float L_3 = ___directionMagnitude2;
		V_0 = ((float)(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2))/(2.0f)))/L_3));
		// float y = (float)Math.Sqrt(Mathf.Clamp(sqrMag1 - x * x, 0, Mathf.Infinity));
		float L_4 = __this->___sqrMag1_19;
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)))), (0.0f), (std::numeric_limits<float>::infinity()), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = sqrt(((double)L_7));
		V_1 = ((float)L_8);
		// if (direction == Vector3.zero) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___direction0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_11;
		L_11 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_9, L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// if (direction == Vector3.zero) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_13;
		goto IL_0067;
	}

IL_004c:
	{
		// return Quaternion.LookRotation(direction, bendDirection) * new Vector3(0f, y, x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___direction0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___bendDirection1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_14, L_15, NULL);
		float L_17 = V_1;
		float L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), L_17, L_18, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_16, L_19, NULL);
		V_3 = L_20;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		return L_21;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::SolveChildConstraints(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveChildConstraints_m4345CAD8F9B3200608AD67409CA50D5F0D97B0DF (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < childConstraints.Length; i++) {
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// childConstraints[i].Solve(solver);
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_0 = __this->___childConstraints_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_4 = ___solver0;
		NullCheck(L_3);
		ChildConstraint_Solve_m61CDB2661D0492E74A1DBBCF2B4CE49E0F0155C7(L_3, L_4, NULL);
		// for (int i = 0; i < childConstraints.Length; i++) {
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < childConstraints.Length; i++) {
		int32_t L_6 = V_0;
		ChildConstraintU5BU5D_t40A9356B694A39B8ACDA3746B1528D01A1A6905A* L_7 = __this->___childConstraints_9;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::SolveLinearConstraint(RootMotion.FinalIK.IKSolver/Node,RootMotion.FinalIK.IKSolver/Node,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_SolveLinearConstraint_mA15FB9D92D2AC6F89234D0FD20F6516373AA64F8 (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___node10, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___node21, float ___crossFade2, float ___distance3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// Vector3 dir = node2.solverPosition - node1.solverPosition;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_0 = ___node21;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_0)->___solverPosition_2;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_2 = ___node10;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_2)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// float mag = dir.magnitude;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_5;
		// if (distance == mag) return;
		float L_6 = ___distance3;
		float L_7 = V_1;
		V_3 = (bool)((((float)L_6) == ((float)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0026;
		}
	}
	{
		// if (distance == mag) return;
		goto IL_007d;
	}

IL_0026:
	{
		// if (mag == 0f) return;
		float L_9 = V_1;
		V_4 = (bool)((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// if (mag == 0f) return;
		goto IL_007d;
	}

IL_0036:
	{
		// Vector3 offset = dir * (1f - distance / mag);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = ___distance3;
		float L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_12/L_13)))), NULL);
		V_2 = L_14;
		// node1.solverPosition += offset * crossFade;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_15 = ___node10;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_16 = L_15;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = ___crossFade2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_20, NULL);
		NullCheck(L_16);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverPosition_2 = L_21;
		// node2.solverPosition -= offset * (1f - crossFade);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_22 = ___node21;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_23 = L_22;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_23)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = ___crossFade2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, ((float)il2cpp_codegen_subtract((1.0f), L_26)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_27, NULL);
		NullCheck(L_23);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_23)->___solverPosition_2 = L_28;
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::ForwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_ForwardReach_m2EC750D02885A9E635F8EE4F04C552A04CBB540A (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// nodes[nodes.Length - 1].solverPosition = position;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_0 = __this->___nodes_7;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_1 = __this->___nodes_7;
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		NullCheck(L_3);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2 = L_4;
		// for (int i = nodes.Length - 2; i > -1; i--) {
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_5 = __this->___nodes_7;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 2));
		goto IL_0067;
	}

IL_0025:
	{
		// nodes[i].solverPosition = SolveFABRIKJoint(nodes[i].solverPosition, nodes[i + 1].solverPosition, nodes[i].length);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_6 = __this->___nodes_7;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_10 = __this->___nodes_7;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_15 = __this->___nodes_7;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_18)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_20 = __this->___nodes_7;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		float L_24 = L_23->___length_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5(__this, L_14, L_19, L_24, NULL);
		NullCheck(L_9);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_9)->___solverPosition_2 = L_25;
		// for (int i = nodes.Length - 2; i > -1; i--) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0067:
	{
		// for (int i = nodes.Length - 2; i > -1; i--) {
		int32_t L_27 = V_0;
		V_1 = (bool)((((int32_t)L_27) > ((int32_t)(-1)))? 1 : 0);
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain::BackwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBIKChain_BackwardReach_m0A64E3B9546C7C6CFB276F7057966A64804B069F (FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (rootLength > 0) position = SolveFABRIKJoint(nodes[0].solverPosition, position, rootLength);
		float L_0 = __this->___rootLength_11;
		V_0 = (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// if (rootLength > 0) position = SolveFABRIKJoint(nodes[0].solverPosition, position, rootLength);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_2 = __this->___nodes_7;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_4)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = __this->___rootLength_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5(__this, L_5, L_6, L_7, NULL);
		___position0 = L_8;
	}

IL_002e:
	{
		// nodes[0].solverPosition = position;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_9 = __this->___nodes_7;
		NullCheck(L_9);
		int32_t L_10 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		NullCheck(L_11);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_11)->___solverPosition_2 = L_12;
		// for (int i = 1; i < nodes.Length; i++) {
		V_1 = 1;
		goto IL_0084;
	}

IL_0040:
	{
		// nodes[i].solverPosition = SolveFABRIKJoint(nodes[i].solverPosition, nodes[i - 1].solverPosition, nodes[i - 1].length);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_13 = __this->___nodes_7;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_17 = __this->___nodes_7;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_20)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_22 = __this->___nodes_7;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_25)->___solverPosition_2;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_27 = __this->___nodes_7;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		float L_31 = L_30->___length_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = FBIKChain_SolveFABRIKJoint_m34410D218993580F14219023B02559201E11FCB5(__this, L_21, L_26, L_31, NULL);
		NullCheck(L_16);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverPosition_2 = L_32;
		// for (int i = 1; i < nodes.Length; i++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0084:
	{
		// for (int i = 1; i < nodes.Length; i++) {
		int32_t L_34 = V_1;
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_35 = __this->___nodes_7;
		NullCheck(L_35);
		V_2 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0040;
		}
	}
	{
		// }
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
// System.Single RootMotion.FinalIK.FBIKChain/ChildConstraint::get_nominalDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) 
{
	{
		// public float nominalDistance { get; private set; }
		float L_0 = __this->___U3CnominalDistanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::set_nominalDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_set_nominalDistance_m73CB497B7A44C9218A892DBDAA4C4D8A881A6631 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float nominalDistance { get; private set; }
		float L_0 = ___value0;
		__this->___U3CnominalDistanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean RootMotion.FinalIK.FBIKChain/ChildConstraint::get_isRigid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChildConstraint_get_isRigid_m03375CC788F744BE4FA7F0FABF6B1FE7374A49A7 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) 
{
	{
		// public bool isRigid { get; private set; }
		bool L_0 = __this->___U3CisRigidU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::set_isRigid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_set_isRigid_mFA046F0C6CFC2BC0C6BCB2D6D72B4E1B18FF2517 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isRigid { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisRigidU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::.ctor(UnityEngine.Transform,UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint__ctor_m919E9947822E4EF1E682A019BC925B8C1949398D (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, float ___pushElasticity2, float ___pullElasticity3, const RuntimeMethod* method) 
{
	{
		// public float pushElasticity = 0f;
		__this->___pushElasticity_0 = (0.0f);
		// public float pullElasticity = 0f;
		__this->___pullElasticity_1 = (0.0f);
		// public ChildConstraint(Transform bone1, Transform bone2, float pushElasticity = 0f, float pullElasticity = 0f) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.bone1 = bone1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___bone10;
		__this->___bone1_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone1_2), (void*)L_0);
		// this.bone2 = bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___bone21;
		__this->___bone2_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone2_3), (void*)L_1);
		// this.pushElasticity = pushElasticity;
		float L_2 = ___pushElasticity2;
		__this->___pushElasticity_0 = L_2;
		// this.pullElasticity = pullElasticity;
		float L_3 = ___pullElasticity3;
		__this->___pullElasticity_1 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_Initiate_mC4E5A42D73C522A2ABDA74D314E29FB70C2B6B60 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	{
		// chain1Index = solver.GetChainIndex(bone1);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___bone1_2;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = IKSolverFullBody_GetChainIndex_mC05A7048016E3C1AAE9677E022BE1BA16BC01F9C(L_0, L_1, NULL);
		__this->___chain1Index_8 = L_2;
		// chain2Index = solver.GetChainIndex(bone2);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_3 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone2_3;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = IKSolverFullBody_GetChainIndex_mC05A7048016E3C1AAE9677E022BE1BA16BC01F9C(L_3, L_4, NULL);
		__this->___chain2Index_9 = L_5;
		// OnPreSolve(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_6 = ___solver0;
		ChildConstraint_OnPreSolve_m3295A32F8DCD2616C7BBFD695C5E079D3CC2899F(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::OnPreSolve(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_OnPreSolve_m3295A32F8DCD2616C7BBFD695C5E079D3CC2899F (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* G_B2_0 = NULL;
	ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* G_B3_1 = NULL;
	{
		// nominalDistance = Vector3.Distance(solver.chain[chain1Index].nodes[0].transform.position, solver.chain[chain2Index].nodes[0].transform.position);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		NullCheck(L_0);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_1 = L_0->___chain_11;
		int32_t L_2 = __this->___chain1Index_8;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_5 = L_4->___nodes_7;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_7)->___transform_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		NullCheck(L_10);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_11 = L_10->___chain_11;
		int32_t L_12 = __this->___chain2Index_9;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_15 = L_14->___nodes_7;
		NullCheck(L_15);
		int32_t L_16 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_17)->___transform_0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_19, NULL);
		ChildConstraint_set_nominalDistance_m73CB497B7A44C9218A892DBDAA4C4D8A881A6631_inline(__this, L_20, NULL);
		// isRigid = pushElasticity <= 0 && pullElasticity <= 0;
		float L_21 = __this->___pushElasticity_0;
		G_B1_0 = __this;
		if ((!(((float)L_21) <= ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0069;
		}
	}
	{
		float L_22 = __this->___pullElasticity_1;
		G_B3_0 = ((((int32_t)((!(((float)L_22) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_006a;
	}

IL_0069:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_006a:
	{
		NullCheck(G_B3_1);
		ChildConstraint_set_isRigid_mFA046F0C6CFC2BC0C6BCB2D6D72B4E1B18FF2517_inline(G_B3_1, (bool)G_B3_0, NULL);
		// if (isRigid) {
		bool L_23;
		L_23 = ChildConstraint_get_isRigid_m03375CC788F744BE4FA7F0FABF6B1FE7374A49A7_inline(__this, NULL);
		V_0 = L_23;
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00bd;
		}
	}
	{
		// float offset = solver.chain[chain1Index].pull - solver.chain[chain2Index].pull;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_25 = ___solver0;
		NullCheck(L_25);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_26 = L_25->___chain_11;
		int32_t L_27 = __this->___chain1Index_8;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		float L_30 = L_29->___pull_1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_31 = ___solver0;
		NullCheck(L_31);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_32 = L_31->___chain_11;
		int32_t L_33 = __this->___chain2Index_9;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		float L_36 = L_35->___pull_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_30, L_36));
		// crossFade = 1f - (0.5f + (offset * 0.5f));
		float L_37 = V_1;
		__this->___crossFade_6 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply(L_37, (0.5f)))))));
		goto IL_00c8;
	}

IL_00bd:
	{
		// } else crossFade = 0.5f;
		__this->___crossFade_6 = (0.5f);
	}

IL_00c8:
	{
		// inverseCrossFade = 1f - crossFade;
		float L_38 = __this->___crossFade_6;
		__this->___inverseCrossFade_7 = ((float)il2cpp_codegen_subtract((1.0f), L_38));
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.FBIKChain/ChildConstraint::Solve(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildConstraint_Solve_m61CDB2661D0492E74A1DBBCF2B4CE49E0F0155C7 (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	float V_8 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B13_0 = 0.0f;
	{
		// if (pushElasticity >= 1 && pullElasticity >= 1) return;
		float L_0 = __this->___pushElasticity_0;
		if ((!(((float)L_0) >= ((float)(1.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = __this->___pullElasticity_1;
		G_B3_0 = ((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_4 = (bool)G_B3_0;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (pushElasticity >= 1 && pullElasticity >= 1) return;
		goto IL_0145;
	}

IL_002c:
	{
		// Vector3 direction = solver.chain[chain2Index].nodes[0].solverPosition - solver.chain[chain1Index].nodes[0].solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_3 = ___solver0;
		NullCheck(L_3);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_4 = L_3->___chain_11;
		int32_t L_5 = __this->___chain2Index_9;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_8 = L_7->___nodes_7;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_10)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_12 = ___solver0;
		NullCheck(L_12);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_13 = L_12->___chain_11;
		int32_t L_14 = __this->___chain1Index_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_17 = L_16->___nodes_7;
		NullCheck(L_17);
		int32_t L_18 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_19)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_20, NULL);
		V_0 = L_21;
		// float distance = direction.magnitude;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_22;
		// if (distance == nominalDistance) return;
		float L_23 = V_1;
		float L_24;
		L_24 = ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10_inline(__this, NULL);
		V_5 = (bool)((((float)L_23) == ((float)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		// if (distance == nominalDistance) return;
		goto IL_0145;
	}

IL_0080:
	{
		// if (distance == 0f) return;
		float L_26 = V_1;
		V_6 = (bool)((((float)L_26) == ((float)(0.0f)))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0093;
		}
	}
	{
		// if (distance == 0f) return;
		goto IL_0145;
	}

IL_0093:
	{
		// float force = 1f;
		V_2 = (1.0f);
		// if (!isRigid) {
		bool L_28;
		L_28 = ChildConstraint_get_isRigid_m03375CC788F744BE4FA7F0FABF6B1FE7374A49A7_inline(__this, NULL);
		V_7 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00cc;
		}
	}
	{
		// float elasticity = distance > nominalDistance? pullElasticity: pushElasticity;
		float L_30 = V_1;
		float L_31;
		L_31 = ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10_inline(__this, NULL);
		if ((((float)L_30) > ((float)L_31)))
		{
			goto IL_00ba;
		}
	}
	{
		float L_32 = __this->___pushElasticity_0;
		G_B13_0 = L_32;
		goto IL_00c0;
	}

IL_00ba:
	{
		float L_33 = __this->___pullElasticity_1;
		G_B13_0 = L_33;
	}

IL_00c0:
	{
		V_8 = G_B13_0;
		// force = 1f - elasticity;
		float L_34 = V_8;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_34));
	}

IL_00cc:
	{
		// force *= 1f - nominalDistance / distance;
		float L_35 = V_2;
		float L_36;
		L_36 = ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10_inline(__this, NULL);
		float L_37 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_35, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_36/L_37))))));
		// Vector3 offset = direction * force;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		float L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		V_3 = L_40;
		// solver.chain[chain1Index].nodes[0].solverPosition += offset * crossFade;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_41 = ___solver0;
		NullCheck(L_41);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_42 = L_41->___chain_11;
		int32_t L_43 = __this->___chain1Index_8;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_46 = L_45->___nodes_7;
		NullCheck(L_46);
		int32_t L_47 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_49 = L_48;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_49)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_3;
		float L_52 = __this->___crossFade_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_53, NULL);
		NullCheck(L_49);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_49)->___solverPosition_2 = L_54;
		// solver.chain[chain2Index].nodes[0].solverPosition -= offset * inverseCrossFade;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_55 = ___solver0;
		NullCheck(L_55);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_56 = L_55->___chain_11;
		int32_t L_57 = __this->___chain2Index_9;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_60 = L_59->___nodes_7;
		NullCheck(L_60);
		int32_t L_61 = 0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_63 = L_62;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_63)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_3;
		float L_66 = __this->___inverseCrossFade_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_65, L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_64, L_67, NULL);
		NullCheck(L_63);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_63)->___solverPosition_2 = L_68;
	}

IL_0145:
	{
		// }
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
// System.Boolean RootMotion.FinalIK.IKConstraintBend::IsValid(RootMotion.FinalIK.IKSolverFullBody,RootMotion.Warning/Logger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKConstraintBend_IsValid_m9138B3B611501C73482FF0E5329552A0FDF71C2C (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Logger_tC7A433B56305082BD52A69C362F663BDA1077283* ___logger1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF125BB0FD152BF942CE63C0BE4C8A876D74B13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86B99D1E0E7B13F1AA0979E3A44920266A22783);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		// if (bone1 == null || bone2 == null || bone3 == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bone1_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___bone2_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone3_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint contains a null reference.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_7 = ___logger1;
		V_1 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint contains a null reference.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_9 = ___logger1;
		NullCheck(L_9);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_9, _stringLiteralA86B99D1E0E7B13F1AA0979E3A44920266A22783, NULL);
	}

IL_0045:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0120;
	}

IL_004c:
	{
		// if (solver.GetPoint(bone1) == null) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___bone1_0;
		NullCheck(L_10);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_12;
		L_12 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_10, L_11);
		V_3 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone1.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_14 = ___logger1;
		V_4 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_008b;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone1.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_16 = ___logger1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___bone1_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral1EF125BB0FD152BF942CE63C0BE4C8A876D74B13, L_18, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		NullCheck(L_16);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_16, L_19, NULL);
	}

IL_008b:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0120;
	}

IL_0092:
	{
		// if (solver.GetPoint(bone2) == null) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_20 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___bone2_1;
		NullCheck(L_20);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_22;
		L_22 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_20, L_21);
		V_5 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_22) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00d7;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone2.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_24 = ___logger1;
		V_6 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00d3;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone2.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_26 = ___logger1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___bone2_1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral1EF125BB0FD152BF942CE63C0BE4C8A876D74B13, L_28, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		NullCheck(L_26);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_26, L_29, NULL);
	}

IL_00d3:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0120;
	}

IL_00d7:
	{
		// if (solver.GetPoint(bone3) == null) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_30 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___bone3_2;
		NullCheck(L_30);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_32;
		L_32 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_30, L_31);
		V_7 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_32) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_011c;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone3.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_34 = ___logger1;
		V_8 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_0118;
		}
	}
	{
		// if (logger != null) logger("Bend Constraint is referencing to a bone '" + bone3.name + "' that does not excist in the Node Chain.");
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_36 = ___logger1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bone3_2;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral1EF125BB0FD152BF942CE63C0BE4C8A876D74B13, L_38, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		NullCheck(L_36);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_36, L_39, NULL);
	}

IL_0118:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0120;
	}

IL_011c:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0120;
	}

IL_0120:
	{
		// }
		bool L_40 = V_2;
		return L_40;
	}
}
// System.Boolean RootMotion.FinalIK.IKConstraintBend::get_initiated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = __this->___U3CinitiatedU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::set_initiated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_set_initiated_mC960BE5B19EAFC99129C859264C19316637A4D39 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CinitiatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend__ctor_m72A917EBEA90665F22C7AF2285A2B607122BD254 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___direction_4 = L_0;
		// public float weight = 0f;
		__this->___weight_6 = (0.0f);
		// [System.NonSerializedAttribute] public float clampF = 0.505f;
		__this->___clampF_9 = (0.504999995f);
		// public IKConstraintBend() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public IKConstraintBend() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::.ctor(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend__ctor_mC1ED806052F839A00B071494B4B4D5F5CFCA1C6E (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, const RuntimeMethod* method) 
{
	{
		// public Vector3 direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___direction_4 = L_0;
		// public float weight = 0f;
		__this->___weight_6 = (0.0f);
		// [System.NonSerializedAttribute] public float clampF = 0.505f;
		__this->___clampF_9 = (0.504999995f);
		// public IKConstraintBend(Transform bone1, Transform bone2, Transform bone3) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetBones(bone1, bone2, bone3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___bone10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___bone21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___bone32;
		IKConstraintBend_SetBones_m2AE368645B32687B38ECF7127F32E4E3A513CB18(__this, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::SetBones(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_SetBones_m2AE368645B32687B38ECF7127F32E4E3A513CB18 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, const RuntimeMethod* method) 
{
	{
		// this.bone1 = bone1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___bone10;
		__this->___bone1_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone1_0), (void*)L_0);
		// this.bone2 = bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___bone21;
		__this->___bone2_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone2_1), (void*)L_1);
		// this.bone3 = bone3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___bone32;
		__this->___bone3_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone3_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_Initiate_mF76A726966AFB156FC34D2104A40E765341D63B2 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// solver.GetChainAndNodeIndexes(bone1, out chainIndex1, out nodeIndex1);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___bone1_0;
		int32_t* L_2 = (&__this->___chainIndex1_10);
		int32_t* L_3 = (&__this->___nodeIndex1_11);
		NullCheck(L_0);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_0, L_1, L_2, L_3, NULL);
		// solver.GetChainAndNodeIndexes(bone2, out chainIndex2, out nodeIndex2);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_4 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___bone2_1;
		int32_t* L_6 = (&__this->___chainIndex2_12);
		int32_t* L_7 = (&__this->___nodeIndex2_13);
		NullCheck(L_4);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_4, L_5, L_6, L_7, NULL);
		// solver.GetChainAndNodeIndexes(bone3, out chainIndex3, out nodeIndex3);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_8 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bone3_2;
		int32_t* L_10 = (&__this->___chainIndex3_14);
		int32_t* L_11 = (&__this->___nodeIndex3_15);
		NullCheck(L_8);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_8, L_9, L_10, L_11, NULL);
		// direction = OrthoToBone1(solver, OrthoToLimb(solver, bone2.position - bone1.position));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_12 = ___solver0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_13 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___bone2_1;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bone1_0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = IKConstraintBend_OrthoToLimb_m99759AE102DA2A152BC5091EA5593C2AF220D5DE(__this, L_13, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = IKConstraintBend_OrthoToBone1_m81174AC5CEB2D94EF0FF79517A65BEA47B9999E4(__this, L_12, L_19, NULL);
		__this->___direction_4 = L_20;
		// if (!limbOrientationsSet) {
		bool L_21 = __this->___limbOrientationsSet_17;
		V_0 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00f6;
		}
	}
	{
		// defaultLocalDirection = Quaternion.Inverse(bone1.rotation) * direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___bone1_0;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___direction_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_25, L_26, NULL);
		__this->___defaultLocalDirection_7 = L_27;
		// Vector3 defaultNormal = Vector3.Cross((bone3.position - bone1.position).normalized, direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___bone3_2;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___bone1_0;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_31, NULL);
		V_2 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___direction_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_33, L_34, NULL);
		V_1 = L_35;
		// defaultChildDirection = Quaternion.Inverse(bone3.rotation) * defaultNormal;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___bone3_2;
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_38, L_39, NULL);
		__this->___defaultChildDirection_8 = L_40;
	}

IL_00f6:
	{
		// initiated = true;
		IKConstraintBend_set_initiated_mC960BE5B19EAFC99129C859264C19316637A4D39_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::SetLimbOrientation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_SetLimbOrientation_m01BBD38D02A91ED217BB04FFDBA8441F3C0C25E7 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upper0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lower1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___last2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18C3595BF0087E74E0319EB6871CBFB961A2ED4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (upper == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___upper0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (upper == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF18C3595BF0087E74E0319EB6871CBFB961A2ED4, NULL);
	}

IL_001b:
	{
		// if (lower == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lower1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// if (lower == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF18C3595BF0087E74E0319EB6871CBFB961A2ED4, NULL);
	}

IL_0035:
	{
		// if (last == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___last2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_8, L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		// if (last == Vector3.zero) Debug.LogError("Attempting to set limb orientation to Vector3.zero axis");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF18C3595BF0087E74E0319EB6871CBFB961A2ED4, NULL);
	}

IL_004f:
	{
		// defaultLocalDirection = upper.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___upper0), NULL);
		__this->___defaultLocalDirection_7 = L_12;
		// defaultChildDirection = last.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___last2), NULL);
		__this->___defaultChildDirection_8 = L_13;
		// limbOrientationsSet = true;
		__this->___limbOrientationsSet_17 = (bool)1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKConstraintBend::LimitBend(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKConstraintBend_LimitBend_m6C56B7253A642F4A84D727AC9125FB4DDC3BF322 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, float ___solverWeight0, float ___positionWeight1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	int32_t G_B9_0 = 0;
	{
		// if (!initiated) return;
		bool L_0;
		L_0 = IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC_inline(__this, NULL);
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0153;
	}

IL_0015:
	{
		// Vector3 normalDirection = bone1.rotation * -defaultLocalDirection;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___bone1_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___defaultLocalDirection_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_5, NULL);
		V_0 = L_6;
		// Vector3 axis2 = bone3.position - bone2.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___bone3_2;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bone2_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		V_1 = L_11;
		// bool changed = false;
		V_2 = (bool)0;
		// Vector3 clampedAxis2 = V3Tools.ClampDirection(axis2, normalDirection, clampF * solverWeight, 0, out changed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = __this->___clampF_9;
		float L_15 = ___solverWeight0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = V3Tools_ClampDirection_mA45DE5CD033E81309F81F3F0EC3EBEC58C424856(L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), 0, (&V_2), NULL);
		V_3 = L_16;
		// Quaternion bone3Rotation = bone3.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___bone3_2;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		V_4 = L_18;
		// if (changed) {
		bool L_19 = V_2;
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		// Quaternion f = Quaternion.FromToRotation(axis2, clampedAxis2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_21, L_22, NULL);
		V_7 = L_23;
		// bone2.rotation = f * bone2.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___bone2_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bone2_1;
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_27, NULL);
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_28, NULL);
	}

IL_009f:
	{
		// if (positionWeight > 0f) {
		float L_29 = ___positionWeight1;
		V_8 = (bool)((((float)L_29) > ((float)(0.0f)))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_0131;
		}
	}
	{
		// Vector3 normal = bone2.position - bone1.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___bone2_1;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___bone1_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_34, NULL);
		V_9 = L_35;
		// Vector3 tangent = bone3.position - bone2.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___bone3_2;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___bone2_1;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_39, NULL);
		V_10 = L_40;
		// Vector3.OrthoNormalize(ref normal, ref tangent);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_9), (&V_10), NULL);
		// Quaternion q = Quaternion.FromToRotation(tangent, normalDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_41, L_42, NULL);
		V_11 = L_43;
		// bone2.rotation = Quaternion.Lerp(bone2.rotation, q * bone2.rotation, positionWeight * solverWeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___bone2_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___bone2_1;
		NullCheck(L_45);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_45, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = V_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___bone2_1;
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_47, L_49, NULL);
		float L_51 = ___positionWeight1;
		float L_52 = ___solverWeight0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_46, L_50, ((float)il2cpp_codegen_multiply(L_51, L_52)), NULL);
		NullCheck(L_44);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_44, L_53, NULL);
	}

IL_0131:
	{
		// if (changed || positionWeight > 0f) bone3.rotation = bone3Rotation;
		bool L_54 = V_2;
		if (L_54)
		{
			goto IL_013e;
		}
	}
	{
		float L_55 = ___positionWeight1;
		G_B9_0 = ((((float)L_55) > ((float)(0.0f)))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B9_0 = 1;
	}

IL_013f:
	{
		V_12 = (bool)G_B9_0;
		bool L_56 = V_12;
		if (!L_56)
		{
			goto IL_0153;
		}
	}
	{
		// if (changed || positionWeight > 0f) bone3.rotation = bone3Rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___bone3_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = V_4;
		NullCheck(L_57);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_57, L_58, NULL);
	}

IL_0153:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::GetDir(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_GetDir_m11B4BB5F8B732C273A1A7B1617BC4504A3A6D685 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	{
		// if (!initiated) return Vector3.zero;
		bool L_0;
		L_0 = IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (!initiated) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_2;
		goto IL_01fd;
	}

IL_001c:
	{
		// float w = weight * solver.IKPositionWeight;
		float L_3 = __this->___weight_6;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_4 = ___solver0;
		NullCheck(L_4);
		float L_5 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_4)->___IKPositionWeight_2;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		// if (bendGoal != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___bendGoal_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_7;
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		// Vector3 b = bendGoal.position - solver.GetNode(chainIndex1, nodeIndex1).solverPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bendGoal_3;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_11 = ___solver0;
		int32_t L_12 = __this->___chainIndex1_10;
		int32_t L_13 = __this->___nodeIndex1_11;
		NullCheck(L_11);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_14;
		L_14 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_11, L_12, L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_14)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_15, NULL);
		V_7 = L_16;
		// if (b != Vector3.zero) direction = b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_19;
		L_19 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_17, L_18, NULL);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		// if (b != Vector3.zero) direction = b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
		__this->___direction_4 = L_21;
	}

IL_0080:
	{
	}

IL_0081:
	{
		// if (w >= 1f) return direction.normalized;
		float L_22 = V_0;
		V_9 = (bool)((((int32_t)((!(((float)L_22) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a4;
		}
	}
	{
		// if (w >= 1f) return direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___direction_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_24, NULL);
		V_5 = L_25;
		goto IL_01fd;
	}

IL_00a4:
	{
		// Vector3 solverDirection = solver.GetNode(chainIndex3, nodeIndex3).solverPosition - solver.GetNode(chainIndex1, nodeIndex1).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_26 = ___solver0;
		int32_t L_27 = __this->___chainIndex3_14;
		int32_t L_28 = __this->___nodeIndex3_15;
		NullCheck(L_26);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_29;
		L_29 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_26, L_27, L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_29)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_31 = ___solver0;
		int32_t L_32 = __this->___chainIndex1_10;
		int32_t L_33 = __this->___nodeIndex1_11;
		NullCheck(L_31);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_34;
		L_34 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_31, L_32, L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_34)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_30, L_35, NULL);
		V_1 = L_36;
		// Quaternion f = Quaternion.FromToRotation(bone3.position - bone1.position, solverDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bone3_2;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___bone1_0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_41, L_42, NULL);
		V_2 = L_43;
		// Vector3 dir = f * (bone2.position - bone1.position);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___bone2_1;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___bone1_0;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_44, L_49, NULL);
		V_3 = L_50;
		// if (solver.GetNode(chainIndex3, nodeIndex3).effectorRotationWeight > 0f) {
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_51 = ___solver0;
		int32_t L_52 = __this->___chainIndex3_14;
		int32_t L_53 = __this->___nodeIndex3_15;
		NullCheck(L_51);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_54;
		L_54 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_51, L_52, L_53, NULL);
		NullCheck(L_54);
		float L_55 = L_54->___effectorRotationWeight_8;
		V_10 = (bool)((((float)L_55) > ((float)(0.0f)))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_0191;
		}
	}
	{
		// Vector3 effectorDirection = -Vector3.Cross(solverDirection, solver.GetNode(chainIndex3, nodeIndex3).solverRotation * defaultChildDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_58 = ___solver0;
		int32_t L_59 = __this->___chainIndex3_14;
		int32_t L_60 = __this->___nodeIndex3_15;
		NullCheck(L_58);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_61;
		L_61 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_58, L_59, L_60, NULL);
		NullCheck(L_61);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_61)->___solverRotation_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___defaultChildDirection_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_62, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_57, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_65, NULL);
		V_11 = L_66;
		// dir = Vector3.Lerp(dir, effectorDirection, solver.GetNode(chainIndex3, nodeIndex3).effectorRotationWeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_11;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_69 = ___solver0;
		int32_t L_70 = __this->___chainIndex3_14;
		int32_t L_71 = __this->___nodeIndex3_15;
		NullCheck(L_69);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_72;
		L_72 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_69, L_70, L_71, NULL);
		NullCheck(L_72);
		float L_73 = L_72->___effectorRotationWeight_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_67, L_68, L_73, NULL);
		V_3 = L_74;
	}

IL_0191:
	{
		// if (rotationOffset != Quaternion.identity) {
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75 = __this->___rotationOffset_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_77;
		L_77 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_75, L_76, NULL);
		V_12 = L_77;
		bool L_78 = V_12;
		if (!L_78)
		{
			goto IL_01d1;
		}
	}
	{
		// Quaternion toOrtho = Quaternion.FromToRotation(rotationOffset * solverDirection, solverDirection);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79 = __this->___rotationOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_79, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_83;
		L_83 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_81, L_82, NULL);
		V_13 = L_83;
		// dir = toOrtho * rotationOffset * dir;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84 = V_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85 = __this->___rotationOffset_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86;
		L_86 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_84, L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_86, L_87, NULL);
		V_3 = L_88;
	}

IL_01d1:
	{
		// if (w <= 0f) return dir;
		float L_89 = V_0;
		V_14 = (bool)((((int32_t)((!(((float)L_89) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_14;
		if (!L_90)
		{
			goto IL_01e7;
		}
	}
	{
		// if (w <= 0f) return dir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_3;
		V_5 = L_91;
		goto IL_01fd;
	}

IL_01e7:
	{
		// return Vector3.Lerp(dir, direction.normalized, w);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_93 = (&__this->___direction_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_93, NULL);
		float L_95 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_92, L_94, L_95, NULL);
		V_5 = L_96;
		goto IL_01fd;
	}

IL_01fd:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_5;
		return L_97;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::OrthoToLimb(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_OrthoToLimb_m99759AE102DA2A152BC5091EA5593C2AF220D5DE (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = solver.GetNode(chainIndex3, nodeIndex3).solverPosition - solver.GetNode(chainIndex1, nodeIndex1).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___chainIndex3_14;
		int32_t L_2 = __this->___nodeIndex3_15;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		int32_t L_6 = __this->___chainIndex1_10;
		int32_t L_7 = __this->___nodeIndex1_11;
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8;
		L_8 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_6, L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_9, NULL);
		V_0 = L_10;
		// Vector3.OrthoNormalize(ref normal, ref tangent);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_0), (&___tangent1), NULL);
		// return tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___tangent1;
		V_1 = L_11;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKConstraintBend::OrthoToBone1(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKConstraintBend_OrthoToBone1_m81174AC5CEB2D94EF0FF79517A65BEA47B9999E4 (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = solver.GetNode(chainIndex2, nodeIndex2).solverPosition - solver.GetNode(chainIndex1, nodeIndex1).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___chainIndex2_12;
		int32_t L_2 = __this->___nodeIndex2_13;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		int32_t L_6 = __this->___chainIndex1_10;
		int32_t L_7 = __this->___nodeIndex1_11;
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8;
		L_8 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_6, L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_9, NULL);
		V_0 = L_10;
		// Vector3.OrthoNormalize(ref normal, ref tangent);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_0), (&___tangent1), NULL);
		// return tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___tangent1;
		V_1 = L_11;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		return L_12;
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
// RootMotion.FinalIK.IKSolver/Node RootMotion.FinalIK.IKEffector::GetNode(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* IKEffector_GetNode_m919ED6ABE94554CF56C517C1BB1C8FB1BFBD026E (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* V_0 = NULL;
	{
		// return solver.chain[chainIndex].nodes[nodeIndex];
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		NullCheck(L_0);
		FBIKChainU5BU5D_tFD8C1E683937E1B76330546A24DBDBFB765FFCD8* L_1 = L_0->___chain_11;
		int32_t L_2 = __this->___chainIndex_22;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FBIKChain_t889B73B09B89330A1E3EE79393C02E34DEED10D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		NodeU5BU5D_tA5F5270A73FAAA4B49C43810592604E0E6994A20* L_5 = L_4->___nodes_7;
		int32_t L_6 = __this->___nodeIndex_23;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean RootMotion.FinalIK.IKEffector::get_isEndEffector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKEffector_get_isEndEffector_m8CB821207AA2E57EE5A64ECBB7D967D783EE107C (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) 
{
	{
		// public bool isEndEffector { get; private set; }
		bool L_0 = __this->___U3CisEndEffectorU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::set_isEndEffector(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_set_isEndEffector_m825305CBB9F84ED87E204EF63991BAFD48FC2468 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isEndEffector { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisEndEffectorU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::PinToBone(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_PinToBone_m4080567580F3609399C0BB51DEFDFDE64339989A (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, float ___positionWeight0, float ___rotationWeight1, const RuntimeMethod* method) 
{
	{
		// position = bone.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bone_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___position_4 = L_1;
		// this.positionWeight = Mathf.Clamp(positionWeight, 0f, 1f);
		float L_2 = ___positionWeight0;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		__this->___positionWeight_2 = L_3;
		// rotation = bone.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone_0;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___rotation_5 = L_5;
		// this.rotationWeight = Mathf.Clamp(rotationWeight, 0f, 1f);
		float L_6 = ___rotationWeight1;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (1.0f), NULL);
		__this->___rotationWeight_3 = L_7;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector__ctor_m68C167292BB0313C77465B5E627D2B5C0CE3C737 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___position_4 = L_0;
		// public Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_5 = L_1;
		// public bool effectChildNodes = true;
		__this->___effectChildNodes_8 = (bool)1;
		// public Transform[] childBones = new Transform[0]; // The optional list of other bones that positionOffset and position of this effector will be applied to.
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childBones_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childBones_10), (void*)L_2);
		// public Quaternion planeRotationOffset = Quaternion.identity; // Used by Bend Constraints
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___planeRotationOffset_14 = L_3;
		// private Vector3[] localPositions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___localPositions_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localPositions_17), (void*)L_4);
		// private Quaternion animatedPlaneRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___animatedPlaneRotation_19 = L_5;
		// private int chainIndex = -1;
		__this->___chainIndex_22 = (-1);
		// private int nodeIndex = -1;
		__this->___nodeIndex_23 = (-1);
		// private int plane1NodeIndex = -1;
		__this->___plane1NodeIndex_25 = (-1);
		// private int plane2ChainIndex = -1;
		__this->___plane2ChainIndex_26 = (-1);
		// private int plane2NodeIndex = -1;
		__this->___plane2NodeIndex_27 = (-1);
		// private int plane3ChainIndex = -1;
		__this->___plane3ChainIndex_28 = (-1);
		// private int plane3NodeIndex = -1;
		__this->___plane3NodeIndex_29 = (-1);
		// private int[] childChainIndexes = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childChainIndexes_30 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childChainIndexes_30), (void*)L_6);
		// private int[] childNodeIndexes = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childNodeIndexes_31 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childNodeIndexes_31), (void*)L_7);
		// public IKEffector() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public IKEffector() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::.ctor(UnityEngine.Transform,UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector__ctor_m28B49E745AC13B670B005E522C35381FC3BE1EAD (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone0, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___childBones1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___position_4 = L_0;
		// public Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_5 = L_1;
		// public bool effectChildNodes = true;
		__this->___effectChildNodes_8 = (bool)1;
		// public Transform[] childBones = new Transform[0]; // The optional list of other bones that positionOffset and position of this effector will be applied to.
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childBones_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childBones_10), (void*)L_2);
		// public Quaternion planeRotationOffset = Quaternion.identity; // Used by Bend Constraints
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___planeRotationOffset_14 = L_3;
		// private Vector3[] localPositions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___localPositions_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localPositions_17), (void*)L_4);
		// private Quaternion animatedPlaneRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___animatedPlaneRotation_19 = L_5;
		// private int chainIndex = -1;
		__this->___chainIndex_22 = (-1);
		// private int nodeIndex = -1;
		__this->___nodeIndex_23 = (-1);
		// private int plane1NodeIndex = -1;
		__this->___plane1NodeIndex_25 = (-1);
		// private int plane2ChainIndex = -1;
		__this->___plane2ChainIndex_26 = (-1);
		// private int plane2NodeIndex = -1;
		__this->___plane2NodeIndex_27 = (-1);
		// private int plane3ChainIndex = -1;
		__this->___plane3ChainIndex_28 = (-1);
		// private int plane3NodeIndex = -1;
		__this->___plane3NodeIndex_29 = (-1);
		// private int[] childChainIndexes = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childChainIndexes_30 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childChainIndexes_30), (void*)L_6);
		// private int[] childNodeIndexes = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___childNodeIndexes_31 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childNodeIndexes_31), (void*)L_7);
		// public IKEffector (Transform bone, Transform[] childBones) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.bone = bone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___bone0;
		__this->___bone_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone_0), (void*)L_8);
		// this.childBones = childBones;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = ___childBones1;
		__this->___childBones_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childBones_10), (void*)L_9);
		// }
		return;
	}
}
// System.Boolean RootMotion.FinalIK.IKEffector::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKEffector_IsValid_m3068FBD0D73B8EF99546E10599BA7584D804441A (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24E0222049ABA5831AF1853F7DB49426A3BC13D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F812F3AE08C4DDF841DF13687AE61A68DD0DD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_3 = NULL;
	int32_t V_4 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	bool V_6 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_7 = NULL;
	int32_t V_8 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		// if (bone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// message = "IK Effector bone is null.";
		String_t** L_3 = ___message1;
		*((RuntimeObject**)L_3) = (RuntimeObject*)_stringLiteral44F812F3AE08C4DDF841DF13687AE61A68DD0DD0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)_stringLiteral44F812F3AE08C4DDF841DF13687AE61A68DD0DD0);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_0020:
	{
		// if (solver.GetPoint(bone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_4 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___bone_0;
		NullCheck(L_4);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_6;
		L_6 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_4, L_5);
		V_2 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// message = "IK Effector is referencing to a bone '" + bone.name + "' that does not excist in the Node Chain.";
		String_t** L_8 = ___message1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bone_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5, L_10, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_11);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_0057:
	{
		// foreach (Transform b in childBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___childBones_10;
		V_3 = L_12;
		V_4 = 0;
		goto IL_008f;
	}

IL_0064:
	{
		// foreach (Transform b in childBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// if (b == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		// message = "IK Effector contains a null reference.";
		String_t** L_20 = ___message1;
		*((RuntimeObject**)L_20) = (RuntimeObject*)_stringLiteral24E0222049ABA5831AF1853F7DB49426A3BC13D5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)_stringLiteral24E0222049ABA5831AF1853F7DB49426A3BC13D5);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_0088:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008f:
	{
		// foreach (Transform b in childBones) {
		int32_t L_22 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		// foreach (Transform b in childBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___childBones_10;
		V_7 = L_24;
		V_8 = 0;
		goto IL_00e4;
	}

IL_00a4:
	{
		// foreach (Transform b in childBones) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = V_7;
		int32_t L_26 = V_8;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_9 = L_28;
		// if (solver.GetPoint(b) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_29 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_9;
		NullCheck(L_29);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_31;
		L_31 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_29, L_30);
		V_10 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_31) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		// message = "IK Effector is referencing to a bone '" + b.name + "' that does not excist in the Node Chain.";
		String_t** L_33 = ___message1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_9;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5, L_35, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_33) = (RuntimeObject*)L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_33, (void*)(RuntimeObject*)L_36);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_00dd:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e4:
	{
		// foreach (Transform b in childBones) {
		int32_t L_38 = V_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (planeBone1 != null && solver.GetPoint(planeBone1) == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___planeBone1_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_010b;
		}
	}
	{
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_42 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___planeBone1_11;
		NullCheck(L_42);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_44;
		L_44 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_42, L_43);
		G_B17_0 = ((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_44) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_010c;
	}

IL_010b:
	{
		G_B17_0 = 0;
	}

IL_010c:
	{
		V_11 = (bool)G_B17_0;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_0136;
		}
	}
	{
		// message = "IK Effector is referencing to a bone '" + planeBone1.name + "' that does not excist in the Node Chain.";
		String_t** L_46 = ___message1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___planeBone1_11;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_47, NULL);
		String_t* L_49;
		L_49 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5, L_48, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_46) = (RuntimeObject*)L_49;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)L_49);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_0136:
	{
		// if (planeBone2 != null && solver.GetPoint(planeBone2) == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___planeBone2_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_50, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_51)
		{
			goto IL_0155;
		}
	}
	{
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_52 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = __this->___planeBone2_12;
		NullCheck(L_52);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_54;
		L_54 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_52, L_53);
		G_B22_0 = ((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_54) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0156;
	}

IL_0155:
	{
		G_B22_0 = 0;
	}

IL_0156:
	{
		V_12 = (bool)G_B22_0;
		bool L_55 = V_12;
		if (!L_55)
		{
			goto IL_017d;
		}
	}
	{
		// message = "IK Effector is referencing to a bone '" + planeBone2.name + "' that does not excist in the Node Chain.";
		String_t** L_56 = ___message1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___planeBone2_12;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_57, NULL);
		String_t* L_59;
		L_59 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5, L_58, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_56) = (RuntimeObject*)L_59;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_56, (void*)(RuntimeObject*)L_59);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_017d:
	{
		// if (planeBone3 != null && solver.GetPoint(planeBone3) == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___planeBone3_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_60, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_61)
		{
			goto IL_019c;
		}
	}
	{
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_62 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___planeBone3_13;
		NullCheck(L_62);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_64;
		L_64 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_62, L_63);
		G_B27_0 = ((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_64) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B27_0 = 0;
	}

IL_019d:
	{
		V_13 = (bool)G_B27_0;
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_01c4;
		}
	}
	{
		// message = "IK Effector is referencing to a bone '" + planeBone3.name + "' that does not excist in the Node Chain.";
		String_t** L_66 = ___message1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = __this->___planeBone3_13;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_67, NULL);
		String_t* L_69;
		L_69 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF1A3B3CA37571F66E788F4F6C323131CF466FD5, L_68, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_66) = (RuntimeObject*)L_69;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)(RuntimeObject*)L_69);
		// return false;
		V_1 = (bool)0;
		goto IL_01c8;
	}

IL_01c4:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_01c8;
	}

IL_01c8:
	{
		// }
		bool L_70 = V_1;
		return L_70;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_Initiate_mB0F4597BE3EE0327886F9C7B405E80A88974B6C5 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// position = bone.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bone_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___position_4 = L_1;
		// rotation = bone.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___bone_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___rotation_5 = L_3;
		// animatedPlaneRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___animatedPlaneRotation_19 = L_4;
		// solver.GetChainAndNodeIndexes(bone, out chainIndex, out nodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___bone_0;
		int32_t* L_7 = (&__this->___chainIndex_22);
		int32_t* L_8 = (&__this->___nodeIndex_23);
		NullCheck(L_5);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_5, L_6, L_7, L_8, NULL);
		// childChainIndexes = new int[childBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = __this->___childBones_10;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
		__this->___childChainIndexes_30 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childChainIndexes_30), (void*)L_10);
		// childNodeIndexes = new int[childBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->___childBones_10;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)));
		__this->___childNodeIndexes_31 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childNodeIndexes_31), (void*)L_12);
		// for (int i = 0; i < childBones.Length; i++) {
		V_0 = 0;
		goto IL_009e;
	}

IL_0071:
	{
		// solver.GetChainAndNodeIndexes(childBones[i], out childChainIndexes[i], out childNodeIndexes[i]);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_13 = ___solver0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->___childBones_10;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___childChainIndexes_30;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___childNodeIndexes_31;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		NullCheck(L_13);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_13, L_17, ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), NULL);
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009e:
	{
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_23 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___childBones_10;
		NullCheck(L_24);
		V_1 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_0071;
		}
	}
	{
		// localPositions = new Vector3[childBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___childBones_10;
		NullCheck(L_26);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)));
		__this->___localPositions_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localPositions_17), (void*)L_27);
		// usePlaneNodes = false;
		__this->___usePlaneNodes_18 = (bool)0;
		// if (planeBone1 != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___planeBone1_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_29;
		bool L_30 = V_2;
		if (!L_30)
		{
			goto IL_015e;
		}
	}
	{
		// solver.GetChainAndNodeIndexes(planeBone1, out plane1ChainIndex, out plane1NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_31 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___planeBone1_11;
		int32_t* L_33 = (&__this->___plane1ChainIndex_24);
		int32_t* L_34 = (&__this->___plane1NodeIndex_25);
		NullCheck(L_31);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_31, L_32, L_33, L_34, NULL);
		// if (planeBone2 != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___planeBone2_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_36;
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_0153;
		}
	}
	{
		// solver.GetChainAndNodeIndexes(planeBone2, out plane2ChainIndex, out plane2NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_38 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___planeBone2_12;
		int32_t* L_40 = (&__this->___plane2ChainIndex_26);
		int32_t* L_41 = (&__this->___plane2NodeIndex_27);
		NullCheck(L_38);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_38, L_39, L_40, L_41, NULL);
		// if (planeBone3 != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___planeBone3_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_43;
		bool L_44 = V_4;
		if (!L_44)
		{
			goto IL_0152;
		}
	}
	{
		// solver.GetChainAndNodeIndexes(planeBone3, out plane3ChainIndex, out plane3NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_45 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = __this->___planeBone3_13;
		int32_t* L_47 = (&__this->___plane3ChainIndex_28);
		int32_t* L_48 = (&__this->___plane3NodeIndex_29);
		NullCheck(L_45);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_45, L_46, L_47, L_48, NULL);
		// usePlaneNodes = true;
		__this->___usePlaneNodes_18 = (bool)1;
	}

IL_0152:
	{
	}

IL_0153:
	{
		// isEndEffector = true;
		IKEffector_set_isEndEffector_m825305CBB9F84ED87E204EF63991BAFD48FC2468_inline(__this, (bool)1, NULL);
		goto IL_0166;
	}

IL_015e:
	{
		// } else isEndEffector = false;
		IKEffector_set_isEndEffector_m825305CBB9F84ED87E204EF63991BAFD48FC2468_inline(__this, (bool)0, NULL);
	}

IL_0166:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::ResetOffset(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_ResetOffset_mCC5A6DA5BB5EEA1E93E9E31F433B3A90EC3E9947 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// solver.GetNode(chainIndex, nodeIndex).offset = Vector3.zero;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___chainIndex_22;
		int32_t L_2 = __this->___nodeIndex_23;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		L_3->___offset_9 = L_4;
		// for (int i = 0; i < childChainIndexes.Length; i++) {
		V_0 = 0;
		goto IL_0047;
	}

IL_0021:
	{
		// solver.GetNode(childChainIndexes[i], childNodeIndexes[i]).offset = Vector3.zero;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___childChainIndexes_30;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___childNodeIndexes_31;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_14;
		L_14 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_9, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_14);
		L_14->___offset_9 = L_15;
		// for (int i = 0; i < childChainIndexes.Length; i++) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < childChainIndexes.Length; i++) {
		int32_t L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___childChainIndexes_30;
		NullCheck(L_18);
		V_1 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::SetToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_SetToTarget_m59022D53D142887B58A24876AFD295A72530D6B1 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (target == null) return;
		goto IL_0035;
	}

IL_0013:
	{
		// position = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target_1;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___position_4 = L_4;
		// rotation = target.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___target_1;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		__this->___rotation_5 = L_6;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::OnPreSolve(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_OnPreSolve_m28C1D1A04F8A648CACD7FD25CEBC5A4209DA06DC (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B265D0CCFBA84FD7853C1B0BADF564C5370CDDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B2171981CF45AC56351C9BC845E11D2ECC0729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38718D750B683930B90DB4E21D45F5EA4F183B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB14C902CCAC9EC075B95BAA6219D1E59D49E02EB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// positionWeight = Mathf.Clamp(positionWeight, 0f, 1f);
		float L_0 = __this->___positionWeight_2;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (1.0f), NULL);
		__this->___positionWeight_2 = L_1;
		// rotationWeight = Mathf.Clamp(rotationWeight, 0f, 1f);
		float L_2 = __this->___rotationWeight_3;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		__this->___rotationWeight_3 = L_3;
		// maintainRelativePositionWeight = Mathf.Clamp(maintainRelativePositionWeight, 0f, 1f);
		float L_4 = __this->___maintainRelativePositionWeight_9;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		__this->___maintainRelativePositionWeight_9 = L_5;
		// posW = positionWeight * solver.IKPositionWeight;
		float L_6 = __this->___positionWeight_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_7 = ___solver0;
		NullCheck(L_7);
		float L_8 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_7)->___IKPositionWeight_2;
		__this->___posW_15 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		// rotW = rotationWeight * solver.IKPositionWeight;
		float L_9 = __this->___rotationWeight_3;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		NullCheck(L_10);
		float L_11 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_10)->___IKPositionWeight_2;
		__this->___rotW_16 = ((float)il2cpp_codegen_multiply(L_9, L_11));
		// solver.GetNode(chainIndex, nodeIndex).effectorPositionWeight = posW;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_12 = ___solver0;
		int32_t L_13 = __this->___chainIndex_22;
		int32_t L_14 = __this->___nodeIndex_23;
		NullCheck(L_12);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_15;
		L_15 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_12, L_13, L_14, NULL);
		float L_16 = __this->___posW_15;
		NullCheck(L_15);
		L_15->___effectorPositionWeight_7 = L_16;
		// solver.GetNode(chainIndex, nodeIndex).effectorRotationWeight = rotW;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_17 = ___solver0;
		int32_t L_18 = __this->___chainIndex_22;
		int32_t L_19 = __this->___nodeIndex_23;
		NullCheck(L_17);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_20;
		L_20 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_17, L_18, L_19, NULL);
		float L_21 = __this->___rotW_16;
		NullCheck(L_20);
		L_20->___effectorRotationWeight_8 = L_21;
		// solver.GetNode(chainIndex, nodeIndex).solverRotation = rotation;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_22 = ___solver0;
		int32_t L_23 = __this->___chainIndex_22;
		int32_t L_24 = __this->___nodeIndex_23;
		NullCheck(L_22);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_25;
		L_25 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_22, L_23, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___rotation_5;
		NullCheck(L_25);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_25)->___solverRotation_3 = L_26;
		// if (float.IsInfinity(positionOffset.x) ||
		//     float.IsInfinity(positionOffset.y) ||
		//     float.IsInfinity(positionOffset.z)
		//     ) Debug.LogError("Invalid IKEffector.positionOffset (contains Infinity)! Please make sure not to set IKEffector.positionOffset to infinite values.", bone);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___positionOffset_6);
		float L_28 = L_27->___x_2;
		bool L_29;
		L_29 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_28, NULL);
		if (L_29)
		{
			goto IL_0105;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___positionOffset_6);
		float L_31 = L_30->___y_3;
		bool L_32;
		L_32 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_31, NULL);
		if (L_32)
		{
			goto IL_0105;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___positionOffset_6);
		float L_34 = L_33->___z_4;
		bool L_35;
		L_35 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_34, NULL);
		G_B4_0 = ((int32_t)(L_35));
		goto IL_0106;
	}

IL_0105:
	{
		G_B4_0 = 1;
	}

IL_0106:
	{
		V_0 = (bool)G_B4_0;
		bool L_36 = V_0;
		if (!L_36)
		{
			goto IL_011b;
		}
	}
	{
		// ) Debug.LogError("Invalid IKEffector.positionOffset (contains Infinity)! Please make sure not to set IKEffector.positionOffset to infinite values.", bone);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___bone_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral0B265D0CCFBA84FD7853C1B0BADF564C5370CDDC, L_37, NULL);
	}

IL_011b:
	{
		// if (float.IsNaN(positionOffset.x) ||
		//     float.IsNaN(positionOffset.y) ||
		//     float.IsNaN(positionOffset.z)
		//     ) Debug.LogError("Invalid IKEffector.positionOffset (contains NaN)! Please make sure not to set IKEffector.positionOffset to NaN values.", bone);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___positionOffset_6);
		float L_39 = L_38->___x_2;
		bool L_40;
		L_40 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_39, NULL);
		if (L_40)
		{
			goto IL_0151;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___positionOffset_6);
		float L_42 = L_41->___y_3;
		bool L_43;
		L_43 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_42, NULL);
		if (L_43)
		{
			goto IL_0151;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___positionOffset_6);
		float L_45 = L_44->___z_4;
		bool L_46;
		L_46 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_45, NULL);
		G_B10_0 = ((int32_t)(L_46));
		goto IL_0152;
	}

IL_0151:
	{
		G_B10_0 = 1;
	}

IL_0152:
	{
		V_1 = (bool)G_B10_0;
		bool L_47 = V_1;
		if (!L_47)
		{
			goto IL_0167;
		}
	}
	{
		// ) Debug.LogError("Invalid IKEffector.positionOffset (contains NaN)! Please make sure not to set IKEffector.positionOffset to NaN values.", bone);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___bone_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral38718D750B683930B90DB4E21D45F5EA4F183B04, L_48, NULL);
	}

IL_0167:
	{
		// if (positionOffset.sqrMagnitude > 10000000000f) Debug.LogError("Additive effector positionOffset detected in Full Body IK (extremely large value). Make sure you are not circularily adding to effector positionOffset each frame.", bone);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___positionOffset_6);
		float L_50;
		L_50 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_49, NULL);
		V_2 = (bool)((((float)L_50) > ((float)(1.0E+10f)))? 1 : 0);
		bool L_51 = V_2;
		if (!L_51)
		{
			goto IL_018e;
		}
	}
	{
		// if (positionOffset.sqrMagnitude > 10000000000f) Debug.LogError("Additive effector positionOffset detected in Full Body IK (extremely large value). Make sure you are not circularily adding to effector positionOffset each frame.", bone);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___bone_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralB14C902CCAC9EC075B95BAA6219D1E59D49E02EB, L_52, NULL);
	}

IL_018e:
	{
		// if (float.IsInfinity(position.x) ||
		//     float.IsInfinity(position.y) ||
		//     float.IsInfinity(position.z)
		//     ) Debug.LogError("Invalid IKEffector.position (contains Infinity)!");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___position_4);
		float L_54 = L_53->___x_2;
		bool L_55;
		L_55 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_54, NULL);
		if (L_55)
		{
			goto IL_01c4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___position_4);
		float L_57 = L_56->___y_3;
		bool L_58;
		L_58 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_57, NULL);
		if (L_58)
		{
			goto IL_01c4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = (&__this->___position_4);
		float L_60 = L_59->___z_4;
		bool L_61;
		L_61 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_60, NULL);
		G_B18_0 = ((int32_t)(L_61));
		goto IL_01c5;
	}

IL_01c4:
	{
		G_B18_0 = 1;
	}

IL_01c5:
	{
		V_3 = (bool)G_B18_0;
		bool L_62 = V_3;
		if (!L_62)
		{
			goto IL_01d4;
		}
	}
	{
		// ) Debug.LogError("Invalid IKEffector.position (contains Infinity)!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral35B2171981CF45AC56351C9BC845E11D2ECC0729, NULL);
	}

IL_01d4:
	{
		// solver.GetNode(chainIndex, nodeIndex).offset += positionOffset * solver.IKPositionWeight;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_63 = ___solver0;
		int32_t L_64 = __this->___chainIndex_22;
		int32_t L_65 = __this->___nodeIndex_23;
		NullCheck(L_63);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_66;
		L_66 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_63, L_64, L_65, NULL);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_67 = L_66;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = L_67->___offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = __this->___positionOffset_6;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_70 = ___solver0;
		NullCheck(L_70);
		float L_71 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_70)->___IKPositionWeight_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_68, L_72, NULL);
		NullCheck(L_67);
		L_67->___offset_9 = L_73;
		// if (effectChildNodes && solver.iterations > 0) {
		bool L_74 = __this->___effectChildNodes_8;
		if (!L_74)
		{
			goto IL_021a;
		}
	}
	{
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_75 = ___solver0;
		NullCheck(L_75);
		int32_t L_76 = L_75->___iterations_10;
		G_B23_0 = ((((int32_t)L_76) > ((int32_t)0))? 1 : 0);
		goto IL_021b;
	}

IL_021a:
	{
		G_B23_0 = 0;
	}

IL_021b:
	{
		V_4 = (bool)G_B23_0;
		bool L_77 = V_4;
		if (!L_77)
		{
			goto IL_02b6;
		}
	}
	{
		// for (int i = 0; i < childBones.Length; i++) {
		V_5 = 0;
		goto IL_02a0;
	}

IL_022a:
	{
		// localPositions[i] = childBones[i].transform.position - bone.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = __this->___localPositions_17;
		int32_t L_79 = V_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_80 = __this->___childBones_10;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = __this->___bone_0;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_88, NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// solver.GetNode(childChainIndexes[i], childNodeIndexes[i]).offset += positionOffset * solver.IKPositionWeight;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_90 = ___solver0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___childChainIndexes_30;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___childNodeIndexes_31;
		int32_t L_96 = V_5;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_90);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_99;
		L_99 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_90, L_94, L_98, NULL);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_100 = L_99;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = L_100->___offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = __this->___positionOffset_6;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_103 = ___solver0;
		NullCheck(L_103);
		float L_104 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_103)->___IKPositionWeight_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_102, L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_101, L_105, NULL);
		NullCheck(L_100);
		L_100->___offset_9 = L_106;
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_02a0:
	{
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_108 = V_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_109 = __this->___childBones_10;
		NullCheck(L_109);
		V_6 = (bool)((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))? 1 : 0);
		bool L_110 = V_6;
		if (L_110)
		{
			goto IL_022a;
		}
	}
	{
	}

IL_02b6:
	{
		// if (usePlaneNodes && maintainRelativePositionWeight > 0f) {
		bool L_111 = __this->___usePlaneNodes_18;
		if (!L_111)
		{
			goto IL_02cd;
		}
	}
	{
		float L_112 = __this->___maintainRelativePositionWeight_9;
		G_B31_0 = ((((float)L_112) > ((float)(0.0f)))? 1 : 0);
		goto IL_02ce;
	}

IL_02cd:
	{
		G_B31_0 = 0;
	}

IL_02ce:
	{
		V_7 = (bool)G_B31_0;
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_0318;
		}
	}
	{
		// animatedPlaneRotation = Quaternion.LookRotation(planeBone2.position - planeBone1.position, planeBone3.position - planeBone1.position);;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114 = __this->___planeBone2_12;
		NullCheck(L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_114, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = __this->___planeBone1_11;
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_115, L_117, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119 = __this->___planeBone3_13;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_119, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = __this->___planeBone1_11;
		NullCheck(L_121);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_121, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_120, L_122, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_118, L_123, NULL);
		__this->___animatedPlaneRotation_19 = L_124;
	}

IL_0318:
	{
		// firstUpdate = true;
		__this->___firstUpdate_21 = (bool)1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::OnPostWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_OnPostWrite_mFCDC86CCE2BCA1122F3758685BB8F115140C4B1C (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) 
{
	{
		// positionOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___positionOffset_6 = L_0;
		// }
		return;
	}
}
// UnityEngine.Quaternion RootMotion.FinalIK.IKEffector::GetPlaneRotation(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 IKEffector_GetPlaneRotation_m395BD094AC7408FFEBB45FF97F50E12A6A39CEF5 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003C237E1AE6B20D76E3EF01922F3C4B14CB89AD);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 p1 = solver.GetNode(plane1ChainIndex, plane1NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___plane1ChainIndex_24;
		int32_t L_2 = __this->___plane1NodeIndex_25;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2;
		V_0 = L_4;
		// Vector3 p2 = solver.GetNode(plane2ChainIndex, plane2NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		int32_t L_6 = __this->___plane2ChainIndex_26;
		int32_t L_7 = __this->___plane2NodeIndex_27;
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8;
		L_8 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_6, L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___solverPosition_2;
		V_1 = L_9;
		// Vector3 p3 = solver.GetNode(plane3ChainIndex, plane3NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		int32_t L_11 = __this->___plane3ChainIndex_28;
		int32_t L_12 = __this->___plane3NodeIndex_29;
		NullCheck(L_10);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13;
		L_13 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_10, L_11, L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___solverPosition_2;
		V_2 = L_14;
		// Vector3 viewingVector = p2 - p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_3 = L_17;
		// Vector3 upVector = p3 - p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_19, NULL);
		V_4 = L_20;
		// if (viewingVector == Vector3.zero) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_23;
		L_23 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_21, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0087;
		}
	}
	{
		// Warning.Log("Make sure you are not placing 2 or more FBBIK effectors of the same chain to exactly the same position.", bone);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___bone_0;
		Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224(_stringLiteral003C237E1AE6B20D76E3EF01922F3C4B14CB89AD, L_25, (bool)0, NULL);
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_6 = L_26;
		goto IL_0093;
	}

IL_0087:
	{
		// return Quaternion.LookRotation(viewingVector, upVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_27, L_28, NULL);
		V_6 = L_29;
		goto IL_0093;
	}

IL_0093:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_6;
		return L_30;
	}
}
// System.Void RootMotion.FinalIK.IKEffector::Update(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKEffector_Update_m4F34CD34E8D7D89085E742F813C538D46CDF3181 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if (firstUpdate) {
		bool L_0 = __this->___firstUpdate_21;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// animatedPosition = bone.position + solver.GetNode(chainIndex, nodeIndex).offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___bone_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_4 = ___solver0;
		int32_t L_5 = __this->___chainIndex_22;
		int32_t L_6 = __this->___nodeIndex_23;
		NullCheck(L_4);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7;
		L_7 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_4, L_5, L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_8, NULL);
		__this->___animatedPosition_20 = L_9;
		// firstUpdate = false;
		__this->___firstUpdate_21 = (bool)0;
	}

IL_0041:
	{
		// solver.GetNode(chainIndex, nodeIndex).solverPosition = Vector3.Lerp(GetPosition(solver, out planeRotationOffset), position, posW);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		int32_t L_11 = __this->___chainIndex_22;
		int32_t L_12 = __this->___nodeIndex_23;
		NullCheck(L_10);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13;
		L_13 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_10, L_11, L_12, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_14 = ___solver0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_15 = (&__this->___planeRotationOffset_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = IKEffector_GetPosition_m55E588081B50368B1BC5E6C7237007309BB81FD7(__this, L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___position_4;
		float L_18 = __this->___posW_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_16, L_17, L_18, NULL);
		NullCheck(L_13);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___solverPosition_2 = L_19;
		// if (!effectChildNodes) return;
		bool L_20 = __this->___effectChildNodes_8;
		V_1 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		// if (!effectChildNodes) return;
		goto IL_010a;
	}

IL_0088:
	{
		// for (int i = 0; i < childBones.Length; i++) {
		V_2 = 0;
		goto IL_00fb;
	}

IL_008c:
	{
		// solver.GetNode(childChainIndexes[i], childNodeIndexes[i]).solverPosition = Vector3.Lerp(solver.GetNode(childChainIndexes[i], childNodeIndexes[i]).solverPosition, solver.GetNode(chainIndex, nodeIndex).solverPosition + localPositions[i], posW);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_22 = ___solver0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___childChainIndexes_30;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___childNodeIndexes_31;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_31;
		L_31 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_22, L_26, L_30, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_32 = ___solver0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___childChainIndexes_30;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___childNodeIndexes_31;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_32);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_41;
		L_41 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_32, L_36, L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_41)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_43 = ___solver0;
		int32_t L_44 = __this->___chainIndex_22;
		int32_t L_45 = __this->___nodeIndex_23;
		NullCheck(L_43);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_46;
		L_46 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_43, L_44, L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_46)->___solverPosition_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = __this->___localPositions_17;
		int32_t L_49 = V_2;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		float L_53 = __this->___posW_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_42, L_52, L_53, NULL);
		NullCheck(L_31);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_31)->___solverPosition_2 = L_54;
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00fb:
	{
		// for (int i = 0; i < childBones.Length; i++) {
		int32_t L_56 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_57 = __this->___childBones_10;
		NullCheck(L_57);
		V_3 = (bool)((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))))? 1 : 0);
		bool L_58 = V_3;
		if (L_58)
		{
			goto IL_008c;
		}
	}

IL_010a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKEffector::GetPosition(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKEffector_GetPosition_m55E588081B50368B1BC5E6C7237007309BB81FD7 (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___planeRotationOffset1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// planeRotationOffset = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___planeRotationOffset1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_0 = L_1;
		// if (!isEndEffector) return solver.GetNode(chainIndex, nodeIndex).solverPosition; // non end-effectors are always free
		bool L_2;
		L_2 = IKEffector_get_isEndEffector_m8CB821207AA2E57EE5A64ECBB7D967D783EE107C_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// if (!isEndEffector) return solver.GetNode(chainIndex, nodeIndex).solverPosition; // non end-effectors are always free
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_4 = ___solver0;
		int32_t L_5 = __this->___chainIndex_22;
		int32_t L_6 = __this->___nodeIndex_23;
		NullCheck(L_4);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_7;
		L_7 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_4, L_5, L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_7)->___solverPosition_2;
		V_3 = L_8;
		goto IL_0109;
	}

IL_0036:
	{
		// if (maintainRelativePositionWeight <= 0f) return animatedPosition;
		float L_9 = __this->___maintainRelativePositionWeight_9;
		V_4 = (bool)((((int32_t)((!(((float)L_9) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// if (maintainRelativePositionWeight <= 0f) return animatedPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___animatedPosition_20;
		V_3 = L_11;
		goto IL_0109;
	}

IL_0058:
	{
		// Vector3 p = bone.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bone_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_0 = L_13;
		// Vector3 dir = p - planeBone1.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___planeBone1_11;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_16, NULL);
		V_1 = L_17;
		// planeRotationOffset = GetPlaneRotation(solver) * Quaternion.Inverse(animatedPlaneRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_18 = ___planeRotationOffset1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_19 = ___solver0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = IKEffector_GetPlaneRotation_m395BD094AC7408FFEBB45FF97F50E12A6A39CEF5(__this, L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = __this->___animatedPlaneRotation_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_20, L_22, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_18 = L_23;
		// p = solver.GetNode(plane1ChainIndex, plane1NodeIndex).solverPosition + planeRotationOffset * dir;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_24 = ___solver0;
		int32_t L_25 = __this->___plane1ChainIndex_24;
		int32_t L_26 = __this->___plane1NodeIndex_25;
		NullCheck(L_24);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_27;
		L_27 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_24, L_25, L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_27)->___solverPosition_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_29 = ___planeRotationOffset1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_32, NULL);
		V_0 = L_33;
		// planeRotationOffset = Quaternion.Lerp(Quaternion.identity, planeRotationOffset, maintainRelativePositionWeight);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_34 = ___planeRotationOffset1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_36 = ___planeRotationOffset1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_36);
		float L_38 = __this->___maintainRelativePositionWeight_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_35, L_37, L_38, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_34 = L_39;
		// return Vector3.Lerp(animatedPosition, p + solver.GetNode(chainIndex, nodeIndex).offset, maintainRelativePositionWeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___animatedPosition_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_42 = ___solver0;
		int32_t L_43 = __this->___chainIndex_22;
		int32_t L_44 = __this->___nodeIndex_23;
		NullCheck(L_42);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_45;
		L_45 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_42, L_43, L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45->___offset_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_46, NULL);
		float L_48 = __this->___maintainRelativePositionWeight_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_40, L_47, L_48, NULL);
		V_3 = L_49;
		goto IL_0109;
	}

IL_0109:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_3;
		return L_50;
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
// System.Boolean RootMotion.FinalIK.IKMapping::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMapping_IsValid_mFF2010491110E822FF33C42D026EDE387D9C8628 (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.IKMapping::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMapping_Initiate_mCBF89EA363A5C577AAB012F7DA63CEB788E37A76 (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	{
		// public virtual void Initiate(IKSolverFullBody solver) {}
		return;
	}
}
// System.Boolean RootMotion.FinalIK.IKMapping::BoneIsValid(UnityEngine.Transform,RootMotion.FinalIK.IKSolver,System.String&,RootMotion.Warning/Logger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMapping_BoneIsValid_m8CCF86588D146836AD979F1536325A84D1F79176 (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone0, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver1, String_t** ___message2, Logger_tC7A433B56305082BD52A69C362F663BDA1077283* ___logger3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC5F9E07256CEB29BD7A970F760C1F47CBE41A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral903F60C83AC5275294F904A9EE73C0D6E8DB4692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (bone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___bone0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// message = "IKMappingLimb contains a null reference.";
		String_t** L_3 = ___message2;
		*((RuntimeObject**)L_3) = (RuntimeObject*)_stringLiteral903F60C83AC5275294F904A9EE73C0D6E8DB4692;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)_stringLiteral903F60C83AC5275294F904A9EE73C0D6E8DB4692);
		// if (logger != null) logger(message);
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_4 = ___logger3;
		V_1 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// if (logger != null) logger(message);
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_6 = ___logger3;
		String_t** L_7 = ___message2;
		String_t* L_8 = *((String_t**)L_7);
		NullCheck(L_6);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_6, L_8, NULL);
	}

IL_0027:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_006e;
	}

IL_002b:
	{
		// if (solver.GetPoint(bone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_9 = ___solver1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___bone0;
		NullCheck(L_9);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_11;
		L_11 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_9, L_10);
		V_3 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// message = "IKMappingLimb is referencing to a bone '" + bone.name + "' that does not excist in the Node Chain.";
		String_t** L_13 = ___message2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___bone0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0EC5F9E07256CEB29BD7A970F760C1F47CBE41A4, L_15, _stringLiteral9A8C6AFFD91C554E2E2BEFA2C47FFE890DE3BB06, NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_16);
		// if (logger != null) logger(message);
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_17 = ___logger3;
		V_4 = (bool)((!(((RuntimeObject*)(Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0066;
		}
	}
	{
		// if (logger != null) logger(message);
		Logger_tC7A433B56305082BD52A69C362F663BDA1077283* L_19 = ___logger3;
		String_t** L_20 = ___message2;
		String_t* L_21 = *((String_t**)L_20);
		NullCheck(L_19);
		Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline(L_19, L_21, NULL);
	}

IL_0066:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_006e;
	}

IL_006a:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping::SolveFABRIKJoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKMapping_SolveFABRIKJoint_m6B880F03BFBF78C1004F184C292B7220E44E262C (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___length2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return pos2 + (pos1 - pos2).normalized * length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_5 = ___length2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_6, NULL);
		V_1 = L_7;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		return L_8;
	}
}
// System.Void RootMotion.FinalIK.IKMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B (IKMapping_t102873B8AC081DB81355663ABDF33C3A9659B73B* __this, const RuntimeMethod* method) 
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
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Initiate(UnityEngine.Transform,RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver1, const RuntimeMethod* method) 
{
	{
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		__this->___transform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_0), (void*)L_0);
		// solver.GetChainAndNodeIndexes(transform, out chainIndex, out nodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_1 = ___solver1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform0;
		int32_t* L_3 = (&__this->___chainIndex_1);
		int32_t* L_4 = (&__this->___nodeIndex_2);
		NullCheck(L_1);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::get_swingDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoneMap_get_swingDirection_m8F9E1BD286C3F284BD6A194867AAB09E5B82EC7A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.rotation * localSwingAxis;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___localSwingAxis_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	{
		// defaultLocalPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___defaultLocalPosition_3 = L_1;
		// defaultLocalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___defaultLocalRotation_4 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::FixTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, bool ___position0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (position) transform.localPosition = defaultLocalPosition;
		bool L_0 = ___position0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (position) transform.localPosition = defaultLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___defaultLocalPosition_3;
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
	}

IL_0018:
	{
		// transform.localRotation = defaultLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___defaultLocalRotation_4;
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Boolean RootMotion.FinalIK.IKMapping/BoneMap::get_isNodeBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoneMap_get_isNodeBone_mD75B158BC5B6CF86FF6242C82CFA6A75FFC72BDA (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return nodeIndex != -1;
		int32_t L_0 = __this->___nodeIndex_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLength(RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLength_mD16EAF16CA9991AC7BD1F449068F266DE8054D95 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___nextBone0, const RuntimeMethod* method) 
{
	{
		// length = Vector3.Distance(transform.position, nextBone.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = ___nextBone0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2->___transform_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		__this->___length_11 = L_5;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalSwingAxis_mFA6313585175F52A410D3CD50B243AA4F143B465 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___swingTarget0, const RuntimeMethod* method) 
{
	{
		// SetLocalSwingAxis(swingTarget, this);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = ___swingTarget0;
		BoneMap_SetLocalSwingAxis_m59A9A11DD0661E24E83E09FE0605B92571DD4AD6(__this, L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap,RootMotion.FinalIK.IKMapping/BoneMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalSwingAxis_m59A9A11DD0661E24E83E09FE0605B92571DD4AD6 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___bone10, BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* ___bone21, const RuntimeMethod* method) 
{
	{
		// localSwingAxis = Quaternion.Inverse(transform.rotation) * (bone1.transform.position - bone2.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = ___bone10;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = ___bone21;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___transform_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_9, NULL);
		__this->___localSwingAxis_5 = L_10;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetLocalTwistAxis(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetLocalTwistAxis_mC59C9E3FB60FBA56CB1BD270AD8987E045DF892B (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___twistDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalDirection1, const RuntimeMethod* method) 
{
	{
		// Vector3.OrthoNormalize(ref normalDirection, ref twistDirection);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&___normalDirection1), (&___twistDirection0), NULL);
		// localTwistAxis = Quaternion.Inverse(transform.rotation) * twistDirection;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___twistDirection0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		__this->___localTwistAxis_6 = L_4;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetPlane(RootMotion.FinalIK.IKSolverFullBody,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone22, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___planeBone33, const RuntimeMethod* method) 
{
	{
		// this.planeBone1 = planeBone1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___planeBone11;
		__this->___planeBone1_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planeBone1_13), (void*)L_0);
		// this.planeBone2 = planeBone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___planeBone22;
		__this->___planeBone2_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planeBone2_14), (void*)L_1);
		// this.planeBone3 = planeBone3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___planeBone33;
		__this->___planeBone3_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planeBone3_15), (void*)L_2);
		// solver.GetChainAndNodeIndexes(planeBone1, out plane1ChainIndex, out plane1NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_3 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___planeBone11;
		int32_t* L_5 = (&__this->___plane1ChainIndex_16);
		int32_t* L_6 = (&__this->___plane1NodeIndex_17);
		NullCheck(L_3);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_3, L_4, L_5, L_6, NULL);
		// solver.GetChainAndNodeIndexes(planeBone2, out plane2ChainIndex, out plane2NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_7 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___planeBone22;
		int32_t* L_9 = (&__this->___plane2ChainIndex_18);
		int32_t* L_10 = (&__this->___plane2NodeIndex_19);
		NullCheck(L_7);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_7, L_8, L_9, L_10, NULL);
		// solver.GetChainAndNodeIndexes(planeBone3, out plane3ChainIndex, out plane3NodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_11 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___planeBone33;
		int32_t* L_13 = (&__this->___plane3ChainIndex_20);
		int32_t* L_14 = (&__this->___plane3NodeIndex_21);
		NullCheck(L_11);
		IKSolverFullBody_GetChainAndNodeIndexes_m8328AE1969EA109880012F56DD07FC12EC6D9EE4(L_11, L_12, L_13, L_14, NULL);
		// UpdatePlane(true, true);
		BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26(__this, (bool)1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::UpdatePlane(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, bool ___rotation0, bool ___position1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// Quaternion t = lastAnimatedTargetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoneMap_get_lastAnimatedTargetRotation_m688D98C7FF6DB426B48E3ED09B6F044F604049FC(__this, NULL);
		V_0 = L_0;
		// if (rotation) defaultLocalTargetRotation = QuaTools.RotationToLocalSpace(transform.rotation, t);
		bool L_1 = ___rotation0;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (rotation) defaultLocalTargetRotation = QuaTools.RotationToLocalSpace(transform.rotation, t);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transform_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = QuaTools_RotationToLocalSpace_m37DCBE1249C02133072879242A19F075FC6DC582(L_4, L_5, NULL);
		__this->___defaultLocalTargetRotation_9 = L_6;
	}

IL_0024:
	{
		// if (position) planePosition = Quaternion.Inverse(t) * (transform.position - planeBone1.position);
		bool L_7 = ___position1;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// if (position) planePosition = Quaternion.Inverse(t) * (transform.position - planeBone1.position);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___transform_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___planeBone1_13;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_15, NULL);
		__this->___planePosition_7 = L_16;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetIKPosition_m04FFD7715B14ABC280B3FD69E7F229C33A4B76B4 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	{
		// ikPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___ikPosition_8 = L_1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::MaintainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_MaintainRotation_mD7693BB7245BDCA8237842FAB5138AEAFE3DEC31 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	{
		// maintainRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		__this->___maintainRotation_10 = L_1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::SetToIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_SetToIKPosition_mB7B0650493B3EAD519E6F3B8E5D85196E59FA0D4 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = ikPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___ikPosition_8;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::FixToNode(RootMotion.FinalIK.IKSolverFullBody,System.Single,RootMotion.FinalIK.IKSolver/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_FixToNode_m634B758931B94FA518E906136B2C0D575C948584 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* ___fixNode2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (fixNode == null) fixNode = solver.GetNode(chainIndex, nodeIndex);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_0 = ___fixNode2;
		V_0 = (bool)((((RuntimeObject*)(Node_tEA311F89C5AADCD12594674635F7F815659FBC9D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (fixNode == null) fixNode = solver.GetNode(chainIndex, nodeIndex);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_2 = ___solver0;
		int32_t L_3 = __this->___chainIndex_1;
		int32_t L_4 = __this->___nodeIndex_2;
		NullCheck(L_2);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_5;
		L_5 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_2, L_3, L_4, NULL);
		___fixNode2 = L_5;
	}

IL_001d:
	{
		// if (weight >= 1f) {
		float L_6 = ___weight1;
		V_1 = (bool)((((int32_t)((!(((float)L_6) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// transform.position = fixNode.solverPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transform_0;
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_9 = ___fixNode2;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_9)->___solverPosition_2;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_10, NULL);
		// return;
		goto IL_0064;
	}

IL_0041:
	{
		// transform.position = Vector3.Lerp(transform.position, fixNode.solverPosition, weight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_14 = ___fixNode2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_14)->___solverPosition_2;
		float L_16 = ___weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_15, L_16, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKMapping/BoneMap::GetPlanePosition(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoneMap_GetPlanePosition_m8FB01D030902BFA24945F3021C8957A9D7EAC20D (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return solver.GetNode(plane1ChainIndex, plane1NodeIndex).solverPosition + (GetTargetRotation(solver) * planePosition);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___plane1ChainIndex_16;
		int32_t L_2 = __this->___plane1NodeIndex_17;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = BoneMap_GetTargetRotation_m371E186AE030CE104F59C33D1B146D3EAF421BBD(__this, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___planePosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		V_0 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::PositionToPlane(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_PositionToPlane_mA29E20D46E347640D153917A4807B664EDB14807 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	{
		// transform.position = GetPlanePosition(solver);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_1 = ___solver0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = BoneMap_GetPlanePosition_m8FB01D030902BFA24945F3021C8957A9D7EAC20D(__this, L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToPlane(RootMotion.FinalIK.IKSolverFullBody,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Quaternion r = GetTargetRotation(solver) * defaultLocalTargetRotation;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = BoneMap_GetTargetRotation_m371E186AE030CE104F59C33D1B146D3EAF421BBD(__this, L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___defaultLocalTargetRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (weight >= 1f) {
		float L_4 = ___weight1;
		V_1 = (bool)((((int32_t)((!(((float)L_4) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// transform.rotation = r;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		// return;
		goto IL_0051;
	}

IL_0033:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, r, weight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_0;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = ___weight1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_10, L_11, L_12, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_13, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Swing(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Swing_mAB4A601818F4EB6B611D159324D3D65BCEB09DCC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___swingTarget0, float ___weight1, const RuntimeMethod* method) 
{
	{
		// Swing(swingTarget, transform.position, weight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___swingTarget0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___transform_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = ___weight1;
		BoneMap_Swing_m7FB6C7ABA38D5B80A5504618644534169006828A(__this, L_0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Swing(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Swing_m7FB6C7ABA38D5B80A5504618644534169006828A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos21, float ___weight2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Quaternion r = Quaternion.FromToRotation(transform.rotation * localSwingAxis, pos1 - pos2) * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___localSwingAxis_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_3, L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transform_0;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_9, NULL);
		V_0 = L_10;
		// if (weight >= 1f) {
		float L_11 = ___weight2;
		V_1 = (bool)((((int32_t)((!(((float)L_11) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		// transform.rotation = r;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_14, NULL);
		// return;
		goto IL_0071;
	}

IL_0053:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, r, weight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___transform_0;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_0;
		float L_19 = ___weight2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_17, L_18, L_19, NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_20, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::Twist(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_Twist_mBA98F54C266DD04A83E0845FCE0CE9C5F4CCBBF0 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___twistDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normalDirection1, float ___weight2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Vector3.OrthoNormalize(ref normalDirection, ref twistDirection);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&___normalDirection1), (&___twistDirection0), NULL);
		// Quaternion r = Quaternion.FromToRotation(transform.rotation * localTwistAxis, twistDirection) * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___localTwistAxis_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___twistDirection0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transform_0;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// if (weight >= 1f) {
		float L_9 = ___weight2;
		V_1 = (bool)((((int32_t)((!(((float)L_9) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// transform.rotation = r;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_12, NULL);
		// return;
		goto IL_0075;
	}

IL_0057:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, r, weight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___transform_0;
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_0;
		float L_17 = ___weight2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_15, L_16, L_17, NULL);
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_18, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToMaintain(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToMaintain_m9782F34990CAB767A66F943A8DA536D8602B92F6 (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, float ___weight0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (weight <= 0f) return;
		float L_0 = ___weight0;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (weight <= 0f) return;
		goto IL_0035;
	}

IL_0012:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, maintainRotation, weight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transform_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___maintainRotation_10;
		float L_6 = ___weight0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_4, L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::RotateToEffector(RootMotion.FinalIK.IKSolverFullBody,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap_RotateToEffector_m55A227B2BCFD7FF0FE8A27198ECC3FB605172E4F (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, float ___weight1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!isNodeBone) return;
		bool L_0;
		L_0 = BoneMap_get_isNodeBone_mD75B158BC5B6CF86FF6242C82CFA6A75FFC72BDA(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!isNodeBone) return;
		goto IL_00a7;
	}

IL_0013:
	{
		// float w = weight * solver.GetNode(chainIndex, nodeIndex).effectorRotationWeight;
		float L_2 = ___weight1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_3 = ___solver0;
		int32_t L_4 = __this->___chainIndex_1;
		int32_t L_5 = __this->___nodeIndex_2;
		NullCheck(L_3);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_6;
		L_6 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_3, L_4, L_5, NULL);
		NullCheck(L_6);
		float L_7 = L_6->___effectorRotationWeight_8;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_7));
		// if (w <= 0f) return;
		float L_8 = V_0;
		V_2 = (bool)((((int32_t)((!(((float)L_8) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// if (w <= 0f) return;
		goto IL_00a7;
	}

IL_003e:
	{
		// if (w >= 1f) {
		float L_10 = V_0;
		V_3 = (bool)((((int32_t)((!(((float)L_10) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		// transform.rotation = solver.GetNode(chainIndex, nodeIndex).solverRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_13 = ___solver0;
		int32_t L_14 = __this->___chainIndex_1;
		int32_t L_15 = __this->___nodeIndex_2;
		NullCheck(L_13);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_16;
		L_16 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_13, L_14, L_15, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverRotation_3;
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_17, NULL);
		// return;
		goto IL_00a7;
	}

IL_0073:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, solver.GetNode(chainIndex, nodeIndex).solverRotation, w);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___transform_0;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_21 = ___solver0;
		int32_t L_22 = __this->___chainIndex_1;
		int32_t L_23 = __this->___nodeIndex_2;
		NullCheck(L_21);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_24;
		L_24 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_21, L_22, L_23, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_24)->___solverRotation_3;
		float L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_20, L_25, L_26, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_27, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::GetTargetRotation(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoneMap_GetTargetRotation_m371E186AE030CE104F59C33D1B146D3EAF421BBD (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 p1 = solver.GetNode(plane1ChainIndex, plane1NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_0 = ___solver0;
		int32_t L_1 = __this->___plane1ChainIndex_16;
		int32_t L_2 = __this->___plane1NodeIndex_17;
		NullCheck(L_0);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_3;
		L_3 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___solverPosition_2;
		V_0 = L_4;
		// Vector3 p2 = solver.GetNode(plane2ChainIndex, plane2NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		int32_t L_6 = __this->___plane2ChainIndex_18;
		int32_t L_7 = __this->___plane2NodeIndex_19;
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_8;
		L_8 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_6, L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___solverPosition_2;
		V_1 = L_9;
		// Vector3 p3 = solver.GetNode(plane3ChainIndex, plane3NodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_10 = ___solver0;
		int32_t L_11 = __this->___plane3ChainIndex_20;
		int32_t L_12 = __this->___plane3NodeIndex_21;
		NullCheck(L_10);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13;
		L_13 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_10, L_11, L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___solverPosition_2;
		V_2 = L_14;
		// if (p1 == p3) return Quaternion.identity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		bool L_17;
		L_17 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_15, L_16, NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_005d;
		}
	}
	{
		// if (p1 == p3) return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_4 = L_19;
		goto IL_0074;
	}

IL_005d:
	{
		// return Quaternion.LookRotation(p2 - p1, p3 - p1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_22, L_25, NULL);
		V_4 = L_26;
		goto IL_0074;
	}

IL_0074:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_4;
		return L_27;
	}
}
// UnityEngine.Quaternion RootMotion.FinalIK.IKMapping/BoneMap::get_lastAnimatedTargetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoneMap_get_lastAnimatedTargetRotation_m688D98C7FF6DB426B48E3ED09B6F044F604049FC (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (planeBone1.position == planeBone3.position) return Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___planeBone1_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___planeBone3_15;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// if (planeBone1.position == planeBone3.position) return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_1 = L_6;
		goto IL_0066;
	}

IL_0028:
	{
		// return Quaternion.LookRotation(planeBone2.position - planeBone1.position, planeBone3.position - planeBone1.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___planeBone2_14;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___planeBone1_13;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___planeBone3_15;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___planeBone1_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_11, L_16, NULL);
		V_1 = L_17;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		return L_18;
	}
}
// System.Void RootMotion.FinalIK.IKMapping/BoneMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* __this, const RuntimeMethod* method) 
{
	{
		// public int chainIndex = -1;
		__this->___chainIndex_1 = (-1);
		// public int nodeIndex = -1;
		__this->___nodeIndex_2 = (-1);
		// private int plane1ChainIndex = -1;
		__this->___plane1ChainIndex_16 = (-1);
		// private int plane1NodeIndex = -1;
		__this->___plane1NodeIndex_17 = (-1);
		// private int plane2ChainIndex = -1;
		__this->___plane2ChainIndex_18 = (-1);
		// private int plane2NodeIndex = -1;
		__this->___plane2NodeIndex_19 = (-1);
		// private int plane3ChainIndex = -1;
		__this->___plane3ChainIndex_20 = (-1);
		// private int plane3NodeIndex = -1;
		__this->___plane3NodeIndex_21 = (-1);
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
// System.Boolean RootMotion.FinalIK.IKMappingBone::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMappingBone_IsValid_m803B6B7083DEA9EFA8D007093CDA20E3ADD9BD57 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B2D4ED69B5B0A5CDA8E3D5EBAED9E019CE646A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!base.IsValid(solver, ref message)) return false;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_0 = ___solver0;
		String_t** L_1 = ___message1;
		bool L_2;
		L_2 = IKMapping_IsValid_mFF2010491110E822FF33C42D026EDE387D9C8628(__this, L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// if (!base.IsValid(solver, ref message)) return false;
		V_1 = (bool)0;
		goto IL_0034;
	}

IL_0014:
	{
		// if (bone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// message = "IKMappingBone's bone is null.";
		String_t** L_7 = ___message1;
		*((RuntimeObject**)L_7) = (RuntimeObject*)_stringLiteral05B2D4ED69B5B0A5CDA8E3D5EBAED9E019CE646A;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)_stringLiteral05B2D4ED69B5B0A5CDA8E3D5EBAED9E019CE646A);
		// return false;
		V_1 = (bool)0;
		goto IL_0034;
	}

IL_0030:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone__ctor_m47700F65284D6FB5C0344DFB5104C5268C953F80 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float maintainRotationWeight = 1f;
		__this->___maintainRotationWeight_1 = (1.0f);
		// private BoneMap boneMap = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_0, NULL);
		__this->___boneMap_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap_2), (void*)L_0);
		// public IKMappingBone() {}
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// public IKMappingBone() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone__ctor_mACABF18C4B5ECEAFE29619CA52FE4F7E8F8BE480 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float maintainRotationWeight = 1f;
		__this->___maintainRotationWeight_1 = (1.0f);
		// private BoneMap boneMap = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_0, NULL);
		__this->___boneMap_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap_2), (void*)L_0);
		// public IKMappingBone(Transform bone) {
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// this.bone = bone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___bone0;
		__this->___bone_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone_StoreDefaultLocalState_m5267C2914967394367A7B7268CA271F7A881CA1B (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, const RuntimeMethod* method) 
{
	{
		// boneMap.StoreDefaultLocalState();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap_2;
		NullCheck(L_0);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_0, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone_FixTransforms_mC73FBAB350D577B84AAD9EE28776016EB494630B (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, const RuntimeMethod* method) 
{
	{
		// boneMap.FixTransform(false);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap_2;
		NullCheck(L_0);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone_Initiate_mA2843DB218119CA3E67250ED6D91E200054F0CE3 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (boneMap == null) boneMap = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap_2;
		V_0 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (boneMap == null) boneMap = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___boneMap_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap_2), (void*)L_2);
	}

IL_0019:
	{
		// boneMap.Initiate(bone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = __this->___boneMap_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		NullCheck(L_3);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::ReadPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone_ReadPose_mEF6DCCC5C0D69BA8EE950C4C3F6EC3D736730143 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, const RuntimeMethod* method) 
{
	{
		// boneMap.MaintainRotation();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap_2;
		NullCheck(L_0);
		BoneMap_MaintainRotation_mD7693BB7245BDCA8237842FAB5138AEAFE3DEC31(L_0, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingBone::WritePose(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingBone_WritePose_m23B200CEEC5A6BECB2297C249115352FB1612E50 (IKMappingBone_t50EC6BC298D1E4F5FD42EBA559FC3DCB762084C3* __this, float ___solverWeight0, const RuntimeMethod* method) 
{
	{
		// boneMap.RotateToMaintain(solverWeight * maintainRotationWeight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap_2;
		float L_1 = ___solverWeight0;
		float L_2 = __this->___maintainRotationWeight_1;
		NullCheck(L_0);
		BoneMap_RotateToMaintain_m9782F34990CAB767A66F943A8DA536D8602B92F6(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		// }
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
// System.Boolean RootMotion.FinalIK.IKMappingLimb::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMappingLimb_IsValid_m0C5E5F407CF8FE7DD7F93F4611C80CBB264B1368 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!base.IsValid(solver, ref message)) return false;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_0 = ___solver0;
		String_t** L_1 = ___message1;
		bool L_2;
		L_2 = IKMapping_IsValid_mFF2010491110E822FF33C42D026EDE387D9C8628(__this, L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// if (!base.IsValid(solver, ref message)) return false;
		V_1 = (bool)0;
		goto IL_0068;
	}

IL_0014:
	{
		// if (!BoneIsValid(bone1, solver, ref message)) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone1_1;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_5 = ___solver0;
		String_t** L_6 = ___message1;
		bool L_7;
		L_7 = IKMapping_BoneIsValid_m8CCF86588D146836AD979F1536325A84D1F79176(__this, L_4, L_5, L_6, (Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)NULL, NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// if (!BoneIsValid(bone1, solver, ref message)) return false;
		V_1 = (bool)0;
		goto IL_0068;
	}

IL_002e:
	{
		// if (!BoneIsValid(bone2, solver, ref message)) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bone2_2;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_10 = ___solver0;
		String_t** L_11 = ___message1;
		bool L_12;
		L_12 = IKMapping_BoneIsValid_m8CCF86588D146836AD979F1536325A84D1F79176(__this, L_9, L_10, L_11, (Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)NULL, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		// if (!BoneIsValid(bone2, solver, ref message)) return false;
		V_1 = (bool)0;
		goto IL_0068;
	}

IL_0048:
	{
		// if (!BoneIsValid(bone3, solver, ref message)) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___bone3_3;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_15 = ___solver0;
		String_t** L_16 = ___message1;
		bool L_17;
		L_17 = IKMapping_BoneIsValid_m8CCF86588D146836AD979F1536325A84D1F79176(__this, L_14, L_15, L_16, (Logger_tC7A433B56305082BD52A69C362F663BDA1077283*)NULL, NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		// if (!BoneIsValid(bone3, solver, ref message)) return false;
		V_1 = (bool)0;
		goto IL_0068;
	}

IL_0064:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		bool L_19 = V_1;
		return L_19;
	}
}
// RootMotion.FinalIK.IKMapping/BoneMap RootMotion.FinalIK.IKMappingLimb::GetBoneMap(RootMotion.FinalIK.IKMappingLimb/BoneMapType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* IKMappingLimb_GetBoneMap_mAF4F8504FB9B9C2CD4235CCFAEC978D3B3000281 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, int32_t ___boneMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F030496F5D21BC17F56ACDA8166987A9C13FFB3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* V_3 = NULL;
	{
		// switch(boneMap) {
		int32_t L_0 = ___boneMap0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_004d;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0019:
	{
		// if (parentBone == null) Warning.Log("This limb does not have a parent (shoulder) bone", bone1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___parentBone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// if (parentBone == null) Warning.Log("This limb does not have a parent (shoulder) bone", bone1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___bone1_1;
		Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224(_stringLiteral1F030496F5D21BC17F56ACDA8166987A9C13FFB3, L_6, (bool)0, NULL);
	}

IL_003b:
	{
		// return boneMapParent;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_7 = __this->___boneMapParent_7;
		V_3 = L_7;
		goto IL_005f;
	}

IL_0044:
	{
		// case BoneMapType.Bone1: return boneMap1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_8 = __this->___boneMap1_8;
		V_3 = L_8;
		goto IL_005f;
	}

IL_004d:
	{
		// case BoneMapType.Bone2: return boneMap2;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_9 = __this->___boneMap2_9;
		V_3 = L_9;
		goto IL_005f;
	}

IL_0056:
	{
		// default: return boneMap3;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_10 = __this->___boneMap3_10;
		V_3 = L_10;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_11 = V_3;
		return L_11;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::SetLimbOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_SetLimbOrientation_mB9FD276F12E3CAE87DD4FE205073C390CD330A07 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upper0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lower1, const RuntimeMethod* method) 
{
	{
		// boneMap1.defaultLocalTargetRotation = Quaternion.Inverse(Quaternion.Inverse(bone1.rotation) * Quaternion.LookRotation(bone2.position - bone1.position, bone1.rotation * -upper));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap1_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___bone1_1;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bone2_2;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___bone1_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bone1_1;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___upper0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_8, L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_15, NULL);
		NullCheck(L_0);
		L_0->___defaultLocalTargetRotation_9 = L_16;
		// boneMap2.defaultLocalTargetRotation = Quaternion.Inverse(Quaternion.Inverse(bone2.rotation) * Quaternion.LookRotation(bone3.position - bone2.position, bone2.rotation * -lower));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_17 = __this->___boneMap2_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___bone2_2;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___bone3_3;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___bone2_2;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___bone2_2;
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___lower1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_27, L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_25, L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_20, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_32, NULL);
		NullCheck(L_17);
		L_17->___defaultLocalTargetRotation_9 = L_33;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb__ctor_m3F59464D3F14FBC8CCC49F2F8B870795D1C4F0AF (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float weight = 1f; // Added in 0.2
		__this->___weight_5 = (1.0f);
		// [System.NonSerializedAttribute] public bool updatePlaneRotations = true;
		__this->___updatePlaneRotations_6 = (bool)1;
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_0, NULL);
		__this->___boneMapParent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMapParent_7), (void*)L_0);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_1 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_1, NULL);
		__this->___boneMap1_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap1_8), (void*)L_1);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___boneMap2_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap2_9), (void*)L_2);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_3, NULL);
		__this->___boneMap3_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap3_10), (void*)L_3);
		// public IKMappingLimb() {}
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// public IKMappingLimb() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::.ctor(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb__ctor_m59DB3220FF5A63F8388441968CA84A6651C53769 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentBone3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float weight = 1f; // Added in 0.2
		__this->___weight_5 = (1.0f);
		// [System.NonSerializedAttribute] public bool updatePlaneRotations = true;
		__this->___updatePlaneRotations_6 = (bool)1;
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_0, NULL);
		__this->___boneMapParent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMapParent_7), (void*)L_0);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_1 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_1, NULL);
		__this->___boneMap1_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap1_8), (void*)L_1);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___boneMap2_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap2_9), (void*)L_2);
		// private BoneMap boneMapParent = new BoneMap(), boneMap1 = new BoneMap(), boneMap2 = new BoneMap(), boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_3, NULL);
		__this->___boneMap3_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap3_10), (void*)L_3);
		// public IKMappingLimb(Transform bone1, Transform bone2, Transform bone3, Transform parentBone = null) {
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// SetBones(bone1, bone2, bone3, parentBone);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___bone10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___bone21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___bone32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___parentBone3;
		IKMappingLimb_SetBones_m0E08BD4EDF53F2BEEC3F6457E38B5A12E6A23F04(__this, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::SetBones(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_SetBones_m0E08BD4EDF53F2BEEC3F6457E38B5A12E6A23F04 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone10, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone21, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bone32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentBone3, const RuntimeMethod* method) 
{
	{
		// this.bone1 = bone1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___bone10;
		__this->___bone1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone1_1), (void*)L_0);
		// this.bone2 = bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___bone21;
		__this->___bone2_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone2_2), (void*)L_1);
		// this.bone3 = bone3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___bone32;
		__this->___bone3_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone3_3), (void*)L_2);
		// this.parentBone = parentBone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___parentBone3;
		__this->___parentBone_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentBone_0), (void*)L_3);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_StoreDefaultLocalState_m00E4493A5BC0D11993DB2CD976878840A8EC831D (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (parentBone != null) boneMapParent.StoreDefaultLocalState();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parentBone_0;
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
		// if (parentBone != null) boneMapParent.StoreDefaultLocalState();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = __this->___boneMapParent_7;
		NullCheck(L_3);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_3, NULL);
	}

IL_001d:
	{
		// boneMap1.StoreDefaultLocalState();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_4 = __this->___boneMap1_8;
		NullCheck(L_4);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_4, NULL);
		// boneMap2.StoreDefaultLocalState();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_5 = __this->___boneMap2_9;
		NullCheck(L_5);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_5, NULL);
		// boneMap3.StoreDefaultLocalState();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = __this->___boneMap3_10;
		NullCheck(L_6);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_6, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_FixTransforms_m29F298A6B829F1EB341AD75AA31F1FC05B03E0CE (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (parentBone != null) boneMapParent.FixTransform(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parentBone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (parentBone != null) boneMapParent.FixTransform(false);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = __this->___boneMapParent_7;
		NullCheck(L_3);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(L_3, (bool)0, NULL);
	}

IL_001e:
	{
		// boneMap1.FixTransform(true);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_4 = __this->___boneMap1_8;
		NullCheck(L_4);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(L_4, (bool)1, NULL);
		// boneMap2.FixTransform(false);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_5 = __this->___boneMap2_9;
		NullCheck(L_5);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(L_5, (bool)0, NULL);
		// boneMap3.FixTransform(false);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = __this->___boneMap3_10;
		NullCheck(L_6);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_Initiate_m3E6C48906909F6A40B85CB1E46284DDF555DDBEB (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (boneMapParent == null) boneMapParent = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMapParent_7;
		V_0 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (boneMapParent == null) boneMapParent = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___boneMapParent_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMapParent_7), (void*)L_2);
	}

IL_0019:
	{
		// if (boneMap1 == null) boneMap1 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = __this->___boneMap1_8;
		V_1 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if (boneMap1 == null) boneMap1 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_5 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_5, NULL);
		__this->___boneMap1_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap1_8), (void*)L_5);
	}

IL_0031:
	{
		// if (boneMap2 == null) boneMap2 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = __this->___boneMap2_9;
		V_2 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// if (boneMap2 == null) boneMap2 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_8 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_8, NULL);
		__this->___boneMap2_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap2_9), (void*)L_8);
	}

IL_0049:
	{
		// if (boneMap3 == null) boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_9 = __this->___boneMap3_10;
		V_3 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// if (boneMap3 == null) boneMap3 = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_11 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_11, NULL);
		__this->___boneMap3_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneMap3_10), (void*)L_11);
	}

IL_0061:
	{
		// if (parentBone != null) boneMapParent.Initiate(parentBone, solver);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___parentBone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// if (parentBone != null) boneMapParent.Initiate(parentBone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_15 = __this->___boneMapParent_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___parentBone_0;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_17 = ___solver0;
		NullCheck(L_15);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_15, L_16, L_17, NULL);
	}

IL_0086:
	{
		// boneMap1.Initiate(bone1, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_18 = __this->___boneMap1_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___bone1_1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_20 = ___solver0;
		NullCheck(L_18);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_18, L_19, L_20, NULL);
		// boneMap2.Initiate(bone2, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_21 = __this->___boneMap2_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___bone2_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_23 = ___solver0;
		NullCheck(L_21);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_21, L_22, L_23, NULL);
		// boneMap3.Initiate(bone3, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_24 = __this->___boneMap3_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___bone3_3;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_26 = ___solver0;
		NullCheck(L_24);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_24, L_25, L_26, NULL);
		// boneMap1.SetPlane(solver, boneMap1.transform, boneMap2.transform, boneMap3.transform);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_27 = __this->___boneMap1_8;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_28 = ___solver0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_29 = __this->___boneMap1_8;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_31 = __this->___boneMap2_9;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_33 = __this->___boneMap3_10;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___transform_0;
		NullCheck(L_27);
		BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352(L_27, L_28, L_30, L_32, L_34, NULL);
		// boneMap2.SetPlane(solver, boneMap2.transform, boneMap3.transform, boneMap1.transform);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_35 = __this->___boneMap2_9;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_36 = ___solver0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_37 = __this->___boneMap2_9;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_39 = __this->___boneMap3_10;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_41 = __this->___boneMap1_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41->___transform_0;
		NullCheck(L_35);
		BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352(L_35, L_36, L_38, L_40, L_42, NULL);
		// if (parentBone != null) boneMapParent.SetLocalSwingAxis(boneMap1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___parentBone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_44;
		bool L_45 = V_5;
		if (!L_45)
		{
			goto IL_013f;
		}
	}
	{
		// if (parentBone != null) boneMapParent.SetLocalSwingAxis(boneMap1);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_46 = __this->___boneMapParent_7;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_47 = __this->___boneMap1_8;
		NullCheck(L_46);
		BoneMap_SetLocalSwingAxis_mFA6313585175F52A410D3CD50B243AA4F143B465(L_46, L_47, NULL);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::ReadPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_ReadPose_m07BDA99B064BFC29C9ED1EEB702DB8C8119C4B8C (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, const RuntimeMethod* method) 
{
	{
		// boneMap1.UpdatePlane(updatePlaneRotations, true);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_0 = __this->___boneMap1_8;
		bool L_1 = __this->___updatePlaneRotations_6;
		NullCheck(L_0);
		BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26(L_0, L_1, (bool)1, NULL);
		// boneMap2.UpdatePlane(updatePlaneRotations, false);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = __this->___boneMap2_9;
		bool L_3 = __this->___updatePlaneRotations_6;
		NullCheck(L_2);
		BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26(L_2, L_3, (bool)0, NULL);
		// weight = Mathf.Clamp(weight, 0f, 1f);
		float L_4 = __this->___weight_5;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		__this->___weight_5 = L_5;
		// boneMap3.MaintainRotation();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = __this->___boneMap3_10;
		NullCheck(L_6);
		BoneMap_MaintainRotation_mD7693BB7245BDCA8237842FAB5138AEAFE3DEC31(L_6, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingLimb::WritePose(RootMotion.FinalIK.IKSolverFullBody,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingLimb_WritePose_mCDD309A9357BBF62979E402528A746A06E64E319 (IKMappingLimb_t4C98F986BCB13706B8F65F99AC139FA8E377338D* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, bool ___fullBody1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (weight <= 0f) return;
		float L_0 = __this->___weight_5;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (weight <= 0f) return;
		goto IL_00d3;
	}

IL_001a:
	{
		// if (fullBody) {
		bool L_2 = ___fullBody1;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		// if (parentBone != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___parentBone_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// boneMapParent.Swing(solver.GetNode(boneMap1.chainIndex, boneMap1.nodeIndex).solverPosition, weight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_7 = __this->___boneMapParent_7;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_8 = ___solver0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_9 = __this->___boneMap1_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___chainIndex_1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_11 = __this->___boneMap1_8;
		NullCheck(L_11);
		int32_t L_12 = L_11->___nodeIndex_2;
		NullCheck(L_8);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_13;
		L_13 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_8, L_10, L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_13)->___solverPosition_2;
		float L_15 = __this->___weight_5;
		NullCheck(L_7);
		BoneMap_Swing_mAB4A601818F4EB6B611D159324D3D65BCEB09DCC(L_7, L_14, L_15, NULL);
	}

IL_0065:
	{
		// boneMap1.FixToNode(solver, weight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_16 = __this->___boneMap1_8;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_17 = ___solver0;
		float L_18 = __this->___weight_5;
		NullCheck(L_16);
		BoneMap_FixToNode_m634B758931B94FA518E906136B2C0D575C948584(L_16, L_17, L_18, (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D*)NULL, NULL);
	}

IL_007a:
	{
		// boneMap1.RotateToPlane(solver, weight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_19 = __this->___boneMap1_8;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_20 = ___solver0;
		float L_21 = __this->___weight_5;
		NullCheck(L_19);
		BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3(L_19, L_20, L_21, NULL);
		// boneMap2.RotateToPlane(solver, weight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_22 = __this->___boneMap2_9;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_23 = ___solver0;
		float L_24 = __this->___weight_5;
		NullCheck(L_22);
		BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3(L_22, L_23, L_24, NULL);
		// boneMap3.RotateToMaintain(maintainRotationWeight * weight * solver.IKPositionWeight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_25 = __this->___boneMap3_10;
		float L_26 = __this->___maintainRotationWeight_4;
		float L_27 = __this->___weight_5;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_28 = ___solver0;
		NullCheck(L_28);
		float L_29 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)L_28)->___IKPositionWeight_2;
		NullCheck(L_25);
		BoneMap_RotateToMaintain_m9782F34990CAB767A66F943A8DA536D8602B92F6(L_25, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_26, L_27)), L_29)), NULL);
		// boneMap3.RotateToEffector(solver, weight);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_30 = __this->___boneMap3_10;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_31 = ___solver0;
		float L_32 = __this->___weight_5;
		NullCheck(L_30);
		BoneMap_RotateToEffector_m55A227B2BCFD7FF0FE8A27198ECC3FB605172E4F(L_30, L_31, L_32, NULL);
	}

IL_00d3:
	{
		// }
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
// System.Boolean RootMotion.FinalIK.IKMappingSpine::IsValid(RootMotion.FinalIK.IKSolver,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMappingSpine_IsValid_m468E78DA7B59C70B91ED86C09B6A830912FFCF26 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* ___solver0, String_t** ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22149C45360800AB310D93BCEC3AC1E900FA9514);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CA5FFABC80E56E93A031E8E99F734B4449BCE61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FFFCF5227EC09E47B72E165CA45B12E3ABDA26E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA428F53EDDB977F99780C0BF66D04B2FCFB5207F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D28A1BEA13C3263BCBF4A669F43F6706D40D5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB892EA2A579961F5CFCEFC71BD8EF4088636A10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA247EFB9785E4C0E515B762D81E70669E3F705C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9AC12FDB5549DF07486E3EF14973197AA1893EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB09C8ABA65A52F7D39166F2BB3C954738DB13F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD664C018947432087F9E52A0DFB456C499DE3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_3 = NULL;
	int32_t V_4 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	{
		// if (!base.IsValid(solver, ref message)) return false;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_0 = ___solver0;
		String_t** L_1 = ___message1;
		bool L_2;
		L_2 = IKMapping_IsValid_mFF2010491110E822FF33C42D026EDE387D9C8628(__this, L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (!base.IsValid(solver, ref message)) return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_0017:
	{
		// foreach (Transform spineBone in spineBones) if (spineBone == null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___spineBones_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_004d;
	}

IL_0024:
	{
		// foreach (Transform spineBone in spineBones) if (spineBone == null) {
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// foreach (Transform spineBone in spineBones) if (spineBone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_10;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// message = "Spine bones contains a null reference.";
		String_t** L_12 = ___message1;
		*((RuntimeObject**)L_12) = (RuntimeObject*)_stringLiteral5FFFCF5227EC09E47B72E165CA45B12E3ABDA26E;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)_stringLiteral5FFFCF5227EC09E47B72E165CA45B12E3ABDA26E);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_0047:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004d:
	{
		// foreach (Transform spineBone in spineBones) if (spineBone == null) {
		int32_t L_14 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// int nodes = 0;
		V_0 = 0;
		// for (int i = 0; i < spineBones.Length; i++) {
		V_7 = 0;
		goto IL_007f;
	}

IL_005b:
	{
		// if (solver.GetPoint(spineBones[i]) != null) nodes ++;
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_16 = ___solver0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = __this->___spineBones_0;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_21;
		L_21 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_16, L_20);
		V_8 = (bool)((!(((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// if (solver.GetPoint(spineBones[i]) != null) nodes ++;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < spineBones.Length; i++) {
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < spineBones.Length; i++) {
		int32_t L_25 = V_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___spineBones_0;
		NullCheck(L_26);
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
		bool L_27 = V_9;
		if (L_27)
		{
			goto IL_005b;
		}
	}
	{
		// if (nodes == 0) {
		int32_t L_28 = V_0;
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// message = "IKMappingSpine does not contain any nodes.";
		String_t** L_30 = ___message1;
		*((RuntimeObject**)L_30) = (RuntimeObject*)_stringLiteralEFD664C018947432087F9E52A0DFB456C499DE3A;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_30, (void*)(RuntimeObject*)_stringLiteralEFD664C018947432087F9E52A0DFB456C499DE3A);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_00aa:
	{
		// if (leftUpperArmBone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___leftUpperArmBone_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		// message = "IKMappingSpine is missing the left upper arm bone.";
		String_t** L_34 = ___message1;
		*((RuntimeObject**)L_34) = (RuntimeObject*)_stringLiteralE9AC12FDB5549DF07486E3EF14973197AA1893EF;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_34, (void*)(RuntimeObject*)_stringLiteralE9AC12FDB5549DF07486E3EF14973197AA1893EF);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_00cb:
	{
		// if (rightUpperArmBone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___rightUpperArmBone_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_36;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_00ec;
		}
	}
	{
		// message = "IKMappingSpine is missing the right upper arm bone.";
		String_t** L_38 = ___message1;
		*((RuntimeObject**)L_38) = (RuntimeObject*)_stringLiteralEB09C8ABA65A52F7D39166F2BB3C954738DB13F6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)(RuntimeObject*)_stringLiteralEB09C8ABA65A52F7D39166F2BB3C954738DB13F6);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_00ec:
	{
		// if (leftThighBone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___leftThighBone_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_13 = L_40;
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		// message = "IKMappingSpine is missing the left thigh bone.";
		String_t** L_42 = ___message1;
		*((RuntimeObject**)L_42) = (RuntimeObject*)_stringLiteralDA247EFB9785E4C0E515B762D81E70669E3F705C;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_42, (void*)(RuntimeObject*)_stringLiteralDA247EFB9785E4C0E515B762D81E70669E3F705C);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_010d:
	{
		// if (rightThighBone == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___rightThighBone_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_14 = L_44;
		bool L_45 = V_14;
		if (!L_45)
		{
			goto IL_012e;
		}
	}
	{
		// message = "IKMappingSpine is missing the right thigh bone.";
		String_t** L_46 = ___message1;
		*((RuntimeObject**)L_46) = (RuntimeObject*)_stringLiteralBB892EA2A579961F5CFCEFC71BD8EF4088636A10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)_stringLiteralBB892EA2A579961F5CFCEFC71BD8EF4088636A10);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_012e:
	{
		// if (solver.GetPoint(leftUpperArmBone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_47 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___leftUpperArmBone_1;
		NullCheck(L_47);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_49;
		L_49 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_47, L_48);
		V_15 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_49) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_50 = V_15;
		if (!L_50)
		{
			goto IL_014f;
		}
	}
	{
		// message = "Full Body IK is missing the left upper arm node.";
		String_t** L_51 = ___message1;
		*((RuntimeObject**)L_51) = (RuntimeObject*)_stringLiteral22149C45360800AB310D93BCEC3AC1E900FA9514;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_51, (void*)(RuntimeObject*)_stringLiteral22149C45360800AB310D93BCEC3AC1E900FA9514);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_014f:
	{
		// if (solver.GetPoint(rightUpperArmBone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_52 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = __this->___rightUpperArmBone_2;
		NullCheck(L_52);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_54;
		L_54 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_52, L_53);
		V_16 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_54) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_55 = V_16;
		if (!L_55)
		{
			goto IL_0170;
		}
	}
	{
		// message = "Full Body IK is missing the right upper arm node.";
		String_t** L_56 = ___message1;
		*((RuntimeObject**)L_56) = (RuntimeObject*)_stringLiteralB6D28A1BEA13C3263BCBF4A669F43F6706D40D5A;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_56, (void*)(RuntimeObject*)_stringLiteralB6D28A1BEA13C3263BCBF4A669F43F6706D40D5A);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_0170:
	{
		// if (solver.GetPoint(leftThighBone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_57 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___leftThighBone_3;
		NullCheck(L_57);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_59;
		L_59 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_57, L_58);
		V_17 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_59) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_60 = V_17;
		if (!L_60)
		{
			goto IL_0191;
		}
	}
	{
		// message = "Full Body IK is missing the left thigh node.";
		String_t** L_61 = ___message1;
		*((RuntimeObject**)L_61) = (RuntimeObject*)_stringLiteral3CA5FFABC80E56E93A031E8E99F734B4449BCE61;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_61, (void*)(RuntimeObject*)_stringLiteral3CA5FFABC80E56E93A031E8E99F734B4449BCE61);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_0191:
	{
		// if (solver.GetPoint(rightThighBone) == null) {
		IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* L_62 = ___solver0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___rightThighBone_4;
		NullCheck(L_62);
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_64;
		L_64 = VirtualFuncInvoker1< Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(7 /* RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolver::GetPoint(UnityEngine.Transform) */, L_62, L_63);
		V_18 = (bool)((((RuntimeObject*)(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_64) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_65 = V_18;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		// message = "Full Body IK is missing the right thigh node.";
		String_t** L_66 = ___message1;
		*((RuntimeObject**)L_66) = (RuntimeObject*)_stringLiteralA428F53EDDB977F99780C0BF66D04B2FCFB5207F;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)(RuntimeObject*)_stringLiteralA428F53EDDB977F99780C0BF66D04B2FCFB5207F);
		// return false;
		V_2 = (bool)0;
		goto IL_01b6;
	}

IL_01b2:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_01b6;
	}

IL_01b6:
	{
		// }
		bool L_67 = V_2;
		return L_67;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine__ctor_m9E407E0C27E64549777A49C3B181C0581F412E22 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int iterations = 3;
		__this->___iterations_5 = 3;
		// public float twistWeight = 1f;
		__this->___twistWeight_6 = (1.0f);
		// private BoneMap[] spine = new BoneMap[0];
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = (BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)SZArrayNew(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___spine_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spine_8), (void*)L_0);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_1 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_1, NULL);
		__this->___leftUpperArm_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftUpperArm_9), (void*)L_1);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___rightUpperArm_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightUpperArm_10), (void*)L_2);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_3, NULL);
		__this->___leftThigh_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftThigh_11), (void*)L_3);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_4 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_4, NULL);
		__this->___rightThigh_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightThigh_12), (void*)L_4);
		// public IKMappingSpine() {}
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// public IKMappingSpine() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::.ctor(UnityEngine.Transform[],UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine__ctor_m1421C4F6152899F52DC2C27B1D44D1883BD02ACA (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spineBones0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperArmBone1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperArmBone2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThighBone3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThighBone4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int iterations = 3;
		__this->___iterations_5 = 3;
		// public float twistWeight = 1f;
		__this->___twistWeight_6 = (1.0f);
		// private BoneMap[] spine = new BoneMap[0];
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = (BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)SZArrayNew(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___spine_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spine_8), (void*)L_0);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_1 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_1, NULL);
		__this->___leftUpperArm_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftUpperArm_9), (void*)L_1);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_2, NULL);
		__this->___rightUpperArm_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightUpperArm_10), (void*)L_2);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_3, NULL);
		__this->___leftThigh_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftThigh_11), (void*)L_3);
		// private BoneMap leftUpperArm = new BoneMap(), rightUpperArm = new BoneMap(), leftThigh = new BoneMap(), rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_4 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_4, NULL);
		__this->___rightThigh_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightThigh_12), (void*)L_4);
		// public IKMappingSpine(Transform[] spineBones, Transform leftUpperArmBone, Transform rightUpperArmBone, Transform leftThighBone, Transform rightThighBone) {
		IKMapping__ctor_m993A05B8416E11D5251297F7CC84F92C2F78EC7B(__this, NULL);
		// SetBones(spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = ___spineBones0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___leftUpperArmBone1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___rightUpperArmBone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___leftThighBone3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___rightThighBone4;
		IKMappingSpine_SetBones_m9FA7748D996BA6C9F7EBFEE8D3EBA2B3CB496E51(__this, L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::SetBones(UnityEngine.Transform[],UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_SetBones_m9FA7748D996BA6C9F7EBFEE8D3EBA2B3CB496E51 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spineBones0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperArmBone1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperArmBone2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThighBone3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThighBone4, const RuntimeMethod* method) 
{
	{
		// this.spineBones = spineBones;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = ___spineBones0;
		__this->___spineBones_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spineBones_0), (void*)L_0);
		// this.leftUpperArmBone = leftUpperArmBone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___leftUpperArmBone1;
		__this->___leftUpperArmBone_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftUpperArmBone_1), (void*)L_1);
		// this.rightUpperArmBone = rightUpperArmBone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___rightUpperArmBone2;
		__this->___rightUpperArmBone_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightUpperArmBone_2), (void*)L_2);
		// this.leftThighBone = leftThighBone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___leftThighBone3;
		__this->___leftThighBone_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftThighBone_3), (void*)L_3);
		// this.rightThighBone = rightThighBone;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___rightThighBone4;
		__this->___rightThighBone_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightThighBone_4), (void*)L_4);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_StoreDefaultLocalState_mB940EA22E5BC6BAA69F40231E090814EBF0FB9B9 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < spine.Length; i++) {
		V_0 = 0;
		goto IL_0019;
	}

IL_0005:
	{
		// spine[i].StoreDefaultLocalState();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		BoneMap_StoreDefaultLocalState_mCC3F9EDDE09ED14777DB6BF748306871158DC34A(L_3, NULL);
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_5 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_6 = __this->___spine_8;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_FixTransforms_mAB4B6778253F9D6E69EAE0C6F2654AF18F8D3E63 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* G_B3_0 = NULL;
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* G_B4_1 = NULL;
	{
		// for (int i = 0; i < spine.Length; i++) {
		V_0 = 0;
		goto IL_002c;
	}

IL_0005:
	{
		// spine[i].FixTransform(i == 0 || i == spine.Length - 1);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		G_B2_0 = L_3;
		if (!L_4)
		{
			G_B3_0 = L_3;
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_6 = __this->___spine_8;
		NullCheck(L_6);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0021:
	{
		NullCheck(G_B4_1);
		BoneMap_FixTransform_m5CF77E788C9A6CB8B187DDF7501BB7F6F433332D(G_B4_1, (bool)G_B4_0, NULL);
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_8 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_9 = __this->___spine_8;
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::Initiate(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_Initiate_m67B6CA7338125B9BD783972B08CD99CCBCA5DA78 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	{
		// if (iterations <= 0) iterations = 3;
		int32_t L_0 = __this->___iterations_5;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (iterations <= 0) iterations = 3;
		__this->___iterations_5 = 3;
	}

IL_0018:
	{
		// if (spine == null || spine.Length != spineBones.Length) spine = new BoneMap[spineBones.Length];
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_2 = __this->___spine_8;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_3 = __this->___spine_8;
		NullCheck(L_3);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___spineBones_0;
		NullCheck(L_4);
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 1;
	}

IL_0038:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (spine == null || spine.Length != spineBones.Length) spine = new BoneMap[spineBones.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___spineBones_0;
		NullCheck(L_6);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_7 = (BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7*)SZArrayNew(BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		__this->___spine_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spine_8), (void*)L_7);
	}

IL_004f:
	{
		// rootNodeIndex = -1;
		__this->___rootNodeIndex_7 = (-1);
		// for (int i = 0; i < spineBones.Length; i++) {
		V_2 = 0;
		goto IL_00ad;
	}

IL_005a:
	{
		// if (spine[i] == null) spine[i] = new BoneMap();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_8 = __this->___spine_8;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// if (spine[i] == null) spine[i] = new BoneMap();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_13 = __this->___spine_8;
		int32_t L_14 = V_2;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_15 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_15, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_15);
	}

IL_0077:
	{
		// spine[i].Initiate(spineBones[i], solver);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_16 = __this->___spine_8;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___spineBones_0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_24 = ___solver0;
		NullCheck(L_19);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_19, L_23, L_24, NULL);
		// if (spine[i].isNodeBone) rootNodeIndex = i;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_25 = __this->___spine_8;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		bool L_29;
		L_29 = BoneMap_get_isNodeBone_mD75B158BC5B6CF86FF6242C82CFA6A75FFC72BDA(L_28, NULL);
		V_4 = L_29;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00a8;
		}
	}
	{
		// if (spine[i].isNodeBone) rootNodeIndex = i;
		int32_t L_31 = V_2;
		__this->___rootNodeIndex_7 = L_31;
	}

IL_00a8:
	{
		// for (int i = 0; i < spineBones.Length; i++) {
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < spineBones.Length; i++) {
		int32_t L_33 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_34 = __this->___spineBones_0;
		NullCheck(L_34);
		V_5 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))? 1 : 0);
		bool L_35 = V_5;
		if (L_35)
		{
			goto IL_005a;
		}
	}
	{
		// if (leftUpperArm == null) leftUpperArm = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_36 = __this->___leftUpperArm_9;
		V_6 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_36) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		// if (leftUpperArm == null) leftUpperArm = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_38 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_38, NULL);
		__this->___leftUpperArm_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftUpperArm_9), (void*)L_38);
	}

IL_00d8:
	{
		// if (rightUpperArm == null) rightUpperArm = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_39 = __this->___rightUpperArm_10;
		V_7 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_39) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00f2;
		}
	}
	{
		// if (rightUpperArm == null) rightUpperArm = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_41 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_41, NULL);
		__this->___rightUpperArm_10 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightUpperArm_10), (void*)L_41);
	}

IL_00f2:
	{
		// if (leftThigh == null) leftThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_42 = __this->___leftThigh_11;
		V_8 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_42) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_010c;
		}
	}
	{
		// if (leftThigh == null) leftThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_44 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_44, NULL);
		__this->___leftThigh_11 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftThigh_11), (void*)L_44);
	}

IL_010c:
	{
		// if (rightThigh == null) rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_45 = __this->___rightThigh_12;
		V_9 = (bool)((((RuntimeObject*)(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)L_45) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_0126;
		}
	}
	{
		// if (rightThigh == null) rightThigh = new BoneMap();
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_47 = (BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1*)il2cpp_codegen_object_new(BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		BoneMap__ctor_m856743B56DCC71E0115BB20BF12A0E17CEC9E99A(L_47, NULL);
		__this->___rightThigh_12 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightThigh_12), (void*)L_47);
	}

IL_0126:
	{
		// leftUpperArm.Initiate(leftUpperArmBone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_48 = __this->___leftUpperArm_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___leftUpperArmBone_1;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_50 = ___solver0;
		NullCheck(L_48);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_48, L_49, L_50, NULL);
		// rightUpperArm.Initiate(rightUpperArmBone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_51 = __this->___rightUpperArm_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___rightUpperArmBone_2;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_53 = ___solver0;
		NullCheck(L_51);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_51, L_52, L_53, NULL);
		// leftThigh.Initiate(leftThighBone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_54 = __this->___leftThigh_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___leftThighBone_3;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_56 = ___solver0;
		NullCheck(L_54);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_54, L_55, L_56, NULL);
		// rightThigh.Initiate(rightThighBone, solver);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_57 = __this->___rightThigh_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___rightThighBone_4;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_59 = ___solver0;
		NullCheck(L_57);
		BoneMap_Initiate_m794C15205F231AE3F5B847D50C2CFCEC7B09C3EC(L_57, L_58, L_59, NULL);
		// for (int i = 0; i < spine.Length; i++) spine[i].SetIKPosition();
		V_10 = 0;
		goto IL_018c;
	}

IL_0177:
	{
		// for (int i = 0; i < spine.Length; i++) spine[i].SetIKPosition();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_60 = __this->___spine_8;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		BoneMap_SetIKPosition_m04FFD7715B14ABC280B3FD69E7F229C33A4B76B4(L_63, NULL);
		// for (int i = 0; i < spine.Length; i++) spine[i].SetIKPosition();
		int32_t L_64 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_018c:
	{
		// for (int i = 0; i < spine.Length; i++) spine[i].SetIKPosition();
		int32_t L_65 = V_10;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_66 = __this->___spine_8;
		NullCheck(L_66);
		V_11 = (bool)((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))? 1 : 0);
		bool L_67 = V_11;
		if (L_67)
		{
			goto IL_0177;
		}
	}
	{
		// spine[0].SetPlane(solver, spine[rootNodeIndex].transform, leftThigh.transform, rightThigh.transform);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_68 = __this->___spine_8;
		NullCheck(L_68);
		int32_t L_69 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_71 = ___solver0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_72 = __this->___spine_8;
		int32_t L_73 = __this->___rootNodeIndex_7;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = L_75->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_77 = __this->___leftThigh_11;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = L_77->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_79 = __this->___rightThigh_12;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = L_79->___transform_0;
		NullCheck(L_70);
		BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352(L_70, L_71, L_76, L_78, L_80, NULL);
		// for (int i = 0; i < spine.Length - 1; i++) {
		V_12 = 0;
		goto IL_027a;
	}

IL_01dd:
	{
		// spine[i].SetLength(spine[i + 1]);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_81 = __this->___spine_8;
		int32_t L_82 = V_12;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_85 = __this->___spine_8;
		int32_t L_86 = V_12;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_84);
		BoneMap_SetLength_mD16EAF16CA9991AC7BD1F449068F266DE8054D95(L_84, L_88, NULL);
		// spine[i].SetLocalSwingAxis(spine[i + 1]);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_89 = __this->___spine_8;
		int32_t L_90 = V_12;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_93 = __this->___spine_8;
		int32_t L_94 = V_12;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_92);
		BoneMap_SetLocalSwingAxis_mFA6313585175F52A410D3CD50B243AA4F143B465(L_92, L_96, NULL);
		// spine[i].SetLocalTwistAxis(leftUpperArm.transform.position - rightUpperArm.transform.position, spine[i + 1].transform.position - spine[i].transform.position);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_97 = __this->___spine_8;
		int32_t L_98 = V_12;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_101 = __this->___leftUpperArm_9;
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = L_101->___transform_0;
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_104 = __this->___rightUpperArm_10;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105 = L_104->___transform_0;
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_103, L_106, NULL);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_108 = __this->___spine_8;
		int32_t L_109 = V_12;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = L_111->___transform_0;
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_114 = __this->___spine_8;
		int32_t L_115 = V_12;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118 = L_117->___transform_0;
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_113, L_119, NULL);
		NullCheck(L_100);
		BoneMap_SetLocalTwistAxis_mC59C9E3FB60FBA56CB1BD270AD8987E045DF892B(L_100, L_107, L_120, NULL);
		// for (int i = 0; i < spine.Length - 1; i++) {
		int32_t L_121 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_027a:
	{
		// for (int i = 0; i < spine.Length - 1; i++) {
		int32_t L_122 = V_12;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_123 = __this->___spine_8;
		NullCheck(L_123);
		V_13 = (bool)((((int32_t)L_122) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_123)->max_length)), 1))))? 1 : 0);
		bool L_124 = V_13;
		if (L_124)
		{
			goto IL_01dd;
		}
	}
	{
		// spine[spine.Length - 1].SetPlane(solver, spine[rootNodeIndex].transform, leftUpperArm.transform, rightUpperArm.transform);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_125 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_126 = __this->___spine_8;
		NullCheck(L_126);
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_126)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_129 = ___solver0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_130 = __this->___spine_8;
		int32_t L_131 = __this->___rootNodeIndex_7;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134 = L_133->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_135 = __this->___leftUpperArm_9;
		NullCheck(L_135);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_136 = L_135->___transform_0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_137 = __this->___rightUpperArm_10;
		NullCheck(L_137);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138 = L_137->___transform_0;
		NullCheck(L_128);
		BoneMap_SetPlane_m43537005D90B8B14E41DD84887A9DFC6A2045352(L_128, L_129, L_134, L_136, L_138, NULL);
		// spine[spine.Length - 1].SetLocalSwingAxis(leftUpperArm, rightUpperArm);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_139 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_140 = __this->___spine_8;
		NullCheck(L_140);
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_140)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_143 = __this->___leftUpperArm_9;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_144 = __this->___rightUpperArm_10;
		NullCheck(L_142);
		BoneMap_SetLocalSwingAxis_m59A9A11DD0661E24E83E09FE0605B92571DD4AD6(L_142, L_143, L_144, NULL);
		// useFABRIK = UseFABRIK();
		bool L_145;
		L_145 = IKMappingSpine_UseFABRIK_m8E815CBEC2AE8091690C3611524DBB85F05BAD4F(__this, NULL);
		__this->___useFABRIK_13 = L_145;
		// }
		return;
	}
}
// System.Boolean RootMotion.FinalIK.IKMappingSpine::UseFABRIK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKMappingSpine_UseFABRIK_m8E815CBEC2AE8091690C3611524DBB85F05BAD4F (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (spine.Length > 3) return true;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (spine.Length > 3) return true;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_0014:
	{
		// if (rootNodeIndex != 1) return true;
		int32_t L_2 = __this->___rootNodeIndex_7;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (rootNodeIndex != 1) return true;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_0028:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::ReadPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_ReadPose_m32D73268BB9DAB80AD3E84A2FD04EF08108EC2D5 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// spine[0].UpdatePlane(true, true);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26(L_2, (bool)1, (bool)1, NULL);
		// for (int i = 0; i < spine.Length - 1; i++) {
		V_0 = 0;
		goto IL_00ac;
	}

IL_0018:
	{
		// spine[i].SetLength(spine[i + 1]);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_3 = __this->___spine_8;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_7 = __this->___spine_8;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		BoneMap_SetLength_mD16EAF16CA9991AC7BD1F449068F266DE8054D95(L_6, L_10, NULL);
		// spine[i].SetLocalSwingAxis(spine[i + 1]);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_11 = __this->___spine_8;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_15 = __this->___spine_8;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		BoneMap_SetLocalSwingAxis_mFA6313585175F52A410D3CD50B243AA4F143B465(L_14, L_18, NULL);
		// spine[i].SetLocalTwistAxis(leftUpperArm.transform.position - rightUpperArm.transform.position, spine[i + 1].transform.position - spine[i].transform.position);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_19 = __this->___spine_8;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_23 = __this->___leftUpperArm_9;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___transform_0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_26 = __this->___rightUpperArm_10;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___transform_0;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_28, NULL);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_30 = __this->___spine_8;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___transform_0;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_36 = __this->___spine_8;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39->___transform_0;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_41, NULL);
		NullCheck(L_22);
		BoneMap_SetLocalTwistAxis_mC59C9E3FB60FBA56CB1BD270AD8987E045DF892B(L_22, L_29, L_42, NULL);
		// for (int i = 0; i < spine.Length - 1; i++) {
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ac:
	{
		// for (int i = 0; i < spine.Length - 1; i++) {
		int32_t L_44 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_45 = __this->___spine_8;
		NullCheck(L_45);
		V_1 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), 1))))? 1 : 0);
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_0018;
		}
	}
	{
		// spine[spine.Length - 1].UpdatePlane(true, true);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_47 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_48 = __this->___spine_8;
		NullCheck(L_48);
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_48)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		BoneMap_UpdatePlane_mCF22D4CA81FFAB88177553B733D9BF3CF7BEBC26(L_50, (bool)1, (bool)1, NULL);
		// spine[spine.Length - 1].SetLocalSwingAxis(leftUpperArm, rightUpperArm);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_51 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_52 = __this->___spine_8;
		NullCheck(L_52);
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_52)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_55 = __this->___leftUpperArm_9;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_56 = __this->___rightUpperArm_10;
		NullCheck(L_54);
		BoneMap_SetLocalSwingAxis_m59A9A11DD0661E24E83E09FE0605B92571DD4AD6(L_54, L_55, L_56, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::WritePose(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_WritePose_m8C76DA9077B3C2CF503FD7BDD0C3A313B01B2D4A (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// Vector3 firstPosition = spine[0].GetPlanePosition(solver);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_3 = ___solver0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = BoneMap_GetPlanePosition_m8FB01D030902BFA24945F3021C8957A9D7EAC20D(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 rootPosition = solver.GetNode(spine[rootNodeIndex].chainIndex, spine[rootNodeIndex].nodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_5 = ___solver0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_6 = __this->___spine_8;
		int32_t L_7 = __this->___rootNodeIndex_7;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = L_9->___chainIndex_1;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_11 = __this->___spine_8;
		int32_t L_12 = __this->___rootNodeIndex_7;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = L_14->___nodeIndex_2;
		NullCheck(L_5);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_16;
		L_16 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_5, L_10, L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverPosition_2;
		V_1 = L_17;
		// Vector3 lastPosition = spine[spine.Length - 1].GetPlanePosition(solver);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_18 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_19 = __this->___spine_8;
		NullCheck(L_19);
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_22 = ___solver0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = BoneMap_GetPlanePosition_m8FB01D030902BFA24945F3021C8957A9D7EAC20D(L_21, L_22, NULL);
		V_2 = L_23;
		// if (useFABRIK) {
		bool L_24 = __this->___useFABRIK_13;
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_013d;
		}
	}
	{
		// Vector3 offset = solver.GetNode(spine[rootNodeIndex].chainIndex, spine[rootNodeIndex].nodeIndex).solverPosition - spine[rootNodeIndex].transform.position;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_26 = ___solver0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_27 = __this->___spine_8;
		int32_t L_28 = __this->___rootNodeIndex_7;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		int32_t L_31 = L_30->___chainIndex_1;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_32 = __this->___spine_8;
		int32_t L_33 = __this->___rootNodeIndex_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		int32_t L_36 = L_35->___nodeIndex_2;
		NullCheck(L_26);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_37;
		L_37 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_26, L_31, L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_37)->___solverPosition_2;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_39 = __this->___spine_8;
		int32_t L_40 = __this->___rootNodeIndex_7;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = L_42->___transform_0;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_44, NULL);
		V_4 = L_45;
		// for (int i = 0; i < spine.Length; i++) {
		V_5 = 0;
		goto IL_00e8;
	}

IL_00b8:
	{
		// spine[i].ikPosition = spine[i].transform.position + offset;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_46 = __this->___spine_8;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_50 = __this->___spine_8;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = L_53->___transform_0;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_55, L_56, NULL);
		NullCheck(L_49);
		L_49->___ikPosition_8 = L_57;
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00e8:
	{
		// for (int i = 0; i < spine.Length; i++) {
		int32_t L_59 = V_5;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_60 = __this->___spine_8;
		NullCheck(L_60);
		V_6 = (bool)((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))? 1 : 0);
		bool L_61 = V_6;
		if (L_61)
		{
			goto IL_00b8;
		}
	}
	{
		// for (int i = 0; i < iterations; i++) {
		V_7 = 0;
		goto IL_012a;
	}

IL_00ff:
	{
		// ForwardReach(lastPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_2;
		IKMappingSpine_ForwardReach_mD2BFF795AE99D62D3CBC32FD5CDCBB8024AACE3E(__this, L_62, NULL);
		// BackwardReach(firstPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_0;
		IKMappingSpine_BackwardReach_m2C69F0A51F16709E71C023068E85C0A24D18B07D(__this, L_63, NULL);
		// spine[rootNodeIndex].ikPosition = rootPosition;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_64 = __this->___spine_8;
		int32_t L_65 = __this->___rootNodeIndex_7;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_1;
		NullCheck(L_67);
		L_67->___ikPosition_8 = L_68;
		// for (int i = 0; i < iterations; i++) {
		int32_t L_69 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_012a:
	{
		// for (int i = 0; i < iterations; i++) {
		int32_t L_70 = V_7;
		int32_t L_71 = __this->___iterations_5;
		V_8 = (bool)((((int32_t)L_70) < ((int32_t)L_71))? 1 : 0);
		bool L_72 = V_8;
		if (L_72)
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_0160;
	}

IL_013d:
	{
		// spine[0].ikPosition = firstPosition;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_73 = __this->___spine_8;
		NullCheck(L_73);
		int32_t L_74 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_0;
		NullCheck(L_75);
		L_75->___ikPosition_8 = L_76;
		// spine[rootNodeIndex].ikPosition = rootPosition;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_77 = __this->___spine_8;
		int32_t L_78 = __this->___rootNodeIndex_7;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_1;
		NullCheck(L_80);
		L_80->___ikPosition_8 = L_81;
	}

IL_0160:
	{
		// spine[spine.Length - 1].ikPosition = lastPosition;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_82 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_83 = __this->___spine_8;
		NullCheck(L_83);
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_83)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_2;
		NullCheck(L_85);
		L_85->___ikPosition_8 = L_86;
		// MapToSolverPositions(solver);
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_87 = ___solver0;
		IKMappingSpine_MapToSolverPositions_m2E17557CC931421353860C4403538BB2E235F3D9(__this, L_87, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::ForwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_ForwardReach_mD2BFF795AE99D62D3CBC32FD5CDCBB8024AACE3E (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// spine[spineBones.Length - 1].ikPosition = position;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___spineBones_0;
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		NullCheck(L_3);
		L_3->___ikPosition_8 = L_4;
		// for (int i = spine.Length - 2; i > -1; i--) {
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_5 = __this->___spine_8;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 2));
		goto IL_0067;
	}

IL_0025:
	{
		// spine[i].ikPosition = SolveFABRIKJoint(spine[i].ikPosition, spine[i + 1].ikPosition, spine[i].length);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_6 = __this->___spine_8;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_10 = __this->___spine_8;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___ikPosition_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_15 = __this->___spine_8;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___ikPosition_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_20 = __this->___spine_8;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		float L_24 = L_23->___length_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = IKMapping_SolveFABRIKJoint_m6B880F03BFBF78C1004F184C292B7220E44E262C(__this, L_14, L_19, L_24, NULL);
		NullCheck(L_9);
		L_9->___ikPosition_8 = L_25;
		// for (int i = spine.Length - 2; i > -1; i--) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0067:
	{
		// for (int i = spine.Length - 2; i > -1; i--) {
		int32_t L_27 = V_0;
		V_1 = (bool)((((int32_t)L_27) > ((int32_t)(-1)))? 1 : 0);
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::BackwardReach(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_BackwardReach_m2C69F0A51F16709E71C023068E85C0A24D18B07D (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// spine[0].ikPosition = position;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		NullCheck(L_2);
		L_2->___ikPosition_8 = L_3;
		// for (int i = 1; i < spine.Length; i++) {
		V_0 = 1;
		goto IL_0057;
	}

IL_0013:
	{
		// spine[i].ikPosition = SolveFABRIKJoint(spine[i].ikPosition, spine[i - 1].ikPosition, spine[i - 1].length);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_4 = __this->___spine_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_8 = __this->___spine_8;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___ikPosition_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_13 = __this->___spine_8;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___ikPosition_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_18 = __this->___spine_8;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		float L_22 = L_21->___length_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = IKMapping_SolveFABRIKJoint_m6B880F03BFBF78C1004F184C292B7220E44E262C(__this, L_12, L_17, L_22, NULL);
		NullCheck(L_7);
		L_7->___ikPosition_8 = L_23;
		// for (int i = 1; i < spine.Length; i++) {
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0057:
	{
		// for (int i = 1; i < spine.Length; i++) {
		int32_t L_25 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_26 = __this->___spine_8;
		NullCheck(L_26);
		V_1 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
		bool L_27 = V_1;
		if (L_27)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKMappingSpine::MapToSolverPositions(RootMotion.FinalIK.IKSolverFullBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKMappingSpine_MapToSolverPositions_m2E17557CC931421353860C4403538BB2E235F3D9 (IKMappingSpine_tF147A1F674EFB7E3FA2DF5EF35A9E2A3F78B66FB* __this, IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* ___solver0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// spine[0].SetToIKPosition();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_0 = __this->___spine_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		BoneMap_SetToIKPosition_mB7B0650493B3EAD519E6F3B8E5D85196E59FA0D4(L_2, NULL);
		// spine[0].RotateToPlane(solver, 1f);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_3 = __this->___spine_8;
		NullCheck(L_3);
		int32_t L_4 = 0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_6 = ___solver0;
		NullCheck(L_5);
		BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3(L_5, L_6, (1.0f), NULL);
		// for (int i = 1; i < spine.Length - 1; i++) {
		V_0 = 1;
		goto IL_0104;
	}

IL_002a:
	{
		// spine[i].Swing(spine[i + 1].ikPosition, 1f);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_7 = __this->___spine_8;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_11 = __this->___spine_8;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___ikPosition_8;
		NullCheck(L_10);
		BoneMap_Swing_mAB4A601818F4EB6B611D159324D3D65BCEB09DCC(L_10, L_15, (1.0f), NULL);
		// if (twistWeight > 0) {
		float L_16 = __this->___twistWeight_6;
		V_1 = (bool)((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00ff;
		}
	}
	{
		// float bWeight = (float)i / ((float)spine.Length - 2);
		int32_t L_18 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_19 = __this->___spine_8;
		NullCheck(L_19);
		V_2 = ((float)(((float)L_18)/((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_19)->max_length))), (2.0f)))));
		// Vector3 s1 = solver.GetNode(leftUpperArm.chainIndex, leftUpperArm.nodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_20 = ___solver0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_21 = __this->___leftUpperArm_9;
		NullCheck(L_21);
		int32_t L_22 = L_21->___chainIndex_1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_23 = __this->___leftUpperArm_9;
		NullCheck(L_23);
		int32_t L_24 = L_23->___nodeIndex_2;
		NullCheck(L_20);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_25;
		L_25 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_20, L_22, L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_25)->___solverPosition_2;
		V_3 = L_26;
		// Vector3 s2 = solver.GetNode(rightUpperArm.chainIndex, rightUpperArm.nodeIndex).solverPosition;
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_27 = ___solver0;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_28 = __this->___rightUpperArm_10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___chainIndex_1;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_30 = __this->___rightUpperArm_10;
		NullCheck(L_30);
		int32_t L_31 = L_30->___nodeIndex_2;
		NullCheck(L_27);
		Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* L_32;
		L_32 = IKSolverFullBody_GetNode_m3ED35DFB2B8D63C77F396906CA2B38B15AC7BB76(L_27, L_29, L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_32)->___solverPosition_2;
		V_4 = L_33;
		// spine[i].Twist(s1 - s2, spine[i + 1].ikPosition - spine[i].transform.position, bWeight * twistWeight);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_34 = __this->___spine_8;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_39, NULL);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_41 = __this->___spine_8;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44->___ikPosition_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_46 = __this->___spine_8;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = L_49->___transform_0;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_45, L_51, NULL);
		float L_53 = V_2;
		float L_54 = __this->___twistWeight_6;
		NullCheck(L_37);
		BoneMap_Twist_mBA98F54C266DD04A83E0845FCE0CE9C5F4CCBBF0(L_37, L_40, L_52, ((float)il2cpp_codegen_multiply(L_53, L_54)), NULL);
	}

IL_00ff:
	{
		// for (int i = 1; i < spine.Length - 1; i++) {
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0104:
	{
		// for (int i = 1; i < spine.Length - 1; i++) {
		int32_t L_56 = V_0;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_57 = __this->___spine_8;
		NullCheck(L_57);
		V_5 = (bool)((((int32_t)L_56) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_57)->max_length)), 1))))? 1 : 0);
		bool L_58 = V_5;
		if (L_58)
		{
			goto IL_002a;
		}
	}
	{
		// spine[spine.Length - 1].SetToIKPosition();
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_59 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_60 = __this->___spine_8;
		NullCheck(L_60);
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_60)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		BoneMap_SetToIKPosition_mB7B0650493B3EAD519E6F3B8E5D85196E59FA0D4(L_62, NULL);
		// spine[spine.Length - 1].RotateToPlane(solver, 1f);
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_63 = __this->___spine_8;
		BoneMapU5BU5D_tD01A97904B526A050D5F531C7252EA0AB71031E7* L_64 = __this->___spine_8;
		NullCheck(L_64);
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_64)->max_length)), 1));
		BoneMap_tBEFCE0E8D845A5059B9B8D8CE6343ED555AC1EC1* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		IKSolverFullBody_t878CB6552032C1020A2BDDF6D73E41A91FAB4C42* L_67 = ___solver0;
		NullCheck(L_66);
		BoneMap_RotateToPlane_mFF28C65B9CE2BC6FCAB950DD4AD9B5EAE6B588F3(L_66, L_67, (1.0f), NULL);
		// }
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
// System.Boolean RootMotion.FinalIK.IKSolver::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKSolver_IsValid_mC05818FFC959425C917417F65764BA0AF2D8E387 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string message = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// return IsValid(ref message);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, String_t** >::Invoke(4 /* System.Boolean RootMotion.FinalIK.IKSolver::IsValid(System.String&) */, __this, (&V_0));
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::Initiate(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_Initiate_m86CFC89AADD30E0396199398E858A737DB674466 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F2F0CE2D8508ABC4A66A38C43755F635032D6B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (executedInEditor) return;
		bool L_0 = __this->___executedInEditor_0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (executedInEditor) return;
		goto IL_00a9;
	}

IL_0010:
	{
		// if (OnPreInitiate != null) OnPreInitiate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_2 = __this->___OnPreInitiate_4;
		V_2 = (bool)((!(((RuntimeObject*)(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// if (OnPreInitiate != null) OnPreInitiate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_4 = __this->___OnPreInitiate_4;
		NullCheck(L_4);
		UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline(L_4, NULL);
	}

IL_0029:
	{
		// if (root == null) Debug.LogError("Initiating IKSolver with null root Transform.");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___root0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// if (root == null) Debug.LogError("Initiating IKSolver with null root Transform.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB2F2F0CE2D8508ABC4A66A38C43755F635032D6B, NULL);
	}

IL_003f:
	{
		// this.root = root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___root0;
		__this->___root_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root_9), (void*)L_8);
		// initiated = false;
		IKSolver_set_initiated_m5E37F888F705B3E5238C6EA54A70E5022928D47B_inline(__this, (bool)0, NULL);
		// string message = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_9;
		// if (!IsValid(ref message)) {
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, String_t** >::Invoke(4 /* System.Boolean RootMotion.FinalIK.IKSolver::IsValid(System.String&) */, __this, (&V_0));
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// Warning.Log(message, root, false);
		String_t* L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___root0;
		Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224(L_12, L_13, (bool)0, NULL);
		// return;
		goto IL_00a9;
	}

IL_0071:
	{
		// OnInitiate();
		VirtualActionInvoker0::Invoke(10 /* System.Void RootMotion.FinalIK.IKSolver::OnInitiate() */, __this);
		// StoreDefaultLocalState();
		VirtualActionInvoker0::Invoke(9 /* System.Void RootMotion.FinalIK.IKSolver::StoreDefaultLocalState() */, __this);
		// initiated = true;
		IKSolver_set_initiated_m5E37F888F705B3E5238C6EA54A70E5022928D47B_inline(__this, (bool)1, NULL);
		// firstInitiation = false;
		__this->___firstInitiation_8 = (bool)0;
		// if (OnPostInitiate != null) OnPostInitiate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_14 = __this->___OnPostInitiate_5;
		V_5 = (bool)((!(((RuntimeObject*)(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00a9;
		}
	}
	{
		// if (OnPostInitiate != null) OnPostInitiate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_16 = __this->___OnPostInitiate_5;
		NullCheck(L_16);
		UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline(L_16, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_Update_mBB60E821EF454BBA16876C5565DED4D90D1F7E25 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (OnPreUpdate != null) OnPreUpdate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_0 = __this->___OnPreUpdate_6;
		V_0 = (bool)((!(((RuntimeObject*)(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (OnPreUpdate != null) OnPreUpdate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_2 = __this->___OnPreUpdate_6;
		NullCheck(L_2);
		UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline(L_2, NULL);
	}

IL_001a:
	{
		// if (firstInitiation) Initiate(root); // when the IK component has been disabled in Awake, this will initiate it.
		bool L_3 = __this->___firstInitiation_8;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if (firstInitiation) Initiate(root); // when the IK component has been disabled in Awake, this will initiate it.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___root_9;
		IKSolver_Initiate_m86CFC89AADD30E0396199398E858A737DB674466(__this, L_5, NULL);
	}

IL_0031:
	{
		// if (!initiated) return;
		bool L_6;
		L_6 = IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0060;
	}

IL_0040:
	{
		// OnUpdate();
		VirtualActionInvoker0::Invoke(11 /* System.Void RootMotion.FinalIK.IKSolver::OnUpdate() */, __this);
		// if (OnPostUpdate != null) OnPostUpdate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_8 = __this->___OnPostUpdate_7;
		V_3 = (bool)((!(((RuntimeObject*)(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// if (OnPostUpdate != null) OnPostUpdate();
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* L_10 = __this->___OnPostUpdate_7;
		NullCheck(L_10);
		UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline(L_10, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver::GetIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolver_GetIKPosition_m0B99907F1EEA5B0B9889915FD51613E219EE2E6A (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return IKPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___IKPosition_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::SetIKPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_SetIKPosition_mAD50B3B8887E71DA6A96F329A0A92CB65F7D2A95 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// IKPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->___IKPosition_1 = L_0;
		// }
		return;
	}
}
// System.Single RootMotion.FinalIK.IKSolver::GetIKPositionWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKSolver_GetIKPositionWeight_m096D8179295DAF57390C9064E9F07796A1E98FAC (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return IKPositionWeight;
		float L_0 = __this->___IKPositionWeight_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::SetIKPositionWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_SetIKPositionWeight_mE96CDEFEC30B83C9BB89224B492E1BFF1D653E1C (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, float ___weight0, const RuntimeMethod* method) 
{
	{
		// IKPositionWeight = Mathf.Clamp(weight, 0f, 1f);
		float L_0 = ___weight0;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (1.0f), NULL);
		__this->___IKPositionWeight_2 = L_1;
		// }
		return;
	}
}
// UnityEngine.Transform RootMotion.FinalIK.IKSolver::GetRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* IKSolver_GetRoot_m683BB626EF4459F8394866C29DDF6D09A2C21B65 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// return root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___root_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean RootMotion.FinalIK.IKSolver::get_initiated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = __this->___U3CinitiatedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::set_initiated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_set_initiated_m5E37F888F705B3E5238C6EA54A70E5022928D47B (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CinitiatedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver_LogWarning_m003521FB5561B0E545804837BCAF32EA151ED9E6 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// Warning.Log(message, root, true);
		String_t* L_0 = ___message0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___root_9;
		Warning_Log_m6604845DDDBF0A51D780DACAB1696D18D8F25224(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Transform RootMotion.FinalIK.IKSolver::ContainsDuplicateBone(RootMotion.FinalIK.IKSolver/Bone[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* IKSolver_ContainsDuplicateBone_m4C952DD968B2186E838EE501110F5CE29E46C293 (BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* ___bones0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// for (int i = 0; i < bones.Length; i++) {
		V_0 = 0;
		goto IL_004c;
	}

IL_0005:
	{
		// for (int i2 = 0; i2 < bones.Length; i2++) {
		V_1 = 0;
		goto IL_003b;
	}

IL_000a:
	{
		// if (i != i2 && bones[i].transform == bones[i2].transform) return bones[i].transform;
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_2 = ___bones0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_5)->___transform_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_7 = ___bones0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_10)->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_11, NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0036;
		}
	}
	{
		// if (i != i2 && bones[i].transform == bones[i2].transform) return bones[i].transform;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_14 = ___bones0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_17)->___transform_0;
		V_3 = L_18;
		goto IL_005c;
	}

IL_0036:
	{
		// for (int i2 = 0; i2 < bones.Length; i2++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003b:
	{
		// for (int i2 = 0; i2 < bones.Length; i2++) {
		int32_t L_20 = V_1;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_21 = ___bones0;
		NullCheck(L_21);
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_24 = V_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_25 = ___bones0;
		NullCheck(L_25);
		V_5 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		V_3 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_3;
		return L_27;
	}
}
// System.Boolean RootMotion.FinalIK.IKSolver::HierarchyIsValid(RootMotion.FinalIK.IKSolver/Bone[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKSolver_HierarchyIsValid_mB69C6EE5BFF3CB3F03BBE97DE97CA7809980A633 (BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* ___bones0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 1; i < bones.Length; i++) {
		V_0 = 1;
		goto IL_002e;
	}

IL_0005:
	{
		// if (!Hierarchy.IsAncestor(bones[i].transform, bones[i - 1].transform)) {
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_0 = ___bones0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_3)->___transform_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_5 = ___bones0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8)->___transform_0;
		bool L_10;
		L_10 = Hierarchy_IsAncestor_m0F86DF78830C8BA7BB9D1E2095590A2D635E04B0(L_4, L_9, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0029;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_003c;
	}

IL_0029:
	{
		// for (int i = 1; i < bones.Length; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		// for (int i = 1; i < bones.Length; i++) {
		int32_t L_13 = V_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_14 = ___bones0;
		NullCheck(L_14);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Single RootMotion.FinalIK.IKSolver::PreSolveBones(RootMotion.FinalIK.IKSolver/Bone[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKSolver_PreSolveBones_mCF43179A60CFC08F6414D681A2451AE1D5DA641B (BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** ___bones0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	float V_7 = 0.0f;
	{
		// float length = 0;
		V_0 = (0.0f);
		// for (int i = 0; i < bones.Length; i++) {
		V_1 = 0;
		goto IL_003f;
	}

IL_000b:
	{
		// bones[i].solverPosition = bones[i].transform.position;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_0 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_1 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_0);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_5 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_6 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_9)->___transform_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_4);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_4)->___solverPosition_2 = L_11;
		// bones[i].solverRotation = bones[i].transform.rotation;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_12 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_13 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_12);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_17 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_18 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_17);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_21)->___transform_0;
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		NullCheck(L_16);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_16)->___solverRotation_3 = L_23;
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_25 = V_1;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_26 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_27 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_26);
		NullCheck(L_27);
		V_2 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < bones.Length; i++) {
		V_3 = 0;
		goto IL_010e;
	}

IL_0051:
	{
		// if (i < bones.Length - 1) {
		int32_t L_29 = V_3;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_30 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_31 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_30);
		NullCheck(L_31);
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00eb;
		}
	}
	{
		// bones[i].sqrMag = (bones[i + 1].solverPosition - bones[i].solverPosition).sqrMagnitude;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_33 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_34 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_33);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_38 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_39 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_38);
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_42)->___solverPosition_2;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_44 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_45 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_44);
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_48)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_43, L_49, NULL);
		V_5 = L_50;
		float L_51;
		L_51 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_5), NULL);
		NullCheck(L_37);
		L_37->___sqrMag_7 = L_51;
		// bones[i].length = Mathf.Sqrt(bones[i].sqrMag);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_52 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_53 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_52);
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_57 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_58 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_57);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62 = L_61->___sqrMag_7;
		float L_63;
		L_63 = sqrtf(L_62);
		NullCheck(L_56);
		L_56->___length_6 = L_63;
		// length += bones[i].length;
		float L_64 = V_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_65 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_66 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_65);
		int32_t L_67 = V_3;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		float L_70 = L_69->___length_6;
		V_0 = ((float)il2cpp_codegen_add(L_64, L_70));
		// bones[i].axis = Quaternion.Inverse(bones[i].solverRotation) * (bones[i + 1].solverPosition - bones[i].solverPosition);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_71 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_72 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_71);
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_76 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_77 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_76);
		int32_t L_78 = V_3;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_80)->___solverRotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82;
		L_82 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_81, NULL);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_83 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_84 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_83);
		int32_t L_85 = V_3;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_87)->___solverPosition_2;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_89 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_90 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_89);
		int32_t L_91 = V_3;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_93)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_88, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_82, L_95, NULL);
		NullCheck(L_75);
		L_75->___axis_8 = L_96;
		goto IL_0109;
	}

IL_00eb:
	{
		// bones[i].sqrMag = 0f;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_97 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_98 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_97);
		int32_t L_99 = V_3;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		L_101->___sqrMag_7 = (0.0f);
		// bones[i].length = 0f;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_102 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_103 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_102);
		int32_t L_104 = V_3;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		L_106->___length_6 = (0.0f);
	}

IL_0109:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_107 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_010e:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_108 = V_3;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593** L_109 = ___bones0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_110 = *((BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593**)L_109);
		NullCheck(L_110);
		V_6 = (bool)((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length))))? 1 : 0);
		bool L_111 = V_6;
		if (L_111)
		{
			goto IL_0051;
		}
	}
	{
		// return length;
		float L_112 = V_0;
		V_7 = L_112;
		goto IL_0123;
	}

IL_0123:
	{
		// }
		float L_113 = V_7;
		return L_113;
	}
}
// System.Void RootMotion.FinalIK.IKSolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolver__ctor_m96C6D17591BF2A748D0E092FE36BF9B1A2878892 (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	{
		// public float IKPositionWeight = 1f;
		__this->___IKPositionWeight_2 = (1.0f);
		// protected bool firstInitiation = true;
		__this->___firstInitiation_8 = (bool)1;
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
// System.Void RootMotion.FinalIK.IKSolver/Point::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// defaultLocalPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___defaultLocalPosition_4 = L_1;
		// defaultLocalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___defaultLocalRotation_5 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::FixTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (transform.localPosition != defaultLocalPosition) transform.localPosition = defaultLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___defaultLocalPosition_4;
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (transform.localPosition != defaultLocalPosition) transform.localPosition = defaultLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___defaultLocalPosition_4;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
	}

IL_002d:
	{
		// if (transform.localRotation != defaultLocalRotation) transform.localRotation = defaultLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___transform_0;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___defaultLocalRotation_5;
		bool L_10;
		L_10 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_8, L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// if (transform.localRotation != defaultLocalRotation) transform.localRotation = defaultLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___defaultLocalRotation_5;
		NullCheck(L_12);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_12, L_13, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::UpdateSolverPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_UpdateSolverPosition_m3ED14CC627122522D1F3BBA5B7152B79DFE4BA33 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// solverPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___solverPosition_2 = L_1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::UpdateSolverLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_UpdateSolverLocalPosition_mCFD291E73122300F2C781CB3156C2F5441A0E24A (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// solverPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___solverPosition_2 = L_1;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::UpdateSolverState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_UpdateSolverState_mB0F0798D0163A8D58F44A8843400ACC23D0BB7F0 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// solverPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___solverPosition_2 = L_1;
		// solverRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___solverRotation_3 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::UpdateSolverLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_UpdateSolverLocalState_mEDCE7E82336D9CF6EC3799848487CE06F4043565 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// solverPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___solverPosition_2 = L_1;
		// solverRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___solverRotation_3 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6 (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* __this, const RuntimeMethod* method) 
{
	{
		// public float weight = 1f;
		__this->___weight_1 = (1.0f);
		// public Quaternion solverRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___solverRotation_3 = L_0;
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
// RootMotion.FinalIK.RotationLimit RootMotion.FinalIK.IKSolver/Bone::get_rotationLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* V_1 = NULL;
	bool V_2 = false;
	{
		// if (!isLimited) return null;
		bool L_0 = __this->___isLimited_10;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!isLimited) return null;
		V_1 = (RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9*)NULL;
		goto IL_004e;
	}

IL_0012:
	{
		// if (_rotationLimit == null) _rotationLimit = transform.GetComponent<RotationLimit>();
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_2 = __this->____rotationLimit_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// if (_rotationLimit == null) _rotationLimit = transform.GetComponent<RotationLimit>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_5);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_6;
		L_6 = Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443(L_5, Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443_RuntimeMethod_var);
		__this->____rotationLimit_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rotationLimit_9), (void*)L_6);
	}

IL_0033:
	{
		// isLimited = _rotationLimit != null;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_7 = __this->____rotationLimit_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___isLimited_10 = L_8;
		// return _rotationLimit;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_9 = __this->____rotationLimit_9;
		V_1 = L_9;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_10 = V_1;
		return L_10;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::set_rotationLimit(RootMotion.FinalIK.RotationLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_set_rotationLimit_mD9DBB0B078EC2ADF3D2C8E9765932C3EBC641983 (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rotationLimit = value;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_0 = ___value0;
		__this->____rotationLimit_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rotationLimit_9), (void*)L_0);
		// isLimited = value != null;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___isLimited_10 = L_2;
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::Swing(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_Swing_m19E299D21309EBB3CF384B094042E9FED4DFF2A7 (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___swingTarget0, float ___weight1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (weight <= 0f) return;
		float L_0 = ___weight1;
		V_1 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (weight <= 0f) return;
		goto IL_0099;
	}

IL_0015:
	{
		// Quaternion r = Quaternion.FromToRotation(transform.rotation * axis, swingTarget - transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___axis_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___swingTarget0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_5, L_9, NULL);
		V_0 = L_10;
		// if (weight >= 1f) {
		float L_11 = ___weight1;
		V_2 = (bool)((((int32_t)((!(((float)L_11) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		// transform.rotation = r * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_16, NULL);
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_17, NULL);
		// return;
		goto IL_0099;
	}

IL_0071:
	{
		// transform.rotation = Quaternion.Lerp(Quaternion.identity, r, weight) * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_0;
		float L_21 = ___weight1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_19, L_20, L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_22, L_24, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_25, NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::SolverSwing(RootMotion.FinalIK.IKSolver/Bone[],System.Int32,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_SolverSwing_m488F88FADE4D23F6BC2EF7F3529FF411D3F95A2A (BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* ___bones0, int32_t ___index1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___swingTarget2, float ___weight3, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (weight <= 0f) return;
		float L_0 = ___weight3;
		V_1 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (weight <= 0f) return;
		goto IL_00b9;
	}

IL_0015:
	{
		// Quaternion r = Quaternion.FromToRotation(bones[index].solverRotation * bones[index].axis, swingTarget - bones[index].solverPosition);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_2 = ___bones0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_5)->___solverRotation_3;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_7 = ___bones0;
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___axis_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___swingTarget2;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_14 = ___bones0;
		int32_t L_15 = ___index1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_17)->___solverPosition_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_12, L_19, NULL);
		V_0 = L_20;
		// if (weight >= 1f) {
		float L_21 = ___weight3;
		V_2 = (bool)((((int32_t)((!(((float)L_21) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_007c;
		}
	}
	{
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_23 = ___index1;
		V_3 = L_23;
		goto IL_006e;
	}

IL_0052:
	{
		// bones[i].solverRotation = r * bones[i].solverRotation;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_24 = ___bones0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = V_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_29 = ___bones0;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_32)->___solverRotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_28, L_33, NULL);
		NullCheck(L_27);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_27)->___solverRotation_3 = L_34;
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_006e:
	{
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_36 = V_3;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_37 = ___bones0;
		NullCheck(L_37);
		V_4 = (bool)((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))? 1 : 0);
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_0052;
		}
	}
	{
		// return;
		goto IL_00b9;
	}

IL_007c:
	{
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_39 = ___index1;
		V_5 = L_39;
		goto IL_00ac;
	}

IL_0081:
	{
		// bones[i].solverRotation = Quaternion.Lerp(Quaternion.identity, r, weight) * bones[i].solverRotation;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_40 = ___bones0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = V_0;
		float L_46 = ___weight3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_44, L_45, L_46, NULL);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_48 = ___bones0;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_51)->___solverRotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_47, L_52, NULL);
		NullCheck(L_43);
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_43)->___solverRotation_3 = L_53;
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00ac:
	{
		// for (int i = index; i < bones.Length; i++) {
		int32_t L_55 = V_5;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_56 = ___bones0;
		NullCheck(L_56);
		V_6 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))? 1 : 0);
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_0081;
		}
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::Swing2D(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_Swing2D_m2C78CB723D1F4308116CC27CA31C02E62F557FEB (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___swingTarget0, float ___weight1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// if (weight <= 0f) return;
		float L_0 = ___weight1;
		V_4 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (weight <= 0f) return;
		goto IL_009f;
	}

IL_0017:
	{
		// Vector3 from = transform.rotation * axis;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___axis_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_0 = L_5;
		// Vector3 to = swingTarget - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___swingTarget0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// float angleFrom = Mathf.Atan2(from.x, from.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = atan2f(L_11, L_13);
		V_2 = ((float)il2cpp_codegen_multiply(L_14, (57.2957802f)));
		// float angleTo = Mathf.Atan2(to.x, to.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = L_17.___y_3;
		float L_19;
		L_19 = atan2f(L_16, L_18);
		V_3 = ((float)il2cpp_codegen_multiply(L_19, (57.2957802f)));
		// transform.rotation = Quaternion.AngleAxis(Mathf.DeltaAngle(angleFrom, angleTo) * weight, Vector3.back) * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23;
		L_23 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_21, L_22, NULL);
		float L_24 = ___weight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_26, L_28, NULL);
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_29, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::SetToSolverPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_SetToSolverPosition_mE972C51F1B8B7A353CAE0A46FB9F865FCA01AB6E (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = solverPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___solverPosition_2;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone__ctor_m26F507A8E4363E19BF15DA230672E1A06006E722 (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = -Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		__this->___axis_8 = L_1;
		// private bool isLimited = true;
		__this->___isLimited_10 = (bool)1;
		// public Bone() {}
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// public Bone() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone__ctor_mBDEEE579AA3D93054876008B76A116CFF1EE9EF2 (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = -Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		__this->___axis_8 = L_1;
		// private bool isLimited = true;
		__this->___isLimited_10 = (bool)1;
		// public Bone (Transform transform) {
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform0;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Bone::.ctor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone__ctor_m4D78EF9D68F5C99D3FC29011C0C2F1FE3C201100 (Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, float ___weight1, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = -Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		__this->___axis_8 = L_1;
		// private bool isLimited = true;
		__this->___isLimited_10 = (bool)1;
		// public Bone (Transform transform, float weight) {
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform0;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0), (void*)L_2);
		// this.weight = weight;
		float L_3 = ___weight1;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___weight_1 = L_3;
		// }
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
// System.Void RootMotion.FinalIK.IKSolver/Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mCB0959AEF519B50EA528B8B6413140D104DA48C5 (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* __this, const RuntimeMethod* method) 
{
	{
		// public Node() {}
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// public Node() {}
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Node::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m6718FD33145987A2A314DDE6E2909328CF2BB11D (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	{
		// public Node (Transform transform) {
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolver/Node::.ctor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m4110256F06AEEAA63F225B56E445DCE0BDDD4BD8 (Node_tEA311F89C5AADCD12594674635F7F815659FBC9D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, float ___weight1, const RuntimeMethod* method) 
{
	{
		// public Node (Transform transform, float weight) {
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(__this, NULL);
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___transform_0), (void*)L_0);
		// this.weight = weight;
		float L_1 = ___weight1;
		((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)__this)->___weight_1 = L_1;
		// }
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
void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_Multicast(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* currentDelegate = reinterpret_cast<UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_OpenInst(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_OpenStatic(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_OpenStaticInvoker(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_ClosedStaticInvoker(UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void RootMotion.FinalIK.IKSolver/UpdateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDelegate__ctor_m5002D5F7F11AD73AB9B07C13DE7F6D527134A971 (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_Multicast;
}
// System.Void RootMotion.FinalIK.IKSolver/UpdateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2 (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult RootMotion.FinalIK.IKSolver/UpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateDelegate_BeginInvoke_m10C3C0231B7D0C794877AB774F07DA6201390CFA (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void RootMotion.FinalIK.IKSolver/UpdateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDelegate_EndInvoke_mBB92A5F4F1708E7945FFF95954E913EBDB0D4A53 (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_Multicast(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* currentDelegate = reinterpret_cast<IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___i0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_OpenInst(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___i0, method);
}
void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_OpenStatic(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___i0, method);
}
void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_OpenStaticInvoker(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___i0);
}
void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_ClosedStaticInvoker(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___i0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633 (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___i0);

}
// System.Void RootMotion.FinalIK.IKSolver/IterationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IterationDelegate__ctor_mCC7801F7424A5FD35398D44D33401DC377F06E0F (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_Multicast;
}
// System.Void RootMotion.FinalIK.IKSolver/IterationDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___i0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult RootMotion.FinalIK.IKSolver/IterationDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IterationDelegate_BeginInvoke_m40594A26C7D26C5BA95B972A2CB7AADDA7CD6163 (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___i0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void RootMotion.FinalIK.IKSolver/IterationDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IterationDelegate_EndInvoke_mFBE83028AF160E87897C3A01EE7281DE14DBF92D (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single RootMotion.FinalIK.IKSolverAim::GetAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKSolverAim_GetAngle_m02C5AF9EA398E09580D7D8A769809241C9294618 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Vector3.Angle(transformAxis, IKPosition - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_18;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		float L_5;
		L_5 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::get_transformAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.rotation * axis;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_18;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___axis_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::get_transformPoleAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_get_transformPoleAxis_mF50192DD044C88D2CA2B32F373B49F6F9B7A1095 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return transform.rotation * poleAxis;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_18;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___poleAxis_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// System.Void RootMotion.FinalIK.IKSolverAim::OnInitiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_OnInitiate_mD69A0A02832A269E0D19A995096C862CCD1292B7 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((firstInitiation || !Application.isPlaying) && transform != null) {
		bool L_0 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___firstInitiation_8;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}

IL_0010:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// IKPosition = transform.position + transformAxis * 3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___transform_18;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1 = L_9;
		// polePosition = transform.position + transformPoleAxis * 3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___transform_18;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = IKSolverAim_get_transformPoleAxis_mF50192DD044C88D2CA2B32F373B49F6F9B7A1095(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_13, NULL);
		__this->___polePosition_21 = L_14;
	}

IL_0071:
	{
		// for (int i = 0; i < bones.Length; i++) {
		V_1 = 0;
		goto IL_00a5;
	}

IL_0075:
	{
		// if (bones[i].rotationLimit != null) bones[i].rotationLimit.Disable();
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_15 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_19;
		L_19 = Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_20;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// if (bones[i].rotationLimit != null) bones[i].rotationLimit.Disable();
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_22 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_26;
		L_26 = Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B(L_25, NULL);
		NullCheck(L_26);
		RotationLimit_Disable_mB342EF44F0CCCF281F77169A33721A856E893B4E(L_26, NULL);
	}

IL_00a0:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a5:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_28 = V_1;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_29 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_0075;
		}
	}
	{
		// step = 1f / (float)bones.Length;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_31 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_31);
		__this->___step_27 = ((float)((1.0f)/((float)((int32_t)(((RuntimeArray*)L_31)->max_length)))));
		// if (Application.isPlaying) axis = axis.normalized;
		bool L_32;
		L_32 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_00e5;
		}
	}
	{
		// if (Application.isPlaying) axis = axis.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&__this->___axis_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_34, NULL);
		__this->___axis_19 = L_35;
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverAim::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_OnUpdate_mE17D67A3D00824F8E26C557858F735DBE6D46FBA (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D73BF8F24BE964ABFC746323C52146317283172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32033EAEC7B44BF8B4EB4C040DE8A8232F488AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3BE9A1FD69FCACC2A385B37A2A9E8EF6F75FF8A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// if (axis == Vector3.zero) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___axis_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// if (!Warning.logged) LogWarning("IKSolverAim axis is Vector3.zero.");
		bool L_4 = ((Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_StaticFields*)il2cpp_codegen_static_fields_for(Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_il2cpp_TypeInfo_var))->___logged_0;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// if (!Warning.logged) LogWarning("IKSolverAim axis is Vector3.zero.");
		IKSolver_LogWarning_m003521FB5561B0E545804837BCAF32EA151ED9E6(__this, _stringLiteral3D73BF8F24BE964ABFC746323C52146317283172, NULL);
	}

IL_002e:
	{
		// return;
		goto IL_02c0;
	}

IL_0033:
	{
		// if (poleAxis == Vector3.zero && poleWeight > 0f) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___poleAxis_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_8;
		L_8 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		float L_9 = __this->___poleWeight_22;
		G_B7_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_3 = (bool)G_B7_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// if (!Warning.logged) LogWarning("IKSolverAim poleAxis is Vector3.zero.");
		bool L_11 = ((Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_StaticFields*)il2cpp_codegen_static_fields_for(Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_il2cpp_TypeInfo_var))->___logged_0;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// if (!Warning.logged) LogWarning("IKSolverAim poleAxis is Vector3.zero.");
		IKSolver_LogWarning_m003521FB5561B0E545804837BCAF32EA151ED9E6(__this, _stringLiteralB32033EAEC7B44BF8B4EB4C040DE8A8232F488AD, NULL);
	}

IL_0074:
	{
		// return;
		goto IL_02c0;
	}

IL_0079:
	{
		// if (target != null) IKPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___target_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		// if (target != null) IKPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___target_10;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1 = L_17;
	}

IL_009c:
	{
		// if (poleTarget != null) polePosition = poleTarget.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___poleTarget_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// if (poleTarget != null) polePosition = poleTarget.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___poleTarget_23;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		__this->___polePosition_21 = L_22;
	}

IL_00bf:
	{
		// if (XY) IKPosition.z = bones[0].transform.position.z;
		bool L_23 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___XY_14;
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00ed;
		}
	}
	{
		// if (XY) IKPosition.z = bones[0].transform.position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_26 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_26);
		int32_t L_27 = 0;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_28)->___transform_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___z_4;
		L_25->___z_4 = L_31;
	}

IL_00ed:
	{
		// if (IKPositionWeight <= 0) return;
		float L_32 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		V_8 = (bool)((((int32_t)((!(((float)L_32) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_0108;
		}
	}
	{
		// if (IKPositionWeight <= 0) return;
		goto IL_02c0;
	}

IL_0108:
	{
		// IKPositionWeight = Mathf.Clamp(IKPositionWeight, 0f, 1f);
		float L_34 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		float L_35;
		L_35 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_34, (0.0f), (1.0f), NULL);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2 = L_35;
		// if (transform != lastTransform) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___transform_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___lastTransform_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, L_37, NULL);
		V_9 = L_38;
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_0178;
		}
	}
	{
		// transformLimit = transform.GetComponent<RotationLimit>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___transform_18;
		NullCheck(L_40);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_41;
		L_41 = Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443(L_40, Component_GetComponent_TisRotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9_m6797F304F01D51B971E73EEC59632AC0ED0E8443_RuntimeMethod_var);
		__this->___transformLimit_29 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformLimit_29), (void*)L_41);
		// if (transformLimit != null) transformLimit.enabled = false;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_42 = __this->___transformLimit_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_43;
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_016b;
		}
	}
	{
		// if (transformLimit != null) transformLimit.enabled = false;
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_45 = __this->___transformLimit_29;
		NullCheck(L_45);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)0, NULL);
	}

IL_016b:
	{
		// lastTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = __this->___transform_18;
		__this->___lastTransform_30 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastTransform_30), (void*)L_46);
	}

IL_0178:
	{
		// if (transformLimit != null) transformLimit.Apply();
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_47 = __this->___transformLimit_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_48;
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_0196;
		}
	}
	{
		// if (transformLimit != null) transformLimit.Apply();
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_50 = __this->___transformLimit_29;
		NullCheck(L_50);
		bool L_51;
		L_51 = RotationLimit_Apply_m9159A9138AAED151CE1ECCBD4AEF1EA019E7F617(L_50, NULL);
	}

IL_0196:
	{
		// if (transform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___transform_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_52, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_53;
		bool L_54 = V_12;
		if (!L_54)
		{
			goto IL_01c8;
		}
	}
	{
		// if (!Warning.logged) LogWarning("Aim Transform unassigned in Aim IK solver. Please Assign a Transform (lineal descendant to the last bone in the spine) that you want to be aimed at IKPosition");
		bool L_55 = ((Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_StaticFields*)il2cpp_codegen_static_fields_for(Warning_t00E234BEB10F6A3FE508929F237FB137ABC7CFED_il2cpp_TypeInfo_var))->___logged_0;
		V_13 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_13;
		if (!L_56)
		{
			goto IL_01c3;
		}
	}
	{
		// if (!Warning.logged) LogWarning("Aim Transform unassigned in Aim IK solver. Please Assign a Transform (lineal descendant to the last bone in the spine) that you want to be aimed at IKPosition");
		IKSolver_LogWarning_m003521FB5561B0E545804837BCAF32EA151ED9E6(__this, _stringLiteralF3BE9A1FD69FCACC2A385B37A2A9E8EF6F75FF8A, NULL);
	}

IL_01c3:
	{
		// return;
		goto IL_02c0;
	}

IL_01c8:
	{
		// clampWeight = Mathf.Clamp(clampWeight, 0f, 1f);
		float L_57 = __this->___clampWeight_24;
		float L_58;
		L_58 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_57, (0.0f), (1.0f), NULL);
		__this->___clampWeight_24 = L_58;
		// clampedIKPosition = GetClampedIKPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = IKSolverAim_GetClampedIKPosition_m81BCC5C3C79C263203F533180775436A5B12436C(__this, NULL);
		__this->___clampedIKPosition_28 = L_59;
		// Vector3 dir = clampedIKPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___clampedIKPosition_28;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = __this->___transform_18;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_60, L_62, NULL);
		V_0 = L_63;
		// dir = Vector3.Slerp(transformAxis * dir.magnitude, dir, IKPositionWeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		float L_65;
		L_65 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_64, L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_0;
		float L_68 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_66, L_67, L_68, NULL);
		V_0 = L_69;
		// clampedIKPosition = transform.position + dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___transform_18;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_71, L_72, NULL);
		__this->___clampedIKPosition_28 = L_73;
		// for (int i = 0; i < maxIterations; i++) {
		V_14 = 0;
		goto IL_02a4;
	}

IL_0241:
	{
		// if (i >= 1 && tolerance > 0 && GetAngle() < tolerance) break;
		int32_t L_74 = V_14;
		if ((((int32_t)L_74) < ((int32_t)1)))
		{
			goto IL_0264;
		}
	}
	{
		float L_75 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___tolerance_11;
		if ((!(((float)L_75) > ((float)(0.0f)))))
		{
			goto IL_0264;
		}
	}
	{
		float L_76;
		L_76 = IKSolverAim_GetAngle_m02C5AF9EA398E09580D7D8A769809241C9294618(__this, NULL);
		float L_77 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___tolerance_11;
		G_B34_0 = ((((float)L_76) < ((float)L_77))? 1 : 0);
		goto IL_0265;
	}

IL_0264:
	{
		G_B34_0 = 0;
	}

IL_0265:
	{
		V_15 = (bool)G_B34_0;
		bool L_78 = V_15;
		if (!L_78)
		{
			goto IL_026d;
		}
	}
	{
		// if (i >= 1 && tolerance > 0 && GetAngle() < tolerance) break;
		goto IL_02b4;
	}

IL_026d:
	{
		// lastLocalDirection = localDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(15 /* UnityEngine.Vector3 RootMotion.FinalIK.IKSolverHeuristic::get_localDirection() */, __this);
		((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___lastLocalDirection_16 = L_79;
		// if (OnPreIteration != null) OnPreIteration(i);
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_80 = __this->___OnPreIteration_26;
		V_16 = (bool)((!(((RuntimeObject*)(IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633*)L_80) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_81 = V_16;
		if (!L_81)
		{
			goto IL_0296;
		}
	}
	{
		// if (OnPreIteration != null) OnPreIteration(i);
		IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* L_82 = __this->___OnPreIteration_26;
		int32_t L_83 = V_14;
		NullCheck(L_82);
		IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_inline(L_82, L_83, NULL);
	}

IL_0296:
	{
		// Solve();
		IKSolverAim_Solve_m7EF7C5CB197C879BC5D698BB418F0C5A18E96BBB(__this, NULL);
		// for (int i = 0; i < maxIterations; i++) {
		int32_t L_84 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_02a4:
	{
		// for (int i = 0; i < maxIterations; i++) {
		int32_t L_85 = V_14;
		int32_t L_86 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___maxIterations_12;
		V_17 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		bool L_87 = V_17;
		if (L_87)
		{
			goto IL_0241;
		}
	}

IL_02b4:
	{
		// lastLocalDirection = localDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(15 /* UnityEngine.Vector3 RootMotion.FinalIK.IKSolverHeuristic::get_localDirection() */, __this);
		((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___lastLocalDirection_16 = L_88;
	}

IL_02c0:
	{
		// }
		return;
	}
}
// System.Int32 RootMotion.FinalIK.IKSolverAim::get_minBones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKSolverAim_get_minBones_mB3FEEA9676B73CA6B5CED17AF71C8DEB76803F32 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// protected override int minBones { get { return 1; }}
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// protected override int minBones { get { return 1; }}
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void RootMotion.FinalIK.IKSolverAim::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_Solve_m7EF7C5CB197C879BC5D698BB418F0C5A18E96BBB (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < bones.Length - 1; i++) RotateToTarget(clampedIKPosition, bones[i], step * (i + 1) * IKPositionWeight * bones[i].weight);
		V_0 = 0;
		goto IL_003e;
	}

IL_0005:
	{
		// for (int i = 0; i < bones.Length - 1; i++) RotateToTarget(clampedIKPosition, bones[i], step * (i + 1) * IKPositionWeight * bones[i].weight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___clampedIKPosition_28;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_1 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = __this->___step_27;
		int32_t L_6 = V_0;
		float L_7 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_8 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		float L_12 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_11)->___weight_1;
		IKSolverAim_RotateToTarget_m917ADA8DCF8FC8ED849CE81125208CDDAC157AFA(__this, L_0, L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, ((float)((int32_t)il2cpp_codegen_add(L_6, 1))))), L_7)), L_12)), NULL);
		// for (int i = 0; i < bones.Length - 1; i++) RotateToTarget(clampedIKPosition, bones[i], step * (i + 1) * IKPositionWeight * bones[i].weight);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < bones.Length - 1; i++) RotateToTarget(clampedIKPosition, bones[i], step * (i + 1) * IKPositionWeight * bones[i].weight);
		int32_t L_14 = V_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_15 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_15);
		V_1 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), 1))))? 1 : 0);
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// RotateToTarget(clampedIKPosition, bones[bones.Length - 1], IKPositionWeight * bones[bones.Length - 1].weight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___clampedIKPosition_28;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_18 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_19 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_19);
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_23 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_24 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_24);
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		float L_27 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_26)->___weight_1;
		IKSolverAim_RotateToTarget_m917ADA8DCF8FC8ED849CE81125208CDDAC157AFA(__this, L_17, L_21, ((float)il2cpp_codegen_multiply(L_22, L_27)), NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::GetClampedIKPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_GetClampedIKPosition_m81BCC5C3C79C263203F533180775436A5B12436C (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	bool V_10 = false;
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// if (clampWeight <= 0f) return IKPosition;
		float L_0 = __this->___clampWeight_24;
		V_4 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (clampWeight <= 0f) return IKPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		V_5 = L_2;
		goto IL_0187;
	}

IL_0024:
	{
		// if (clampWeight >= 1f) return transform.position + transformAxis * (IKPosition - transform.position).magnitude;
		float L_3 = __this->___clampWeight_24;
		V_6 = (bool)((((int32_t)((!(((float)L_3) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		// if (clampWeight >= 1f) return transform.position + transformAxis * (IKPosition - transform.position).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___transform_18;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_18;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		V_7 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_13, NULL);
		V_5 = L_14;
		goto IL_0187;
	}

IL_007b:
	{
		// float angle = Vector3.Angle(transformAxis, (IKPosition - transform.position));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___transform_18;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		float L_20;
		L_20 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_15, L_19, NULL);
		V_0 = L_20;
		// float dot = 1f - (angle / 180f);
		float L_21 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_21/(180.0f)))));
		// float targetClampMlp = clampWeight > 0? Mathf.Clamp(1f - ((clampWeight - dot) / (1f - dot)), 0f, 1f): 1f;
		float L_22 = __this->___clampWeight_24;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			goto IL_00bf;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_00e4;
	}

IL_00bf:
	{
		float L_23 = __this->___clampWeight_24;
		float L_24 = V_1;
		float L_25 = V_1;
		float L_26;
		L_26 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_23, L_24))/((float)il2cpp_codegen_subtract((1.0f), L_25)))))), (0.0f), (1.0f), NULL);
		G_B7_0 = L_26;
	}

IL_00e4:
	{
		V_2 = G_B7_0;
		// float clampMlp = clampWeight > 0? Mathf.Clamp(dot / clampWeight, 0f, 1f): 1f;
		float L_27 = __this->___clampWeight_24;
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_00f9;
		}
	}
	{
		G_B10_0 = (1.0f);
		goto IL_0110;
	}

IL_00f9:
	{
		float L_28 = V_1;
		float L_29 = __this->___clampWeight_24;
		float L_30;
		L_30 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_28/L_29)), (0.0f), (1.0f), NULL);
		G_B10_0 = L_30;
	}

IL_0110:
	{
		V_3 = G_B10_0;
		// for (int i = 0; i < clampSmoothing; i++) {
		V_8 = 0;
		goto IL_0135;
	}

IL_0116:
	{
		// float sinF = clampMlp * Mathf.PI * 0.5f;
		float L_31 = V_3;
		V_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, (3.14159274f))), (0.5f)));
		// clampMlp = Mathf.Sin(sinF);
		float L_32 = V_9;
		float L_33;
		L_33 = sinf(L_32);
		V_3 = L_33;
		// for (int i = 0; i < clampSmoothing; i++) {
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0135:
	{
		// for (int i = 0; i < clampSmoothing; i++) {
		int32_t L_35 = V_8;
		int32_t L_36 = __this->___clampSmoothing_25;
		V_10 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_10;
		if (L_37)
		{
			goto IL_0116;
		}
	}
	{
		// return transform.position + Vector3.Slerp(transformAxis * 10f, IKPosition - transform.position, clampMlp * targetClampMlp);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___transform_18;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___transform_18;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_44, NULL);
		float L_46 = V_3;
		float L_47 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_41, L_45, ((float)il2cpp_codegen_multiply(L_46, L_47)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_48, NULL);
		V_5 = L_49;
		goto IL_0187;
	}

IL_0187:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_5;
		return L_50;
	}
}
// System.Void RootMotion.FinalIK.IKSolverAim::RotateToTarget(UnityEngine.Vector3,RootMotion.FinalIK.IKSolver/Bone,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim_RotateToTarget_m917ADA8DCF8FC8ED849CE81125208CDDAC157AFA (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* ___bone1, float ___weight2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t G_B15_0 = 0;
	{
		// if (XY) {
		bool L_0 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___XY_14;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a0;
		}
	}
	{
		// if (weight >= 0f) {
		float L_2 = ___weight2;
		V_1 = (bool)((((int32_t)((!(((float)L_2) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_009a;
		}
	}
	{
		// Vector3 dir = transformAxis;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		V_2 = L_4;
		// Vector3 targetDir = targetPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetPosition0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transform_18;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_3 = L_8;
		// float angleDir = Mathf.Atan2(dir.x, dir.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = atan2f(L_10, L_12);
		V_4 = ((float)il2cpp_codegen_multiply(L_13, (57.2957802f)));
		// float angleTarget = Mathf.Atan2(targetDir.x, targetDir.y) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = L_16.___y_3;
		float L_18;
		L_18 = atan2f(L_15, L_17);
		V_5 = ((float)il2cpp_codegen_multiply(L_18, (57.2957802f)));
		// bone.transform.rotation = Quaternion.AngleAxis(Mathf.DeltaAngle(angleDir, angleTarget), Vector3.back) * bone.transform.rotation;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_19 = ___bone1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_19)->___transform_0;
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23;
		L_23 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_23, L_24, NULL);
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_26 = ___bone1;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_26)->___transform_0;
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_28, NULL);
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_29, NULL);
	}

IL_009a:
	{
		goto IL_01b3;
	}

IL_00a0:
	{
		// if (weight >= 0f) {
		float L_30 = ___weight2;
		V_6 = (bool)((((int32_t)((!(((float)L_30) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_0130;
		}
	}
	{
		// Quaternion rotationOffset = Quaternion.FromToRotation(transformAxis, targetPosition - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___targetPosition0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___transform_18;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_32, L_36, NULL);
		V_7 = L_37;
		// if (weight >= 1f) {
		float L_38 = ___weight2;
		V_8 = (bool)((((int32_t)((!(((float)L_38) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0104;
		}
	}
	{
		// bone.transform.rotation = rotationOffset * bone.transform.rotation;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_40 = ___bone1;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_40)->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = V_7;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_43 = ___bone1;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_43)->___transform_0;
		NullCheck(L_44);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_44, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_42, L_45, NULL);
		NullCheck(L_41);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_41, L_46, NULL);
		goto IL_012f;
	}

IL_0104:
	{
		// bone.transform.rotation = Quaternion.Lerp(Quaternion.identity, rotationOffset, weight) * bone.transform.rotation;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_47 = ___bone1;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_47)->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = V_7;
		float L_51 = ___weight2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_49, L_50, L_51, NULL);
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_53 = ___bone1;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_53)->___transform_0;
		NullCheck(L_54);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_54, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_52, L_55, NULL);
		NullCheck(L_48);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_48, L_56, NULL);
	}

IL_012f:
	{
	}

IL_0130:
	{
		// if (poleWeight > 0f) {
		float L_57 = __this->___poleWeight_22;
		V_9 = (bool)((((float)L_57) > ((float)(0.0f)))? 1 : 0);
		bool L_58 = V_9;
		if (!L_58)
		{
			goto IL_01b2;
		}
	}
	{
		// Vector3 poleDirection = polePosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___polePosition_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___transform_18;
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_59, L_61, NULL);
		V_10 = L_62;
		// Vector3 poleDirOrtho = poleDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_10;
		V_11 = L_63;
		// Vector3 normal = transformAxis;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = IKSolverAim_get_transformAxis_m8765843E7EBA76897E826B51BD736B236E9C1C90(__this, NULL);
		V_12 = L_64;
		// Vector3.OrthoNormalize(ref normal, ref poleDirOrtho);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_12), (&V_11), NULL);
		// Quaternion toPole = Quaternion.FromToRotation(transformPoleAxis, poleDirOrtho);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = IKSolverAim_get_transformPoleAxis_mF50192DD044C88D2CA2B32F373B49F6F9B7A1095(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_65, L_66, NULL);
		V_13 = L_67;
		// bone.transform.rotation = Quaternion.Lerp(Quaternion.identity, toPole, weight * poleWeight) * bone.transform.rotation;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_68 = ___bone1;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_68)->___transform_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		L_70 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71 = V_13;
		float L_72 = ___weight2;
		float L_73 = __this->___poleWeight_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_70, L_71, ((float)il2cpp_codegen_multiply(L_72, L_73)), NULL);
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_75 = ___bone1;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_75)->___transform_0;
		NullCheck(L_76);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_76, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_74, L_77, NULL);
		NullCheck(L_69);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_69, L_78, NULL);
	}

IL_01b2:
	{
	}

IL_01b3:
	{
		// if (useRotationLimits && bone.rotationLimit != null) bone.rotationLimit.Apply();
		bool L_79 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___useRotationLimits_13;
		if (!L_79)
		{
			goto IL_01c9;
		}
	}
	{
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_80 = ___bone1;
		NullCheck(L_80);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_81;
		L_81 = Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B(L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_81, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B15_0 = ((int32_t)(L_82));
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B15_0 = 0;
	}

IL_01ca:
	{
		V_14 = (bool)G_B15_0;
		bool L_83 = V_14;
		if (!L_83)
		{
			goto IL_01dc;
		}
	}
	{
		// if (useRotationLimits && bone.rotationLimit != null) bone.rotationLimit.Apply();
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_84 = ___bone1;
		NullCheck(L_84);
		RotationLimit_t7A68DEEE9DBC0895E8B965A8CF1ADDCE314A27F9* L_85;
		L_85 = Bone_get_rotationLimit_mA81220CCF6A70374FE1D8A00335216FDAD4B8B1B(L_84, NULL);
		NullCheck(L_85);
		bool L_86;
		L_86 = RotationLimit_Apply_m9159A9138AAED151CE1ECCBD4AEF1EA019E7F617(L_85, NULL);
	}

IL_01dc:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverAim::get_localDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverAim_get_localDirection_mF8E554B2A04B9CFDB6CD2BF5159B8C44F40BB48E (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return bones[0].transform.InverseTransformDirection(bones[bones.Length - 1].transform.forward);
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_0 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_2)->___transform_0;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_4 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		BoneU5BU5D_t384A868FF22BA2A4344F14B899695540877FB593* L_5 = ((IKSolverHeuristic_tE9187D7C8E900617B4FE451C82FF14BB5CF2F484*)__this)->___bones_15;
		NullCheck(L_5);
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
		Bone_t08B8D90F9F7409FAD0F5DB325E88341691FF6BAF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ((Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_7)->___transform_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_3, L_9, NULL);
		V_0 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		return L_11;
	}
}
// System.Void RootMotion.FinalIK.IKSolverAim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverAim__ctor_m767C038EEAB4D52894E3B33C9EF587DDF807AE48 (IKSolverAim_tCA20C3F87AF8E71124E2CA17F9E5AAA2912B8789* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___axis_19 = L_0;
		// public Vector3 poleAxis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___poleAxis_20 = L_1;
		// public float clampWeight = 0.1f;
		__this->___clampWeight_24 = (0.100000001f);
		// public int clampSmoothing = 2;
		__this->___clampSmoothing_25 = 2;
		IKSolverHeuristic__ctor_m7E48119F73890D2996216F5A3F23DCBC170ADD19(__this, NULL);
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
// System.Boolean RootMotion.FinalIK.IKSolverArm::IsValid(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKSolverArm_IsValid_m4A29028E9848C7C4A39749E7FE47C6D836EF8F16 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, String_t** ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A05B045F39801BCD94A3E0F6F758BC4FD1AC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC65F374C7AE2FC44025B7D2B43A0AB214A564E12);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// if (chest.transform == null || shoulder.transform == null || upperArm.transform == null || forearm.transform == null || hand.transform == null) {
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_0 = __this->___chest_12;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0060;
		}
	}
	{
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = __this->___shoulder_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0060;
		}
	}
	{
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_6 = __this->___upperArm_14;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0060;
		}
	}
	{
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_9 = __this->___forearm_15;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_12 = __this->___hand_16;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___transform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = ((int32_t)(L_14));
		goto IL_0061;
	}

IL_0060:
	{
		G_B6_0 = 1;
	}

IL_0061:
	{
		V_1 = (bool)G_B6_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// message = "Please assign all bone slots of the Arm IK solver.";
		String_t** L_16 = ___message0;
		*((RuntimeObject**)L_16) = (RuntimeObject*)_stringLiteralC65F374C7AE2FC44025B7D2B43A0AB214A564E12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)_stringLiteralC65F374C7AE2FC44025B7D2B43A0AB214A564E12);
		// return false;
		V_2 = (bool)0;
		goto IL_00f5;
	}

IL_0074:
	{
		// Transform duplicate = (Transform)Hierarchy.ContainsDuplicate(new Transform[5] { chest.transform, shoulder.transform, upperArm.transform, forearm.transform, hand.transform });
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)5);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = L_17;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_19 = __this->___chest_12;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19->___transform_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_20);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = L_18;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_22 = __this->___shoulder_13;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___transform_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_23);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = L_21;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_25 = __this->___upperArm_14;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___transform_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_26);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_27 = L_24;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_28 = __this->___forearm_15;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___transform_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_29);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_30 = L_27;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_31 = __this->___hand_16;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31->___transform_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_32);
		V_3 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_30;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_33 = V_3;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_34;
		L_34 = Hierarchy_ContainsDuplicate_mCCE3B783801171E39894D577BB2F94454282D19D(L_33, NULL);
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_34, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		// if (duplicate != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_00f1;
		}
	}
	{
		// message = duplicate.name + " is represented multiple times in the ArmIK.";
		String_t** L_38 = ___message0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_39, NULL);
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_40, _stringLiteralC0A05B045F39801BCD94A3E0F6F758BC4FD1AC72, NULL);
		*((RuntimeObject**)L_38) = (RuntimeObject*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)(RuntimeObject*)L_41);
		// return false;
		V_2 = (bool)0;
		goto IL_00f5;
	}

IL_00f1:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_00f5;
	}

IL_00f5:
	{
		// }
		bool L_42 = V_2;
		return L_42;
	}
}
// System.Boolean RootMotion.FinalIK.IKSolverArm::SetChain(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKSolverArm_SetChain_m6F180D573223970B6964B8B48913B63957F4268C (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___chest0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shoulder1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___upperArm2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___forearm3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hand4, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root5, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// this.chest.transform = chest;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_0 = __this->___chest_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___chest0;
		NullCheck(L_0);
		L_0->___transform_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___transform_0), (void*)L_1);
		// this.shoulder.transform = shoulder;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_2 = __this->___shoulder_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___shoulder1;
		NullCheck(L_2);
		L_2->___transform_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___transform_0), (void*)L_3);
		// this.upperArm.transform = upperArm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_4 = __this->___upperArm_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___upperArm2;
		NullCheck(L_4);
		L_4->___transform_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___transform_0), (void*)L_5);
		// this.forearm.transform = forearm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_6 = __this->___forearm_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___forearm3;
		NullCheck(L_6);
		L_6->___transform_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___transform_0), (void*)L_7);
		// this.hand.transform = hand;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_8 = __this->___hand_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___hand4;
		NullCheck(L_8);
		L_8->___transform_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___transform_0), (void*)L_9);
		// Initiate(root);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___root5;
		IKSolver_Initiate_m86CFC89AADD30E0396199398E858A737DB674466(__this, L_10, NULL);
		// return initiated;
		bool L_11;
		L_11 = IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7_inline(__this, NULL);
		V_0 = L_11;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_12 = V_0;
		return L_12;
	}
}
// RootMotion.FinalIK.IKSolver/Point[] RootMotion.FinalIK.IKSolverArm::GetPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* IKSolverArm_GetPoints_mDB172AAE2D13D029E6696180232E5903BE334070 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* V_0 = NULL;
	{
		// return new IKSolver.Point[5] { (IKSolver.Point)chest, (IKSolver.Point)shoulder, (IKSolver.Point)upperArm, (IKSolver.Point)forearm, (IKSolver.Point)hand };
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_0 = (PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB*)(PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB*)SZArrayNew(PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB_il2cpp_TypeInfo_var, (uint32_t)5);
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_1 = L_0;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_2 = __this->___chest_12;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_2);
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_3 = L_1;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_4 = __this->___shoulder_13;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_4);
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_5 = L_3;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_6 = __this->___upperArm_14;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_6);
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_7 = L_5;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_8 = __this->___forearm_15;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_8);
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_9 = L_7;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_10 = __this->___hand_16;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)L_10);
		V_0 = L_9;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		PointU5BU5D_tCD6673DF974ECCCD942E643E05EAD6C28FB4C7BB* L_11 = V_0;
		return L_11;
	}
}
// RootMotion.FinalIK.IKSolver/Point RootMotion.FinalIK.IKSolverArm::GetPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* IKSolverArm_GetPoint_mE57A1FA6673E258CECFE381F9840C9733F76BB5C (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (chest.transform == transform) return (IKSolver.Point)chest;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_0 = __this->___chest_12;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (chest.transform == transform) return (IKSolver.Point)chest;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_5 = __this->___chest_12;
		V_1 = L_5;
		goto IL_00a2;
	}

IL_0022:
	{
		// if (shoulder.transform == transform) return (IKSolver.Point)shoulder;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_6 = __this->___shoulder_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// if (shoulder.transform == transform) return (IKSolver.Point)shoulder;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_11 = __this->___shoulder_13;
		V_1 = L_11;
		goto IL_00a2;
	}

IL_0040:
	{
		// if (upperArm.transform == transform) return (IKSolver.Point)upperArm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_12 = __this->___upperArm_14;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, L_14, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_005e;
		}
	}
	{
		// if (upperArm.transform == transform) return (IKSolver.Point)upperArm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_17 = __this->___upperArm_14;
		V_1 = L_17;
		goto IL_00a2;
	}

IL_005e:
	{
		// if (forearm.transform == transform) return (IKSolver.Point)forearm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_18 = __this->___forearm_15;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, L_20, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		// if (forearm.transform == transform) return (IKSolver.Point)forearm;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_23 = __this->___forearm_15;
		V_1 = L_23;
		goto IL_00a2;
	}

IL_007e:
	{
		// if (hand.transform == transform) return (IKSolver.Point)hand;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_24 = __this->___hand_16;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, L_26, NULL);
		V_5 = L_27;
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		// if (hand.transform == transform) return (IKSolver.Point)hand;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_29 = __this->___hand_16;
		V_1 = L_29;
		goto IL_00a2;
	}

IL_009e:
	{
		// return null;
		V_1 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)NULL;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_30 = V_1;
		return L_30;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::StoreDefaultLocalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_StoreDefaultLocalState_m5328559CEBDE6331382A4F54D302A4353C3BB747 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// shoulder.StoreDefaultLocalState();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_0 = __this->___shoulder_13;
		NullCheck(L_0);
		Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942(L_0, NULL);
		// upperArm.StoreDefaultLocalState();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_1 = __this->___upperArm_14;
		NullCheck(L_1);
		Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942(L_1, NULL);
		// forearm.StoreDefaultLocalState();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_2 = __this->___forearm_15;
		NullCheck(L_2);
		Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942(L_2, NULL);
		// hand.StoreDefaultLocalState();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = __this->___hand_16;
		NullCheck(L_3);
		Point_StoreDefaultLocalState_m65226FEB862B62DD499829D04D58E647B1A98942(L_3, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::FixTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_FixTransforms_m046926E74A95BDFFB515B48F58DFEFAF23EE54AA (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!initiated) return;
		bool L_0;
		L_0 = IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!initiated) return;
		goto IL_0040;
	}

IL_0010:
	{
		// shoulder.FixTransform();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_2 = __this->___shoulder_13;
		NullCheck(L_2);
		Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C(L_2, NULL);
		// upperArm.FixTransform();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = __this->___upperArm_14;
		NullCheck(L_3);
		Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C(L_3, NULL);
		// forearm.FixTransform();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_4 = __this->___forearm_15;
		NullCheck(L_4);
		Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C(L_4, NULL);
		// hand.FixTransform();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_5 = __this->___hand_16;
		NullCheck(L_5);
		Point_FixTransform_m6F2D9FE304E340D3EBFB970F7349384089CA9D0C(L_5, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::OnInitiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_OnInitiate_mAD2A5B8E058159ADD59ED6D35194F878928D8EEF (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// IKPosition = hand.transform.position;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_0 = __this->___hand_16;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1 = L_2;
		// IKRotation = hand.transform.rotation;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = __this->___hand_16;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___IKRotation_11 = L_5;
		// Read ();
		IKSolverArm_Read_m9A990756BD9C89ABA38E48BAB7957F7A928ACC19(__this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_OnUpdate_m0A482704ED707CD04B0317C1F95ECDD33C9CF25E (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// Read ();
		IKSolverArm_Read_m9A990756BD9C89ABA38E48BAB7957F7A928ACC19(__this, NULL);
		// Solve ();
		IKSolverArm_Solve_m5F2859303B0730404418EA05461FF6A665B58060(__this, NULL);
		// Write ();
		IKSolverArm_Write_m284E0C63460CC8012837207D367E55F7DEA3D652(__this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Solve_m5F2859303B0730404418EA05461FF6A665B58060 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// arm.PreSolve (1f);
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_0 = __this->___arm_18;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void RootMotion.FinalIK.IKSolverVR/BodyPart::PreSolve(System.Single) */, L_0, (1.0f));
		// arm.ApplyOffsets(1f);
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_1 = __this->___arm_18;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(7 /* System.Void RootMotion.FinalIK.IKSolverVR/BodyPart::ApplyOffsets(System.Single) */, L_1, (1.0f));
		// arm.Solve (isLeft);
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_2 = __this->___arm_18;
		bool L_3 = __this->___isLeft_17;
		NullCheck(L_2);
		Arm_Solve_m5211C595304A17150600E9B7070D12E6FC1925BA(L_2, L_3, NULL);
		// arm.ResetOffsets ();
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_4 = __this->___arm_18;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(8 /* System.Void RootMotion.FinalIK.IKSolverVR/BodyPart::ResetOffsets() */, L_4);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Read_m9A990756BD9C89ABA38E48BAB7957F7A928ACC19 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// arm.IKPosition = IKPosition;
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_0 = __this->___arm_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPosition_1;
		NullCheck(L_0);
		L_0->___IKPosition_23 = L_1;
		// arm.positionWeight = IKPositionWeight;
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_2 = __this->___arm_18;
		float L_3 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___IKPositionWeight_2;
		NullCheck(L_2);
		L_2->___positionWeight_9 = L_3;
		// arm.IKRotation = IKRotation;
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_4 = __this->___arm_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___IKRotation_11;
		NullCheck(L_4);
		L_4->___IKRotation_24 = L_5;
		// arm.rotationWeight = IKRotationWeight;
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_6 = __this->___arm_18;
		float L_7 = __this->___IKRotationWeight_10;
		NullCheck(L_6);
		L_6->___rotationWeight_10 = L_7;
		// positions [0] = root.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___positions_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___root_9;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// positions [1] = chest.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___positions_19;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_12 = __this->___chest_12;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___transform_0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		// positions [2] = shoulder.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___positions_19;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_16 = __this->___shoulder_13;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___transform_0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_18);
		// positions [3] = upperArm.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = __this->___positions_19;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_20 = __this->___upperArm_14;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___transform_0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		// positions [4] = forearm.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___positions_19;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_24 = __this->___forearm_15;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___transform_0;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// positions [5] = hand.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = __this->___positions_19;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_28 = __this->___hand_16;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___transform_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// rotations [0] = root.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_31 = __this->___rotations_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ((IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623*)__this)->___root_9;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_33);
		// rotations [1] = chest.transform.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_34 = __this->___rotations_20;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_35 = __this->___chest_12;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35->___transform_0;
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_37);
		// rotations [2] = shoulder.transform.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_38 = __this->___rotations_20;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_39 = __this->___shoulder_13;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39->___transform_0;
		NullCheck(L_40);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_40, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_41);
		// rotations [3] = upperArm.transform.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_42 = __this->___rotations_20;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_43 = __this->___upperArm_14;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = L_43->___transform_0;
		NullCheck(L_44);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_44, NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_45);
		// rotations [4] = forearm.transform.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_46 = __this->___rotations_20;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_47 = __this->___forearm_15;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = L_47->___transform_0;
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(4), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_49);
		// rotations [5] = hand.transform.rotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_50 = __this->___rotations_20;
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_51 = __this->___hand_16;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = L_51->___transform_0;
		NullCheck(L_52);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_52, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(5), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_53);
		// arm.Read(positions, rotations, false, false, true, false, false, 1, 2);
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_54 = __this->___arm_18;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55 = __this->___positions_19;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_56 = __this->___rotations_20;
		NullCheck(L_54);
		BodyPart_Read_m47B5DD9CC7663DAEEDEC1EF8DC81501CDFCAE831(L_54, L_55, L_56, (bool)0, (bool)0, (bool)1, (bool)0, (bool)0, 1, 2, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::Write()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm_Write_m284E0C63460CC8012837207D367E55F7DEA3D652 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	{
		// arm.Write (ref positions, ref rotations);
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_0 = __this->___arm_18;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_1 = (&__this->___positions_19);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_2 = (&__this->___rotations_20);
		NullCheck(L_0);
		VirtualActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** >::Invoke(6 /* System.Void RootMotion.FinalIK.IKSolverVR/BodyPart::Write(UnityEngine.Vector3[]&,UnityEngine.Quaternion[]&) */, L_0, L_1, L_2);
		// shoulder.transform.rotation = rotations [2];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = __this->___shoulder_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_5 = __this->___rotations_20;
		NullCheck(L_5);
		int32_t L_6 = 2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_7, NULL);
		// upperArm.transform.rotation = rotations [3];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_8 = __this->___upperArm_14;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___transform_0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_10 = __this->___rotations_20;
		NullCheck(L_10);
		int32_t L_11 = 3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
		// forearm.transform.rotation = rotations [4];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_13 = __this->___forearm_15;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___transform_0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_15 = __this->___rotations_20;
		NullCheck(L_15);
		int32_t L_16 = 4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_17, NULL);
		// hand.transform.rotation = rotations [5];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_18 = __this->___hand_16;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___transform_0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_20 = __this->___rotations_20;
		NullCheck(L_20);
		int32_t L_21 = 5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_22, NULL);
		// forearm.transform.position = positions[4];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_23 = __this->___forearm_15;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___transform_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = __this->___positions_19;
		NullCheck(L_25);
		int32_t L_26 = 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_27, NULL);
		// hand.transform.position = positions[5];
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_28 = __this->___hand_16;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___transform_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = __this->___positions_19;
		NullCheck(L_30);
		int32_t L_31 = 5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_32, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.FinalIK.IKSolverArm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverArm__ctor_mD7810BFBC7BD22AC83AF5E4A9340DA4E810E3DA7 (IKSolverArm_t0C208601FE2314515530FA22130B7FD80C79A25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arm_tBB9696204237D5FD5D679036101C50155CF19A30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float IKRotationWeight = 1f;
		__this->___IKRotationWeight_10 = (1.0f);
		// public Quaternion IKRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___IKRotation_11 = L_0;
		// public IKSolver.Point chest = new IKSolver.Point();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_1 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)il2cpp_codegen_object_new(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(L_1, NULL);
		__this->___chest_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chest_12), (void*)L_1);
		// public IKSolver.Point shoulder = new IKSolver.Point();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_2 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)il2cpp_codegen_object_new(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(L_2, NULL);
		__this->___shoulder_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shoulder_13), (void*)L_2);
		// public IKSolver.Point upperArm = new IKSolver.Point();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_3 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)il2cpp_codegen_object_new(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(L_3, NULL);
		__this->___upperArm_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___upperArm_14), (void*)L_3);
		// public IKSolver.Point forearm = new IKSolver.Point();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_4 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)il2cpp_codegen_object_new(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(L_4, NULL);
		__this->___forearm_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___forearm_15), (void*)L_4);
		// public IKSolver.Point hand = new IKSolver.Point();
		Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9* L_5 = (Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9*)il2cpp_codegen_object_new(Point_tE1331AFAADEE55148104B91744C9DB6766A5C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Point__ctor_m2E93DA15916D4919A9C6EE6E9983601B4C2B1AF6(L_5, NULL);
		__this->___hand_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hand_16), (void*)L_5);
		// public IKSolverVR.Arm arm = new IKSolverVR.Arm();
		Arm_tBB9696204237D5FD5D679036101C50155CF19A30* L_6 = (Arm_tBB9696204237D5FD5D679036101C50155CF19A30*)il2cpp_codegen_object_new(Arm_tBB9696204237D5FD5D679036101C50155CF19A30_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Arm__ctor_mFA6618D62F8F1B35E8715E2783D5AFA63109C25E(L_6, NULL);
		__this->___arm_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arm_18), (void*)L_6);
		// private Vector3[] positions = new Vector3[6];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___positions_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_19), (void*)L_7);
		// private Quaternion[] rotations = new Quaternion[6];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___rotations_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotations_20), (void*)L_8);
		IKSolver__ctor_m96C6D17591BF2A748D0E092FE36BF9B1A2878892(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateDelegate_Invoke_m28422F1281FEFE60D409F6D08FE984775E8658D2_inline (UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___to1;
		float L_2;
		L_2 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___to1;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___to1;
		float L_8 = ___maxDegreesDelta2;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 IKSolverFullBodyBiped_get_pullBodyOffset_mEED59ADEB0E0807409370A9CB4AE4A55B098FA65_inline (IKSolverFullBodyBiped_t339337E5EF45CCC8051B9A025FAEE0E4A4E1DA55* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 pullBodyOffset { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CpullBodyOffsetU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKConstraintBend_get_initiated_m2F062F92BA41ECBADA6BAEC061991BCA3CD684EC_inline (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = __this->___U3CinitiatedU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildConstraint_set_nominalDistance_m73CB497B7A44C9218A892DBDAA4C4D8A881A6631_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float nominalDistance { get; private set; }
		float L_0 = ___value0;
		__this->___U3CnominalDistanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildConstraint_set_isRigid_mFA046F0C6CFC2BC0C6BCB2D6D72B4E1B18FF2517_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isRigid { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisRigidU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChildConstraint_get_isRigid_m03375CC788F744BE4FA7F0FABF6B1FE7374A49A7_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) 
{
	{
		// public bool isRigid { get; private set; }
		bool L_0 = __this->___U3CisRigidU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ChildConstraint_get_nominalDistance_m1B2B89292A96A9BA2532662FCE9327C9A51E2D10_inline (ChildConstraint_t053A7D5D659DB383CFF2187C7F0D63E393CC245E* __this, const RuntimeMethod* method) 
{
	{
		// public float nominalDistance { get; private set; }
		float L_0 = __this->___U3CnominalDistanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Logger_Invoke_mF348E68C9BDC4965E239D557DB7CD31742D797BB_inline (Logger_tC7A433B56305082BD52A69C362F663BDA1077283* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKConstraintBend_set_initiated_mC960BE5B19EAFC99129C859264C19316637A4D39_inline (IKConstraintBend_t6B9D65F2A498CF5004558E3D1AE8E157DA1F5E2B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CinitiatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKEffector_set_isEndEffector_m825305CBB9F84ED87E204EF63991BAFD48FC2468_inline (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isEndEffector { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisEndEffectorU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKEffector_get_isEndEffector_m8CB821207AA2E57EE5A64ECBB7D967D783EE107C_inline (IKEffector_tF7D81C4383B93DA1187FC6135F47C0F98DA7DBD6* __this, const RuntimeMethod* method) 
{
	{
		// public bool isEndEffector { get; private set; }
		bool L_0 = __this->___U3CisEndEffectorU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IKSolver_set_initiated_m5E37F888F705B3E5238C6EA54A70E5022928D47B_inline (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CinitiatedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IKSolver_get_initiated_mFBD72C7F2138DC3D3EA052DF810082856A170DC7_inline (IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623* __this, const RuntimeMethod* method) 
{
	{
		// public bool initiated { get; private set; }
		bool L_0 = __this->___U3CinitiatedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IterationDelegate_Invoke_m73257E1D85B18972803F3D8E52B018145D26D50A_inline (IterationDelegate_t50F2C0DBA5189F9263AE46A2205096E8AF33A633* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___i0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
