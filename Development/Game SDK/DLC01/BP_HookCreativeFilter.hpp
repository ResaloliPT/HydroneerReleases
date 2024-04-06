#ifndef UE4SS_SDK_BP_HookCreativeFilter_HPP
#define UE4SS_SDK_BP_HookCreativeFilter_HPP

class ABP_HookCreativeFilter_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void ExecuteUbergraph_BP_HookCreativeFilter(int32 EntryPoint);
}; // Size: 0x4C0

#endif
