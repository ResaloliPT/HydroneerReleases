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
	 * 		Name   -> PredefinedFunction ABP_CropBeetroot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CropBeetroot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CropBeetroot.BP_CropBeetroot_C");
		return ptr;
	}


}


