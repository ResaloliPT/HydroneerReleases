#ifndef UE4SS_SDK_BP_HydroCropper_HPP
#define UE4SS_SDK_BP_HydroCropper_HPP

class ABP_HydroCropper_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* VegExitBottom;
    class UStaticMeshComponent* CropperVegArm;
    class UAudioComponent* S_Roller_Rolling_Front;
    class UStaticMeshComponent* Inside_Hopper_Shadow_Cube;
    class USpotLightComponent* Headlights2;
    class UBoxComponent* VegBox;
    class UAudioComponent* S_Roller_Rolling_Rear;
    class USceneComponent* HandleL;
    class USceneComponent* HandleR;
    class UStaticMeshComponent* RightLever;
    class UStaticMeshComponent* LeftLever;
    class USceneComponent* VegExitTop;
    class UStaticMeshComponent* BackDrum;
    class UStaticMeshComponent* BackArm;
    class UStaticMeshComponent* FrontDrum;
    class UStaticMeshComponent* FrontArm;
    class UBoxComponent* PlantingBox;
    class UBoxComponent* HarvestBox;
    class USpotLightComponent* Headlights1;
    class UAC_Storage_C* AC_Storage;
    class UBoxComponent* StorageBox;
    float Timeline_0_Movement_6B372EBC401A504BBBA119891B00BAE9;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6B372EBC401A504BBBA119891B00BAE9;
    class UTimelineComponent* Timeline_0;
    FTimerHandle DrumSpinTimer;
    int32 RollerState;
    TMap<TSubclassOf<ABP_ParentVeg_C>, float> VegContents;
    FTimerHandle SpitVegTimerHandle;
    float ForwardHandle;
    float SteeringHandle;
    float ArmTargetLength;

    void FindExitPoint(FVector& ExitPoint);
    float CalcTireSlip(float Slip, bool bIsFrontTires);
    void SpitVeg();
    void NewVeg(class ABP_ParentVeg_C* Veg);
    void DrumSpin();
    void PostPlayerAttached(bool Attached?);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_HydroCombine_HarvestBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroCombine_PlantingBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RMBDownWhileDriving();
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void BndEvt__BP_HydroCropper_VegBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EDownWhileDriving();
    void EUpWhileDriving();
    void ReceiveTick(float DeltaSeconds);
    void HandleRollerState();
    void ExecuteUbergraph_BP_HydroCropper(int32 EntryPoint);
};

#endif
