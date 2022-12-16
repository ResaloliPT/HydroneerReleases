/**
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
	 * 		Name   -> PredefinedFunction UH_TextMultiLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_TextMultiLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_TextMultiLine.H_TextMultiLine_C");
		return ptr;
	}


}


