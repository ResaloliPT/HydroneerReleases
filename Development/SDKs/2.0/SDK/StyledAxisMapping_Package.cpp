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
	 * 		Name   -> PredefindFunction UStyledAxisMapping_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledAxisMapping_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledAxisMapping.StyledAxisMapping_C");
		return ptr;
	}

}


