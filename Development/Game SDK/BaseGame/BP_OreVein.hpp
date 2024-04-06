#ifndef UE4SS_SDK_BP_OreVein_HPP
#define UE4SS_SDK_BP_OreVein_HPP

class ABP_OreVein_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0238 (size: 0x8)
    bool HasInit?;                                                                    // 0x0240 (size: 0x1)
    float VeinSize;                                                                   // 0x0244 (size: 0x4)
    TEnumAsByte<E_MetalType::Type> VeinType;                                          // 0x0248 (size: 0x1)
    bool Revealed?;                                                                   // 0x0249 (size: 0x1)
    class ABP_HydroVoxelWorld_C* Voxel World;                                         // 0x0250 (size: 0x8)
    bool DevSpawnAll?;                                                                // 0x0258 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void RevealOreVein();
    void WeightedRandResource(TEnumAsByte<E_MetalType::Type>& int);
    void SetRandomSizeAndType();
    void InitVein();
    void OnCompleted_8459E872464E2259F9EA47B32C0A020B();
    void ActorPreSave();
    void ActorSaved();
    void ActorLoaded();
    void ExecuteUbergraph_BP_OreVein(int32 EntryPoint);
}; // Size: 0x259

#endif
