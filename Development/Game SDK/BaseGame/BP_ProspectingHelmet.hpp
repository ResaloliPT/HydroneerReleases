#ifndef UE4SS_SDK_BP_ProspectingHelmet_HPP
#define UE4SS_SDK_BP_ProspectingHelmet_HPP

class ABP_ProspectingHelmet_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Cog2;                                                 // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Cog1;                                                 // 0x04A0 (size: 0x8)
    class USceneComponent* ToolEndPoint;                                              // 0x04A8 (size: 0x8)
    class USceneComponent* ScanningLocation;                                          // 0x04B0 (size: 0x8)
    class ABP_OreVein_C* VeinTracking;                                                // 0x04B8 (size: 0x8)
    float Delay;                                                                      // 0x04C0 (size: 0x4)
    float DelayDec;                                                                   // 0x04C4 (size: 0x4)

    void TraceForVeins(class ABP_OreVein_C*& VeinFound);
    void ReceiveDestroyed();
    void TraceTimer();
    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ProspectingHelmet(int32 EntryPoint);
}; // Size: 0x4C8

#endif
