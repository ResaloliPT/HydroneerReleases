#ifndef UE4SS_SDK_BP_FiniteStoreItemCrate_HPP
#define UE4SS_SDK_BP_FiniteStoreItemCrate_HPP

class ABP_FiniteStoreItemCrate_C : public ABP_FiniteStoreItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    TEnumAsByte<E_ConstructionStoreType::Type> CrateType;                             // 0x0258 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FiniteStoreItemCrate(int32 EntryPoint);
}; // Size: 0x259

#endif
