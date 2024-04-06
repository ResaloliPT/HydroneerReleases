#ifndef UE4SS_SDK_AC_Explosive_HPP
#define UE4SS_SDK_AC_Explosive_HPP

class UAC_Explosive_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class ABP_HydroVoxelWorld_C* VoxelWorld;
    TArray<class AActor*> Items To Delete;
    bool Used?;
    float OuterSphereRadius;
    float InnerSphereRadius;
    class USoundBase* ExplosionSound;
    class UParticleSystem* ExplosionFX;
    TEnumAsByte<E_CameraShakes::Type> ExplosionShake;
    int32 MaxDepth;

    void GetRandomSpaceInRadius(FVector& Location);
    void TraceForVoxelWorld(class ABP_HydroVoxelWorld_C*& VoxWorld);
    void CreateHoles(int32 Amount);
    void FindOverlappingActors(TArray<class ABP_ParentItem_C*>& Items);
    void SpawnScrap(FVector Location, float Size);
    void CheckOverlaps();
    void LoopForItems(class AActor* Object);
    void Explode();
    void ExecuteUbergraph_AC_Explosive(int32 EntryPoint);
};

#endif
