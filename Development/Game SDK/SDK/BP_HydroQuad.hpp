#ifndef UE4SS_SDK_BP_HydroQuad_HPP
#define UE4SS_SDK_BP_HydroQuad_HPP

class ABP_HydroQuad_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* Headlights1;
    class USceneComponent* HandleL;
    class USceneComponent* HandleR;
    class UAC_Storage_C* AC_Storage;
    class UBoxComponent* StorageBox;
    TArray<class TSubclassOf<ABP_ParentItem_C>> BannedItems;

    float CalcTireSlip(float Slip, bool bIsFrontTires);
    void PostPlayerAttached(bool Attached?);
    void SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HydroQuad(int32 EntryPoint);
};

#endif
