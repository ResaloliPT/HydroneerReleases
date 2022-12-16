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
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.SetNodeValues
	 * 		Flags  -> ()
	 */
	void UBTT_FindNode_C::SetNodeValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.SetNodeValues");
		
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
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.CheckLastNodes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_AI_Node_C*                               Node                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindNode_C::CheckLastNodes(
class ABP_AI_Node_C* Node
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.CheckLastNodes");
		
		struct
		{
			class ABP_AI_Node_C*                               Node;
			bool                                               Result;
		} params;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.CheckNodeValidity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_AI_Node_C*                               Node                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindNode_C::CheckNodeValidity(
class ABP_AI_Node_C* Node
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.CheckNodeValidity");
		
		struct
		{
			class ABP_AI_Node_C*                               Node;
			bool                                               Result;
		} params;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.Default
	 * 		Flags  -> ()
	 */
	void UBTT_FindNode_C::Default()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.Default");
		
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
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.EvaluateNodes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_AI_Node_C*>                       Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_AI_Node_C*                               Node                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindNode_C::EvaluateNodes(
TArray<class ABP_AI_Node_C*>* Array
, 
TArray<float>* Modifier
, 
class ABP_AI_Node_C** Node
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.EvaluateNodes");
		
		struct
		{
			TArray<class ABP_AI_Node_C*>                       Array;
			TArray<float>                                      Modifier;
			class ABP_AI_Node_C*                               Node;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Modifier != nullptr)
			*Modifier = params.Modifier;
		if (Node != nullptr)
			*Node = params.Node;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.CommitNode
	 * 		Flags  -> ()
	 */
	void UBTT_FindNode_C::CommitNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.CommitNode");
		
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
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.FindCloseNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_AI_Node_C*                               Node                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindNode_C::FindCloseNode(
class ABP_AI_Node_C** Node
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.FindCloseNode");
		
		struct
		{
			class ABP_AI_Node_C*                               Node;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Node != nullptr)
			*Node = params.Node;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.FindNextNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_AI_Node_C*                               Node                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindNode_C::FindNextNode(
class ABP_AI_Node_C** Node
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.FindNextNode");
		
		struct
		{
			class ABP_AI_Node_C*                               Node;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Node != nullptr)
			*Node = params.Node;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindNode_C::ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.ReceiveExecuteAI");
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindNode.BTT_FindNode_C.ExecuteUbergraph_BTT_FindNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindNode_C::ExecuteUbergraph_BTT_FindNode(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindNode.BTT_FindNode_C.ExecuteUbergraph_BTT_FindNode");
		
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
	 * 		Name   -> PredefinedFunction UBTT_FindNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_FindNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_FindNode.BTT_FindNode_C");
		return ptr;
	}


}


