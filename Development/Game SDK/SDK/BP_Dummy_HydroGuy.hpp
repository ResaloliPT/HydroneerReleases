#ifndef UE4SS_SDK_BP_Dummy_HydroGuy_HPP
#define UE4SS_SDK_BP_Dummy_HydroGuy_HPP

class ABP_Dummy_HydroGuy_C : public ABP_Character_HydroGuy_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Highlight_C* AC_Highlight;
    class USceneCaptureComponent2D* Capture_Head;
    class USceneComponent* HeadCaptureSKT;
    class USpotLightComponent* SpotLight;
    class USceneCaptureComponent2D* Capture_Body;
    int32 ActivePlayerIndex;

    void InitStyle(FS_CharacterStyle Style);
    void DummyHighlight(bool Highlight?);
    void SetRenderTargetxxx(class UTextureRenderTarget2D* RenderTarget);
    void ToggleFrameCapture(bool Capture Every Frame);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Dummy_HydroGuy(int32 EntryPoint);
};

#endif
