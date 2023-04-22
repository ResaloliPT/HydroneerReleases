#ifndef UE4SS_SDK_BP_ParentCutVeg_HPP
#define UE4SS_SDK_BP_ParentCutVeg_HPP

class ABP_ParentCutVeg_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMesh* SoupTopperMesh;
    TSubclassOf<class ABP_ParentSeedBag_C> SeedBag;
    TArray<class UStaticMesh*> MeshLevels;
    class UNiagaraSystem* CutNiagaraSystem;

    void SetResourceMesh();
    void UserConstructionScript();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void HeatUpdated(float Heat);
    void FullHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentCutVeg(int32 EntryPoint);
};

#endif
