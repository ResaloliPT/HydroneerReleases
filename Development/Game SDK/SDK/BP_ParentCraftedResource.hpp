#ifndef UE4SS_SDK_BP_ParentCraftedResource_HPP
#define UE4SS_SDK_BP_ParentCraftedResource_HPP

class ABP_ParentCraftedResource_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FS_ResourceClassAndWeight> CraftedMaterials;
    float PercentModifyer;
    TMap<class TSubclassOf<ABP_ParentResource_C>, class UMaterialInterface*> CraftedMaterialMap;

    void UpdateDescription();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentCraftedResource(int32 EntryPoint);
};

#endif
