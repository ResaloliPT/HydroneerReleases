#ifndef UE4SS_SDK_AC_Finite_HPP
#define UE4SS_SDK_AC_Finite_HPP

class UAC_Finite_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Uses;

    void Used(int32 Amount);
    void AddUses(int32 AmountToAdd);
    void ExecuteUbergraph_AC_Finite(int32 EntryPoint);
};

#endif
