#ifndef UE4SS_SDK_BP_RelicSpawner_HPP
#define UE4SS_SDK_BP_RelicSpawner_HPP

class ABP_RelicSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class USphereComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class ABP_RelicParent_C> RelicToSpawn;
    bool AlreadySpawned?;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorPreSave();
    void ActorSaved();
    void SpawnRelic();
    void ActorLoaded();
    void ExecuteUbergraph_BP_RelicSpawner(int32 EntryPoint);
};

#endif
