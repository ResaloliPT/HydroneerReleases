#ifndef UE4SS_SDK_BP_CraftedNecklace_HPP
#define UE4SS_SDK_BP_CraftedNecklace_HPP

class ABP_CraftedNecklace_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)

    void SetNecklaceMesh();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_CraftedNecklace(int32 EntryPoint);
}; // Size: 0x4D8

#endif
