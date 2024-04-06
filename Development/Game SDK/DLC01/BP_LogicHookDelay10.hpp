#ifndef UE4SS_SDK_BP_LogicHookDelay10_HPP
#define UE4SS_SDK_BP_LogicHookDelay10_HPP

class ABP_LogicHookDelay10_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    bool DelayOver?;                                                                  // 0x04C0 (size: 0x1)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void WaitForDelay(class ABP_ParentLogic_C* Logic, class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicHookDelay10(int32 EntryPoint);
}; // Size: 0x4C1

#endif
