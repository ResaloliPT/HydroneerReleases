#ifndef UE4SS_SDK_BP_HydroTruck_HPP
#define UE4SS_SDK_BP_HydroTruck_HPP

class ABP_HydroTruck_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UBoxComponent* DriveStorageBox;                                             // 0x0788 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x0790 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x0798 (size: 0x8)
    class UStaticMeshComponent* SteeringWheel;                                        // 0x07A0 (size: 0x8)
    class USceneComponent* SteeringWheel_Pivot;                                       // 0x07A8 (size: 0x8)
    class UStaticMeshComponent* InteriorMesh;                                         // 0x07B0 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* Step;                                                 // 0x07C0 (size: 0x8)
    class USceneComponent* TruckHull;                                                 // 0x07C8 (size: 0x8)
    class USceneComponent* BackBumper;                                                // 0x07D0 (size: 0x8)
    class USceneComponent* FrontBumper;                                               // 0x07D8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x07E0 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x07E8 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x07F0 (size: 0x8)
    float DefaultMass;                                                                // 0x07F8 (size: 0x4)
    FTimerHandle UnwedgeTimer;                                                        // 0x0800 (size: 0x8)
    FTimerHandle UnbeachTimer;                                                        // 0x0808 (size: 0x8)
    float UnwedgeDelay;                                                               // 0x0810 (size: 0x4)
    FTimerHandle StopUnwedgeTimer;                                                    // 0x0818 (size: 0x8)

    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void CB_StopUnwedging();
    void CB_StartUnbeaching();
    void CB_StartUnwedging();
    void EnterVehicle(class APawn* Pawn);
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void ItemStored(class ABP_ParentItem_C* Item);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Yeet();
    void OverrideMoveForward(float AxisValue);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_DriveStorageBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HydroTruck(int32 EntryPoint);
}; // Size: 0x820

#endif
