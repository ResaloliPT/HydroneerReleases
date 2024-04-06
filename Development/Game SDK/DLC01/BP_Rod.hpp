#ifndef UE4SS_SDK_BP_Rod_HPP
#define UE4SS_SDK_BP_Rod_HPP

class ABP_Rod_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0460 (size: 0x8)
    class USceneComponent* BobberHook;                                                // 0x0468 (size: 0x8)
    class ULocalCableComponent* FishingWire2;                                         // 0x0470 (size: 0x8)
    class ULocalCableComponent* FishingWire;                                          // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Bobber;                                               // 0x0480 (size: 0x8)
    class ULocalCableComponent* LocalCable3;                                          // 0x0488 (size: 0x8)
    class ULocalCableComponent* LocalCable2;                                          // 0x0490 (size: 0x8)
    class ULocalCableComponent* LocalCable1;                                          // 0x0498 (size: 0x8)
    class ULocalCableComponent* LocalCable;                                           // 0x04A0 (size: 0x8)
    class USceneComponent* CableEnd3;                                                 // 0x04A8 (size: 0x8)
    class USceneComponent* CableEnd2;                                                 // 0x04B0 (size: 0x8)
    class USceneComponent* CableEnd1;                                                 // 0x04B8 (size: 0x8)
    class USceneComponent* CableEnd;                                                  // 0x04C0 (size: 0x8)
    float BobbingZ;                                                                   // 0x04C8 (size: 0x4)
    class UCurveFloat* BobbingCurve;                                                  // 0x04D0 (size: 0x8)
    FTimerHandle BobberTimer;                                                         // 0x04D8 (size: 0x8)
    bool CastOut?;                                                                    // 0x04E0 (size: 0x1)
    bool Catchable?;                                                                  // 0x04E1 (size: 0x1)
    float BaseZ;                                                                      // 0x04E4 (size: 0x4)
    class UCurveFloat* SpawnCurve;                                                    // 0x04E8 (size: 0x8)
    TEnumAsByte<E_Rod::Type> Type;                                                    // 0x04F0 (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> DynamicCableMat;                          // 0x04F8 (size: 0x10)
    int32 Luck;                                                                       // 0x0508 (size: 0x4)

    void GetSpecialType(FString& Type);
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
}; // Size: 0x50C

#endif
