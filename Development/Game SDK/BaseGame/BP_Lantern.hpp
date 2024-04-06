#ifndef UE4SS_SDK_BP_Lantern_HPP
#define UE4SS_SDK_BP_Lantern_HPP

class ABP_Lantern_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0458 (size: 0x8)
    float Timeline_1_NewTrack_0_00491F854B0649577EAED7B7FFAF6AED;                     // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_00491F854B0649577EAED7B7FFAF6AED; // 0x0464 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0468 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0470 (size: 0x8)
    bool On?;                                                                         // 0x0478 (size: 0x1)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void CreateProxyItem();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void HasNoWater();
    void HasWater();
    void OverrideLoaded();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ToggleLight(bool TurnOn?);
    void ExecuteUbergraph_BP_Lantern(int32 EntryPoint);
}; // Size: 0x479

#endif
