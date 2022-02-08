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
	 * 		Name   -> Function BP_LightingParent.BP_LightingParent_C.OverrideLightsOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LightingParent_C::OverrideLightsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightingParent.BP_LightingParent_C.OverrideLightsOn");
		
		ABP_LightingParent_C_OverrideLightsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LightingParent.BP_LightingParent_C.OverrideLightsOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LightingParent_C::OverrideLightsOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightingParent.BP_LightingParent_C.OverrideLightsOff");
		
		ABP_LightingParent_C_OverrideLightsOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LightingParent.BP_LightingParent_C.ExecuteUbergraph_BP_LightingParent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LightingParent_C::ExecuteUbergraph_BP_LightingParent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightingParent.BP_LightingParent_C.ExecuteUbergraph_BP_LightingParent");
		
		ABP_LightingParent_C_ExecuteUbergraph_BP_LightingParent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LightingParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LightingParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightingParent.BP_LightingParent_C");
		return ptr;
	}

}


