#ifndef UE4SS_SDK_BP_ParentPipeIntake_HPP
#define UE4SS_SDK_BP_ParentPipeIntake_HPP

class ABP_ParentPipeIntake_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Clip4;                                                // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Clip3;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* Clip2;                                                // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* Clip1;                                                // 0x04E0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04E8 (size: 0x8)
    FTimerHandle LiquidFlowHandle;                                                    // 0x04F0 (size: 0x8)
    class UAudioComponent* IntakeSound;                                               // 0x04F8 (size: 0x8)
    float BasePressure;                                                               // 0x0500 (size: 0x4)
    bool Dev?;                                                                        // 0x0504 (size: 0x1)
    class USoundBase* IntakeSoundFX;                                                  // 0x0508 (size: 0x8)

    void TrySetDevMaterial();
    void CreateProxyItem();
    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void LiquidFlow();
    void OverridePickedup();
    void LoadCompleted();
    void FlashCollisions();
    void ExecuteUbergraph_BP_ParentPipeIntake(int32 EntryPoint);
}; // Size: 0x510

#endif
