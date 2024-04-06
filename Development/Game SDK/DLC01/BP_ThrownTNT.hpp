#ifndef UE4SS_SDK_BP_ThrownTNT_HPP
#define UE4SS_SDK_BP_ThrownTNT_HPP

class ABP_ThrownTNT_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0458 (size: 0x8)
    class UAC_Explosive_C* AC_Explosive;                                              // 0x0460 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0468 (size: 0x8)
    TArray<class AActor*> Items To Delete;                                            // 0x0470 (size: 0x10)
    float TimeToExplode;                                                              // 0x0480 (size: 0x4)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void UserConstructionScript();
    void Explode Timer();
    void Throw(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_ThrownTNT(int32 EntryPoint);
}; // Size: 0x484

#endif
