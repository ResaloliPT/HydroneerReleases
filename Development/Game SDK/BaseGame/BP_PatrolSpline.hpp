#ifndef UE4SS_SDK_BP_PatrolSpline_HPP
#define UE4SS_SDK_BP_PatrolSpline_HPP

class ABP_PatrolSpline_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    bool ClosedLoop?;                                                                 // 0x0230 (size: 0x1)
    bool SnapToNavigation?;                                                           // 0x0231 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x232

#endif
