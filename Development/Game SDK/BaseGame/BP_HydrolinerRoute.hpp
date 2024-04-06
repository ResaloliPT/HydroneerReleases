#ifndef UE4SS_SDK_BP_HydrolinerRoute_HPP
#define UE4SS_SDK_BP_HydrolinerRoute_HPP

class ABP_HydrolinerRoute_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<int32> StopPoints;                                                         // 0x0238 (size: 0x10)
    TArray<FS_HydroLiner_CollisionConfigeration> CollisionConfig;                     // 0x0248 (size: 0x10)
    TMap<int32, bool> EntranceConfig;                                                 // 0x0258 (size: 0x50)

    void Depart(int32 Point);
    void Arrive(int32 Point);
    void GetNextStopPoint(int32 CurrentPoint, int32& StopPoint);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HydrolinerRoute(int32 EntryPoint);
}; // Size: 0x2A8

#endif
