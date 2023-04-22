#ifndef UE4SS_SDK_BP_ParentHookIntakeBooster_HPP
#define UE4SS_SDK_BP_ParentHookIntakeBooster_HPP

class ABP_ParentHookIntakeBooster_C : public ABP_ParentHook_C
{
    float PressureBoost;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
};

#endif
