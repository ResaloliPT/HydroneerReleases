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
	 * 		Name   -> PredefinedFunction ABP_CraftedDagger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CraftedDagger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CraftedDagger.BP_CraftedDagger_C");
		return ptr;
	}


}


