/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.SPIN__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GrindingWheel_C::SPIN__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.SPIN__FinishedFunc");
		
		ABP_GrindingWheel_C_SPIN__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.SPIN__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GrindingWheel_C::SPIN__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.SPIN__UpdateFunc");
		
		ABP_GrindingWheel_C_SPIN__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.OverrideMouseActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrindingWheel_C::OverrideMouseActivated(class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.OverrideMouseActivated");
		
		ABP_GrindingWheel_C_OverrideMouseActivated_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.SpinWheel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GrindingWheel_C::SpinWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.SpinWheel");
		
		ABP_GrindingWheel_C_SpinWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.ExecuteUbergraph_BP_GrindingWheel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrindingWheel_C::ExecuteUbergraph_BP_GrindingWheel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.ExecuteUbergraph_BP_GrindingWheel");
		
		ABP_GrindingWheel_C_ExecuteUbergraph_BP_GrindingWheel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_GrindingWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrindingWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrindingWheel.BP_GrindingWheel_C");
		return ptr;
	}

}


