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
	 * 		Name   -> PredefinedFunction UNavArea_MinorObstacle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_MinorObstacle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NavArea_MinorObstacle.NavArea_MinorObstacle_C");
		return ptr;
	}


}


