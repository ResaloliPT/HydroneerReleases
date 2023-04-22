#ifndef UE4SS_SDK_BP_Rod_HPP
#define UE4SS_SDK_BP_Rod_HPP

class ABP_Rod_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class USceneComponent* BobberHook;
    class ULocalCableComponent* FishingWire2;
    class ULocalCableComponent* FishingWire;
    class UStaticMeshComponent* Bobber;
    class ULocalCableComponent* LocalCable3;
    class ULocalCableComponent* LocalCable2;
    class ULocalCableComponent* LocalCable1;
    class ULocalCableComponent* LocalCable;
    class USceneComponent* CableEnd3;
    class USceneComponent* CableEnd2;
    class USceneComponent* CableEnd1;
    class USceneComponent* CableEnd;
    float BobbingZ;
    class UCurveFloat* BobbingCurve;
    FTimerHandle BobberTimer;
    bool CastOut?;
    bool Catchable?;
    float BaseZ;
    class UCurveFloat* SpawnCurve;
    TEnumAsByte<E_Rod::Type> Type;
    TArray<class UMaterialInstanceDynamic*> DynamicCableMat;
    int32 Luck;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void SetUpRod();
    void CreateDynamicRodMats();
    void UserConstructionScript();
    void BndEvt__Bobber_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Bobbing();
    void StartFishing();
    void StopFishing();
    void SpawnFish();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void ActorLoaded();
    void StartCasting(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_Rod(int32 EntryPoint);
};

#endif
