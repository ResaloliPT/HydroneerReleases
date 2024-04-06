#ifndef UE4SS_SDK_BP_HydroBike_HPP
#define UE4SS_SDK_BP_HydroBike_HPP

class ABP_HydroBike_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0788 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x0790 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x0798 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x07A0 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x07A8 (size: 0x8)
    class UStaticMeshComponent* SM_HydroBike_Wheel_Rear;                              // 0x07B0 (size: 0x8)
    class UStaticMeshComponent* SM_HydroBike_Wheel_Front;                             // 0x07B8 (size: 0x8)
    class UC_LiftPoint_C* C_LiftPoint;                                                // 0x07C0 (size: 0x8)
    class USplineComponent* Track;                                                    // 0x07C8 (size: 0x8)
    int32 Track Pieces;                                                               // 0x07D0 (size: 0x4)
    TArray<class USplineMeshComponent*> Treads;                                       // 0x07D8 (size: 0x10)
    float TreadOffset;                                                                // 0x07E8 (size: 0x4)
    float MoveForwardAxis;                                                            // 0x07EC (size: 0x4)
    TArray<class TSubclassOf<ABP_ParentItem_C>> BannedItems;                          // 0x07F0 (size: 0x10)

    void StartIgnition();
    void LockInItem(class AActor* Item);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void PostPlayerAttached(bool Attached?);
    void ApplyWheelRotation();
    void SetSteeringRotation();
    void SetTreadPosition(class USplineMeshComponent*& Tread, int32 Index);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void InpAxisEvt_VehicleForward_K2Node_InputAxisEvent_2(float AxisValue);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HydroBike(int32 EntryPoint);
}; // Size: 0x800

#endif
