#ifndef UE4SS_SDK_BP_MiningHelmet_HPP
#define UE4SS_SDK_BP_MiningHelmet_HPP

class ABP_MiningHelmet_C : public ABP_ParentHat_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0498 (size: 0x8)
    class URectLightComponent* RectLight1;                                            // 0x04A0 (size: 0x8)
    float Timeline_0_NewTrack_0_D5296FD143D2ED95CD7316B9842BF492;                     // 0x04A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D5296FD143D2ED95CD7316B9842BF492; // 0x04AC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x04B0 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x04B8 (size: 0x8)
    bool On?;                                                                         // 0x04C0 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void HasNoWater();
    void HasWater();
    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ExecuteUbergraph_BP_MiningHelmet(int32 EntryPoint);
}; // Size: 0x4C1

#endif
