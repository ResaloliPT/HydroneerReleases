#ifndef UE4SS_SDK_BP_AI_Node_HPP
#define UE4SS_SDK_BP_AI_Node_HPP

class ABP_AI_Node_C : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UCapsuleComponent* Capsule;
    class UArrowComponent* Arrow;
    class UTextRenderComponent* TextRender;
    class USphereComponent* Sphere;
    class UBillboardComponent* Billboard;
    TEnumAsByte<E_AI_NodeType::Type> NodeType;
    TMap<class ABP_AI_Node_C*, class bool> NodeLinks;
    float Weight;
    int32 MaxCapacity;
    float Radius;
    TArray<FVector> FocalPoints;
    TArray<TEnumAsByte<E_TimeChunks::Type>> TimeRange;
    FVector2D WaitTimeRange;
    class UAnimSequence* AnimLoop;
    FName AssignedTo;
    bool IsEditing?;
    int32 Capacity;

    void ToggleCapsuleCollision(bool Collision);
    FString GetTimeRangeValueDebug(int32 Index);
    void OnConstruct();
    void ClearDebug();
    void AddReverseLinks();
    void SnapToNavMesh();
    void DrawDebugArrows();
    void RebuildNodes();
    void UserConstructionScript();
};

#endif
