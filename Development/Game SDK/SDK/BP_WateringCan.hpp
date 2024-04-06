#ifndef UE4SS_SDK_BP_WateringCan_HPP
#define UE4SS_SDK_BP_WateringCan_HPP

class ABP_WateringCan_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* WaterMesh;
    int32 WaterUses;

    void UpdateWaterPosition();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void Empty Water();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ActorLoaded();
    void ExecuteUbergraph_BP_WateringCan(int32 EntryPoint);
};

#endif
