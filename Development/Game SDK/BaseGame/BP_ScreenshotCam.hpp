#ifndef UE4SS_SDK_BP_ScreenshotCam_HPP
#define UE4SS_SDK_BP_ScreenshotCam_HPP

class ABP_ScreenshotCam_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UVoxelSimpleInvokerComponent* VoxelInvoker;                                 // 0x0288 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x0290 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0298 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02A0 (size: 0x8)
    class UUI_ScreenshotCam_C* UI;                                                    // 0x02A8 (size: 0x8)
    FTimerHandle ForwardMovementTimer;                                                // 0x02B0 (size: 0x8)
    FTimerHandle RightMovementTimer;                                                  // 0x02B8 (size: 0x8)
    FTimerHandle DownTimer;                                                           // 0x02C0 (size: 0x8)
    class ABP_GameController_C* PlayerController;                                     // 0x02C8 (size: 0x8)
    FKey E Key;                                                                       // 0x02D0 (size: 0x18)
    TEnumAsByte<E_CameraFilters::Type> CurrentFilter;                                 // 0x02E8 (size: 0x1)
    float SpeedModifier;                                                              // 0x02EC (size: 0x4)
    class ABP_Greenscreen_C* GreenScreen;                                             // 0x02F0 (size: 0x8)

    void InpActEvt_Crouch_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_0(FKey Key);
    void ToggleCinematicBars();
    void DownTime();
    void UpTime();
    void ChangeTime(float Amount);
    void ReceiveBeginPlay();
    void ChangeFilter(bool Next?);
    void ResetFilters();
    void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_2(float AxisValue);
    void ChangeFOV(float Amount);
    void ChangeSpeed(float Amount);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ToggleGreenscreen();
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void ExecuteUbergraph_BP_ScreenshotCam(int32 EntryPoint);
}; // Size: 0x2F8

#endif
