#ifndef UE4SS_SDK_BP_ParentHook_HPP
#define UE4SS_SDK_BP_ParentHook_HPP

class ABP_ParentHook_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ParentBuild_C* HookedParent;
    TArray<class TSubclassOf<ABP_ParentBuild_C>> AllowedToHookTo;
    FVector HookParentTraceAdditional;

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
    void ExecuteUbergraph_BP_ParentHook(int32 EntryPoint);
};

#endif
