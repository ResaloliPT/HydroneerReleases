/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_StorePaintOrange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StorePaintOrange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StorePaintOrange.BP_StorePaintOrange_C");
		return ptr;
	}

}


