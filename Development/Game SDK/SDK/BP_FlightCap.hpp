#ifndef UE4SS_SDK_BP_FlightCap_HPP
#define UE4SS_SDK_BP_FlightCap_HPP

class ABP_FlightCap_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_FlightCap(int32 EntryPoint);
};

#endif
