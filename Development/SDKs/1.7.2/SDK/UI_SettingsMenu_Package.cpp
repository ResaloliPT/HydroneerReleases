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
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.FindAndSetControlKeyAndImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::FindAndSetControlKeyAndImage(const class FName& InName, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.FindAndSetControlKeyAndImage");
		
		UUI_SettingsMenu_C_FindAndSetControlKeyAndImage_Params params {};
		params.InName = InName;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateControllerKeybindings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::InitiateControllerKeybindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateControllerKeybindings");
		
		UUI_SettingsMenu_C_InitiateControllerKeybindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.SetControlKeyImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputKeySelector*                           InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::SetControlKeyImage(class UInputKeySelector* InputKey, class UTexture* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.SetControlKeyImage");
		
		UUI_SettingsMenu_C_SetControlKeyImage_Params params {};
		params.InputKey = InputKey;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeFPS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::ChangeFPS(float NewLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeFPS");
		
		UUI_SettingsMenu_C_ChangeFPS_Params params {};
		params.NewLimit = NewLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.RestoreKeybindingsToDefault
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::RestoreKeybindingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.RestoreKeybindingsToDefault");
		
		UUI_SettingsMenu_C_RestoreKeybindingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Engine_EWindowMode                                 NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::SetFullscreenMode(Engine_EWindowMode NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenMode");
		
		UUI_SettingsMenu_C_SetFullscreenMode_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeKey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        KeyMapping_Key                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Controller_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::ChangeKey(const struct FKey& KeyMapping_Key, const class FName& KeyName, bool Controller_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeKey");
		
		UUI_SettingsMenu_C_ChangeKey_Params params {};
		params.KeyMapping_Key = KeyMapping_Key;
		params.KeyName = KeyName;
		params.Controller_ = Controller_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateKeybindingTexts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::InitiateKeybindingTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateKeybindingTexts");
		
		UUI_SettingsMenu_C_InitiateKeybindingTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenModes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::SetFullscreenModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenModes");
		
		UUI_SettingsMenu_C_SetFullscreenModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.SetVisualQualities
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewQuality                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::SetVisualQualities(int32_t NewQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.SetVisualQualities");
		
		UUI_SettingsMenu_C_SetVisualQualities_Params params {};
		params.NewQuality = NewQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.ApplyInitialSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::ApplyInitialSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.ApplyInitialSettings");
		
		UUI_SettingsMenu_C_ApplyInitialSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		SlateCore_ESelectInfo                              SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, SlateCore_ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.InitUserDataSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::InitUserDataSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.InitUserDataSettings");
		
		UUI_SettingsMenu_C_InitUserDataSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.UpdateSlider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::UpdateSlider(const class FString& Slider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.UpdateSlider");
		
		UUI_SettingsMenu_C_UpdateSlider_Params params {};
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.Construct");
		
		UUI_SettingsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SettingsMenu_C::BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsMenu_C::BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature");
		
		UUI_SettingsMenu_C_BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_SettingsMenu.UI_SettingsMenu_C.ExecuteUbergraph_UI_SettingsMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SettingsMenu_C::ExecuteUbergraph_UI_SettingsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsMenu.UI_SettingsMenu_C.ExecuteUbergraph_UI_SettingsMenu");
		
		UUI_SettingsMenu_C_ExecuteUbergraph_UI_SettingsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_SettingsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SettingsMenu.UI_SettingsMenu_C");
		return ptr;
	}

}


