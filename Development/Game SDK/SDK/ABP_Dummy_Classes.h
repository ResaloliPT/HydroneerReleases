#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------

	/**
	 * AnimBlueprintGeneratedClass ABP_Dummy.ABP_Dummy_C
	 * Size -> 0x0494 (FullSize[0x074C] - InheritedSize[0x02B8])
	 */
	class UABP_Dummy_C : public UAnimInstance
	{
	public:

		unsigned char                                            UnknownData_KJVT[0x8];                                   // 0x02B8(0x0008) Fix Super Size


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		struct FAnimNode_Root                                    AnimGraphNode_Root;                                      // 0x02C8(0x0030)


		struct FAnimNode_SequencePlayer                          AnimGraphNode_SequencePlayer_3;                          // 0x02F8(0x0080)


		struct FAnimNode_ApplyAdditive                           AnimGraphNode_ApplyAdditive_3;                           // 0x0378(0x00C8)


		struct FAnimNode_SequencePlayer                          AnimGraphNode_SequencePlayer_2;                          // 0x0440(0x0080)


		struct FAnimNode_RandomPlayer                            AnimGraphNode_RandomPlayer;                              // 0x04C0(0x0078)


		struct FAnimNode_ApplyAdditive                           AnimGraphNode_ApplyAdditive_2;                           // 0x0538(0x00C8)


		struct FAnimNode_SequencePlayer                          AnimGraphNode_SequencePlayer;                            // 0x0600(0x0080)


		struct FAnimNode_ApplyAdditive                           AnimGraphNode_ApplyAdditive;                             // 0x0680(0x00C8)


		float                                                    FemAlpha;                                                // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void AnimGraph(
struct FPoseLink* AnimGraph
);

		void ExecuteUbergraph_ABP_Dummy(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
