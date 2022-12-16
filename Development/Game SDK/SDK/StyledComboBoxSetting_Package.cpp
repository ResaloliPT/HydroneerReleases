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
	 * 		Name   -> PredefinedFunction UStyledComboBoxSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledComboBoxSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledComboBoxSetting.StyledComboBoxSetting_C");
		return ptr;
	}


}


