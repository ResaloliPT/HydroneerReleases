#ifndef UE4SS_SDK_BP_LogicHookFlipFlop_HPP
#define UE4SS_SDK_BP_LogicHookFlipFlop_HPP

class ABP_LogicHookFlipFlop_C : public ABP_ParentHook_C
{
    bool Flip?;                                                                       // 0x04B4 (size: 0x1)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
}; // Size: 0x4B5

#endif
