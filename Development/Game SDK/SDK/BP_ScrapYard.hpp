#ifndef UE4SS_SDK_BP_ScrapYard_HPP
#define UE4SS_SDK_BP_ScrapYard_HPP

class ABP_ScrapYard_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* SellButton;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    TArray<class ABP_ParentItem_C*> ItemsToBurn;
    bool CanUse?;
    float TotalSize;

    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Reset();
    void ExecuteUbergraph_BP_ScrapYard(int32 EntryPoint);
};

#endif
