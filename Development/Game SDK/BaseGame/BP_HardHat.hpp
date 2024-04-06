#ifndef UE4SS_SDK_BP_HardHat_HPP
#define UE4SS_SDK_BP_HardHat_HPP

class ABP_HardHat_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)

    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_HardHat(int32 EntryPoint);
}; // Size: 0x498

#endif
