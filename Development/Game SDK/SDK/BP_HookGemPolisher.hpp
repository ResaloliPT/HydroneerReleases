#ifndef UE4SS_SDK_BP_HookGemPolisher_HPP
#define UE4SS_SDK_BP_HookGemPolisher_HPP

class ABP_HookGemPolisher_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Drum2;
    class UStaticMeshComponent* Drum1;
    class USceneComponent* DrumRoot2;
    class USceneComponent* DrumRoot1;
    class UBoxComponent* PolishBox;
    float ShredderMaximumWeight;

    void TogglePolish(bool Polish?);
    void SpawnGem(TSubclassOf<class ABP_ParentResource_C> GemClass, float Weight, const class ABP_ParentItem_C*& OldUncut);
    void PolishTimer();
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePickedup();
    void OverrideParentNoWater();
    void BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HookGemPolisher(int32 EntryPoint);
};

#endif
