#ifndef UE4SS_SDK_BP_MagnifyingGlass_HPP
#define UE4SS_SDK_BP_MagnifyingGlass_HPP

class ABP_MagnifyingGlass_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0458 (size: 0x8)
    FTimerHandle TraceTimerHandle;                                                    // 0x0460 (size: 0x8)

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverridePickedup();
    void LineTracer();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ReturnDurability(float DurabilityAmount);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_MagnifyingGlass(int32 EntryPoint);
}; // Size: 0x468

#endif
