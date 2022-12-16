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
	 * 		Name   -> PredefinedFunction ABP_SeedBeetroot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SeedBeetroot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SeedBeetroot.BP_SeedBeetroot_C");
		return ptr;
	}


}


