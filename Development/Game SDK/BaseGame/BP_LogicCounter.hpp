#ifndef UE4SS_SDK_BP_LogicCounter_HPP
#define UE4SS_SDK_BP_LogicCounter_HPP

class ABP_LogicCounter_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x04C0 (size: 0x8)
    class UBoxComponent* Z+Box;                                                       // 0x04C8 (size: 0x8)
    class UBoxComponent* Checker;                                                     // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* SM_Arrow2;                                            // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* SM_Arrow;                                             // 0x04E0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x04E8 (size: 0x8)
    int32 Counter;                                                                    // 0x04F0 (size: 0x4)

    void AddToCounter(class ABP_ParentItem_C* A);
    void OverrideLoaded();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideStartPlacing();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void BndEvt__Checker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicCounter(int32 EntryPoint);
}; // Size: 0x4F4

#endif
