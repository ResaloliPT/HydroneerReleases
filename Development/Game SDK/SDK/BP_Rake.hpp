#ifndef UE4SS_SDK_BP_Rake_HPP
#define UE4SS_SDK_BP_Rake_HPP

class ABP_Rake_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Rake_Add;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UArrowComponent* Arrow3;
    class UArrowComponent* Arrow2;
    class UArrowComponent* Arrow1;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* Cube;
    class UAC_Animator_C* AC_Animator;
    FTimerHandle LocationTimerHandle;
    FVector PrevLoc;
    int32 RakeDirection;
    int32 MaxDepth;
    bool HasHit?;
    bool Add?;
    class ABP_HydroVoxelWorld_C* VoxelWorld;
    bool Debug?;

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
};

#endif
