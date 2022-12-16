﻿/**
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
	 * 		Name   -> Function BP_Clouds.BP_Clouds_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Clouds_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Clouds.BP_Clouds_C.UserConstructionScript");
		
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
	 * 		Name   -> PredefinedFunction ABP_Clouds_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Clouds_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Clouds.BP_Clouds_C");
		return ptr;
	}


}


