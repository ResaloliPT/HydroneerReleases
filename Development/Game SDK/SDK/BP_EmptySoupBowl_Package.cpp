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
	 * 		Name   -> PredefinedFunction ABP_EmptySoupBowl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EmptySoupBowl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmptySoupBowl.BP_EmptySoupBowl_C");
		return ptr;
	}


}


