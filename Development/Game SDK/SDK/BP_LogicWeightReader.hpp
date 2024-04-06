#ifndef UE4SS_SDK_BP_LogicWeightReader_HPP
#define UE4SS_SDK_BP_LogicWeightReader_HPP

class ABP_LogicWeightReader_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class UBoxComponent* Z+Box;
    class UStaticMeshComponent* SM_Arrow;
    class UBoxComponent* WeightDetectBox;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* SM_Arrow2;
    float Counter;

    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideLoaded();
    void OverrideStartPlacing();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicWeightReader(int32 EntryPoint);
};

#endif
