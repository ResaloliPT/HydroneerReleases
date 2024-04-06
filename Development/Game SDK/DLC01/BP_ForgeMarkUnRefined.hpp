#ifndef UE4SS_SDK_BP_ForgeMarkUnRefined_HPP
#define UE4SS_SDK_BP_ForgeMarkUnRefined_HPP

class ABP_ForgeMarkUnRefined_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0458 (size: 0x8)
    class UC_LiftPoint_C* C_LiftPoint;                                                // 0x0460 (size: 0x8)
    bool InteractedWith?;                                                             // 0x0468 (size: 0x1)
    float RefinedAmount;                                                              // 0x046C (size: 0x4)

    void TraceForMark(FVector Location, bool& NoMarkFound?);
    void UpdateScale();
    void SpawnNewBuffer();
    void OverrideCraneLifted();
    void UpdateRefinedAmount(float RefinedAmount);
    void ActorLoaded();
    void ExecuteUbergraph_BP_ForgeMarkUnRefined(int32 EntryPoint);
}; // Size: 0x470

#endif
