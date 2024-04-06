#ifndef UE4SS_SDK_AC_Heat_HPP
#define UE4SS_SDK_AC_Heat_HPP

class UAC_Heat_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Heat;
    bool NoCooldown?;

    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void WaterParticleHit();
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
};

#endif
