#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
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
	 * AnimBlueprintGeneratedClass ABP_Excavator.ABP_Excavator_C
	 * Size -> 0x0800 (FullSize[0x1130] - InheritedSize[0x0930])
	 */
	class UABP_Excavator_C : public UVehicleAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0930(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_D802BF7B4BF7F09FA39BB593BEAC821E;     // 0x0938(0x0020)
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler_1D70AD4149A8D15E22CABC9D3C672D8C; // 0x0958(0x00E0)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose_6FDF434D4E2F2924B3814BBA84F96472; // 0x0A38(0x0010)
		unsigned char                                              UnknownData_R3J9[0x8];                                   // 0x0A48(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_821EEB51405032675B3AD89F00DEA3F4;   // 0x0A50(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_B3D83EE54BC0A07D18AD8282A1626189;   // 0x0C00(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_92AC861E47EDD503BDC3178AD880A74E;   // 0x0DB0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_371BDD8748A71F2EC0D3348FDDD8A735;   // 0x0F60(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_E8DEB2ED4D726C5B654FAF99CB71B63C; // 0x1110(0x0020)

	public:
		void ExecuteUbergraph_ABP_Excavator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
