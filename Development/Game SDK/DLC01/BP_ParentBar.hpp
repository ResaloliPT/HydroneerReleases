#ifndef UE4SS_SDK_BP_ParentBar_HPP
#define UE4SS_SDK_BP_ParentBar_HPP

class ABP_ParentBar_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UAC_Heat_C* AC_Heat;                                                        // 0x0468 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0470 (size: 0x8)

    void UserConstructionScript();
    void FullHeat();
    void HeatUpdated(float Heat);
    void HasWater();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void HasNoWater();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ExecuteUbergraph_BP_ParentBar(int32 EntryPoint);
}; // Size: 0x478

#endif
