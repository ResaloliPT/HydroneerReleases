#ifndef UE4SS_SDK_BP_PatrolSpline_HPP
#define UE4SS_SDK_BP_PatrolSpline_HPP

class ABP_PatrolSpline_C : public AActor
{
    class USplineComponent* Spline;
    class USceneComponent* DefaultSceneRoot;
    bool ClosedLoop?;
    bool SnapToNavigation?;

    void UserConstructionScript();
};

#endif
