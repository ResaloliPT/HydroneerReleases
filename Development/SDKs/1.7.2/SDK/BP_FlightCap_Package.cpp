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
	 * 		Name   -> Function BP_FlightCap.BP_FlightCap_C.OverrideHatOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlightCap_C::OverrideHatOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.OverrideHatOn");
		
		ABP_FlightCap_C_OverrideHatOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_FlightCap.BP_FlightCap_C.OverrideHatOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlightCap_C::OverrideHatOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.OverrideHatOff");
		
		ABP_FlightCap_C_OverrideHatOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_FlightCap.BP_FlightCap_C.ExecuteUbergraph_BP_FlightCap
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FlightCap_C::ExecuteUbergraph_BP_FlightCap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.ExecuteUbergraph_BP_FlightCap");
		
		ABP_FlightCap_C_ExecuteUbergraph_BP_FlightCap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_FlightCap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FlightCap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlightCap.BP_FlightCap_C");
		return ptr;
	}

}


