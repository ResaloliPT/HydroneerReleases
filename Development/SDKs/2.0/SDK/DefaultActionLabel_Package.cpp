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
	 * 		Name   -> PredefindFunction UDefaultActionLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultActionLabel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultActionLabel.DefaultActionLabel_C");
		return ptr;
	}

}

