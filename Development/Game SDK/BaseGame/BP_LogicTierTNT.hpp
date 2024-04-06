#ifndef UE4SS_SDK_BP_LogicTierTNT_HPP
#define UE4SS_SDK_BP_LogicTierTNT_HPP

class ABP_LogicTierTNT_C : public ABP_ParentLogicExplosives_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* SM_LogicExplosives;                                   // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* TierSign;                                             // 0x04E8 (size: 0x8)
    int32 Tier;                                                                       // 0x04F0 (size: 0x4)

    void SetUpLogicTier();
    void UserConstructionScript();
    void ActorLoaded();
    void ExecuteUbergraph_BP_LogicTierTNT(int32 EntryPoint);
}; // Size: 0x4F4

#endif
