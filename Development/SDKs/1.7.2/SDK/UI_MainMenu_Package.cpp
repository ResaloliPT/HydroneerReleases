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
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ClosePanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MainMenu_C::ClosePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ClosePanel");
		
		UUI_MainMenu_C_ClosePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OpenPanels
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SettingsMenu_C*                          SettingsMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                OpenPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::OpenPanels(class UUI_SettingsMenu_C* SettingsMenu, class UPanelWidget* OpenPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OpenPanels");
		
		UUI_MainMenu_C_OpenPanels_Params params {};
		params.SettingsMenu = SettingsMenu;
		params.OpenPanel = OpenPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_B8266A2A45F6E2977726F3BC2E6B5F34
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCreateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MainMenu_C::OnSteamInitFailure_B8266A2A45F6E2977726F3BC2E6B5F34(const struct FCreateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_B8266A2A45F6E2977726F3BC2E6B5F34");
		
		UUI_MainMenu_C_OnSteamInitFailure_B8266A2A45F6E2977726F3BC2E6B5F34_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnFailure_B8266A2A45F6E2977726F3BC2E6B5F34
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCreateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MainMenu_C::OnFailure_B8266A2A45F6E2977726F3BC2E6B5F34(const struct FCreateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_B8266A2A45F6E2977726F3BC2E6B5F34");
		
		UUI_MainMenu_C_OnFailure_B8266A2A45F6E2977726F3BC2E6B5F34_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSuccess_B8266A2A45F6E2977726F3BC2E6B5F34
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCreateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MainMenu_C::OnSuccess_B8266A2A45F6E2977726F3BC2E6B5F34(const struct FCreateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSuccess_B8266A2A45F6E2977726F3BC2E6B5F34");
		
		UUI_MainMenu_C_OnSuccess_B8266A2A45F6E2977726F3BC2E6B5F34_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_E0AB36B4408D6C6D3AE664BA72490927
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnSteamInitFailure_E0AB36B4408D6C6D3AE664BA72490927(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_E0AB36B4408D6C6D3AE664BA72490927");
		
		UUI_MainMenu_C_OnSteamInitFailure_E0AB36B4408D6C6D3AE664BA72490927_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnFailure_E0AB36B4408D6C6D3AE664BA72490927
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnFailure_E0AB36B4408D6C6D3AE664BA72490927(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_E0AB36B4408D6C6D3AE664BA72490927");
		
		UUI_MainMenu_C_OnFailure_E0AB36B4408D6C6D3AE664BA72490927_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnUpdateComplete_E0AB36B4408D6C6D3AE664BA72490927
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnUpdateComplete_E0AB36B4408D6C6D3AE664BA72490927(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnUpdateComplete_E0AB36B4408D6C6D3AE664BA72490927");
		
		UUI_MainMenu_C_OnUpdateComplete_E0AB36B4408D6C6D3AE664BA72490927_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_BF81F6974DF55BF0A70315B175A09DA6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnSteamInitFailure_BF81F6974DF55BF0A70315B175A09DA6(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSteamInitFailure_BF81F6974DF55BF0A70315B175A09DA6");
		
		UUI_MainMenu_C_OnSteamInitFailure_BF81F6974DF55BF0A70315B175A09DA6_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnFailure_BF81F6974DF55BF0A70315B175A09DA6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnFailure_BF81F6974DF55BF0A70315B175A09DA6(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_BF81F6974DF55BF0A70315B175A09DA6");
		
		UUI_MainMenu_C_OnFailure_BF81F6974DF55BF0A70315B175A09DA6_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnUpdateComplete_BF81F6974DF55BF0A70315B175A09DA6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUpdateWorkshopItemResult                   result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::OnUpdateComplete_BF81F6974DF55BF0A70315B175A09DA6(const struct FUpdateWorkshopItemResult& result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnUpdateComplete_BF81F6974DF55BF0A70315B175A09DA6");
		
		UUI_MainMenu_C_OnUpdateComplete_BF81F6974DF55BF0A70315B175A09DA6_Params params {};
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitCancelButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__QuitCancelButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitCancelButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__QuitCancelButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitConfirmButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__QuitConfirmButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitConfirmButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__QuitConfirmButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__SaveSlot1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SaveSlot1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot2_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__SaveSlot2_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot2_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SaveSlot2_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot3_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__SaveSlot3_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot3_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SaveSlot3_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot4_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__SaveSlot4_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SaveSlot4_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SaveSlot4_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");
		
		UUI_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__WorkshopButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__WorkshopButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__WorkshopButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__WorkshopButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUploadButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ModUploadButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUploadButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ModUploadButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUPLOADMOD_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ModUPLOADMOD_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUPLOADMOD_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ModUPLOADMOD_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSteamUGCUpdateHandle                       updateHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::CustomEvent_1(const struct FSteamUGCUpdateHandle& updateHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CustomEvent_1");
		
		UUI_MainMenu_C_CustomEvent_1_Params params {};
		params.updateHandle = updateHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.PopulateModBoxes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MainMenu_C::PopulateModBoxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.PopulateModBoxes");
		
		UUI_MainMenu_C_PopulateModBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.CheckWorkshop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MainMenu_C::CheckWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CheckWorkshop");
		
		UUI_MainMenu_C_CheckWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUpdateButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ModUpdateButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModUpdateButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ModUpdateButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSteamUGCUpdateHandle                       updateHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MainMenu_C::CustomEvent(const struct FSteamUGCUpdateHandle& updateHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CustomEvent");
		
		UUI_MainMenu_C_CustomEvent_Params params {};
		params.updateHandle = updateHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.CheckForModUpdates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MainMenu_C::CheckForModUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CheckForModUpdates");
		
		UUI_MainMenu_C_CheckForModUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.EnableAllSaveSlotButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MainMenu_C::EnableAllSaveSlotButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.EnableAllSaveSlotButtons");
		
		UUI_MainMenu_C_EnableAllSaveSlotButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud5_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__Cloud5_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud5_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__Cloud5_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud6_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__Cloud6_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud6_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__Cloud6_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud7_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__Cloud7_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud7_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__Cloud7_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud8_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__Cloud8_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__Cloud8_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__Cloud8_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreativeButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__CreativeButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreativeButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CreativeButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreativeResetButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__CreativeResetButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreativeResetButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CreativeResetButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CancelResetButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__CancelResetButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CancelResetButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CancelResetButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ConfirmResetCreativeButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MainMenu_C::BndEvt__ConfirmResetCreativeButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ConfirmResetCreativeButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ConfirmResetCreativeButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");
		
		UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C");
		return ptr;
	}

}


