#ifndef UE4SS_SDK_AC_Finite_HPP
#define UE4SS_SDK_AC_Finite_HPP

class UAC_Finite_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    int32 Uses;                                                                       // 0x00B8 (size: 0x4)

    void Used(int32 Amount);
    void AddUses(int32 AmountToAdd);
    void ExecuteUbergraph_AC_Finite(int32 EntryPoint);
}; // Size: 0xBC

#endif
