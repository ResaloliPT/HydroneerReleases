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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ClearNode
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::ClearNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ClearNode");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ClearPose
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::ClearPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ClearPose");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.SetCharacterVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_WaitAtNode_C::SetCharacterVelocity(
bool Start
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.SetCharacterVelocity");
		
		struct
		{
			bool                                               Start;
		} params;
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.EndTask
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.EndTask");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.CanFindNewNode?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_WaitAtNode_C::CanFindNewNode(
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.CanFindNewNode?");
		
		struct
		{
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitAtNode_C::ReceiveTickAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
, 
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveTickAI");
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitAtNode_C::ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveExecuteAI");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.TimerWait
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::TimerWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.TimerWait");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.WaitAtNode
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::WaitAtNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.WaitAtNode");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.InitAnimNode
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::InitAnimNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.InitAnimNode");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.AbortMove
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::AbortMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.AbortMove");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitAtNode_C::ReceiveAbortAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ReceiveAbortAI");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.StopWait
	 * 		Flags  -> ()
	 */
	void UBTT_WaitAtNode_C::StopWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.StopWait");
		
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
	 * 		Name   -> Function BTT_WaitAtNode.BTT_WaitAtNode_C.ExecuteUbergraph_BTT_WaitAtNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_WaitAtNode_C::ExecuteUbergraph_BTT_WaitAtNode(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_WaitAtNode.BTT_WaitAtNode_C.ExecuteUbergraph_BTT_WaitAtNode");
		
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
	 * 		Name   -> PredefinedFunction UBTT_WaitAtNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_WaitAtNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_WaitAtNode.BTT_WaitAtNode_C");
		return ptr;
	}


}


