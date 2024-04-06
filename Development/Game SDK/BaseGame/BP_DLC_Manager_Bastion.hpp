#ifndef UE4SS_SDK_BP_DLC_Manager_Bastion_HPP
#define UE4SS_SDK_BP_DLC_Manager_Bastion_HPP

class ABP_DLC_Manager_Bastion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TSoftObjectPtr<UWorld> DLC1_Bastion;                                              // 0x0230 (size: 0x28)

    void ReceiveBeginPlay();
    void LoadDLC1Bastion();
    void ExecuteUbergraph_BP_DLC_Manager_Bastion(int32 EntryPoint);
}; // Size: 0x258

#endif
