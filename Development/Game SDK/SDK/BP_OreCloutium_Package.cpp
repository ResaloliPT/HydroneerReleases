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
	 * 		Name   -> PredefinedFunction ABP_OreCloutium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OreCloutium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OreCloutium.BP_OreCloutium_C");
		return ptr;
	}


}


