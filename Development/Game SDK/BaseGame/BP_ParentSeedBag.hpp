#ifndef UE4SS_SDK_BP_ParentSeedBag_HPP
#define UE4SS_SDK_BP_ParentSeedBag_HPP

class ABP_ParentSeedBag_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    FTimerHandle TraceTimerHandle;                                                    // 0x0458 (size: 0x8)
    class ABP_ParentCrop_C* PlacingCrop;                                              // 0x0460 (size: 0x8)
    TSubclassOf<class ABP_ParentCrop_C> Crop;                                         // 0x0468 (size: 0x8)
    bool CanPlace?;                                                                   // 0x0470 (size: 0x1)
    class AActor* FoundationCurrentlyLookingAt;                                       // 0x0478 (size: 0x8)
    int32 Stacks;                                                                     // 0x0480 (size: 0x4)
    FLinearColor CropColor;                                                           // 0x0484 (size: 0x10)

    void CombineBags(class ABP_ParentSeedBag_C* InputPin);
    void InitStorePrice();
    void SetNewStorePrice(int32 NewStack);
    void DecrementOrDestroySeedBag();
    void SetStackMaterial();
    void FindIfActorIsRelevant(class AActor* Actor, class AActor*& ValidIfRelevant);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void TraceTimer();
    void UserConstructionScript();
    void OnCompleted_23506D5C4318CBFF64D6F5AD9649931F();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void LMBUpWhileCarrying();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ActorLoaded();
    void HydroCropper(class ABP_PlantFoundation_C* Foundation);
    void ReceiveBeginPlay();
    void OverrideItemStored(class UAC_Storage_C* Storage);
    void ExecuteUbergraph_BP_ParentSeedBag(int32 EntryPoint);
}; // Size: 0x494

#endif
