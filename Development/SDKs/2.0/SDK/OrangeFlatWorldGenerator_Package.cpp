﻿/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> PredefindFunction UOrangeFlatWorldGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrangeFlatWorldGenerator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass OrangeFlatWorldGenerator.OrangeFlatWorldGenerator_C");
		return ptr;
	}

}

