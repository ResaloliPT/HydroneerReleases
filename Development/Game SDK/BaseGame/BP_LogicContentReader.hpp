#ifndef UE4SS_SDK_BP_LogicContentReader_HPP
#define UE4SS_SDK_BP_LogicContentReader_HPP

class ABP_LogicContentReader_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C0 (size: 0x8)
    FTimerHandle ScanTimerHandle;                                                     // 0x04C8 (size: 0x8)

    void FindActorsToIgnore(TArray<class AActor*>& ToIgnore);
    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideLoaded();
    void OverridePickedup();
    void ScanTimer();
    void ExecuteUbergraph_BP_LogicContentReader(int32 EntryPoint);
}; // Size: 0x4D0

#endif
