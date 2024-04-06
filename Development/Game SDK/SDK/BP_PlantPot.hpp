#ifndef UE4SS_SDK_BP_PlantPot_HPP
#define UE4SS_SDK_BP_PlantPot_HPP

class ABP_PlantPot_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void ItemStored(class ABP_ParentItem_C* Item);
    void WaterParticleHit();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void HasNoWater();
    void HasWater();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ExecuteUbergraph_BP_PlantPot(int32 EntryPoint);
};

#endif
