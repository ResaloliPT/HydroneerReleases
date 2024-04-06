#ifndef UE4SS_SDK_BP_NPC_Volcalidus_HPP
#define UE4SS_SDK_BP_NPC_Volcalidus_HPP

class ABP_NPC_Volcalidus_C : public ABP_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A60 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* SnowballMesh;                                         // 0x0A70 (size: 0x8)
    class APawn* SnowballTarget;                                                      // 0x0A78 (size: 0x8)
    bool CanMakeSnowball?;                                                            // 0x0A80 (size: 0x1)

    void ThrowSnowball();
    void MakeSnowball();
    void UserConstructionScript();
    void OnNotifyEnd_E90BEEF84B9251E7DE61FEAD45D3AC5C(FName NotifyName);
    void OnNotifyBegin_E90BEEF84B9251E7DE61FEAD45D3AC5C(FName NotifyName);
    void OnInterrupted_E90BEEF84B9251E7DE61FEAD45D3AC5C(FName NotifyName);
    void OnBlendOut_E90BEEF84B9251E7DE61FEAD45D3AC5C(FName NotifyName);
    void OnCompleted_E90BEEF84B9251E7DE61FEAD45D3AC5C(FName NotifyName);
    void OnNotifyEnd_51619ED54F7037E9BB6B97ADEFD62878(FName NotifyName);
    void OnNotifyBegin_51619ED54F7037E9BB6B97ADEFD62878(FName NotifyName);
    void OnInterrupted_51619ED54F7037E9BB6B97ADEFD62878(FName NotifyName);
    void OnBlendOut_51619ED54F7037E9BB6B97ADEFD62878(FName NotifyName);
    void OnCompleted_51619ED54F7037E9BB6B97ADEFD62878(FName NotifyName);
    void HitFlinch(class APawn* Instigator);
    void ResetLookat();
    void ExecuteUbergraph_BP_NPC_Volcalidus(int32 EntryPoint);
}; // Size: 0xA81

#endif
