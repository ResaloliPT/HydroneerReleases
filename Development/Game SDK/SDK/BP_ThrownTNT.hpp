#ifndef UE4SS_SDK_BP_ThrownTNT_HPP
#define UE4SS_SDK_BP_ThrownTNT_HPP

class ABP_ThrownTNT_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UAC_Explosive_C* AC_Explosive;
    class UParticleSystemComponent* ParticleSystem;
    TArray<class AActor*> Items To Delete;
    float TimeToExplode;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void UserConstructionScript();
    void Explode Timer();
    void Throw(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_ThrownTNT(int32 EntryPoint);
};

#endif
