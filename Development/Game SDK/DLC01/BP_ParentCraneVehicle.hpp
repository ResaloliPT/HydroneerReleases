#ifndef UE4SS_SDK_BP_ParentCraneVehicle_HPP
#define UE4SS_SDK_BP_ParentCraneVehicle_HPP

class ABP_ParentCraneVehicle_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UStaticMeshComponent* SM_Plane5x5;                                          // 0x0788 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0790 (size: 0x8)
    class UStaticMeshComponent* Hook;                                                 // 0x0798 (size: 0x8)
    class USceneComponent* CableStart;                                                // 0x07A0 (size: 0x8)
    class UStaticMeshComponent* CraneBoomMesh;                                        // 0x07A8 (size: 0x8)
    class USceneComponent* CraneBoomPivot;                                            // 0x07B0 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x07B8 (size: 0x8)
    class UBoxComponent* DriveStorageBox;                                             // 0x07C0 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x07C8 (size: 0x8)
    class ULocalCableComponent* LocalCable;                                           // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* CraneTrolley;                                         // 0x07D8 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x07E0 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x07E8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x07F0 (size: 0x8)
    class USceneComponent* CraneOrigin;                                               // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* CraneBase;                                            // 0x0800 (size: 0x8)
    float Timeline_DeployCrane_YawAlpha_A1284AAB40725B5FE322A59F5894E805;             // 0x0808 (size: 0x4)
    float Timeline_DeployCrane_PositionAlpha_A1284AAB40725B5FE322A59F5894E805;        // 0x080C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_DeployCrane__Direction_A1284AAB40725B5FE322A59F5894E805; // 0x0810 (size: 0x1)
    class UTimelineComponent* Timeline_DeployCrane;                                   // 0x0818 (size: 0x8)
    bool bCraneMode;                                                                  // 0x0820 (size: 0x1)
    bool bCraneReady;                                                                 // 0x0821 (size: 0x1)
    uint8 CraneDeployment;                                                            // 0x0822 (size: 0x1)
    float MaxBoomOffset;                                                              // 0x0824 (size: 0x4)
    float BoomOffset;                                                                 // 0x0828 (size: 0x4)
    float CraneRotation;                                                              // 0x082C (size: 0x4)
    float TrolleyOffset;                                                              // 0x0830 (size: 0x4)
    float MinTrolleyOffset;                                                           // 0x0834 (size: 0x4)
    float MaxTrolleyOffset;                                                           // 0x0838 (size: 0x4)
    float HookOffset;                                                                 // 0x083C (size: 0x4)
    float MinHookOffset;                                                              // 0x0840 (size: 0x4)
    float MaxHookOffset;                                                              // 0x0844 (size: 0x4)
    float FinalHookOffset;                                                            // 0x0848 (size: 0x4)
    float CraneRotationInput;                                                         // 0x084C (size: 0x4)
    float CraneOffsetInput;                                                           // 0x0850 (size: 0x4)
    float ItemYaw;                                                                    // 0x0854 (size: 0x4)
    float LiftPointYawOffset;                                                         // 0x0858 (size: 0x4)
    float HookUpOffset;                                                               // 0x085C (size: 0x4)
    FVector CraneTarget;                                                              // 0x0860 (size: 0xC)
    FVector FinalOffset;                                                              // 0x086C (size: 0xC)
    FVector HookSpringLocation;                                                       // 0x0878 (size: 0xC)
    class UC_LiftPoint_C* TargetLiftPoint;                                            // 0x0888 (size: 0x8)
    FVector LiftPointOffset;                                                          // 0x0890 (size: 0xC)
    class AActor* LiftedActor;                                                        // 0x08A0 (size: 0x8)
    TArray<int32> HookInputs;                                                         // 0x08A8 (size: 0x10)
    int32 SnapZ;                                                                      // 0x08B8 (size: 0x4)
    int32 SnapXY;                                                                     // 0x08BC (size: 0x4)
    FRotator BaseRotation;                                                            // 0x08C0 (size: 0xC)
    class UC_LiftPoint_C* LiftedPoint;                                                // 0x08D0 (size: 0x8)

    void CleanupLiftedActor(class AActor* Actor);
    bool InBuildZone();
    bool CanPlace();
    void TryApplyDamping();
    void SetBuildGuideVisibility(bool bNewVisibility);
    float GetActualHookOffset();
    void SetOffsetsFromPosition();
    void StopCrane();
    void SetBoomLocation(FVector NewLocation, float& XDelta);
    void SetCraneBaseRotation(FRotator NewRotation, float& DeltaYaw);
    void LiftActor(class AActor* LiftedActor);
    void ModifyTrolleyOffset(float A);
    void ModifyCraneRotation(float A);
    FRotator CalcTargetCraneRotation();
    void InterpFinalHookOffset();
    void UpdateCraneDeployment(float PositionAlpha, float YawAlpha);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void FreezePhysics(bool bNewState);
    FRotator CalcHookTargetRotation();
    FVector GetProjectedOffset(FVector Location, float ZOffset);
    void TryPlaceItem();
    void SetItemYaw(float Value, bool RoundTo90);
    void ModifyItemYaw(float DeltaYaw);
    void SetCableLength();
    void CalcHookSpringLocation();
    void IsCraneInputting(bool& Result);
    void TryLiftActor();
    void HandleCraneHookMovement();
    void RotateCraneToOffset();
    void MoveTrolleyToOffset(float Offset, float& Delta);
    void FindClosestPoint(TArray<FVector>& Points, FVector Origin, FVector& ClosestPoint);
    void CalcSnappedFinalOffset();
    void GetHookOffsetInput(float& OutputPin);
    void FindClosestLiftPoint();
    void CalcCraneTarget();
    void ModifyHookOffset();
    void HandleCraneMode();
    void UserConstructionScript();
    void Timeline_DeployCrane__FinishedFunc();
    void Timeline_DeployCrane__UpdateFunc();
    void Timeline_DeployCrane__Ready__EventFunc();
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void Accelerate(float Input);
    void Steer(float Input);
    void EDownWhileDriving();
    void Rotate1WhileDriving(bool RotationModify);
    void ResetHookTransform();
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_HydroTruck_DriveStorageBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CloseTimeline();
    void OpenTimeline();
    void OverrideCraneMode(bool CraneMode);
    void EnterVehicle(class APawn* Pawn);
    void TryPauseDeployment(bool Condition);
    void ExecuteUbergraph_BP_ParentCraneVehicle(int32 EntryPoint);
}; // Size: 0x8D8

#endif
