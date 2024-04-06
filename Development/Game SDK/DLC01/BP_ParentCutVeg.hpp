#ifndef UE4SS_SDK_BP_ParentCutVeg_HPP
#define UE4SS_SDK_BP_ParentCutVeg_HPP

class ABP_ParentCutVeg_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UStaticMesh* SoupTopperMesh;                                                // 0x0468 (size: 0x8)
    TSubclassOf<class ABP_ParentSeedBag_C> SeedBag;                                   // 0x0470 (size: 0x8)
    TArray<class UStaticMesh*> MeshLevels;                                            // 0x0478 (size: 0x10)
    class UNiagaraSystem* CutNiagaraSystem;                                           // 0x0488 (size: 0x8)

    void TryCombine(class ABP_ParentCutVeg_C* InputPin);
    void SetResourceMesh();
    void UserConstructionScript();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void HasNoWater();
    void HasWater();
    void HeatUpdated(float Heat);
    void FullHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ActorLoaded();
    void ReceiveBeginPlay();
    void OverrideItemStored(class UAC_Storage_C* Storage);
    void ExecuteUbergraph_BP_ParentCutVeg(int32 EntryPoint);
}; // Size: 0x490

#endif
