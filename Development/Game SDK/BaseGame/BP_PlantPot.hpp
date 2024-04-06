#ifndef UE4SS_SDK_BP_PlantPot_HPP
#define UE4SS_SDK_BP_PlantPot_HPP

class ABP_PlantPot_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)

    void ItemStored(class ABP_ParentItem_C* Item);
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void HasNoWater();
    void HasWater();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ExecuteUbergraph_BP_PlantPot(int32 EntryPoint);
}; // Size: 0x490

#endif
