#ifndef UE4SS_SDK_BP_ParentBar_HPP
#define UE4SS_SDK_BP_ParentBar_HPP

class ABP_ParentBar_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Heat_C* AC_Heat;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void UserConstructionScript();
    void HasWater();
    void FullHeat();
    void HeatUpdated(float Heat);
    void HasNoWater();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void WaterParticleHit();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ExecuteUbergraph_BP_ParentBar(int32 EntryPoint);
};

#endif
