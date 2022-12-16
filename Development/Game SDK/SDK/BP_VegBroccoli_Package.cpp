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
	 * 		Name   -> PredefinedFunction ABP_VegBroccoli_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VegBroccoli_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VegBroccoli.BP_VegBroccoli_C");
		return ptr;
	}


}


