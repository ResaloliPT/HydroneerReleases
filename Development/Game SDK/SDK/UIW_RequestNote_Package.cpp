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
	 * 		Name   -> Function UIW_RequestNote.UIW_RequestNote_C.UpdateRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_NPC_Request                             Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        NPC_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIW_RequestNote_C::UpdateRequest(
const struct FST_NPC_Request& Request
, 
const class FName& NPC_Name
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIW_RequestNote.UIW_RequestNote_C.UpdateRequest");
		
		struct
		{
			struct FST_NPC_Request                             Request;
			class FName                                        NPC_Name;
		} params;
		params.Request = Request;
		params.NPC_Name = NPC_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIW_RequestNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIW_RequestNote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIW_RequestNote.UIW_RequestNote_C");
		return ptr;
	}


}


