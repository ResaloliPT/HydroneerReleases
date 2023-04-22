#ifndef UE4SS_SDK_BP_MiningHelmet_HPP
#define UE4SS_SDK_BP_MiningHelmet_HPP

class ABP_MiningHelmet_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URectLightComponent* RectLight;
    class URectLightComponent* RectLight1;
    float Timeline_0_NewTrack_0_D5296FD143D2ED95CD7316B9842BF492;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D5296FD143D2ED95CD7316B9842BF492;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* DynamicMaterial;
    bool On?;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ExecuteUbergraph_BP_MiningHelmet(int32 EntryPoint);
};

#endif
