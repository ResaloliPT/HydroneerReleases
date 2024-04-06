#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;
    float UniformMass;
    float TotalMass;
    float Density;
    float MinPerParticleMass;
    float EdgeStiffness;
    float BendingStiffness;
    bool bUseBendingElements;
    float AreaStiffness;
    float VolumeStiffness;
    float StrainLimitingStiffness;
    float LimitScale;
    EChaosClothTetherMode TetherMode;
    bool bUseGeodesicDistance;
    float ShapeTargetStiffness;
    float CollisionThickness;
    float FrictionCoefficient;
    bool bUseSelfCollisions;
    float SelfCollisionThickness;
    bool bUseLegacyBackstop;
    float DampingCoefficient;
    bool bUsePointBasedWindModel;
    float DragCoefficient;
    float LiftCoefficient;
    bool bUseGravityOverride;
    float GravityScale;
    FVector Gravity;
    float AnimDriveSpringStiffness;
    FVector LinearVelocityScale;
    float AngularVelocityScale;
    bool bUseTetrahedralConstraints;
    bool bUseThinShellVolumeConstraints;
    bool bUseContinuousCollisionDetection;

};

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;
    int32 SubdivisionCount;
    float SelfCollisionThickness;
    float CollisionThickness;
    bool bUseDampingOverride;
    float Damping;
    bool bUseGravityOverride;
    float GravityScale;
    FVector Gravity;
    bool bUseLocalSpaceSimulation;
    bool bUseXPBDConstraints;

};

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
};

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
};

#endif
