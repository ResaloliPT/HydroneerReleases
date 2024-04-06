#ifndef UE4SS_SDK_BP_ParentHookIntakeBooster_HPP
#define UE4SS_SDK_BP_ParentHookIntakeBooster_HPP

class ABP_ParentHookIntakeBooster_C : public ABP_ParentHook_C
{
    float PressureBoost;                                                              // 0x04B4 (size: 0x4)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
}; // Size: 0x4B8

#endif
