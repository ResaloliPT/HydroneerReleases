#ifndef UE4SS_SDK_BP_Anvil_HPP
#define UE4SS_SDK_BP_Anvil_HPP

class ABP_Anvil_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UBoxComponent* Placement1;                                                  // 0x0490 (size: 0x8)
    class UBoxComponent* Placement3;                                                  // 0x0498 (size: 0x8)
    class UBoxComponent* Placement2;                                                  // 0x04A0 (size: 0x8)
    TEnumAsByte<E_AnvilType::Type> AnvilType;                                         // 0x04A8 (size: 0x1)
    TArray<class ABP_ParentResource_C*> Resources;                                    // 0x04B0 (size: 0x10)

    void SetAnvilType(bool L);
    bool isValidResource(UClass* RecipeClass, int32 Slot);
    void RemoveResourceAtSlot(const int32 Resource);
    void AddResource(const class ABP_ParentResource_C*& Resource, int32 Slot);
    void TryCraftBlacksmithItem(TEnumAsByte<E_AnvilType::Type> Item To Craft, bool& Crafted?);
    void HammerHit();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void BndEvt__BP_Anvil_Placement1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Anvil_Placement2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Anvil_Placement3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Anvil_Placement1_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_Anvil_Placement2_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_Anvil_Placement3_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Anvil(int32 EntryPoint);
}; // Size: 0x4C0

#endif
