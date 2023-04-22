#ifndef UE4SS_SDK_BP_FireflyJar_HPP
#define UE4SS_SDK_BP_FireflyJar_HPP

class ABP_FireflyJar_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UNiagaraComponent* Particles;
    class UPointLightComponent* PointLight;
    float Timeline_1_NewTrack_2_B89785ED4BA71D7F05CB3A80FE1B098D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_B89785ED4BA71D7F05CB3A80FE1B098D;
    class UTimelineComponent* Timeline_1;
    class UMaterialInstanceDynamic* DynamicMaterial;
    bool On?;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void CreateProxyItem();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void OverrideLoaded();
    void ToggleLight(bool TurnOn?, bool PlayAnim?);
    void ExecuteUbergraph_BP_FireflyJar(int32 EntryPoint);
};

#endif
