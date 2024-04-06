#ifndef UE4SS_SDK_BP_WorldBounds_HPP
#define UE4SS_SDK_BP_WorldBounds_HPP

class ABP_WorldBounds_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Spawn;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_ParentItem_C*> Items;

    void GetHitInBounds(const FHitResult& Hit, FVector& Location);
    void IsActorInBounds(class AActor* Actor, bool& Result);
    void Relocate(class AActor* Actor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_WorldBounds(int32 EntryPoint);
};

#endif
