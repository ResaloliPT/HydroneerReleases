#ifndef UE4SS_SDK_BP_HydroHauler_HPP
#define UE4SS_SDK_BP_HydroHauler_HPP

class ABP_HydroHauler_C : public ABP_ParentCraneVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* SM_Hydro_Hauler_Crane_Extension;                      // 0x08E0 (size: 0x8)
    class UAudioComponent* Audio_Boom;                                                // 0x08E8 (size: 0x8)
    class UAudioComponent* Audio_Base;                                                // 0x08F0 (size: 0x8)
    class UAudioComponent* Audio_Trolley;                                             // 0x08F8 (size: 0x8)
    class UAudioComponent* Audio_Chain;                                               // 0x0900 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x0908 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x0910 (size: 0x8)
    class UStaticMeshComponent* SteeringWheel;                                        // 0x0918 (size: 0x8)
    class USceneComponent* SteeringWheel_Pivot;                                       // 0x0920 (size: 0x8)
    class UStaticMeshComponent* WheelMeshBR1;                                         // 0x0928 (size: 0x8)
    class USceneComponent* WheelBR1;                                                  // 0x0930 (size: 0x8)
    class USceneComponent* TraceBR1;                                                  // 0x0938 (size: 0x8)
    class UStaticMeshComponent* WheelMeshBL1;                                         // 0x0940 (size: 0x8)
    class USceneComponent* WheelBL1;                                                  // 0x0948 (size: 0x8)
    class USceneComponent* TraceBL1;                                                  // 0x0950 (size: 0x8)
    float Timeline_Camera_Alpha_433E8BE449B81CA8E218CCB5C5A365EB;                     // 0x0958 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Camera__Direction_433E8BE449B81CA8E218CCB5C5A365EB; // 0x095C (size: 0x1)
    class UTimelineComponent* Timeline_Camera;                                        // 0x0960 (size: 0x8)
    bool ChainSound;                                                                  // 0x0968 (size: 0x1)
    FVector HookRelativeLocation;                                                     // 0x096C (size: 0xC)

    void ModifyAudio(class UAudioComponent* Audio, float Delta, float Threshold, float Divisor);
    void HandleCraneHookMovement();
    void StopCrane();
    void SetBoomLocation(FVector NewLocation, float& XDelta);
    void SetCraneBaseRotation(FRotator NewRotation, float& DeltaYaw);
    void MoveTrolleyToOffset(float Offset, float& Delta);
    void LiftActor(class AActor* LiftedActor);
    void PostPlayerAttached(bool Attached?);
    void ApplyWheelRotation();
    void FindExitPoint(FVector& ExitPoint);
    class USceneComponent* GetTraceAtIndex(int32 Index);
    class USceneComponent* GetWheelAtIndex(int32 Index);
    void Timeline_Camera__FinishedFunc();
    void Timeline_Camera__UpdateFunc();
    void OverrideCraneMode(bool CraneMode);
    void ExecuteUbergraph_BP_HydroHauler(int32 EntryPoint);
}; // Size: 0x978

#endif
