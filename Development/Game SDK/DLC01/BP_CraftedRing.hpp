#ifndef UE4SS_SDK_BP_CraftedRing_HPP
#define UE4SS_SDK_BP_CraftedRing_HPP

class ABP_CraftedRing_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)

    void SetRingMesh();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_CraftedRing(int32 EntryPoint);
}; // Size: 0x4D8

#endif
