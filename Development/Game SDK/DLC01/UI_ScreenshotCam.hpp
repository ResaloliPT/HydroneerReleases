#ifndef UE4SS_SDK_UI_ScreenshotCam_HPP
#define UE4SS_SDK_UI_ScreenshotCam_HPP

class UUI_ScreenshotCam_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UH_ButtonParent_C* B_CameraFilter_Next;                                     // 0x0268 (size: 0x8)
    class UH_ButtonParent_C* B_CameraFilter_Previous;                                 // 0x0270 (size: 0x8)
    class UH_ButtonParent_C* B_CameraFOV_Next;                                        // 0x0278 (size: 0x8)
    class UH_ButtonParent_C* B_CameraFOV_Previous;                                    // 0x0280 (size: 0x8)
    class UH_ButtonParent_C* B_CameraSpeed_Next;                                      // 0x0288 (size: 0x8)
    class UH_ButtonParent_C* B_CameraSpeed_Previous;                                  // 0x0290 (size: 0x8)
    class UH_ButtonParent_C* B_CameraTime_Next;                                       // 0x0298 (size: 0x8)
    class UH_ButtonParent_C* B_CameraTime_Previous;                                   // 0x02A0 (size: 0x8)
    class UHTextBlockDELETE_C* CamSpeedAmount;                                        // 0x02A8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02B0 (size: 0x8)
    class UDefaultActionLabel_C* DefaultActionLabel;                                  // 0x02B8 (size: 0x8)
    class UDefaultActionLabel_C* DefaultActionLabel_1;                                // 0x02C0 (size: 0x8)
    class UHTextBlockDELETE_C* FilterText;                                            // 0x02C8 (size: 0x8)
    class UHTextBlockDELETE_C* FOVAmount;                                             // 0x02D0 (size: 0x8)
    class UH_ButtonMetal2_C* GreenScreenButton;                                       // 0x02D8 (size: 0x8)
    class UHTextBlockDELETE_C* HideUIText;                                            // 0x02E0 (size: 0x8)
    class UHTextBlockDELETE_C* HoldEText;                                             // 0x02E8 (size: 0x8)
    class UHTextBlockDELETE_C* HTextBlock_C_165;                                      // 0x02F0 (size: 0x8)
    class UH_ButtonMetal2_C* ToggleCinematicBars;                                     // 0x02F8 (size: 0x8)

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
}; // Size: 0x300

#endif
