#ifndef UE4SS_SDK_BP_Jeweller_HPP
#define UE4SS_SDK_BP_Jeweller_HPP

class ABP_Jeweller_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Jeweler_ShopProps;
    class UTextRenderComponent* TextRender1;
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
    bool ButtonReady?;
    bool CanSell?;
    bool IsGrocer?;

    void CheckForSoupBowlOnSale(class ABP_ParentResource_C* Resource);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateSalePrice();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void SpawnCash();
    void ExecuteUbergraph_BP_Jeweller(int32 EntryPoint);
};

#endif
