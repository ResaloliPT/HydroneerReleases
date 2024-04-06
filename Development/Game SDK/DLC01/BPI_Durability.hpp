#ifndef UE4SS_SDK_BPI_Durability_HPP
#define UE4SS_SDK_BPI_Durability_HPP

class IBPI_Durability_C : public IInterface
{

    void ReturnDurability(float DurabilityAmount);
    void FindDurability(class ABP_ParentItem_C* Item);
    void DoneRepair();
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
}; // Size: 0x28

#endif
