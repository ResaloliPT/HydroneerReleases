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
	 * 		Name   -> PredefinedFunction USaveGame_UserData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveGame_UserData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SaveGame_UserData.SaveGame_UserData_C");
		return ptr;
	}


}


