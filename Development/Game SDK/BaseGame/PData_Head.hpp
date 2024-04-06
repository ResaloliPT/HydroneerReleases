#ifndef UE4SS_SDK_PData_Head_HPP
#define UE4SS_SDK_PData_Head_HPP

class UPData_Head_C : public UPData_Customizable_Generic_C
{
    TArray<class UPData_Hair_C*> Hair;                                                // 0x0098 (size: 0x10)
    TArray<class UPData_Beard_C*> Beards;                                             // 0x00A8 (size: 0x10)

}; // Size: 0xB8

#endif
