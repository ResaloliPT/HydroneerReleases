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

// BlueprintGeneratedClass BP_Crystal.BP_Crystal_C
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
class ABP_Crystal_C : public ABP_ParentResource_C
{
public:
	class UPointLightComponent*                        PointLight;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Crystal.BP_Crystal_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif