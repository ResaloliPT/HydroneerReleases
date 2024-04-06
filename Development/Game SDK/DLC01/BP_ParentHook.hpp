#ifndef UE4SS_SDK_BP_ParentHook_HPP
#define UE4SS_SDK_BP_ParentHook_HPP

class ABP_ParentHook_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class ABP_ParentBuild_C* HookedParent;                                            // 0x0490 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentBuild_C>> AllowedToHookTo;                     // 0x0498 (size: 0x10)
    FVector HookParentTraceAdditional;                                                // 0x04A8 (size: 0xC)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void PartHooked(class ABP_ParentBuild_C* HookedTo);
    void Unhook from Parent();
    void TraceForParents();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void OverrideParentNoWater();
    void OverridePartHooked(class ABP_ParentBuild_C* HookedTo);
    void OverrideLogicIn(FString Logic);
    void OverrideHookCheckRot();
    void LoadCompleted();
    void ReceiveDestroyed();
    void OverrideParentPickedUp();
    void OverrideParentPlacedDown();
    void ExecuteUbergraph_BP_ParentHook(int32 EntryPoint);
}; // Size: 0x4B4

#endif
