#ifndef UE4SS_SDK_BP_GameCharacter_HPP
#define UE4SS_SDK_BP_GameCharacter_HPP

class ABP_GameCharacter_C : public AVoxelCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* CartSocket;
    class USceneComponent* CartPivot;
    class USceneComponent* BuildSocket;
    class USceneComponent* PlayerHand;
    class UDecalComponent* Decal;
    class USceneComponent* HeadSocket;
    class USceneComponent* RelativeRotSocket;
    class USceneComponent* SpringSocket;
    class USpringArmComponent* SpringArm;
    class UVoxelSimpleInvokerComponent* VoxelInvoker;
    class UCameraComponent* Camera;
    float Timeline_0_NewTrack_0_5B7C34844FE3339F4853FABEAF5B603C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5B7C34844FE3339F4853FABEAF5B603C;
    class UTimelineComponent* Timeline_0;
    float ExplosionTimeLine_NewTrack_0_EC5F789A48CC562531DBFCB24F8D2C78;
    TEnumAsByte<ETimelineDirection::Type> ExplosionTimeLine__Direction_EC5F789A48CC562531DBFCB24F8D2C78;
    class UTimelineComponent* ExplosionTimeLine;
    bool Free?;
    TArray<class ABP_Water_C*> WaterVolumesImIn;
    bool Headbob?;
    bool UsingCart?;
    float CartRotSpeed;
    FTimerHandle FlyingHatVertTimerHandle;
    float FlyingVertDirection;
    bool InvertMouseY;
    bool UsingPallete?;
    class ABP_GameController_C* GameController;
    bool ToggleCrouch?;
    bool ToggleSprint?;
    bool SprintingWhileToggle?;
    class UMaterialInstanceDynamic* DecalMaterial;

    void UpdateLocationIndicatorDecalColor();
    void UnattachItems();
    void Owchie();
    void CameraShake(TEnumAsByte<E_CameraShakes::Type> Selection);
    void ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue);
    void PlaySoundJump();
    void FootstepWood();
    void FootstepDirt();
    void FootstepWater();
    void ExplosionTimeLine__FinishedFunc();
    void ExplosionTimeLine__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Sprint_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Sprint_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_3(float AxisValue);
    void ReceiveBeginPlay();
    void ExplosionVignette();
    void NukeVignette();
    void FlyingHatVertTimer();
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceivePossessed(class AController* NewController);
    void FOVChanged(float NewValue);
    void InvertMouseYChanged(bool NewValue);
    void HeadbobChanged(bool NewValue);
    void FlashCollision();
    void Destroy(class AActor* DestroyedActor);
    void ToggleSprintChange(float NewValue);
    void ToggleCrouchChange(float NewValue);
    void ExecuteUbergraph_BP_GameCharacter(int32 EntryPoint);
};

#endif
