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
	 * 		Name   -> PredefinedFunction UH_Midground400x40_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Midground400x40_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_Midground400x40.H_Midground400x40_C");
		return ptr;
	}


}


