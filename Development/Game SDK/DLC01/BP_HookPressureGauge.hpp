#ifndef UE4SS_SDK_BP_HookPressureGauge_HPP
#define UE4SS_SDK_BP_HookPressureGauge_HPP

class ABP_HookPressureGauge_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x04C0 (size: 0x8)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void UserConstructionScript();
    void OverridePickedup();
    void OverrideParentNoWater();
    void ExecuteUbergraph_BP_HookPressureGauge(int32 EntryPoint);
}; // Size: 0x4C8

#endif
