#ifndef UE4SS_SDK_BP_ParentCraftedResource_HPP
#define UE4SS_SDK_BP_ParentCraftedResource_HPP

class ABP_ParentCraftedResource_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    TArray<FS_ResourceClassAndWeight> CraftedMaterials;                               // 0x0468 (size: 0x10)
    float PercentModifyer;                                                            // 0x0478 (size: 0x4)
    TMap<class TSubclassOf<ABP_ParentResource_C>, class UMaterialInterface*> CraftedMaterialMap; // 0x0480 (size: 0x50)

    void UpdateDescription();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentCraftedResource(int32 EntryPoint);
}; // Size: 0x4D0

#endif
