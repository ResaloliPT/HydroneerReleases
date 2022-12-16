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
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.TogglePendingRequestVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RequestBubble_C::TogglePendingRequestVisibility(
bool Visible
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.TogglePendingRequestVisibility");
		
		struct
		{
			bool                                               Visible;
		} params;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.ToggleContentsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RequestBubble_C::ToggleContentsVisibility(
bool Visible
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.ToggleContentsVisibility");
		
		struct
		{
			bool                                               Visible;
		} params;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.SetRequestContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_NPC_Request                             Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_RequestBubble_C::SetRequestContents(
const struct FST_NPC_Request& Request
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.SetRequestContents");
		
		struct
		{
			struct FST_NPC_Request                             Request;
		} params;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.Finished_ED982C7B431213DDA9CC8E968283411F
	 * 		Flags  -> ()
	 */
	void UUI_RequestBubble_C::Finished_ED982C7B431213DDA9CC8E968283411F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.Finished_ED982C7B431213DDA9CC8E968283411F");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.Play ScaleIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RequestBubble_C::Play_ScaleIn(
EUMGSequencePlayMode PlayMode
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.Play ScaleIn");
		
		struct
		{
			EUMGSequencePlayMode                               PlayMode;
		} params;
		params.PlayMode = PlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.ExecuteUbergraph_UI_RequestBubble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RequestBubble_C::ExecuteUbergraph_UI_RequestBubble(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.ExecuteUbergraph_UI_RequestBubble");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RequestBubble.UI_RequestBubble_C.OnHidden__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RequestBubble_C::OnHidden__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RequestBubble.UI_RequestBubble_C.OnHidden__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RequestBubble_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RequestBubble_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RequestBubble.UI_RequestBubble_C");
		return ptr;
	}


}


