#ifndef UE4SS_SDK_BP_Lantern_HPP
#define UE4SS_SDK_BP_Lantern_HPP

class ABP_Lantern_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    float Timeline_1_NewTrack_0_00491F854B0649577EAED7B7FFAF6AED;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_00491F854B0649577EAED7B7FFAF6AED;
    class UTimelineComponent* Timeline_1;
    class UMaterialInstanceDynamic* DynamicMaterial;
    bool On?;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void CreateProxyItem();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void OverrideLoaded();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ToggleLight(bool TurnOn?);
    void ExecuteUbergraph_BP_Lantern(int32 EntryPoint);
};

#endif
