#ifndef UE4SS_SDK_BP_HookPressureGauge_HPP
#define UE4SS_SDK_BP_HookPressureGauge_HPP

class ABP_HookPressureGauge_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePickedup();
    void OverrideParentNoWater();
    void ExecuteUbergraph_BP_HookPressureGauge(int32 EntryPoint);
};

#endif
