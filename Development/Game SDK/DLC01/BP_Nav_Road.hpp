#ifndef UE4SS_SDK_BP_Nav_Road_HPP
#define UE4SS_SDK_BP_Nav_Road_HPP

class ABP_Nav_Road_C : public AActor
{
    class UBoxComponent* Box;                                                         // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0228 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0230 (size: 0x8)
    int32 Width;                                                                      // 0x0238 (size: 0x4)

    void ClearVolumes();
    void GenerateVolumes();
    void UserConstructionScript();
}; // Size: 0x23C

#endif
