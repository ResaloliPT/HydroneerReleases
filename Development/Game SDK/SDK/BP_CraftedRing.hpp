#ifndef UE4SS_SDK_BP_CraftedRing_HPP
#define UE4SS_SDK_BP_CraftedRing_HPP

class ABP_CraftedRing_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetRingMesh();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_CraftedRing(int32 EntryPoint);
};

#endif
