#ifndef UE4SS_SDK_BP_IcehelmWallTorch_HPP
#define UE4SS_SDK_BP_IcehelmWallTorch_HPP

class ABP_IcehelmWallTorch_C : public ABP_LightingParent_C
{
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;

};

#endif
