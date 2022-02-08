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
	 * 		Name   -> PredefindFunction UBP_PickupFrontWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PickupFrontWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupFrontWheel.BP_PickupFrontWheel_C");
		return ptr;
	}

}


