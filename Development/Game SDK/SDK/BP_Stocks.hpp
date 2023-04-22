#ifndef UE4SS_SDK_BP_Stocks_HPP
#define UE4SS_SDK_BP_Stocks_HPP

class ABP_Stocks_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* Percent;
    class UStaticMeshComponent* Demand;
    class UTextRenderComponent* TitlePercent;
    class UTextRenderComponent* TitleDemand;
    class UStaticMeshComponent* StockType;
    class UAC_StoreFunctions_C* AC_StoreFunctions;
    class UStaticMeshComponent* SM_Sale_Sign_Title_Board;
    class UStaticMeshComponent* StaticMesh2;
    class USceneComponent* CashSpawn;
    class UBoxComponent* SellBox;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* Button;
    class UTextRenderComponent* SellText;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    TArray<class ABP_ParentResource_C*> ItemsToSell;
    int32 TotalSalePrice;
    TEnumAsByte<E_Stocks::Type> StockSaleType;
    TArray<class TSubclassOf<ABP_ParentResource_C>> StockClass;

    void FindStockMultiplyer(float& Percenti);
    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateSalePrice();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void SpawnCash();
    void ExecuteUbergraph_BP_Stocks(int32 EntryPoint);
};

#endif
