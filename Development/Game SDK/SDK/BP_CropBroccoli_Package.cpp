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
	 * 		Name   -> PredefinedFunction ABP_CropBroccoli_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CropBroccoli_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CropBroccoli.BP_CropBroccoli_C");
		return ptr;
	}


}

