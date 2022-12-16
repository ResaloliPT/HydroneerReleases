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
	 * 		Name   -> PredefinedFunction UPData_Customizable_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_Customizable_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PData_Customizable_Base.PData_Customizable_Base_C");
		return ptr;
	}


}


