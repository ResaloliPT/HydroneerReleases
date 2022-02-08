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
	 * Class SubstanceCore.SubstanceGraphInstance
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class USubstanceGraphInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_YGRG[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackageURL;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USubstanceInstanceFactory*                           ParentFactory;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, class USubstanceImageInput*>                ImageSources;                                            // 0x0050(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterial*                                           CreatedMaterial;                                         // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, struct FGuid>                                OutputTextureLinkData;                                   // 0x00A8(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsFrozen;                                               // 0x00F8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEGU[0x1F];                                  // 0x00F9(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetInputString(const class FString& Identifier, const class FString& Value);
		void SetInputInt(const class FString& Identifier, TArray<int32_t> InputValues);
		bool SetInputImg(const class FString& InputName, class UObject* Value);
		void SetInputFloat(const class FString& Identifier, TArray<float> InputValues);
		void SetInputColor(const class FString& Identifier, const struct FLinearColor& Color);
		void SetInputBool(const class FString& Identifier, bool boolValue);
		struct FSubstanceIntInputDesc GetIntInputDesc(const class FString& Identifier);
		struct FSubstanceInstanceDesc GetInstanceDesc();
		SubstanceCore_ESubstanceInputType GetInputType(const class FString& InputName);
		class FString GetInputString(const class FString& Identifier);
		TArray<class FString> GetInputNames();
		TArray<int32_t> GetInputInt(const class FString& Identifier);
		TArray<float> GetInputFloat(const class FString& Identifier);
		struct FLinearColor GetInputColor(const class FString& Identifier);
		bool GetInputBool(const class FString& Identifier);
		struct FSubstanceFloatInputDesc GetFloatInputDesc(const class FString& Identifier);
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceImageInput
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class USubstanceImageInput : public UObject
	{
	public:
		unsigned char                                              UnknownData_7UX1[0x128];                                 // 0x0028(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CompressionLevelRGB;                                     // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompressionLevelAlpha;                                   // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeX;                                                   // 0x0158(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeY;                                                   // 0x015C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumComponents;                                           // 0x0160(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLZQ[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceFilePath;                                          // 0x0168(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USubstanceGraphInstance*>                     Consumers;                                               // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceInstanceFactory
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USubstanceInstanceFactory : public UObject
	{
	public:
		TArray<class USubstanceGraphInstance*>                     mGraphInstances;                                         // 0x0028(0x0010) ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I1EQ[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RelativeSourceFilePath;                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AbsoluteSourceFilePath;                                  // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SubstanceCore_ESubstanceGenerationMode                     GenerationMode;                                          // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHLX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USubstanceSettings : public UObject
	{
	public:
		int32_t                                                    MemoryBudgetMb;                                          // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CPUCores;                                                // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AsyncLoadMipClip;                                        // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAsyncSubstancesRenderedPerFrame;                      // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SubstanceCore_ESubstanceGenerationMode                     DefaultGenerationMode;                                   // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SubstanceCore_ESubstanceEngineType                         SubstanceEngine;                                         // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SubstanceCore_EDefaultSubstanceTextureSize                 DefaultSubstanceOutputSizeX;                             // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SubstanceCore_EDefaultSubstanceTextureSize                 DefaultSubstanceOutputSizeY;                             // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AOV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceTexture2D
	 * Size -> 0x0058 (FullSize[0x0128] - InheritedSize[0x00D0])
	 */
	class USubstanceTexture2D : public UTexture2DDynamic
	{
	public:
		unsigned char                                              UnknownData_1BEA[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USubstanceGraphInstance*                             ParentInstance;                                          // 0x0100(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextureAddress                                     AddressX;                                                // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETextureAddress                                     AddressY;                                                // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCooked;                                                 // 0x010A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDX5[0x1D];                                  // 0x010B(0x001D) MISSED OFFSET (PADDING)

	public:
		SubstanceCore_ESubChannelType GetChannel();
		static UClass* StaticClass();
	};

	/**
	 * Class SubstanceCore.SubstanceUtility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USubstanceUtility : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender);
		void STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height);
		void STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, SubstanceCore_ESubstanceTextureSize Width, SubstanceCore_ESubstanceTextureSize Height);
		void STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
		TArray<class USubstanceTexture2D*> STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
		TArray<class USubstanceGraphInstance*> STATIC_GetSubstances(class UMaterialInterface* Material);
		float STATIC_GetSubstanceLoadingProgress();
		class FString STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance);
		class FString STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance);
		void STATIC_EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices);
		class USubstanceGraphInstance* STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
		void STATIC_DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices);
		class USubstanceGraphInstance* STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, const class FString& InstanceName);
		class USubstanceInstanceFactory* STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections);
		void STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
		void STATIC_ClearCache();
		void STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
