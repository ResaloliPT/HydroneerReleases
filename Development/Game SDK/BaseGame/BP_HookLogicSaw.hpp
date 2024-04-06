#ifndef UE4SS_SDK_BP_HookLogicSaw_HPP
#define UE4SS_SDK_BP_HookLogicSaw_HPP

class ABP_HookLogicSaw_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x04C0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04C8 (size: 0x8)
    class USceneComponent* OutputLoc;                                                 // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* SawMesh;                                              // 0x04D8 (size: 0x8)
    class UBoxComponent* SawBox;                                                      // 0x04E0 (size: 0x8)
    int32 LogicValue;                                                                 // 0x04E8 (size: 0x4)
    FTimerHandle SpinTimerHandle;                                                     // 0x04F0 (size: 0x8)
    class UAudioComponent* SawSound;                                                  // 0x04F8 (size: 0x8)
    TArray<class ABP_ParentResource_C*> RecentlyCutResources;                         // 0x0500 (size: 0x10)

    void CreateNewResource(class ABP_ParentResource_C* Object, float Weight, class ABP_ParentResource_C*& ResourceCreated);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void BndEvt__BP_HookLogicSaw_SawBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLogicIn(FString Logic);
    void OverridePickedup();
    void AnimateSaw(bool Start?);
    void SpinTimer();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ActorLoaded();
    void EnableSplitOnItems();
    void OverrideParentNoWater();
    void ExecuteUbergraph_BP_HookLogicSaw(int32 EntryPoint);
}; // Size: 0x510

#endif
