#ifndef UE4SS_SDK_BP_Dummy_HydroGuy_HPP
#define UE4SS_SDK_BP_Dummy_HydroGuy_HPP

class ABP_Dummy_HydroGuy_C : public ABP_Character_HydroGuy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0878 (size: 0x8)
    class UAC_Highlight_C* AC_Highlight;                                              // 0x0880 (size: 0x8)
    class USceneCaptureComponent2D* Capture_Head;                                     // 0x0888 (size: 0x8)
    class USceneComponent* HeadCaptureSKT;                                            // 0x0890 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0898 (size: 0x8)
    class USceneCaptureComponent2D* Capture_Body;                                     // 0x08A0 (size: 0x8)
    int32 ActivePlayerIndex;                                                          // 0x08A8 (size: 0x4)

    void InitStyle(FS_CharacterStyle Style);
    void DummyHighlight(bool Highlight?);
    void SetRenderTargetxxx(class UTextureRenderTarget2D* RenderTarget);
    void ToggleFrameCapture(bool Capture Every Frame);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Dummy_HydroGuy(int32 EntryPoint);
}; // Size: 0x8AC

#endif
