#ifndef UE4SS_SDK_BPI_CraneLift_HPP
#define UE4SS_SDK_BPI_CraneLift_HPP

class IBPI_CraneLift_C : public IInterface
{

    void Crane_CanPlace(bool& Result, FVector& Location);
    void Crane_HandleRetract(bool Retracting);
    void Crane_TryDrop(bool& Result);
    void Crane_TryPlace(bool& Result);
    void Crane_TryLift(class AActor* LiftingActor, class ACharacter* ControllingCharacter, bool& Result);
}; // Size: 0x28

#endif
