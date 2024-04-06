#ifndef UE4SS_SDK_UI_ScreenshotCam_HPP
#define UE4SS_SDK_UI_ScreenshotCam_HPP

class UUI_ScreenshotCam_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UH_ButtonParent_C* B_CameraFilter_Next;
    class UH_ButtonParent_C* B_CameraFilter_Previous;
    class UH_ButtonParent_C* B_CameraFOV_Next;
    class UH_ButtonParent_C* B_CameraFOV_Previous;
    class UH_ButtonParent_C* B_CameraSpeed_Next;
    class UH_ButtonParent_C* B_CameraSpeed_Previous;
    class UH_ButtonParent_C* B_CameraTime_Next;
    class UH_ButtonParent_C* B_CameraTime_Previous;
    class UHTextBlockDELETE_C* CamSpeedAmount;
    class UCanvasPanel* CanvasPanel_0;
    class UDefaultActionLabel_C* DefaultActionLabel;
    class UDefaultActionLabel_C* DefaultActionLabel_1;
    class UHTextBlockDELETE_C* FilterText;
    class UHTextBlockDELETE_C* FOVAmount;
    class UH_ButtonMetal2_C* GreenScreenButton;
    class UHTextBlockDELETE_C* HideUIText;
    class UHTextBlockDELETE_C* HoldEText;
    class UHTextBlockDELETE_C* HTextBlock_C_165;
    class UH_ButtonMetal2_C* ToggleCinematicBars;

    void BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void NewFilterText(TEnumAsByte<E_CameraFilters::Type> New Filter);
    void NewSpeedText(int32 Speed);
    void NewFOVAmount(int32 FOV);
    void ToggleVisibility();
    void BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraTime_Next_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraTime_Previous_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraFilter_Previous_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraFilter_Next_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraSpeed_Next_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraSpeed_Previous_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraFOV_Next_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_ScreenshotCam_B_CameraFOV_Previous_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ScreenshotCam(int32 EntryPoint);
};

#endif
