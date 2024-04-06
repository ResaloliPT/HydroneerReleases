#ifndef UE4SS_SDK_BP_RelicSpawner_HPP
#define UE4SS_SDK_BP_RelicSpawner_HPP

class ABP_RelicSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TSubclassOf<class ABP_RelicParent_C> RelicToSpawn;                                // 0x0240 (size: 0x8)
    bool AlreadySpawned?;                                                             // 0x0248 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorPreSave();
    void ActorSaved();
    void SpawnRelic();
    void ActorLoaded();
    void ExecuteUbergraph_BP_RelicSpawner(int32 EntryPoint);
}; // Size: 0x249

#endif
