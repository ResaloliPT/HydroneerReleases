#ifndef UE4SS_SDK_BP_SoupBowl_HPP
#define UE4SS_SDK_BP_SoupBowl_HPP

class ABP_SoupBowl_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LiquidMesh;
    class UStaticMeshComponent* VegMesh2;
    class UStaticMeshComponent* VegMesh1;
    class UStaticMeshComponent* VegMesh0;
    TArray<class TSubclassOf<ABP_ParentCutVeg_C>> DebugToppers;

    void SetTopperScale(float Weight, class UStaticMeshComponent* TopperMesh);
    void RandomiseContents();
    void EmptySoup();
    void SetSoup(const TArray<FS_CookingPotContents>& CookingPotContent);
    void ActorLoaded();
    void ExecuteUbergraph_BP_SoupBowl(int32 EntryPoint);
};

#endif
