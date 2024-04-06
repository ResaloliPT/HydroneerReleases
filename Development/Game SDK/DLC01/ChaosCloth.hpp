#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;                                                          // 0x0028 (size: 0x1)
    float UniformMass;                                                                // 0x002C (size: 0x4)
    float TotalMass;                                                                  // 0x0030 (size: 0x4)
    float Density;                                                                    // 0x0034 (size: 0x4)
    float MinPerParticleMass;                                                         // 0x0038 (size: 0x4)
    float EdgeStiffness;                                                              // 0x003C (size: 0x4)
    float BendingStiffness;                                                           // 0x0040 (size: 0x4)
    bool bUseBendingElements;                                                         // 0x0044 (size: 0x1)
    float AreaStiffness;                                                              // 0x0048 (size: 0x4)
    float VolumeStiffness;                                                            // 0x004C (size: 0x4)
    float StrainLimitingStiffness;                                                    // 0x0050 (size: 0x4)
    float LimitScale;                                                                 // 0x0054 (size: 0x4)
    EChaosClothTetherMode TetherMode;                                                 // 0x0058 (size: 0x1)
    bool bUseGeodesicDistance;                                                        // 0x0059 (size: 0x1)
    float ShapeTargetStiffness;                                                       // 0x005C (size: 0x4)
    float CollisionThickness;                                                         // 0x0060 (size: 0x4)
    float FrictionCoefficient;                                                        // 0x0064 (size: 0x4)
    bool bUseSelfCollisions;                                                          // 0x0068 (size: 0x1)
    float SelfCollisionThickness;                                                     // 0x006C (size: 0x4)
    bool bUseLegacyBackstop;                                                          // 0x0070 (size: 0x1)
    float DampingCoefficient;                                                         // 0x0074 (size: 0x4)
    bool bUsePointBasedWindModel;                                                     // 0x0078 (size: 0x1)
    float DragCoefficient;                                                            // 0x007C (size: 0x4)
    float LiftCoefficient;                                                            // 0x0080 (size: 0x4)
    bool bUseGravityOverride;                                                         // 0x0084 (size: 0x1)
    float GravityScale;                                                               // 0x0088 (size: 0x4)
    FVector Gravity;                                                                  // 0x008C (size: 0xC)
    float AnimDriveSpringStiffness;                                                   // 0x0098 (size: 0x4)
    FVector LinearVelocityScale;                                                      // 0x009C (size: 0xC)
    float AngularVelocityScale;                                                       // 0x00A8 (size: 0x4)
    bool bUseTetrahedralConstraints;                                                  // 0x00AC (size: 0x1)
    bool bUseThinShellVolumeConstraints;                                              // 0x00AD (size: 0x1)
    bool bUseContinuousCollisionDetection;                                            // 0x00AE (size: 0x1)

}; // Size: 0xB0

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;                                                             // 0x0028 (size: 0x4)
    int32 SubdivisionCount;                                                           // 0x002C (size: 0x4)
    float SelfCollisionThickness;                                                     // 0x0030 (size: 0x4)
    float CollisionThickness;                                                         // 0x0034 (size: 0x4)
    bool bUseDampingOverride;                                                         // 0x0038 (size: 0x1)
    float Damping;                                                                    // 0x003C (size: 0x4)
    bool bUseGravityOverride;                                                         // 0x0040 (size: 0x1)
    float GravityScale;                                                               // 0x0044 (size: 0x4)
    FVector Gravity;                                                                  // 0x0048 (size: 0xC)
    bool bUseLocalSpaceSimulation;                                                    // 0x0054 (size: 0x1)
    bool bUseXPBDConstraints;                                                         // 0x0055 (size: 0x1)

}; // Size: 0x58

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
}; // Size: 0x28

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
}; // Size: 0x58

#endif
