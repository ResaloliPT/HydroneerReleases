#ifndef UE4SS_SDK_ST_NPC_Request_Delivery_HPP
#define UE4SS_SDK_ST_NPC_Request_Delivery_HPP

struct FST_NPC_Request_Delivery
{
    FName ReceiveFromID_12_B7D54B5D473042C02010CDAFD6A41836;                          // 0x0000 (size: 0x8)
    FName DeliverToID_3_ACBB204743BDA81AFD6C4EA2B1EF1AB2;                             // 0x0008 (size: 0x8)
    TSubclassOf<class ABP_ParentItem_C> RewardClass_8_B3B47E4742C2CD4EABA7C39D16EFA7FB; // 0x0010 (size: 0x8)
    int32 RewardAmount_9_C467DAB241FA50D12FB4648FBF0CE464;                            // 0x0018 (size: 0x4)
    TSoftObjectPtr<UTexture2D> LocationIcon_15_9D76BA5C46123422A49466AAA7EBE278;      // 0x0020 (size: 0x28)

}; // Size: 0x48

#endif
