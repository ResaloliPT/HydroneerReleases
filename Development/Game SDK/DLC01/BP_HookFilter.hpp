#ifndef UE4SS_SDK_BP_HookFilter_HPP
#define UE4SS_SDK_BP_HookFilter_HPP

class ABP_HookFilter_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UAC_Durability_C* AC_Durability;                                            // 0x04C0 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void UserConstructionScript();
    void ReturnDurability(float DurabilityAmount);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ExecuteUbergraph_BP_HookFilter(int32 EntryPoint);
}; // Size: 0x4C8

#endif
