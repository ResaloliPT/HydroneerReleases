#ifndef UE4SS_SDK_BP_GameCharacter_HPP
#define UE4SS_SDK_BP_GameCharacter_HPP

class ABP_GameCharacter_C : public AVoxelCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USceneComponent* CartSocket;                                                // 0x04C8 (size: 0x8)
    class USceneComponent* CartPivot;                                                 // 0x04D0 (size: 0x8)
    class USceneComponent* BuildSocket;                                               // 0x04D8 (size: 0x8)
    class USceneComponent* PlayerHand;                                                // 0x04E0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04E8 (size: 0x8)
    class USceneComponent* HeadSocket;                                                // 0x04F0 (size: 0x8)
    class USceneComponent* RelativeRotSocket;                                         // 0x04F8 (size: 0x8)
    class USceneComponent* SpringSocket;                                              // 0x0500 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0508 (size: 0x8)
    class UVoxelSimpleInvokerComponent* VoxelInvoker;                                 // 0x0510 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0518 (size: 0x8)
    float Timeline_0_NewTrack_0_5B7C34844FE3339F4853FABEAF5B603C;                     // 0x0520 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5B7C34844FE3339F4853FABEAF5B603C; // 0x0524 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0528 (size: 0x8)
    float ExplosionTimeLine_NewTrack_0_EC5F789A48CC562531DBFCB24F8D2C78;              // 0x0530 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ExplosionTimeLine__Direction_EC5F789A48CC562531DBFCB24F8D2C78; // 0x0534 (size: 0x1)
    class UTimelineComponent* ExplosionTimeLine;                                      // 0x0538 (size: 0x8)
    bool Free?;                                                                       // 0x0540 (size: 0x1)
    TArray<class ABP_Water_C*> WaterVolumesImIn;                                      // 0x0548 (size: 0x10)
    bool Headbob?;                                                                    // 0x0558 (size: 0x1)
    bool UsingCart?;                                                                  // 0x0559 (size: 0x1)
    float CartRotSpeed;                                                               // 0x055C (size: 0x4)
    FTimerHandle FlyingHatVertTimerHandle;                                            // 0x0560 (size: 0x8)
    float FlyingVertDirection;                                                        // 0x0568 (size: 0x4)
    bool InvertMouseY;                                                                // 0x056C (size: 0x1)
    bool UsingPallete?;                                                               // 0x056D (size: 0x1)
    class ABP_GameController_C* GameController;                                       // 0x0570 (size: 0x8)
    bool ToggleCrouch?;                                                               // 0x0578 (size: 0x1)
    bool ToggleSprint?;                                                               // 0x0579 (size: 0x1)
    bool SprintingWhileToggle?;                                                       // 0x057A (size: 0x1)
    class UMaterialInstanceDynamic* DecalMaterial;                                    // 0x0580 (size: 0x8)

    void HandleYawInput(float Val);
    void HandlePitchInput(float Val);
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
    void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_3(float AxisValue);
    void ReceiveBeginPlay();
    void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_2(float AxisValue);
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
    void BndEvt__BP_GameCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_GameCharacter(int32 EntryPoint);
}; // Size: 0x588

#endif
