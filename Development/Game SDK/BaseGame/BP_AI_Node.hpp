#ifndef UE4SS_SDK_BP_AI_Node_HPP
#define UE4SS_SDK_BP_AI_Node_HPP

class ABP_AI_Node_C : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0220 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0238 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0240 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0248 (size: 0x8)
    TEnumAsByte<E_AI_NodeType::Type> NodeType;                                        // 0x0250 (size: 0x1)
    TMap<class ABP_AI_Node_C*, class bool> NodeLinks;                                 // 0x0258 (size: 0x50)
    float Weight;                                                                     // 0x02A8 (size: 0x4)
    int32 MaxCapacity;                                                                // 0x02AC (size: 0x4)
    float Radius;                                                                     // 0x02B0 (size: 0x4)
    TArray<FVector> FocalPoints;                                                      // 0x02B8 (size: 0x10)
    TArray<TEnumAsByte<E_TimeChunks::Type>> TimeRange;                                // 0x02C8 (size: 0x10)
    FVector2D WaitTimeRange;                                                          // 0x02D8 (size: 0x8)
    class UAnimSequence* AnimLoop;                                                    // 0x02E0 (size: 0x8)
    FName AssignedTo;                                                                 // 0x02E8 (size: 0x8)
    bool IsEditing?;                                                                  // 0x02F0 (size: 0x1)
    int32 Capacity;                                                                   // 0x02F4 (size: 0x4)

    void ToggleCapsuleCollision(bool Collision);
    FString GetTimeRangeValueDebug(int32 Index);
    void OnConstruct();
    void ClearDebug();
    void AddReverseLinks();
    void SnapToNavMesh();
    void DrawDebugArrows();
    void RebuildNodes();
    void UserConstructionScript();
}; // Size: 0x2F8

#endif
