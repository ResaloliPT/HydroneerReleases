#ifndef UE4SS_SDK_BP_ParentSeedBag_HPP
#define UE4SS_SDK_BP_ParentSeedBag_HPP

class ABP_ParentSeedBag_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle TraceTimerHandle;
    class ABP_ParentCrop_C* PlacingCrop;
    TSubclassOf<class ABP_ParentCrop_C> Crop;
    bool CanPlace?;
    class AActor* FoundationCurrentlyLookingAt;
    int32 Stacks;
    FLinearColor CropColor;

    void SetNewStorePrice(int32 NewStack);
    void DecrementOrDestroySeedBag();
    void SetStackMaterial();
    void FindIfActorIsRelevant(class AActor* Actor, class AActor*& ValidIfRelevant);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void TraceTimer();
    void UserConstructionScript();
    void OnCompleted_23506D5C4318CBFF64D6F5AD9649931F();
    void LMBUpWhileCarrying();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ActorLoaded();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void HydroCropper(class ABP_PlantFoundation_C* Foundation);
    void ExecuteUbergraph_BP_ParentSeedBag(int32 EntryPoint);
};

#endif
