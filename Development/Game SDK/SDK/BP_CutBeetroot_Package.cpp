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
	 * 		Name   -> PredefinedFunction ABP_CutBeetroot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CutBeetroot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutBeetroot.BP_CutBeetroot_C");
		return ptr;
	}


}


