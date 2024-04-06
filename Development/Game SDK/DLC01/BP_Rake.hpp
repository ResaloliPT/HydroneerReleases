#ifndef UE4SS_SDK_BP_Rake_HPP
#define UE4SS_SDK_BP_Rake_HPP

class ABP_Rake_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* SM_Rake_Add;                                          // 0x0458 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0460 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0468 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0470 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0478 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0480 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0488 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0490 (size: 0x8)
    FTimerHandle LocationTimerHandle;                                                 // 0x0498 (size: 0x8)
    FVector PrevLoc;                                                                  // 0x04A0 (size: 0xC)
    int32 RakeDirection;                                                              // 0x04AC (size: 0x4)
    int32 MaxDepth;                                                                   // 0x04B0 (size: 0x4)
    bool HasHit?;                                                                     // 0x04B4 (size: 0x1)
    bool Add?;                                                                        // 0x04B5 (size: 0x1)
    class ABP_HydroVoxelWorld_C* VoxelWorld;                                          // 0x04B8 (size: 0x8)
    bool Debug?;                                                                      // 0x04C0 (size: 0x1)

    void TestDepthLocation(FVector Location, bool& CanModify);
    float TestAreaDensity(class USceneComponent* Component);
    void GetPlayerCameraInfo(FVector& Location, FVector& ForwardVector, float& BuildingLength, FRotator& Rotation);
    void TryFindVoxelWorldHit(TArray<FHitResult>& Hits, FHitResult& Hit, class ABP_HydroVoxelWorld_C*& VoxelWorld);
    FVoxelIntBox GetBoxBoundsInVoxel(class AVoxelWorld* VoxelWorld, float Offset, float Bounds);
    FRotator NormalToClampedRotation(const FVector& Normal, float Inrement, const FTransform& T);
    void FlattenVoxels(class ABP_HydroVoxelWorld_C* VoxelWorld, EVoxelSDFMergeMode MergeMode, float Radius, int32 Strength);
    void Rake(class ABP_GameController_C* Controller);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void TestUsability();
    void Box Tracing(bool& Result);
    void UserConstructionScript();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void LocationTimer();
    void OverrideAnimFinished();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void ExecuteUbergraph_BP_Rake(int32 EntryPoint);
}; // Size: 0x4C1

#endif
