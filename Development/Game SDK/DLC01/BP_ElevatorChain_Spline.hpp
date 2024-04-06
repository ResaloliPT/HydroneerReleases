#ifndef UE4SS_SDK_BP_ElevatorChain_Spline_HPP
#define UE4SS_SDK_BP_ElevatorChain_Spline_HPP

class ABP_ElevatorChain_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float SectionLength;                                                              // 0x0238 (size: 0x4)
    float ScaledSectionLength;                                                        // 0x023C (size: 0x4)
    float SectionEndOffset;                                                           // 0x0240 (size: 0x4)
    TArray<class USplineMeshComponent*> SplineMeshes;                                 // 0x0248 (size: 0x10)
    class UStaticMesh* MiddleMesh;                                                    // 0x0258 (size: 0x8)
    class UMaterialInterface* MiddleMeshMaterial;                                     // 0x0260 (size: 0x8)
    class UStaticMesh* StartMesh;                                                     // 0x0268 (size: 0x8)
    class UMaterialInterface* StartMeshMaterial;                                      // 0x0270 (size: 0x8)
    FRotator StartMeshRotation;                                                       // 0x0278 (size: 0xC)
    class UStaticMesh* EndMesh;                                                       // 0x0288 (size: 0x8)
    class UMaterialInterface* EndMeshMaterial;                                        // 0x0290 (size: 0x8)
    FRotator EndMeshRotation;                                                         // 0x0298 (size: 0xC)
    bool AddStartMesh?;                                                               // 0x02A4 (size: 0x1)
    bool AddEndMesh?;                                                                 // 0x02A5 (size: 0x1)
    int32 Direction;                                                                  // 0x02A8 (size: 0x4)
    bool Enabled;                                                                     // 0x02AC (size: 0x1)
    float Offset;                                                                     // 0x02B0 (size: 0x4)

    void SetChainPosition(class USplineMeshComponent* ChainLink, int32 Index, float Offset);
    void Disable();
    void Enable(int32 Direction);
    void MeshSetup();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ElevatorChain_Spline(int32 EntryPoint);
}; // Size: 0x2B4

#endif
