#ifndef UE4SS_SDK_BP_LogicHookFlipFlop_HPP
#define UE4SS_SDK_BP_LogicHookFlipFlop_HPP

class ABP_LogicHookFlipFlop_C : public ABP_ParentHook_C
{
    bool Flip?;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
};

#endif
