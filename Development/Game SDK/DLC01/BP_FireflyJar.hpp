#ifndef UE4SS_SDK_BP_FireflyJar_HPP
#define UE4SS_SDK_BP_FireflyJar_HPP

class ABP_FireflyJar_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UNiagaraComponent* Particles;                                               // 0x0460 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0468 (size: 0x8)
    float Timeline_1_NewTrack_2_B89785ED4BA71D7F05CB3A80FE1B098D;                     // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_B89785ED4BA71D7F05CB3A80FE1B098D; // 0x0474 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0478 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0480 (size: 0x8)
    bool On?;                                                                         // 0x0488 (size: 0x1)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void CreateProxyItem();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void HasNoWater();
    void HasWater();
    void OverrideLoaded();
    void ToggleLight(bool TurnOn?, bool PlayAnim?);
    void ExecuteUbergraph_BP_FireflyJar(int32 EntryPoint);
}; // Size: 0x489

#endif
