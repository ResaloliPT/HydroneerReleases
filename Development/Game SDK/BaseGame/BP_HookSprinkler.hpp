#ifndef UE4SS_SDK_BP_HookSprinkler_HPP
#define UE4SS_SDK_BP_HookSprinkler_HPP

class ABP_HookSprinkler_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x04C8 (size: 0x8)
    float SphereRadius;                                                               // 0x04D0 (size: 0x4)
    FTimerHandle SprinklerTimer;                                                      // 0x04D8 (size: 0x8)

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
}; // Size: 0x4E0

#endif
