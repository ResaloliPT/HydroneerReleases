#ifndef UE4SS_SDK_BP_ConstructionCrate_HPP
#define UE4SS_SDK_BP_ConstructionCrate_HPP

class ABP_ConstructionCrate_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* ConstructionIcon;                                     // 0x0458 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0460 (size: 0x8)
    TEnumAsByte<E_ConstructionStoreType::Type> CrateType;                             // 0x0468 (size: 0x1)

    void SetUpCrate();
    void UserConstructionScript();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ReceiveDestroyed();
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ConstructionCrate(int32 EntryPoint);
}; // Size: 0x469

#endif
