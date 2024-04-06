#ifndef UE4SS_SDK_BP_SoupBowl_HPP
#define UE4SS_SDK_BP_SoupBowl_HPP

class ABP_SoupBowl_C : public ABP_ParentCraftedResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* VegMesh2;                                             // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* VegMesh1;                                             // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* VegMesh0;                                             // 0x04F0 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentCutVeg_C>> DebugToppers;                       // 0x04F8 (size: 0x10)

    void SetTopperScale(float Weight, class UStaticMeshComponent* TopperMesh);
    void RandomiseContents();
    void EmptySoup();
    void SetSoup(const TArray<FS_CookingPotContents>& CookingPotContent);
    void ActorLoaded();
    void ExecuteUbergraph_BP_SoupBowl(int32 EntryPoint);
}; // Size: 0x508

#endif
