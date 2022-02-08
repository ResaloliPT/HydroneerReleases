﻿/**
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
	 * 		Name   -> Function BP_StoreConveyerVertical.BP_StoreConveyerVertical_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StoreConveyerVertical_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StoreConveyerVertical.BP_StoreConveyerVertical_C.UserConstructionScript");
		
		ABP_StoreConveyerVertical_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_StoreConveyerVertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StoreConveyerVertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StoreConveyerVertical.BP_StoreConveyerVertical_C");
		return ptr;
	}

}


