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
	 * 		Name   -> PredefindFunction UH_TextSubTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_TextSubTitle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass H_TextSubTitle.H_TextSubTitle_C");
		return ptr;
	}

}

