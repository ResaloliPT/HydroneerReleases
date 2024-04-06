#ifndef UE4SS_SDK_BP_WorldMap_HPP
#define UE4SS_SDK_BP_WorldMap_HPP

class ABP_WorldMap_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* VisualMesh;                                           // 0x0458 (size: 0x8)
    class USpringArmComponent* Pivot;                                                 // 0x0460 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0468 (size: 0x8)
    TSoftObjectPtr<UTexture2D> MapTexture;                                            // 0x0470 (size: 0x28)
    FTransform MapTransform;                                                          // 0x04A0 (size: 0x30)
    float MapWidth;                                                                   // 0x04D0 (size: 0x4)
    FVector LastLocation;                                                             // 0x04D4 (size: 0xC)

    void SetMapTexture();
    void DeactivateMap();
    void ActivateMap(int32 PlayerIndex);
    void UserConstructionScript();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void OverrideBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void RMBUpWhileCarrying();
    void ExecuteUbergraph_BP_WorldMap(int32 EntryPoint);
}; // Size: 0x4E0

#endif
