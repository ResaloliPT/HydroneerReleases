#ifndef UE4SS_SDK_BP_HydroCropper_HPP
#define UE4SS_SDK_BP_HydroCropper_HPP

class ABP_HydroCropper_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class USceneComponent* VegExitBottom;                                             // 0x0788 (size: 0x8)
    class UStaticMeshComponent* CropperVegArm;                                        // 0x0790 (size: 0x8)
    class UAudioComponent* S_Roller_Rolling_Front;                                    // 0x0798 (size: 0x8)
    class UStaticMeshComponent* Inside_Hopper_Shadow_Cube;                            // 0x07A0 (size: 0x8)
    class USpotLightComponent* Headlights2;                                           // 0x07A8 (size: 0x8)
    class UBoxComponent* VegBox;                                                      // 0x07B0 (size: 0x8)
    class UAudioComponent* S_Roller_Rolling_Rear;                                     // 0x07B8 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x07C0 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x07C8 (size: 0x8)
    class UStaticMeshComponent* RightLever;                                           // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* LeftLever;                                            // 0x07D8 (size: 0x8)
    class USceneComponent* VegExitTop;                                                // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* BackDrum;                                             // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* BackArm;                                              // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* FrontDrum;                                            // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* FrontArm;                                             // 0x0800 (size: 0x8)
    class UBoxComponent* PlantingBox;                                                 // 0x0808 (size: 0x8)
    class UBoxComponent* HarvestBox;                                                  // 0x0810 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x0818 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0820 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x0828 (size: 0x8)
    float Timeline_0_Movement_6B372EBC401A504BBBA119891B00BAE9;                       // 0x0830 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6B372EBC401A504BBBA119891B00BAE9; // 0x0834 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0838 (size: 0x8)
    FTimerHandle DrumSpinTimer;                                                       // 0x0840 (size: 0x8)
    int32 RollerState;                                                                // 0x0848 (size: 0x4)
    TMap<TSubclassOf<ABP_ParentVeg_C>, float> VegContents;                            // 0x0850 (size: 0x50)
    FTimerHandle SpitVegTimerHandle;                                                  // 0x08A0 (size: 0x8)
    float ForwardHandle;                                                              // 0x08A8 (size: 0x4)
    float SteeringHandle;                                                             // 0x08AC (size: 0x4)
    float ArmTargetLength;                                                            // 0x08B0 (size: 0x4)

    void FindExitPoint(FVector& ExitPoint);
    void SpitVeg();
    void NewVeg(class ABP_ParentVeg_C* Veg);
    void DrumSpin();
    void PostPlayerAttached(bool Attached?);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_0(FKey Key);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_HydroCombine_HarvestBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroCombine_PlantingBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void BndEvt__BP_HydroCropper_VegBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EDownWhileDriving();
    void EUpWhileDriving();
    void ReceiveTick(float DeltaSeconds);
    void HandleRollerState();
    void ExecuteUbergraph_BP_HydroCropper(int32 EntryPoint);
}; // Size: 0x8B4

#endif
