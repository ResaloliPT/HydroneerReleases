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
	 * 		Name   -> PredefindFunction ULuminRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminRuntimeSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LuminRuntimeSettings.LuminRuntimeSettings");
		return ptr;
	}

}


