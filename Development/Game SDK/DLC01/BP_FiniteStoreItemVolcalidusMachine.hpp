#ifndef UE4SS_SDK_BP_FiniteStoreItemVolcalidusMachine_HPP
#define UE4SS_SDK_BP_FiniteStoreItemVolcalidusMachine_HPP

class ABP_FiniteStoreItemVolcalidusMachine_C : public ABP_FiniteStoreItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    TArray<TEnumAsByte<E_Buffs::Type>> Buffs;                                         // 0x0258 (size: 0x10)
    TEnumAsByte<E_CurrencyType::Type> Currency Type_0;                                // 0x0268 (size: 0x1)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FiniteStoreItemVolcalidusMachine(int32 EntryPoint);
}; // Size: 0x269

#endif
