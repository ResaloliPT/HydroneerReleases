/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HydroGuy_C::AnimGraph(
struct FPoseLink* AnimGraph
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.AnimGraph");
		
		struct
		{
			struct FPoseLink                                   AnimGraph;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.LookAtActor
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::LookAtActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.LookAtActor");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.SetFaceTransforms
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::SetFaceTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.SetFaceTransforms");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.IK_FootTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SocketLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IK_Offset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::IK_FootTrace(
const struct FVector& SocketLocation
, 
float* IK_Offset
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.IK_FootTrace");
		
		struct
		{
			struct FVector                                     SocketLocation;
			float                                              IK_Offset;
		} params;
		params.SocketLocation = SocketLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IK_Offset != nullptr)
			*IK_Offset = params.IK_Offset;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK_Lerp
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::FootIK_Lerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK_Lerp");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::FootIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.FootIK");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.ClearPose
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::ClearPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.ClearPose");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.UpdatePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               NewPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PoseMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PoseBlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::UpdatePose(
class UAnimSequence* NewPose
, 
int32_t PoseMode
, 
float PoseBlendTime
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.UpdatePose");
		
		struct
		{
			class UAnimSequence*                               NewPose;
			int32_t                                            PoseMode;
			float                                              PoseBlendTime;
		} params;
		params.NewPose = NewPose;
		params.PoseMode = PoseMode;
		params.PoseBlendTime = PoseBlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.MovementCalculations
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::MovementCalculations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.MovementCalculations");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FA3EBD9C434F2DF6E2DA0284F2577BD6
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FA3EBD9C434F2DF6E2DA0284F2577BD6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FA3EBD9C434F2DF6E2DA0284F2577BD6");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_908D17CA41C5E2CDE9053F828D4995CC
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_908D17CA41C5E2CDE9053F828D4995CC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_908D17CA41C5E2CDE9053F828D4995CC");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B5905587412CA095EACFD1B385FFBD80
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B5905587412CA095EACFD1B385FFBD80()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B5905587412CA095EACFD1B385FFBD80");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_38B281C74CBE0B9F98E84BB65248A3F7
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_38B281C74CBE0B9F98E84BB65248A3F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_38B281C74CBE0B9F98E84BB65248A3F7");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FDFCB01344E576A249CF788C6729103E
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FDFCB01344E576A249CF788C6729103E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_FDFCB01344E576A249CF788C6729103E");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_54ABC4844CB51898CDF2A08123653038
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_54ABC4844CB51898CDF2A08123653038()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_54ABC4844CB51898CDF2A08123653038");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B54CC81E4F08FE1766A4B19409CF420A
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B54CC81E4F08FE1766A4B19409CF420A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_B54CC81E4F08FE1766A4B19409CF420A");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_1EA18FED466BD2ACC06516937FCD6DB1
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_1EA18FED466BD2ACC06516937FCD6DB1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_1EA18FED466BD2ACC06516937FCD6DB1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_0DEAC6A44627464EEFCB5BB321EEE958
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_0DEAC6A44627464EEFCB5BB321EEE958()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_0DEAC6A44627464EEFCB5BB321EEE958");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_9E39E2314CB252A8BEDFC699DDAD27B8");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_ModifyBone_959A8E534F300656CF97369FF750EE59");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_BlendListByBool_687058714CB553120B4AF4A9DBA00747");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_F605B9FD44212BDD7A260D8C7B8A04AA");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_57264BAB465DBE44CE1C4EA9B633BD4F");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_0FB21F1A4E7A1CE7DE9B7186D790DE2A");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_EBBD74FA402B5D10176AB182755EB959");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A5D1182549B0ED7126BC22A29C0480C4
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A5D1182549B0ED7126BC22A29C0480C4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A5D1182549B0ED7126BC22A29C0480C4");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_ACF9651147ACE3D8C18B0F83EBE9555C
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_ACF9651147ACE3D8C18B0F83EBE9555C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_ACF9651147ACE3D8C18B0F83EBE9555C");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_44EBCB594980E4D87FFA36B3DD4EC37C
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_44EBCB594980E4D87FFA36B3DD4EC37C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_44EBCB594980E4D87FFA36B3DD4EC37C");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_DAC7E0FA479183308AF8478B9EC6CC6A
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_DAC7E0FA479183308AF8478B9EC6CC6A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_DAC7E0FA479183308AF8478B9EC6CC6A");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_4C13F4C04DBAEBD38D91D9986549FEE3
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_4C13F4C04DBAEBD38D91D9986549FEE3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_4C13F4C04DBAEBD38D91D9986549FEE3");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_2424749142DC47D42B6BAFA811D9E62B
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_2424749142DC47D42B6BAFA811D9E62B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_2424749142DC47D42B6BAFA811D9E62B");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_5D9DB8B7439615877E175DBACEB4727E
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_5D9DB8B7439615877E175DBACEB4727E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_5D9DB8B7439615877E175DBACEB4727E");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_783CF7124E5FB5E0E76183A63A5E0A48
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_783CF7124E5FB5E0E76183A63A5E0A48()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_783CF7124E5FB5E0E76183A63A5E0A48");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D836EF4247CB8C4AAC907ABC1D72AAE8
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D836EF4247CB8C4AAC907ABC1D72AAE8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_D836EF4247CB8C4AAC907ABC1D72AAE8");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_AB5E2C3B4FF9BDA91CDEC3ADB7133CA0
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_AB5E2C3B4FF9BDA91CDEC3ADB7133CA0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_AB5E2C3B4FF9BDA91CDEC3ADB7133CA0");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_49A2E1184298A235CC1FCD82D1B8682F
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_49A2E1184298A235CC1FCD82D1B8682F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_49A2E1184298A235CC1FCD82D1B8682F");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A432708F4A64AC1FA26210B3C78FDA3D
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A432708F4A64AC1FA26210B3C78FDA3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HydroGuy_AnimGraphNode_TransitionResult_A432708F4A64AC1FA26210B3C78FDA3D");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::BlueprintUpdateAnimation(
float DeltaTimeX
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintUpdateAnimation");
		
		struct
		{
			float                                              DeltaTimeX;
		} params;
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UABP_HydroGuy_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.BlueprintInitializeAnimation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_HydroGuy.ABP_HydroGuy_C.ExecuteUbergraph_ABP_HydroGuy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HydroGuy_C::ExecuteUbergraph_ABP_HydroGuy(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HydroGuy.ABP_HydroGuy_C.ExecuteUbergraph_ABP_HydroGuy");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_HydroGuy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HydroGuy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HydroGuy.ABP_HydroGuy_C");
		return ptr;
	}


}


