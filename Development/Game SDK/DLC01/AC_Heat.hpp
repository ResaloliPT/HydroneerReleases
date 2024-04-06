#ifndef UE4SS_SDK_AC_Heat_HPP
#define UE4SS_SDK_AC_Heat_HPP

class UAC_Heat_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float Heat;                                                                       // 0x00B8 (size: 0x4)
    bool NoCooldown?;                                                                 // 0x00BC (size: 0x1)

    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void HasNoWater();
    void HasWater();
    void HeatUpdated(float Heat);
    void FullHeat();
    void StartHeat(float HeatIncrement);
    void StopHeat();
    void IncreaseHeat();
    void DecreaseHeat();
    void ResetFullHeat();
    void ZeroHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void ExecuteUbergraph_AC_Heat(int32 EntryPoint);
}; // Size: 0xBD

#endif
