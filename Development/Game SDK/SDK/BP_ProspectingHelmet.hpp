#ifndef UE4SS_SDK_BP_ProspectingHelmet_HPP
#define UE4SS_SDK_BP_ProspectingHelmet_HPP

class ABP_ProspectingHelmet_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cog2;
    class UStaticMeshComponent* Cog1;
    class USceneComponent* ToolEndPoint;
    class USceneComponent* ScanningLocation;
    class ABP_OreVein_C* VeinTracking;
    float Delay;
    float DelayDec;

    void TraceForVeins(class ABP_OreVein_C*& VeinFound);
    void ReceiveDestroyed();
    void TraceTimer();
    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ProspectingHelmet(int32 EntryPoint);
};

#endif
