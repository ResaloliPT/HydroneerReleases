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
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.UserConstructionScript");
		
		ABP_CloutiumBar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.StopHeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::StopHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.StopHeat");
		
		ABP_CloutiumBar_C_StopHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.IncreaseHeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::IncreaseHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.IncreaseHeat");
		
		ABP_CloutiumBar_C_IncreaseHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.DecreaseHeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::DecreaseHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.DecreaseHeat");
		
		ABP_CloutiumBar_C_DecreaseHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.StartHeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::StartHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.StartHeat");
		
		ABP_CloutiumBar_C_StartHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.OverrideInWater
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CloutiumBar_C::OverrideInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.OverrideInWater");
		
		ABP_CloutiumBar_C_OverrideInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_CloutiumBar.BP_CloutiumBar_C.ExecuteUbergraph_BP_CloutiumBar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CloutiumBar_C::ExecuteUbergraph_BP_CloutiumBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CloutiumBar.BP_CloutiumBar_C.ExecuteUbergraph_BP_CloutiumBar");
		
		ABP_CloutiumBar_C_ExecuteUbergraph_BP_CloutiumBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_CloutiumBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CloutiumBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CloutiumBar.BP_CloutiumBar_C");
		return ptr;
	}

}


