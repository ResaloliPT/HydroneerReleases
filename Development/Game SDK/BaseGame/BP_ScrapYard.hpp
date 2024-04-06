#ifndef UE4SS_SDK_BP_ScrapYard_HPP
#define UE4SS_SDK_BP_ScrapYard_HPP

class ABP_ScrapYard_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SellButton;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToBurn;                                      // 0x0260 (size: 0x10)
    bool CanUse?;                                                                     // 0x0270 (size: 0x1)
    float TotalSize;                                                                  // 0x0274 (size: 0x4)

    void RemoveBannedItems();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Reset();
    void ExecuteUbergraph_BP_ScrapYard(int32 EntryPoint);
}; // Size: 0x278

#endif
