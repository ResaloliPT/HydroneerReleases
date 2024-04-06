#ifndef UE4SS_SDK_BP_PlantFoundation_HPP
#define UE4SS_SDK_BP_PlantFoundation_HPP

class ABP_PlantFoundation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void WaterParticleHit();
    void ActorLoaded();
    void ActorPreSave();
    void ActorSaved();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void DestroyFoundation();
    void HasNoWater();
    void HasWater();
    void ExecuteUbergraph_BP_PlantFoundation(int32 EntryPoint);
};

#endif
