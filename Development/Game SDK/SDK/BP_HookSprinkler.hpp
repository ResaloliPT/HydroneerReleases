#ifndef UE4SS_SDK_BP_HookSprinkler_HPP
#define UE4SS_SDK_BP_HookSprinkler_HPP

class ABP_HookSprinkler_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* StaticMesh1;
    float SphereRadius;
    FTimerHandle SprinklerTimer;

    void SprinklerWater();
    void ToggleSprinklerTimer(bool On?);
    void SpinActor();
    void UpdateSpreadSize(float InSphereRadius);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePickedup();
    void OverrideStartPlacing();
    void OverrideParentNoWater();
    void OverrideHookCheckRot();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HookSprinkler(int32 EntryPoint);
};

#endif
