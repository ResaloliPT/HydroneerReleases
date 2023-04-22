#ifndef UE4SS_SDK_BP_CraftedNecklace_HPP
#define UE4SS_SDK_BP_CraftedNecklace_HPP

class ABP_CraftedNecklace_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetNecklaceMesh();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_CraftedNecklace(int32 EntryPoint);
};

#endif
