#ifndef UE4SS_SDK_BP_LogicCounter_HPP
#define UE4SS_SDK_BP_LogicCounter_HPP

class ABP_LogicCounter_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* Z+Box;
    class UBoxComponent* Checker;
    class UStaticMeshComponent* SM_Arrow2;
    class UStaticMeshComponent* SM_Arrow;
    class UTextRenderComponent* TextRender;
    int32 Counter;

    void OverrideLoaded();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideStartPlacing();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void BndEvt__Checker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicCounter(int32 EntryPoint);
};

#endif
