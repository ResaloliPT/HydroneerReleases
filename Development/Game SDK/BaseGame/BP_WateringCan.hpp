#ifndef UE4SS_SDK_BP_WateringCan_HPP
#define UE4SS_SDK_BP_WateringCan_HPP

class ABP_WateringCan_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UStaticMeshComponent* WaterMesh;                                            // 0x0460 (size: 0x8)
    int32 WaterUses;                                                                  // 0x0468 (size: 0x4)

    void UpdateWaterPosition();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void HasNoWater();
    void HasWater();
    void Empty Water();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ActorLoaded();
    void ExecuteUbergraph_BP_WateringCan(int32 EntryPoint);
}; // Size: 0x46C

#endif
