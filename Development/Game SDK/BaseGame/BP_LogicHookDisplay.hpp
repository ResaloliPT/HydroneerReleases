#ifndef UE4SS_SDK_BP_LogicHookDisplay_HPP
#define UE4SS_SDK_BP_LogicHookDisplay_HPP

class ABP_LogicHookDisplay_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x04C0 (size: 0x8)

    void TraceForParents();
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePickedup();
    void ExecuteUbergraph_BP_LogicHookDisplay(int32 EntryPoint);
}; // Size: 0x4C8

#endif
