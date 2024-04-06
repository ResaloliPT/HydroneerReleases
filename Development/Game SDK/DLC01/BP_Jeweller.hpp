#ifndef UE4SS_SDK_BP_Jeweller_HPP
#define UE4SS_SDK_BP_Jeweller_HPP

class ABP_Jeweller_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class USceneComponent* CashSpawn;                                                 // 0x0238 (size: 0x8)
    class UBoxComponent* SellBox;                                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* SM_Jeweler_ShopProps;                                 // 0x0250 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x0258 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0260 (size: 0x8)
    class UStaticMeshComponent* SM_Sale_Sign_Title_Board;                             // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0270 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0280 (size: 0x8)
    class UTextRenderComponent* SellText;                                             // 0x0288 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    TArray<class ABP_ParentResource_C*> ItemsToSell;                                  // 0x0298 (size: 0x10)
    int32 TotalSalePrice;                                                             // 0x02A8 (size: 0x4)
    bool ButtonReady?;                                                                // 0x02AC (size: 0x1)
    bool CanSell?;                                                                    // 0x02AD (size: 0x1)
    bool IsGrocer?;                                                                   // 0x02AE (size: 0x1)

    void TryRemoveItemToBuy(const class ABP_ParentResource_C*& Item);
    void TryAddItemToBuy(const class ABP_ParentResource_C*& NewItem);
    void CheckForSoupBowlOnSale(class ABP_ParentResource_C* Resource);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateSalePrice();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void SpawnCash();
    void ExecuteUbergraph_BP_Jeweller(int32 EntryPoint);
}; // Size: 0x2AF

#endif
