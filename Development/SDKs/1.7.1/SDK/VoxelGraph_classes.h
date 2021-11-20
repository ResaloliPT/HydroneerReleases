#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class VoxelGraph.VoxelNode
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UVoxelNode : public UObject
{
public:
	TArray<struct FVoxelPin>                           InputPins;                                                 // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVoxelPin>                           OutputPins;                                                // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsPreviewing;                                             // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XC35[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PreviewPinIndex;                                           // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastPreviewPinIndex;                                       // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AS6[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoxelGraphGenerator*                        Graph;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InputPinCount;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EPNN[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_BiomeMerge
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UVoxelNode_BiomeMerge : public UVoxelNode
{
public:
	TArray<struct FString>                             Biomes;                                                    // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFunctionSeparatorType>              AdditionalData;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PJU[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMerge");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNodeHelper
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UVoxelNodeHelper : public UVoxelNode
{
public:
	unsigned char                                      UnknownData_9JLF[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNodeHelper");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelMaterialNode
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelMaterialNode : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelMaterialNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelFloatNode
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelFloatNode : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelFloatNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelIntNode
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelIntNode : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelIntNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelEditNodeBase
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelEditNodeBase : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelEditNodeBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNoiseNodeBase
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNoiseNodeBase : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNoiseNodeBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelExposedNode
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class UVoxelExposedNode : public UVoxelNodeHelper
{
public:
	struct FName                                       UniqueName;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Category;                                                  // 0x00B0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tooltip;                                                   // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeRenamed;                                             // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YCB3[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelExposedNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_BiomeMapSampler
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UVoxelNode_BiomeMapSampler : public UVoxelExposedNode
{
public:
	class UTexture2D*                                  Texture;                                                   // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48DU[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBiomeMapElement>                    Biomes;                                                    // 0x00E8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BiomeMapSampler");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Curve
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UVoxelNode_Curve : public UVoxelExposedNode
{
public:
	class UCurveFloat*                                 Curve;                                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Curve");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_CurveColor
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UVoxelNode_CurveColor : public UVoxelExposedNode
{
public:
	class UCurveLinearColor*                           Curve;                                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CurveColor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_XF
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_XF : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XF");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_YF
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_YF : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YF");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ZF
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ZF : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZF");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_XI
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_XI : public UVoxelIntNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_XI");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_YI
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_YI : public UVoxelIntNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_YI");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ZI
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ZI : public UVoxelIntNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ZI");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GetColor
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GetColor : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetColor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_MakeMaterialFromColor
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromColor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GetIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GetIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GetDoubleIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GetDoubleIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetDoubleIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FMax
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FMax : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMax");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FMin
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FMin : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMin");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IMax
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IMax : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMax");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IMin
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IMin : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMin");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FLess
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FLess : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLess");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FLessEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FLessEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FLessEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FGreater
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FGreater : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreater");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FGreaterEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FGreaterEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FGreaterEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FNotEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FNotEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FNotEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ILess
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ILess : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILess");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ILessEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ILessEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILessEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IGreater
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IGreater : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreater");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IGreaterEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IGreaterEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IGreaterEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_INotEqual
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_INotEqual : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_INotEqual");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FAdd
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FAdd : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAdd");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FMultiply
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FMultiply : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMultiply");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FSubstract
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FSubstract : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSubstract");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FDivide
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FDivide : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FDivide");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IAdd
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IAdd : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAdd");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IMultiply
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IMultiply : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMultiply");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ISubstract
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ISubstract : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISubstract");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IDivide
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IDivide : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IDivide");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ILeftBitShift
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ILeftBitShift : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ILeftBitShift");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IRightBitShift
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IRightBitShift : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IRightBitShift");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FloatOfInt
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FloatOfInt : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatOfInt");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Round
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Round : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Round");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Lerp
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Lerp : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Lerp");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SafeLerp
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SafeLerp : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SafeLerp");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Clamp
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Clamp : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Clamp");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_BAnd
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_BAnd : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BAnd");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_BOr
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_BOr : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BOr");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_BNot
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_BNot : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_BNot");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SwitchInt
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SwitchInt : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchInt");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SwitchFloat
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SwitchFloat : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SwitchFloat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_1MinusX
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_1MinusX : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_1MinusX");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_OneOverX
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_OneOverX : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_OneOverX");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_MinusX
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_MinusX : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_MinusX");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Sqrt
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Sqrt : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sqrt");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Pow
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Pow : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Pow");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IMod
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IMod : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IMod");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FMod
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FMod : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FMod");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FAbs
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FAbs : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FAbs");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IAbs
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_IAbs : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IAbs");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Ceil
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Ceil : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Ceil");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Floor
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Floor : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Floor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_VectorLength
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_VectorLength : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorLength");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Fraction
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Fraction : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Fraction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FSign
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_FSign : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FSign");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ISign
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_ISign : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ISign");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_InvSqrt
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_InvSqrt : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_InvSqrt");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Loge
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Loge : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Loge");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Exp
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Exp : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Exp");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Sin
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Sin : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sin");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Asin
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Asin : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Asin");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Sinh
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Sinh : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sinh");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Cos
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Cos : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Cos");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Acos
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Acos : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Acos");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Tan
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Tan : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Tan");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Atan
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Atan : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Atan2
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_Atan2 : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Atan2");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_VectorRotateAngleAxis
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_VectorRotateAngleAxis : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VectorRotateAngleAxis");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_PerlinWormDistance
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_PerlinWormDistance : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_PerlinWormDistance");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_LOD
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_LOD : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LOD");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_RandomFloat
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_RandomFloat : public UVoxelNodeHelper
{
public:
	float                                              Min;                                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomFloat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_RandomInt
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_RandomInt : public UVoxelNodeHelper
{
public:
	int                                                Min;                                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RandomInt");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_VoxelSize
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_VoxelSize : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoxelSize");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_WorldSize
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_WorldSize : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldSize");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_If
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_If : public UVoxelNodeHelper
{
public:
	VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis BranchToUseForRangeAnalysis;                               // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4RV[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_If");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IfWithDefaultToFalse
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToFalse");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IfWithDefaultToTrue
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IfWithDefaultToTrue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SetValue
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SetValue : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SetColor
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SetColor : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetColor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SetDoubleIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SetDoubleIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetDoubleIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SetSingleIndex
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_SetSingleIndex : public UVoxelMaterialNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetSingleIndex");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_SetNode
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UVoxelNode_SetNode : public UVoxelNode
{
public:
	uint32_t                                           Index;                                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVoxelGraphOutput                           CachedOutput;                                              // 0x006C(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R701[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_SetNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FunctionSeparator
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UVoxelNode_FunctionSeparator : public UVoxelNode
{
public:
	TArray<struct FFunctionSeparatorType>              ArgTypes;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<VoxelGraph_EVoxelDataPinCategory>           Types;                                                     // 0x0078(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FunctionSeparator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FlowMerge
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UVoxelNode_FlowMerge : public UVoxelNode
{
public:
	TArray<struct FFlowMergeType>                      Types;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FlowMerge");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelOptionallyExposedNode
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UVoxelOptionallyExposedNode : public UVoxelExposedNode
{
public:
	bool                                               bExposeToBP;                                               // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23J7[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelOptionallyExposedNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_NoiseNode
// 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
class UVoxelNode_NoiseNode : public UVoxelNoiseNodeBase
{
public:
	float                                              Frequency;                                                 // 0x00A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_EInterp                                 Interpolation;                                             // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H5TE[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           NumberOfSamples;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ADEZ[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVoxelRange>                         OutputRanges;                                              // 0x00B8(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DGradientPerturb
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_2DGradientPerturb : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturb");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_NoiseNodeFractal
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode
{
public:
	int                                                FractalOctaves;                                            // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FractalLacunarity;                                         // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FractalGain;                                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_EFractalType                            FractalType;                                               // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXC0[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, unsigned char>                LODToOctavesMap;                                           // 0x00D8(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DGradientPerturbFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_2DGradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DGradientPerturbFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DGradientPerturb
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_3DGradientPerturb : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturb");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DGradientPerturbFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_3DGradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DGradientPerturbFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelEditNode
// 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
class UVoxelEditNode : public UVoxelEditNodeBase
{
public:
	struct FVoxelWorldGeneratorPicker                  DefaultWorldGenerator;                                     // 0x00A8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelEditNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_EditGetValue
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UVoxelNode_EditGetValue : public UVoxelEditNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_EditGetMaterial
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UVoxelNode_EditGetMaterial : public UVoxelEditNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetMaterial");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_EditGetCustomOutput
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UVoxelNode_EditGetCustomOutput : public UVoxelEditNode
{
public:
	struct FName                                       OutputName;                                                // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetCustomOutput");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_EditGetHardness
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_EditGetHardness : public UVoxelEditNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_EditGetHardness");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_LocalToGlobal
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_LocalToGlobal : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LocalToGlobal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GlobalToLocal
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GlobalToLocal : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalToLocal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GlobalX
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GlobalX : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalX");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GlobalY
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GlobalY : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalY");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GlobalZ
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_GlobalZ : public UVoxelFloatNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GlobalZ");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphBlueprintTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelGraphBlueprintTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphBlueprintTools");
		return ptr;
	}



	void STATIC_SetVoxelGraphIntParameter(class UVoxelWorldGenerator* WorldGenerator, const struct FName& UniqueName, int Value);
	void STATIC_SetVoxelGraphFloatParameter(class UVoxelWorldGenerator* WorldGenerator, const struct FName& UniqueName, float Value);
	void STATIC_ClearConstantsOverrides(class UVoxelWorldGenerator* WorldGenerator);
	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphGenerator
// 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
class UVoxelGraphGenerator : public UVoxelTransformableWorldGenerator
{
public:
	class UVoxelGraphOutputsConfig*                    Outputs;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntBox                                     WorldBounds;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutomaticPreview;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableStats;                                              // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRangeAnalysisDebug;                                 // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFlowMergeAndFunctionsWarnings;                        // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompileToCppOnSave;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W99L[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   SaveLocation;                                              // 0x0050(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bEnableRangeAnalysis;                                      // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideRangeAnalysisErrors;                                  // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFunctions;                                            // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetailedErrors;                                           // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebugGraph;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPinsIds;                                              // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_11HA[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	VoxelGraph_EVoxelGraphGeneratorDebugLevel          DebugLevel;                                                // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KL5T[0x3];                                     // 0x0066(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_332F[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetToDebug;                                             // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODToDebug;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FunctionToDebug;                                           // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_EVoxelFunctionAxisDependencies          AxisDependenciesToDebug;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3ME[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NodesDepthScaleFactor;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideDataNodes;                                            // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RY21[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVoxelNode*>                          AllNodes;                                                  // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UVoxelNode*>                          DebugNodes;                                                // 0x00A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UVoxelNode*                                  FirstNode;                                                 // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       FirstNodePindId;                                           // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, float>                          FloatParameters;                                           // 0x00D0(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            IntParameters;                                             // 0x0120(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphGeneratorHelper
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UVoxelGraphGeneratorHelper : public UVoxelTransformableWorldGenerator
{
public:
	struct FIntBox                                     Bounds;                                                    // 0x0028(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRangeAnalysis;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CYB[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphGeneratorHelper");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphMacroInputOutputNode
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UVoxelGraphMacroInputOutputNode : public UVoxelNode
{
public:
	TArray<struct FVoxelPinNameAndType>                Pins;                                                      // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UVoxelGraphMacro*                            Macro;                                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputOutputNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphMacroInputNode
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroInputNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphMacroOutputNode
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroOutputNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphMacro
// 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
class UVoxelGraphMacro : public UVoxelGraphGenerator
{
public:
	struct FString                                     Tooltip;                                                   // 0x0170(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInContextMenu;                                        // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVFV[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoxelGraphMacroInputNode*                   InputNode;                                                 // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoxelGraphMacroOutputNode*                  OutputNode;                                                // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacro");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphMacroNode
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UVoxelGraphMacroNode : public UVoxelNode
{
public:
	class UVoxelGraphMacro*                            Macro;                                                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphMacroNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphOutputsConfig
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVoxelGraphOutputsConfig : public UObject
{
public:
	TArray<struct FVoxelGraphOutput>                   Outputs;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphOutputsConfig");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphPreviewSettings
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UVoxelGraphPreviewSettings : public UObject
{
public:
	VoxelGraph_EVoxelGraphPreviewAxes                  LeftToRight;                                               // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FFJ[0x3];                                     // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	VoxelGraph_EVoxelGraphPreviewAxes                  BottomToTop;                                               // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DU8S[0x3];                                     // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FIntVector                                  Center;                                                    // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoomLevel;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviewedBounds;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_EVoxelGraphPreviewType                  PreviewType2D;                                             // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FKIR[0x3];                                     // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Voxel_EVoxelMaterialConfig                         MaterialConfig;                                            // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MFKQ[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLinearColor>                        IndexColors;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bHeightBasedColor;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableWater;                                              // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJN9[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Resolution;                                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODUsed;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LightDirection;                                            // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartBias;                                                 // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSteps;                                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Brightness;                                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShadowDensity;                                             // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8P9[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MeshScale;                                                 // 0x00B0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6V4O[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoxelGraphGenerator*                        Graph;                                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphPreviewSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_HeightmapSampler
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UVoxelNode_HeightmapSampler : public UVoxelExposedNode
{
public:
	bool                                               bFloatHeightmap;                                           // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6QM[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoxelHeightmapAssetFloat*                   HeightmapFloat;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoxelHeightmapAssetUINT16*                  HeightmapUINT16;                                           // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBilinearInterpolation;                                    // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVFU[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_HeightmapSampler");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelLocalVariableBase
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UVoxelLocalVariableBase : public UVoxelNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelLocalVariableDeclaration
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UVoxelLocalVariableDeclaration : public UVoxelLocalVariableBase
{
public:
	struct FName                                       Name;                                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_EVoxelPortalNodePinCategory             Category;                                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KPY9[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       VariableGuid;                                              // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M70I[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableDeclaration");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelLocalVariableUsage
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UVoxelLocalVariableUsage : public UVoxelLocalVariableBase
{
public:
	struct FVoxelPortalNodeSelector                    Selector;                                                  // 0x0068(0x0008) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	class UVoxelLocalVariableDeclaration*              Declaration;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       DeclarationGuid;                                           // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelLocalVariableUsage");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelGraphNodeInterface
// 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
class UVoxelGraphNodeInterface : public UEdGraphNode
{
public:
	struct FString                                     InfoMsg;                                                   // 0x0098(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WarningMsg;                                                // 0x00A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DependenciesMsg;                                           // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatsMsg;                                                  // 0x00C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeAnalysisErrorMsg;                                     // 0x00D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RangeAnalysisDebugMsg;                                     // 0x00E8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelGraphNodeInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode
{
public:
	bool                                               bComputeDerivative;                                        // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGMR[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal
// 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
class UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal
{
public:
	bool                                               bComputeDerivative;                                        // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZUQJ[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DValueNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DValueNoiseFractal
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DValueNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DPerlinNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_2DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DSimplexNoise
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_2DSimplexNoise : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DCubicNoise
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DCubicNoiseFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCubicNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DValueNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DValueNoiseFractal
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DValueNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DPerlinNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UVoxelNode_3DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DSimplexNoise
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_3DSimplexNoise : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DCubicNoise
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DCubicNoiseFractal
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCubicNoiseFractal");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_CellularNoise
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode
{
public:
	VoxelGraph_ECellularDistanceFunction               DistanceFunction;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VoxelGraph_ECellularReturnType                     ReturnType;                                                // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHAD[0x2];                                     // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Jitter;                                                    // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_CellularNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DCellularNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DCellularNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DCellularNoise
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DCellularNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IQNoiseBase
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IQNoiseBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DIQNoiseBase
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
public:
	float                                              Rotation;                                                  // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DE9N[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoiseBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_ColorParameter
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UVoxelNode_ColorParameter : public UVoxelOptionallyExposedNode
{
public:
	struct FLinearColor                                Color;                                                     // 0x00E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_ColorParameter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelSeedNode
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelSeedNode : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelSeedNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Seed
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UVoxelNode_Seed : public UVoxelSeedNode
{
public:
	int                                                DefaultValue;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x00AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDUT[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Seed");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_AddSeeds
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_AddSeeds : public UVoxelSeedNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_AddSeeds");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_TextureSampler
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UVoxelNode_TextureSampler : public UVoxelExposedNode
{
public:
	class UTexture2D*                                  Texture;                                                   // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBilinearInterpolation;                                    // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GNB2[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	VoxelGraph_EVoxelTextureSamplerMode                Mode;                                                      // 0x00E4(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5A5N[0x3];                                     // 0x00E1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TextureSampler");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_VoronoiNoiseBase
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_VoronoiNoiseBase : public UVoxelNoiseNodeBase
{
public:
	bool                                               bComputeNeighbors;                                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D45Z[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Dimension;                                                 // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_VoronoiNoiseBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DVoronoiNoise
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DVoronoiNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DWhiteNoise
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_2DWhiteNoise : public UVoxelNoiseNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DWhiteNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DWhiteNoise
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_3DWhiteNoise : public UVoxelNoiseNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DWhiteNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_WorldGeneratorSamplerBase
// 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
class UVoxelNode_WorldGeneratorSamplerBase : public UVoxelExposedNode
{
public:
	struct FVoxelWorldGeneratorPicker                  WorldGenerator;                                            // 0x00D8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Seeds;                                                     // 0x00F0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldGeneratorSamplerBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GetWorldGeneratorValue
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UVoxelNode_GetWorldGeneratorValue : public UVoxelNode_WorldGeneratorSamplerBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetWorldGeneratorValue");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_GetWorldGeneratorMaterial
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UVoxelNode_GetWorldGeneratorMaterial : public UVoxelNode_WorldGeneratorSamplerBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_GetWorldGeneratorMaterial");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_WorldGeneratorSampler
// 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
class UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode
{
public:
	struct FVoxelWorldGeneratorPicker                  WorldGenerator;                                            // 0x00D8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Seeds;                                                     // 0x00F0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_WorldGeneratorSampler");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DIQNoiseBase
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
public:
	struct FRotator                                    Rotation;                                                  // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLZ1[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoiseBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_2DIQNoise
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UVoxelNode_2DIQNoise : public UVoxelNode_2DIQNoiseBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_2DIQNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_3DIQNoise
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UVoxelNode_3DIQNoise : public UVoxelNode_3DIQNoiseBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_3DIQNoise");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_LODSwitch
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UVoxelNode_LODSwitch : public UVoxelNode
{
public:
	VoxelGraph_EVoxelDataPinCategory                   Type;                                                      // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LOD;                                                       // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0H4E[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_LODSwitch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_StaticClampFloat
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_StaticClampFloat : public UVoxelNodeHelper
{
public:
	float                                              Min;                                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_StaticClampFloat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat
// 0x00A8 (FullSize[0x0150] - InheritedSize[0x00A8])
class UVoxelNode_RangeAnalysisDebuggerFloat : public UVoxelNodeHelper
{
public:
	float                                              Min;                                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraphMin;                                                  // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraphMax;                                                  // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraphStep;                                                 // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGK2[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x00C0(0x0088) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRNC[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_Sleep
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_Sleep : public UVoxelNodeHelper
{
public:
	int                                                NumberOfLoops;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y10Y[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_Sleep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_TargetSelector
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UVoxelNode_TargetSelector : public UVoxelNodeHelper
{
public:
	struct FName                                       TargetName;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_TargetSelector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_RangeUnion
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UVoxelNode_RangeUnion : public UVoxelNodeHelper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_RangeUnion");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_FloatParameter
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UVoxelNode_FloatParameter : public UVoxelOptionallyExposedNode
{
public:
	float                                              Value;                                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8T0S[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_FloatParameter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class VoxelGraph.VoxelNode_IntParameter
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UVoxelNode_IntParameter : public UVoxelOptionallyExposedNode
{
public:
	int                                                Value;                                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJOV[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelGraph.VoxelNode_IntParameter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
