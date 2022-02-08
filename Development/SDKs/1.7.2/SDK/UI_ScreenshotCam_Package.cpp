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
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.ToggleVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::ToggleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.ToggleVisibility");
		
		UUI_ScreenshotCam_C_ToggleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ShiftTimeLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__ShiftTimeLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ShiftTimeLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__ShiftTimeLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ShiftTimeRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__ShiftTimeRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__ShiftTimeRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__ShiftTimeRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FilterBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__FilterBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FilterBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__FilterBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FilterNext_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__FilterNext_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FilterNext_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__FilterNext_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewFilterText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CameraFilters_E_CameraFilters                    New_Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenshotCam_C::NewFilterText(E_CameraFilters_E_CameraFilters New_Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewFilterText");
		
		UUI_ScreenshotCam_C_NewFilterText_Params params {};
		params.New_Filter = New_Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__SpeedMore_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__SpeedMore_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__SpeedMore_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__SpeedMore_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__SpeedLess_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__SpeedLess_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__SpeedLess_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__SpeedLess_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FOVLess_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__FOVLess_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FOVLess_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__FOVLess_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FOVMore_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__FOVMore_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__FOVMore_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__FOVMore_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewSpeedText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenshotCam_C::NewSpeedText(int32_t Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewSpeedText");
		
		UUI_ScreenshotCam_C_NewSpeedText_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewFOVAmount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FOV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenshotCam_C::NewFOVAmount(int32_t FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.NewFOVAmount");
		
		UUI_ScreenshotCam_C_NewFOVAmount_Params params {};
		params.FOV = FOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.Construct");
		
		UUI_ScreenshotCam_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_ScreenshotCam_C::BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ScreenshotCam_C_BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function UI_ScreenshotCam.UI_ScreenshotCam_C.ExecuteUbergraph_UI_ScreenshotCam
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenshotCam_C::ExecuteUbergraph_UI_ScreenshotCam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenshotCam.UI_ScreenshotCam_C.ExecuteUbergraph_UI_ScreenshotCam");
		
		UUI_ScreenshotCam_C_ExecuteUbergraph_UI_ScreenshotCam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_ScreenshotCam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScreenshotCam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScreenshotCam.UI_ScreenshotCam_C");
		return ptr;
	}

}


