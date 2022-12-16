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
	 * 		Name   -> PredefinedFunction UHTextBlockDELETE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHTextBlockDELETE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HTextBlockDELETE.HTextBlockDELETE_C");
		return ptr;
	}


}


