#ifndef UE4SS_SDK_BP_RelicCompass_HPP
#define UE4SS_SDK_BP_RelicCompass_HPP

class ABP_RelicCompass_C : public ABP_RelicParent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UStaticMeshComponent* Needle;                                               // 0x0448 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0450 (size: 0x8)

    void UpdateCompassDir();
    void OverridePickedup();
    void ReceiveBeginPlay();
    void OverrideLoaded();
    void Update();
    void LockPhysics();
    void ExecuteUbergraph_BP_RelicCompass(int32 EntryPoint);
}; // Size: 0x458

#endif
