#ifndef UE4SS_SDK_BP_Stocks_HPP
#define UE4SS_SDK_BP_Stocks_HPP

class ABP_Stocks_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextRenderComponent* Percent;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Demand;                                               // 0x0240 (size: 0x8)
    class UTextRenderComponent* TitlePercent;                                         // 0x0248 (size: 0x8)
    class UTextRenderComponent* TitleDemand;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StockType;                                            // 0x0258 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0260 (size: 0x8)
    class UStaticMeshComponent* SM_Sale_Sign_Title_Board;                             // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0270 (size: 0x8)
    class USceneComponent* CashSpawn;                                                 // 0x0278 (size: 0x8)
    class UBoxComponent* SellBox;                                                     // 0x0280 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0290 (size: 0x8)
    class UTextRenderComponent* SellText;                                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)
    TArray<class ABP_ParentResource_C*> ItemsToSell;                                  // 0x02B0 (size: 0x10)
    int32 TotalSalePrice;                                                             // 0x02C0 (size: 0x4)
    TEnumAsByte<E_Stocks::Type> StockSaleType;                                        // 0x02C4 (size: 0x1)
    TArray<class TSubclassOf<ABP_ParentResource_C>> StockClass;                       // 0x02C8 (size: 0x10)

    void FindStockMultiplyer(float& Percenti);
    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateSalePrice();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void SpawnCash();
    void ExecuteUbergraph_BP_Stocks(int32 EntryPoint);
}; // Size: 0x2D8

#endif
