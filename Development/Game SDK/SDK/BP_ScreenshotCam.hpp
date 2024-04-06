#ifndef UE4SS_SDK_BP_ScreenshotCam_HPP
#define UE4SS_SDK_BP_ScreenshotCam_HPP

class ABP_ScreenshotCam_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVoxelSimpleInvokerComponent* VoxelInvoker;
    class UFloatingPawnMovement* FloatingPawnMovement;
    class UCameraComponent* Camera;
    class USphereComponent* Sphere;
    class UUI_ScreenshotCam_C* UI;
    FTimerHandle ForwardMovementTimer;
    FTimerHandle RightMovementTimer;
    FTimerHandle DownTimer;
    class ABP_GameController_C* PlayerController;
    FKey E Key;
    TEnumAsByte<E_CameraFilters::Type> CurrentFilter;
    float SpeedModifier;
    class ABP_Greenscreen_C* GreenScreen;

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
};

#endif
