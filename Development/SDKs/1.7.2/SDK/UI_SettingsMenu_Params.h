#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.FindAndSetControlKeyAndImage
	 */
	struct UUI_SettingsMenu_C_FindAndSetControlKeyAndImage_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateControllerKeybindings
	 */
	struct UUI_SettingsMenu_C_InitiateControllerKeybindings_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.SetControlKeyImage
	 */
	struct UUI_SettingsMenu_C_SetControlKeyImage_Params
	{
	public:
		class UInputKeySelector*                                   InputKey;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeFPS
	 */
	struct UUI_SettingsMenu_C_ChangeFPS_Params
	{
	public:
		float                                                      NewLimit;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.RestoreKeybindingsToDefault
	 */
	struct UUI_SettingsMenu_C_RestoreKeybindingsToDefault_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenMode
	 */
	struct UUI_SettingsMenu_C_SetFullscreenMode_Params
	{
	public:
		Engine_EWindowMode                                         NewType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.ChangeKey
	 */
	struct UUI_SettingsMenu_C_ChangeKey_Params
	{
	public:
		struct FKey                                                KeyMapping_Key;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Controller_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.InitiateKeybindingTexts
	 */
	struct UUI_SettingsMenu_C_InitiateKeybindingTexts_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.SetFullscreenModes
	 */
	struct UUI_SettingsMenu_C_SetFullscreenModes_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.SetVisualQualities
	 */
	struct UUI_SettingsMenu_C_SetVisualQualities_Params
	{
	public:
		int32_t                                                    NewQuality;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.ApplyInitialSettings
	 */
	struct UUI_SettingsMenu_C_ApplyInitialSettings_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		SlateCore_ESelectInfo                                      SelectionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxLow_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxMedium_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxHigh_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxUltra_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyCrouch_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyJump_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyPickup_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyRotate_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyRotate2_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyVehicle_K2Node_ComponentBoundEvent_34_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxWindFullscreen_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxWindowed_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxFullscreen_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyRotate3_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.InitUserDataSettings
	 */
	struct UUI_SettingsMenu_C_InitUserDataSettings_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxMotionBlur_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyW_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyA_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyS_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyD_K2Node_ComponentBoundEvent_57_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxMouseInvert_K2Node_ComponentBoundEvent_58_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxVsync_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__RestoreKeyBindings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__MouseSenseXSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__MouseSenseYSlider_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__PlayerFOV_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__VehicleFOV_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.UpdateSlider
	 */
	struct UUI_SettingsMenu_C_UpdateSlider_Params
	{
	public:
		class FString                                              Slider;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__ApplySettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.Construct
	 */
	struct UUI_SettingsMenu_C_Construct_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__SettingsOptions_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__SettingsKeys_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__FPS30CB_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__FPS60CB_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__FPSUncappedCB_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__SoundEffectSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__MusicSlider_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__AutosaveToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxSaveDirtChunks_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxHeadbob_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxPipeWarnings_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeySprint_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__KeyBridgepour_K2Node_ComponentBoundEvent_14_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CheckboxSaveRawResources_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKCrouch_K2Node_ComponentBoundEvent_36_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKInteract_K2Node_ComponentBoundEvent_37_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKJump_K2Node_ComponentBoundEvent_38_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKRotX_K2Node_ComponentBoundEvent_39_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKRotY_K2Node_ComponentBoundEvent_40_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKRotZ_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKSprint_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKVehicle_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
	 */
	struct UUI_SettingsMenu_C_BndEvt__CKWiki_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SettingsMenu.UI_SettingsMenu_C.ExecuteUbergraph_UI_SettingsMenu
	 */
	struct UUI_SettingsMenu_C_ExecuteUbergraph_UI_SettingsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
