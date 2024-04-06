#ifndef UE4SS_SDK_BP_DwarfLantern_HPP
#define UE4SS_SDK_BP_DwarfLantern_HPP

class ABP_DwarfLantern_C : public ABP_LightingParent_C
{
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;

};

#endif
