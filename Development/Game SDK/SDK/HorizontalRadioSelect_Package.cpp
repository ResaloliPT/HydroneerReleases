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
	 * 		Name   -> PredefinedFunction UHorizontalRadioSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorizontalRadioSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HorizontalRadioSelect.HorizontalRadioSelect_C");
		return ptr;
	}


}


