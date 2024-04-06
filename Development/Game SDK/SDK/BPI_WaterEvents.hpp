#ifndef UE4SS_SDK_BPI_WaterEvents_HPP
#define UE4SS_SDK_BPI_WaterEvents_HPP

class IBPI_WaterEvents_C : public IInterface
{

    void HasWater();
    void HasNoWater();
    void WaterParticleHit();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
};

#endif
