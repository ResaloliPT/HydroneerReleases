#ifndef UE4SS_SDK_BP_WorldBounds_HPP
#define UE4SS_SDK_BP_WorldBounds_HPP

class ABP_WorldBounds_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Spawn;                                                // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TArray<class ABP_ParentItem_C*> Items;                                            // 0x0240 (size: 0x10)

    void GetHitInBounds(const FHitResult& Hit, FVector& Location);
    void IsActorInBounds(class AActor* Actor, bool& Result);
    void Relocate(class AActor* Actor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_WorldBounds(int32 EntryPoint);
}; // Size: 0x250

#endif
