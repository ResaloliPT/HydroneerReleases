#ifndef UE4SS_SDK_BP_Nav_Road_HPP
#define UE4SS_SDK_BP_Nav_Road_HPP

class ABP_Nav_Road_C : public AActor
{
    class UBoxComponent* Box;
    class UStaticMeshComponent* Cube;
    class USplineComponent* Spline;
    int32 Width;

    void ClearVolumes();
    void GenerateVolumes();
    void UserConstructionScript();
};

#endif
