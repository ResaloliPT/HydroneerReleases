#ifndef UE4SS_SDK_BP_Torch_HPP
#define UE4SS_SDK_BP_Torch_HPP

class ABP_Torch_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0458 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0460 (size: 0x8)
    float Timeline_1_NewTrack_0_D6D81D60447F11E4F4182FBDFB1DEB7F;                     // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_D6D81D60447F11E4F4182FBDFB1DEB7F; // 0x046C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0470 (size: 0x8)
    bool On?;                                                                         // 0x0478 (size: 0x1)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void CreateProxyItem();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void HasNoWater();
    void HasWater();
    void OverrideLoaded();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ToggleLight(bool TurnOn?);
    void ExecuteUbergraph_BP_Torch(int32 EntryPoint);
}; // Size: 0x479

#endif
