#ifndef UE4SS_SDK_BP_MagnifyingGlass_HPP
#define UE4SS_SDK_BP_MagnifyingGlass_HPP

class ABP_MagnifyingGlass_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    FTimerHandle TraceTimerHandle;

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverridePickedup();
    void LineTracer();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ReturnDurability(float DurabilityAmount);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_MagnifyingGlass(int32 EntryPoint);
};

#endif
