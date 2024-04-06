#ifndef UE4SS_SDK_BPI_Heat_HPP
#define UE4SS_SDK_BPI_Heat_HPP

class IBPI_Heat_C : public IInterface
{

    void OutOfFire();
    void InFire(bool SlowBurn?);
    void FullHeat();
    void HeatUpdated(float Heat);
};

#endif
