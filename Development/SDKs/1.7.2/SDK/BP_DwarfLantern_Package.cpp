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
	 * 		Name   -> Function BP_DwarfLantern.BP_DwarfLantern_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_DwarfLantern_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DwarfLantern.BP_DwarfLantern_C.Timeline_0__FinishedFunc");
		
		ABP_DwarfLantern_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DwarfLantern.BP_DwarfLantern_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_DwarfLantern_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DwarfLantern.BP_DwarfLantern_C.Timeline_0__UpdateFunc");
		
		ABP_DwarfLantern_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DwarfLantern.BP_DwarfLantern_C.OverrideLightsOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DwarfLantern_C::OverrideLightsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DwarfLantern.BP_DwarfLantern_C.OverrideLightsOn");
		
		ABP_DwarfLantern_C_OverrideLightsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DwarfLantern.BP_DwarfLantern_C.OverrideLightsOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DwarfLantern_C::OverrideLightsOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DwarfLantern.BP_DwarfLantern_C.OverrideLightsOff");
		
		ABP_DwarfLantern_C_OverrideLightsOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DwarfLantern.BP_DwarfLantern_C.ExecuteUbergraph_BP_DwarfLantern
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DwarfLantern_C::ExecuteUbergraph_BP_DwarfLantern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DwarfLantern.BP_DwarfLantern_C.ExecuteUbergraph_BP_DwarfLantern");
		
		ABP_DwarfLantern_C_ExecuteUbergraph_BP_DwarfLantern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DwarfLantern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DwarfLantern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DwarfLantern.BP_DwarfLantern_C");
		return ptr;
	}

}


