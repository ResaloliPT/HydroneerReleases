#ifndef UE4SS_SDK_BP_HydroQuad_HPP
#define UE4SS_SDK_BP_HydroQuad_HPP

class ABP_HydroQuad_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x0788 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x0790 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x0798 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x07A0 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x07A8 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentItem_C>> BannedItems;                          // 0x07B0 (size: 0x10)

    void StartIgnition();
    void LockInItem(class AActor* Item);
    void PostPlayerAttached(bool Attached?);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HydroQuad(int32 EntryPoint);
}; // Size: 0x7C0

#endif
