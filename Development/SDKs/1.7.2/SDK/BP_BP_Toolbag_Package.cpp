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
	 * 		Name   -> PredefindFunction ABP_BP_Toolbag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BP_Toolbag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BP_Toolbag.BP_BP_Toolbag_C");
		return ptr;
	}

}


