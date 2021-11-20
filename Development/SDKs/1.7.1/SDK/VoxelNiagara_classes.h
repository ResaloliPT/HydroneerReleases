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

// Class VoxelNiagara.NiagaraDataInterfaceVoxelDataAsset
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraDataInterfaceVoxelDataAsset : public UNiagaraDataInterface
{
public:
	class UVoxelDataAsset*                             Asset;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelNiagara.NiagaraDataInterfaceVoxelDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
