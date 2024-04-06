#ifndef UE4SS_SDK_BPI_Vehicle_HPP
#define UE4SS_SDK_BPI_Vehicle_HPP

class IBPI_Vehicle_C : public IInterface
{

    void ExitVehicle();
    void EnterVehicle(class APawn* Pawn);
};

#endif
