#ifndef UE4SS_SDK_BP_VegetableBasket_HPP
#define UE4SS_SDK_BP_VegetableBasket_HPP

class ABP_VegetableBasket_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0458 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0468 (size: 0x8)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void OnCompleted_E18128DB41BA2E2E9E0FDEABCD5D438A();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Bucket_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Empty();
    void OverridePickedupPreCarry();
    void OverrideLoaded();
    void ExecuteUbergraph_BP_VegetableBasket(int32 EntryPoint);
}; // Size: 0x470

#endif
