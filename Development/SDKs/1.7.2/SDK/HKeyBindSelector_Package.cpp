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
	 * 		Name   -> PredefindFunction UHKeyBindSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHKeyBindSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HKeyBindSelector.HKeyBindSelector_C");
		return ptr;
	}

}


