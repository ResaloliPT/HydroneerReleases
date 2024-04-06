#ifndef UE4SS_SDK_AC_Durability_HPP
#define UE4SS_SDK_AC_Durability_HPP

class UAC_Durability_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Durability;

    void Repaired(class ABP_ParentItem_C* RepairingTool);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void ExecuteUbergraph_AC_Durability(int32 EntryPoint);
};

#endif
