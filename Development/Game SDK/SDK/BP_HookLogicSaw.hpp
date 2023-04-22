#ifndef UE4SS_SDK_BP_HookLogicSaw_HPP
#define UE4SS_SDK_BP_HookLogicSaw_HPP

class ABP_HookLogicSaw_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Nub;
    class UBoxComponent* X+Box;
    class USceneComponent* OutputLoc;
    class UStaticMeshComponent* SawMesh;
    class UBoxComponent* SawBox;
    int32 LogicValue;
    FTimerHandle SpinTimerHandle;
    class UAudioComponent* SawSound;

    void CreateNewResource(class ABP_ParentResource_C* Object, float Weight, class ABP_ParentResource_C*& ResourceCreated);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void BndEvt__BP_HookLogicSaw_SawBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideLogicIn(FString Logic);
    void OverridePickedup();
    void AnimateSaw(bool Start?);
    void SpinTimer();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ActorLoaded();
    void ExecuteUbergraph_BP_HookLogicSaw(int32 EntryPoint);
};

#endif
