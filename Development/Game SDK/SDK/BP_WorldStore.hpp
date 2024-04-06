#ifndef UE4SS_SDK_BP_WorldStore_HPP
#define UE4SS_SDK_BP_WorldStore_HPP

class ABP_WorldStore_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* CurrencyTypeRequired;
    class UAC_StoreFunctions_C* AC_StoreFunctions;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Bucket;
    class USphereComponent* CoinSphere;
    class UTextRenderComponent* Buy;
    class UBoxComponent* SecurityBox;
    class UBoxComponent* BuyBox;
    class UTextRenderComponent* PriceText;
    class UStaticMeshComponent* BuyButton;
    class UStaticMeshComponent* StaticMesh3;
    TArray<class ABP_ParentItem_C*> ItemsToBuy;
    int32 TotalBuyPrice;
    TArray<class ABP_Coin_C*> HydroCoins;
    TArray<class ABP_FiniteStoreItem_C*> FiniteStoreItems;
    bool ButtonReady?;
    TEnumAsByte<E_CurrencyType::Type> CurrencyType;

    void SetAllStoreItemCurrencyTypes();
    void SetItemCurrencyType();
    void UserConstructionScript();
    void UpdateBuyPrice();
    void BndEvt__BuyBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BuyBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SecurityBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SecurityBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ItemStolenFromStore(class ABP_ParentItem_C* Item);
    void ItemsSold(const TArray<class ABP_ParentItem_C*>& Items);
    void ExecuteUbergraph_BP_WorldStore(int32 EntryPoint);
};

#endif
