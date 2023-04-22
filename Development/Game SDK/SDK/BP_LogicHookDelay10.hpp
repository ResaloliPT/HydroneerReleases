#ifndef UE4SS_SDK_BP_LogicHookDelay10_HPP
#define UE4SS_SDK_BP_LogicHookDelay10_HPP

class ABP_LogicHookDelay10_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool DelayOver?;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void WaitForDelay(class ABP_ParentLogic_C* Logic, class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicHookDelay10(int32 EntryPoint);
};

#endif
