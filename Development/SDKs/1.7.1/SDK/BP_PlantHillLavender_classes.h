﻿#pragma once

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

// BlueprintGeneratedClass BP_PlantHillLavender.BP_PlantHillLavender_C
// 0x0000 (FullSize[0x0378] - InheritedSize[0x0378])
class ABP_PlantHillLavender_C : public ABP_ParentPlant_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlantHillLavender.BP_PlantHillLavender_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
