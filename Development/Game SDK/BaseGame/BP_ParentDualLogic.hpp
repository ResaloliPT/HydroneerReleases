#ifndef UE4SS_SDK_BP_ParentDualLogic_HPP
#define UE4SS_SDK_BP_ParentDualLogic_HPP

class ABP_ParentDualLogic_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x04C0 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C8 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04D0 (size: 0x8)
    FString LogicB;                                                                   // 0x04D8 (size: 0x10)

    void AddZeros(FString Logic, FString& Output);
    void LogicIn(class USceneComponent* Component, FString Logic);
    void ExecuteUbergraph_BP_ParentDualLogic(int32 EntryPoint);
}; // Size: 0x4E8

#endif
