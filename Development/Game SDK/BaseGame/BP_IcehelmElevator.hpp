#ifndef UE4SS_SDK_BP_IcehelmElevator_HPP
#define UE4SS_SDK_BP_IcehelmElevator_HPP

class ABP_IcehelmElevator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* S_IceH_LiftCog;                                            // 0x0228 (size: 0x8)
    class UAudioComponent* S_IceH_LiftPlatform;                                       // 0x0230 (size: 0x8)
    class UAudioComponent* S_IceH_LiftPulley;                                         // 0x0238 (size: 0x8)
    class ULocalCableComponent* CableLocalWeight2;                                    // 0x0240 (size: 0x8)
    class ULocalCableComponent* CableLocalWeight1;                                    // 0x0248 (size: 0x8)
    class ULocalCableComponent* CableLocalPlatform2;                                  // 0x0250 (size: 0x8)
    class ULocalCableComponent* CableLocalPlatform1;                                  // 0x0258 (size: 0x8)
    class ULocalCableComponent* LocalCable2;                                          // 0x0260 (size: 0x8)
    class ULocalCableComponent* LocalCable3;                                          // 0x0268 (size: 0x8)
    class ULocalCableComponent* LocalCable1;                                          // 0x0270 (size: 0x8)
    class ULocalCableComponent* LocalCable;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Support2;                                             // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Support1;                                             // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Weight2;                                              // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Weight1;                                              // 0x0298 (size: 0x8)
    class USceneComponent* WeightRoot;                                                // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cog8;                                                 // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cog7;                                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cog6;                                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cog5;                                                 // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cog4;                                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cog3;                                                 // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cog2;                                                 // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cog1;                                                 // 0x02E0 (size: 0x8)
    class USceneComponent* Bottom;                                                    // 0x02E8 (size: 0x8)
    class USceneComponent* Top;                                                       // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0300 (size: 0x8)
    float Movement_Lerp_91F91C7943318ED9E2C22A98ADD4E335;                             // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Movement__Direction_91F91C7943318ED9E2C22A98ADD4E335; // 0x030C (size: 0x1)
    class UTimelineComponent* Movement;                                               // 0x0310 (size: 0x8)

    void SetCableLength(float Lerp);
    void Movement__FinishedFunc();
    void Movement__UpdateFunc();
    void ReceiveBeginPlay();
    void MovePlatform(bool Direction);
    void ExecuteUbergraph_BP_IcehelmElevator(int32 EntryPoint);
}; // Size: 0x318

#endif
