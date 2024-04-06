#ifndef UE4SS_SDK_BP_DwarfLantern_HPP
#define UE4SS_SDK_BP_DwarfLantern_HPP

class ABP_DwarfLantern_C : public ABP_LightingParent_C
{
    class UPointLightComponent* PointLight;                                           // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
