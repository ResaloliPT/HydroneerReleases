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
	 * 		Name   -> PredefinedFunction UH_Midground300x70_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Midground300x70_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_Midground300x70.H_Midground300x70_C");
		return ptr;
	}


}


