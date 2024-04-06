#ifndef UE4SS_SDK_BP_ParentPipeIntake_HPP
#define UE4SS_SDK_BP_ParentPipeIntake_HPP

class ABP_ParentPipeIntake_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Clip4;
    class UStaticMeshComponent* Clip3;
    class UStaticMeshComponent* Clip2;
    class UStaticMeshComponent* Clip1;
    class USceneComponent* Scene;
    FTimerHandle WaterFlowHandle;
    class UAudioComponent* IntakeSound;
    float BasePressure;
    bool Dev?;

    void TrySetDevMaterial();
    void CreateProxyItem();
    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void WaterFlow();
    void OverridePickedup();
    void LoadCompleted();
    void ExecuteUbergraph_BP_ParentPipeIntake(int32 EntryPoint);
};

#endif
