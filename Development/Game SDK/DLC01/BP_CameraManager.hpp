#ifndef UE4SS_SDK_BP_CameraManager_HPP
#define UE4SS_SDK_BP_CameraManager_HPP

class ABP_CameraManager_C : public APlayerCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x27B0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x27B8 (size: 0x8)
    class UAC_PlayerWeather_C* AC_PlayerWeather;                                      // 0x27C0 (size: 0x8)
    class UStaticMeshComponent* PostProcessSphere;                                    // 0x27C8 (size: 0x8)
    float Timeline_0_alpha_E07C88654DB5F34CBCA876A9329E2041;                          // 0x27D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E07C88654DB5F34CBCA876A9329E2041; // 0x27D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x27D8 (size: 0x8)
    class UMaterialInstanceDynamic* FogPPMaterial;                                    // 0x27E0 (size: 0x8)

    void AddFogPostProcess();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ToggleFogPostProcess(bool On);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CameraManager(int32 EntryPoint);
}; // Size: 0x27E8

#endif
