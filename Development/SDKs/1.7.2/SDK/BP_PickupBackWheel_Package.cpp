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
	 * 		Name   -> PredefindFunction UBP_PickupBackWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PickupBackWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupBackWheel.BP_PickupBackWheel_C");
		return ptr;
	}

}


