#ifndef UE4SS_SDK_BP_OreVein_HPP
#define UE4SS_SDK_BP_OreVein_HPP

class ABP_OreVein_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class USphereComponent* Sphere;
    class UNiagaraComponent* Niagara;
    bool HasInit?;
    float VeinSize;
    TEnumAsByte<E_MetalType::Type> VeinType;
    bool Revealed?;
    class ABP_HydroVoxelWorld_C* Voxel World;
    bool DevSpawnAll?;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void RevealOreVein();
    void WeightedRandResource(TEnumAsByte<E_MetalType::Type>& int);
    void SetRandomSizeAndType();
    void InitVein();
    void OnCompleted_8459E872464E2259F9EA47B32C0A020B();
    void ActorLoaded();
    void ActorSaved();
    void ActorPreSave();
    void ExecuteUbergraph_BP_OreVein(int32 EntryPoint);
};

#endif
