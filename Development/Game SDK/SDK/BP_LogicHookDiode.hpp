#ifndef UE4SS_SDK_BP_LogicHookDiode_HPP
#define UE4SS_SDK_BP_LogicHookDiode_HPP

class ABP_LogicHookDiode_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPrimitiveComponent* AllowedEntryPoint;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePartHooked(class ABP_ParentBuild_C* HookedTo);
    void LoadCompleted();
    void ExecuteUbergraph_BP_LogicHookDiode(int32 EntryPoint);
};

#endif
