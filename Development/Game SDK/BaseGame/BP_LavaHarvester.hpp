#ifndef UE4SS_SDK_BP_LavaHarvester_HPP
#define UE4SS_SDK_BP_LavaHarvester_HPP

class ABP_LavaHarvester_C : public ABP_ParentHarvester_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UStaticMeshComponent* Chomp1;                                               // 0x0548 (size: 0x8)
    class USceneComponent* ChompRoot1;                                                // 0x0550 (size: 0x8)
    class UStaticMeshComponent* Chomp;                                                // 0x0558 (size: 0x8)
    class USceneComponent* ChompRoot;                                                 // 0x0560 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x0568 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0570 (size: 0x8)
    class UStaticMeshComponent* MiddleDrum;                                           // 0x0578 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0580 (size: 0x8)

    void ToggleHarvester(bool On?);
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void ExecuteUbergraph_BP_LavaHarvester(int32 EntryPoint);
}; // Size: 0x588

#endif
