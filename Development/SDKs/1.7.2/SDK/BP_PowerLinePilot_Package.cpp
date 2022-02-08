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
	 * 		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideFirstPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PowerLinePilot_C::OverrideFirstPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideFirstPower");
		
		ABP_PowerLinePilot_C_OverrideFirstPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideNoPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PowerLinePilot_C::OverrideNoPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideNoPower");
		
		ABP_PowerLinePilot_C_OverrideNoPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.ExecuteUbergraph_BP_PowerLinePilot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerLinePilot_C::ExecuteUbergraph_BP_PowerLinePilot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.ExecuteUbergraph_BP_PowerLinePilot");
		
		ABP_PowerLinePilot_C_ExecuteUbergraph_BP_PowerLinePilot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_PowerLinePilot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PowerLinePilot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerLinePilot.BP_PowerLinePilot_C");
		return ptr;
	}

}


