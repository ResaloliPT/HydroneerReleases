#ifndef UE4SS_SDK_BP_ParentBuild_HPP
#define UE4SS_SDK_BP_ParentBuild_HPP

class ABP_ParentBuild_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0448 (size: 0x8)
    class UStaticMeshComponent* SM_Plane5x5;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* GridGuide;                                            // 0x0458 (size: 0x8)
    bool Placing?;                                                                    // 0x0460 (size: 0x1)
    bool CanPlace?;                                                                   // 0x0461 (size: 0x1)
    TEnumAsByte<E_PlacementType::Type> PlacementType;                                 // 0x0462 (size: 0x1)
    bool PlacedDown?;                                                                 // 0x0463 (size: 0x1)
    bool Locked?;                                                                     // 0x0464 (size: 0x1)
    class ABP_HydroVoxelWorld_C* VoxelWorld;                                          // 0x0468 (size: 0x8)
    bool CanRTYFlip?;                                                                 // 0x0470 (size: 0x1)
    TArray<class ABP_ParentHook_C*> Hooks;                                            // 0x0478 (size: 0x10)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Crane_CanPlace(bool& Result, FVector& Location);
    void CheckCanPlace(bool& Result);
    void Crane_TryLift(class AActor* LiftingActor, class ACharacter* ControllingCharacter, bool& Result);
    bool IsValidClipActor(class ABP_ParentBuild_C* BuildItem);
    void GetClosestSnappedXYDirection(FVector Vector, FVector& SnappedDirection);
    void Crane_TryPlace(bool& Result);
    void RevertMaterials();
    void UpdateGridPlaneLocation();
    void StopPlacingItem();
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void FindTracePivots(TArray<FVector>& Pivots);
    void IsSpecificHookable(bool& CanPlace?);
    void IsHookable(bool& CanPlace?);
    void IsClipping(bool& CanPlace?);
    void ItemIsPlacing(class ABP_GameController_C* Controller);
    void ItemIsBuilt(class ABP_GameController_C* Controller);
    void UnderGroundTest(bool& CanPlace?);
    void TouchVoxelTest(bool& TouchingSomething);
    void TouchAnythingTest(bool& TouchingSomething);
    void UserConstructionScript();
    void LMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBUpWhileCarrying();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void LockItem(bool Lock?);
    void OverridePickedup();
    void OverrideStartPlacing();
    void PlacementCheck();
    void ReceiveBeginPlay();
    void AttachPart(class ABP_ParentHook_C* Hook);
    void RemovePart(class ABP_ParentHook_C* Hook);
    void CancelPlacement();
    void ExecuteUbergraph_BP_ParentBuild(int32 EntryPoint);
}; // Size: 0x488

#endif
