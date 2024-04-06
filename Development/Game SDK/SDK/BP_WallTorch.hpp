#ifndef UE4SS_SDK_BP_WallTorch_HPP
#define UE4SS_SDK_BP_WallTorch_HPP

class ABP_WallTorch_C : public ABP_LightingParent_C
{
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;

};

#endif
