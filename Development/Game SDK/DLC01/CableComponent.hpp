#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0220 (size: 0x8)

}; // Size: 0x228

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0468 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0469 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x0470 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x0498 (size: 0x8)
    FVector EndLocation;                                                              // 0x04A0 (size: 0xC)
    float CableLength;                                                                // 0x04AC (size: 0x4)
    int32 NumSegments;                                                                // 0x04B0 (size: 0x4)
    float SubstepTime;                                                                // 0x04B4 (size: 0x4)
    int32 SolverIterations;                                                           // 0x04B8 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x04BC (size: 0x1)
    bool bUseSubstepping;                                                             // 0x04BD (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x04BE (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x04BF (size: 0x1)
    bool bEnableCollision;                                                            // 0x04C0 (size: 0x1)
    float CollisionFriction;                                                          // 0x04C4 (size: 0x4)
    FVector CableForce;                                                               // 0x04C8 (size: 0xC)
    float CableGravityScale;                                                          // 0x04D4 (size: 0x4)
    float CableWidth;                                                                 // 0x04D8 (size: 0x4)
    int32 NumSides;                                                                   // 0x04DC (size: 0x4)
    float TileMaterial;                                                               // 0x04E0 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x500

#endif
