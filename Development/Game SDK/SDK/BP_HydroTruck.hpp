#ifndef UE4SS_SDK_BP_HydroTruck_HPP
#define UE4SS_SDK_BP_HydroTruck_HPP

class ABP_HydroTruck_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* DriveStorageBox;
    class USceneComponent* HandleR;
    class USceneComponent* HandleL;
    class UStaticMeshComponent* SteeringWheel;
    class USceneComponent* SteeringWheel_Pivot;
    class UStaticMeshComponent* InteriorMesh;
    class USpotLightComponent* Headlights1;
    class UStaticMeshComponent* Step;
    class USceneComponent* TruckHull;
    class USceneComponent* BackBumper;
    class USceneComponent* FrontBumper;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* StorageBox;
    class UAC_Storage_C* AC_Storage;
    float DefaultMass;
    FTimerHandle UnwedgeTimer;
    FTimerHandle UnbeachTimer;
    float UnwedgeDelay;
    FTimerHandle StopUnwedgeTimer;

    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    float CalcTireSlip(float Slip, bool bIsFrontTires);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void OnCompleted_F848FCCE4D6D850730D91D8397AD7B77();
    void CB_StartUnbeaching();
    void EnterVehicle(class APawn* Pawn);
    void CB_StopUnwedging();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();
    void CB_StartUnwedging();
    void ItemStored(class ABP_ParentItem_C* Item);
    void ReceiveBeginPlay();
    void ActorLoaded();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Yeet();
    void ReceiveTick(float DeltaSeconds);
    void OverrideMoveForward(float AxisValue);
    void BndEvt__BP_HydroTruck_DriveStorageBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HydroTruck(int32 EntryPoint);
};

#endif
