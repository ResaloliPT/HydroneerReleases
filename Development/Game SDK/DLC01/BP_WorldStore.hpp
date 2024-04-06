#ifndef UE4SS_SDK_BP_WorldStore_HPP
#define UE4SS_SDK_BP_WorldStore_HPP

class ABP_WorldStore_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* CurrencyTypeRequired;                                 // 0x0238 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Bucket;                                               // 0x0250 (size: 0x8)
    class USphereComponent* CoinSphere;                                               // 0x0258 (size: 0x8)
    class UTextRenderComponent* Buy;                                                  // 0x0260 (size: 0x8)
    class UBoxComponent* SecurityBox;                                                 // 0x0268 (size: 0x8)
    class UBoxComponent* BuyBox;                                                      // 0x0270 (size: 0x8)
    class UTextRenderComponent* PriceText;                                            // 0x0278 (size: 0x8)
    class UStaticMeshComponent* BuyButton;                                            // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0288 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToBuy;                                       // 0x0290 (size: 0x10)
    int32 TotalBuyPrice;                                                              // 0x02A0 (size: 0x4)
    TArray<class ABP_Coin_C*> HydroCoins;                                             // 0x02A8 (size: 0x10)
    TArray<class ABP_FiniteStoreItem_C*> FiniteStoreItems;                            // 0x02B8 (size: 0x10)
    bool ButtonReady?;                                                                // 0x02C8 (size: 0x1)
    TEnumAsByte<E_CurrencyType::Type> CurrencyType;                                   // 0x02C9 (size: 0x1)

    void ItemExitSecurity(class ABP_ParentItem_C* Item, bool StoredItem);
    void CheckFiniteItems(TArray<class ABP_ParentItem_C*>& SoldItems);
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
    void TryAddToCounter(class ABP_ParentItem_C* Target);
    void TryRemoveFromCounter(class ABP_ParentItem_C* Target, bool Stored);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WorldStore(int32 EntryPoint);
}; // Size: 0x2CA

#endif
