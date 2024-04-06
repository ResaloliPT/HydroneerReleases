#ifndef UE4SS_SDK_AC_Explosive_HPP
#define UE4SS_SDK_AC_Explosive_HPP

class UAC_Explosive_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x00B8 (size: 0x8)
    class ABP_HydroVoxelWorld_C* VoxelWorld;                                          // 0x00C0 (size: 0x8)
    TArray<class AActor*> Items To Delete;                                            // 0x00C8 (size: 0x10)
    bool Used?;                                                                       // 0x00D8 (size: 0x1)
    float InnerSphereRadius;                                                          // 0x00DC (size: 0x4)
    class USoundBase* ExplosionSound;                                                 // 0x00E0 (size: 0x8)
    class UParticleSystem* ExplosionFX;                                               // 0x00E8 (size: 0x8)
    TEnumAsByte<E_CameraShakes::Type> ExplosionShake;                                 // 0x00F0 (size: 0x1)
    int32 MaxDepth;                                                                   // 0x00F4 (size: 0x4)
    bool StrictlyTiered?;                                                             // 0x00F8 (size: 0x1)

    void GetRandomSpaceInRadius(FVector& Location);
    void TraceForVoxelWorld(class ABP_HydroVoxelWorld_C*& VoxWorld);
    void CreateHole(int32 Amount);
    void FindOverlappingActors(TArray<class ABP_ParentItem_C*>& Items);
    void SpawnScrap(FVector Location, float Size);
    void CheckOverlaps();
    void LoopForItems(class AActor* Object);
    void Explode();
    void ExecuteUbergraph_AC_Explosive(int32 EntryPoint);
}; // Size: 0xF9

#endif
