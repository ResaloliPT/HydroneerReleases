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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Voxel.EVoxelRGBALayer
	 */
	enum class Voxel_EVoxelRGBALayer : uint8_t
	{
		EVoxelRGBALayer__R                   = 0,
		EVoxelRGBALayer__G                   = 1,
		EVoxelRGBALayer__B                   = 2,
		EVoxelRGBALayer__A                   = 3,
		EVoxelRGBALayer__EVoxelRGBALayer_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelUVConfig
	 */
	enum class Voxel_EVoxelUVConfig : uint8_t
	{
		EVoxelUVConfig__GlobalUVs            = 0,
		EVoxelUVConfig__UseRGAsUVs           = 1,
		EVoxelUVConfig__UseRGBAAsUVs         = 2,
		EVoxelUVConfig__PackWorldUpInUVs     = 3,
		EVoxelUVConfig__PerVoxelUVs          = 4,
		EVoxelUVConfig__CustomFVoxelMaterial = 5,
		EVoxelUVConfig__EVoxelUVConfig_MAX   = 6
	};

	/**
	 * Enum Voxel.EVoxelMaterialConfig
	 */
	enum class Voxel_EVoxelMaterialConfig : uint8_t
	{
		EVoxelMaterialConfig__RGB                      = 0,
		EVoxelMaterialConfig__SingleIndex              = 1,
		EVoxelMaterialConfig__DoubleIndex              = 2,
		EVoxelMaterialConfig__EVoxelMaterialConfig_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelNormalConfig
	 */
	enum class Voxel_EVoxelNormalConfig : uint8_t
	{
		EVoxelNormalConfig__NoNormal               = 0,
		EVoxelNormalConfig__GradientNormal         = 1,
		EVoxelNormalConfig__MeshNormal             = 2,
		EVoxelNormalConfig__EVoxelNormalConfig_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelRenderType
	 */
	enum class Voxel_EVoxelRenderType : uint8_t
	{
		EVoxelRenderType__MarchingCubes        = 0,
		EVoxelRenderType__Cubic                = 1,
		EVoxelRenderType__EVoxelRenderType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelDataAssetImportSource
	 */
	enum class Voxel_EVoxelDataAssetImportSource : uint8_t
	{
		EVoxelDataAssetImportSource__None                            = 0,
		EVoxelDataAssetImportSource__MagicaVox                       = 1,
		EVoxelDataAssetImportSource__RawVox                          = 2,
		EVoxelDataAssetImportSource__Mesh                            = 3,
		EVoxelDataAssetImportSource__EVoxelDataAssetImportSource_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelTool
	 */
	enum class Voxel_EVoxelTool : uint8_t
	{
		EVoxelTool__Projection     = 0,
		EVoxelTool__Sphere         = 1,
		EVoxelTool__Box            = 2,
		EVoxelTool__EVoxelTool_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelMode
	 */
	enum class Voxel_EVoxelMode : uint8_t
	{
		EVoxelMode__Add            = 0,
		EVoxelMode__Remove         = 1,
		EVoxelMode__Flatten        = 2,
		EVoxelMode__Paint          = 3,
		EVoxelMode__EVoxelMode_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelMeshSpawnerRotation
	 */
	enum class Voxel_EVoxelMeshSpawnerRotation : uint8_t
	{
		EVoxelMeshSpawnerRotation__AlignToSurface                = 0,
		EVoxelMeshSpawnerRotation__AlignToWorldUp                = 1,
		EVoxelMeshSpawnerRotation__DontAlign                     = 2,
		EVoxelMeshSpawnerRotation__EVoxelMeshSpawnerRotation_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelMeshSpawnerScaling
	 */
	enum class Voxel_EVoxelMeshSpawnerScaling : uint8_t
	{
		EVoxelMeshSpawnerScaling__Uniform                      = 0,
		EVoxelMeshSpawnerScaling__Free                         = 1,
		EVoxelMeshSpawnerScaling__LockXY                       = 2,
		EVoxelMeshSpawnerScaling__EVoxelMeshSpawnerScaling_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelPaintMaterialType
	 */
	enum class Voxel_EVoxelPaintMaterialType : uint8_t
	{
		EVoxelPaintMaterialType__RGB                         = 0,
		EVoxelPaintMaterialType__SingleIndex                 = 1,
		EVoxelPaintMaterialType__DoubleIndexSet              = 2,
		EVoxelPaintMaterialType__DoubleIndexBlend            = 3,
		EVoxelPaintMaterialType__EVoxelPaintMaterialType_MAX = 4
	};

	/**
	 * Enum Voxel.EFailReason
	 */
	enum class Voxel_EFailReason : uint8_t
	{
		EFailReason__VoxelDataLocked   = 0,
		EFailReason__LinetracesPending = 1,
		EFailReason__OtherError        = 2,
		EFailReason__EFailReason_MAX   = 3
	};

	/**
	 * Enum Voxel.EBlueprintSuccess
	 */
	enum class Voxel_EBlueprintSuccess : uint8_t
	{
		EBlueprintSuccess__Success               = 0,
		EBlueprintSuccess__Failed                = 1,
		EBlueprintSuccess__EBlueprintSuccess_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelSpawnerConfigRayWorldType
	 */
	enum class Voxel_EVoxelSpawnerConfigRayWorldType : uint8_t
	{
		EVoxelSpawnerConfigRayWorldType__Flat                                = 0,
		EVoxelSpawnerConfigRayWorldType__Sphere                              = 1,
		EVoxelSpawnerConfigRayWorldType__EVoxelSpawnerConfigRayWorldType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelSpawnerConfigElementRandomGenerator
	 */
	enum class Voxel_EVoxelSpawnerConfigElementRandomGenerator : uint8_t
	{
		EVoxelSpawnerConfigElementRandomGenerator__Sobol                                         = 0,
		EVoxelSpawnerConfigElementRandomGenerator__Halton                                        = 1,
		EVoxelSpawnerConfigElementRandomGenerator__EVoxelSpawnerConfigElementRandomGenerator_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelStatsType
	 */
	enum class Voxel_EVoxelStatsType : uint8_t
	{
		EVoxelStatsType__NormalMarchingCubes      = 0,
		EVoxelStatsType__TransitionsMarchingCubes = 1,
		EVoxelStatsType__NormalCubic              = 2,
		EVoxelStatsType__TransitionsCubic         = 3,
		EVoxelStatsType__EVoxelStatsType_MAX      = 4
	};

	/**
	 * Enum Voxel.EVoxelWorldGeneratorPickerType
	 */
	enum class Voxel_EVoxelWorldGeneratorPickerType : uint8_t
	{
		EVoxelWorldGeneratorPickerType__Class                              = 0,
		EVoxelWorldGeneratorPickerType__Object                             = 1,
		EVoxelWorldGeneratorPickerType__EVoxelWorldGeneratorPickerType_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Voxel.IntBox
	 * Size -> 0x0018
	 */
	struct FIntBox
	{
	public:
		struct FIntVector                                          Min;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          Max;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelTransformableWorldGeneratorPicker
	 * Size -> 0x0018
	 */
	struct FVoxelTransformableWorldGeneratorPicker
	{
	public:
		Voxel_EVoxelWorldGeneratorPickerType                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CPO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldGeneratorClass;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelTransformableWorldGenerator*                   WorldGeneratorObject;                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterial
	 * Size -> 0x0004
	 */
	struct FVoxelMaterial
	{
	public:
		unsigned char                                              UnknownData_ZOQ7[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialColor
	 * Size -> 0x0014
	 */
	struct FVoxelPaintMaterialColor
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintR;                                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintG;                                                 // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintB;                                                 // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintA;                                                 // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialDoubleIndexSet
	 * Size -> 0x000C
	 */
	struct FVoxelPaintMaterialDoubleIndexSet
	{
	public:
		unsigned char                                              IndexA;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IndexB;                                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NL32[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Blend;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetIndexA;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetIndexB;                                              // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetBlend;                                               // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AW88[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterial
	 * Size -> 0x002C
	 */
	struct FVoxelPaintMaterial
	{
	public:
		Voxel_EVoxelPaintMaterialType                              Type;                                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H8SK[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Amount;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVoxelPaintMaterialColor                            Color;                                                   // 0x0008(0x0014) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              Index;                                                   // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GZNO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialDoubleIndexSet                   DoubleIndexSet;                                          // 0x0020(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Voxel.VoxelUncompressedWorldSave
	 * Size -> 0x0048
	 */
	struct FVoxelUncompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_AX2X[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelCompressedWorldSave
	 * Size -> 0x0020
	 */
	struct FVoxelCompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_9WBS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelHeightmapImporterWeightmapInfos
	 * Size -> 0x0018
	 */
	struct FVoxelHeightmapImporterWeightmapInfos
	{
	public:
		struct FFilePath                                           File;                                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		Voxel_EVoxelRGBALayer                                      Layer;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RA1Y[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelLandscapeImporterLayerInfo
	 * Size -> 0x0010
	 */
	struct FVoxelLandscapeImporterLayerInfo
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Voxel_EVoxelRGBALayer                                      Layer;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAVY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelBasicMaterialCollectionElement
	 * Size -> 0x0010
	 */
	struct FVoxelBasicMaterialCollectionElement
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  TessellatedMaterial;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionDoubleIndex
	 * Size -> 0x0008
	 */
	struct FVoxelMaterialCollectionDoubleIndex
	{
	public:
		int32_t                                                    I;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    J;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionTripleIndex
	 * Size -> 0x000C
	 */
	struct FVoxelMaterialCollectionTripleIndex
	{
	public:
		int32_t                                                    I;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    J;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionElementIndex
	 * Size -> 0x0018
	 */
	struct FVoxelMaterialCollectionElementIndex
	{
	public:
		unsigned char                                              InstanceIndex;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHG0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           MaterialInstance;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionGenerated
	 * Size -> 0x0018
	 */
	struct FVoxelMaterialCollectionGenerated
	{
	public:
		class UVoxelMaterialCollectionSingle*                      GeneratedSingleMaterials;                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelMaterialCollectionDouble*                      GeneratedDoubleMaterials;                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelMaterialCollectionTriple*                      GeneratedTripleMaterials;                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionElement
	 * Size -> 0x0028
	 */
	struct FVoxelMaterialCollectionElement
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALQC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialFunction*                                   MaterialFunction;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelMaterialCollectionElementIndex>        Children;                                                // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelProcMeshSection
	 * Size -> 0x00A0
	 */
	struct FVoxelProcMeshSection
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5OO[0x98];                                  // 0x0008(0x0098) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.ModifiedVoxelValue
	 * Size -> 0x0014
	 */
	struct FModifiedVoxelValue
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldValue;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewValue;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.ModifiedVoxelMaterial
	 * Size -> 0x0014
	 */
	struct FModifiedVoxelMaterial
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      OldMaterial;                                             // 0x000C(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      NewMaterial;                                             // 0x0010(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.GetVoxelProjectionVoxel
	 * Size -> 0x0014
	 */
	struct FGetVoxelProjectionVoxel
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      Material;                                                // 0x0010(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelSpawnerConfigElementAdvanced
	 * Size -> 0x0010
	 */
	struct FVoxelSpawnerConfigElementAdvanced
	{
	public:
		class FName                                                SeedName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DefaultSeed;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Voxel_EVoxelSpawnerConfigElementRandomGenerator            RandomGenerator;                                         // 0x000C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZVQ[0x3];                                   // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	};

	/**
	 * ScriptStruct Voxel.VoxelSpawnerConfigElement
	 * Size -> 0x0030
	 */
	struct FVoxelSpawnerConfigElement
	{
	public:
		class FName                                                DensityGraphOutputName;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelSpawner*                                       Spawner;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelSpawnerConfigElementAdvanced                  Advanced;                                                // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZJH[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelSpawnerConfigHeightElement
	 * Size -> 0x0030
	 */
	struct FVoxelSpawnerConfigHeightElement
	{
	public:
		class FName                                                HeightGraphOutputName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ChunkSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   GenerationDistanceInChunks;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelSpawnerConfigElement>                  Spawners;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03L4[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelSpawnerGroupChild
	 * Size -> 0x0010
	 */
	struct FVoxelSpawnerGroupChild
	{
	public:
		class UVoxelSpawner*                                       Spawner;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Probability;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMV5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelWorldGeneratorPicker
	 * Size -> 0x0018
	 */
	struct FVoxelWorldGeneratorPicker
	{
	public:
		Voxel_EVoxelWorldGeneratorPickerType                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECEO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldGeneratorClass;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelWorldGenerator*                                WorldGeneratorObject;                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelRange
	 * Size -> 0x0008
	 */
	struct FVoxelRange
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelValue
	 * Size -> 0x0002
	 */
	struct FVoxelValue
	{
	public:
		unsigned char                                              UnknownData_MBVR[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
