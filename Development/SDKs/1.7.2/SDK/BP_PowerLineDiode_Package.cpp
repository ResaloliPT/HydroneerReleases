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
	 * 		Name   -> Function BP_PowerLineDiode.BP_PowerLineDiode_C.OverridePowerPassedIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PowerLineDiode_C::OverridePowerPassedIn(const class FString& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerLineDiode.BP_PowerLineDiode_C.OverridePowerPassedIn");
		
		ABP_PowerLineDiode_C_OverridePowerPassedIn_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_PowerLineDiode.BP_PowerLineDiode_C.ExecuteUbergraph_BP_PowerLineDiode
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerLineDiode_C::ExecuteUbergraph_BP_PowerLineDiode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerLineDiode.BP_PowerLineDiode_C.ExecuteUbergraph_BP_PowerLineDiode");
		
		ABP_PowerLineDiode_C_ExecuteUbergraph_BP_PowerLineDiode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_PowerLineDiode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PowerLineDiode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerLineDiode.BP_PowerLineDiode_C");
		return ptr;
	}

}


