#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<System.SByte>
struct Comparison_1_t24B0881D1B2B583874C435CCE601D8153B235347;
// System.Comparison`1<System.Single>
struct Comparison_1_t3A9C92B924A2D5AB183F6ED08A24297546A00EF3;
// System.Comparison`1<System.TimeSpan>
struct Comparison_1_t2559E787A10268B918D205EBC0F43C7E47EF9196;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t399476F35C160BE2F6C8E90EFEB0C694BB77E23F;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2CDB9821AB1FE8B6BDFCF772D57F698C469C9E4F;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_tD4BC31B6FF53DDA2653A85F022C845C04A24DAD9;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t2CBC17142F6FC81785A464614AB3E23FD0500E7D;
// System.Comparison`1<System.UInt32>
struct Comparison_1_tC491A8DB2F7BCEA22B313C4E0208F2AA9289F536;
// System.Comparison`1<System.UInt64>
struct Comparison_1_tAD2EE8ADBFC43B9B3C9E35D1F33C129221813B47;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t9D6DA7297A619DB729C5E51FE08A0AB0280D6791;
// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t6235E9EDCBD32FB749A1044F9A607A96A23D0636;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_t5B715A7ABDAD691BC806419D2C395FB953DAD82D;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
struct EqualityComparer_1_t11A9B084429988E7F355D59524C7EB1C21B58FB1;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
struct EqualityComparer_1_t290DD173FACA97F400C1127A5C7A758A53677210;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
struct EqualityComparer_1_t906CC08AF3C90173A8217B5E4F41B4A1D8A17D0B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
struct EqualityComparer_1_t1A201EA4D36D150B1EDD81F1738845AE9EB44676;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t45FE802EF352C34CAA3F4A0584E100DDCC9198D5;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tE8847AB7887F4B8AC3A62DFDA664396EB213B3C0;
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
struct EqualityComparer_1_tEF889E22D9D4DCC61B29BF0A769116B233F1AF94;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_tB311C1541A2B21A73722217991C061FF4013B348;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t24C3D061E8C47F8C8847EDBCD75042B43195DDAA;
// System.Collections.Generic.IComparer`1<System.TimeSpan>
struct IComparer_1_tC2AA54D109A9FF1759B8051874FE3F17079DB0B6;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t8BE094E208421F281BFB2A42BE40C499F309E134;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_tEF47DB87AFF20A197CAAC45E336A88B25622DEAE;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t0F9FD9E0C3C024E550F93FC6FA64E17A9B6664FB;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t151A12630362DC32CDC69169EDE8F9E4B44C9FE7;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t624844BDED22588CB4107D171B29C26A4953C759;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_tCA34D86DF5FB128BAEE3BC4368D8742E6F28E286;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_tE9967D1BC02B38D5562D0FC9CC7C552F560D161E;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector4>
struct IComparer_1_tB795D30C1FA21CECBFF22194E28987E6208F4EDA;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t099CDF8D1C5448483E10CAA2F049F8A5E8614BB3;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<System.TimeSpan>
struct IEnumerable_1_t03D3FEF049AA8675BEC5888966FA1494ED75D19C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_tBF9FA89589B2C0FB5E113F8DE5D066BAEE4CC36C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_tF73D91ED795DAB619A7C0BB4C0537D5A45CA502C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t56127ACED3A3A19D7EE21287CFA78768235A0B9E;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t184E92D6D949817DA939C9B8A0BDB8EEB48C9B94;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_tAEB8533A43D70EC27436BC8F8DB790700C4C9B09;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t9F53E48CAC857B095C8071AC65B3FB45AB42CE12;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t47E725A87E8DA38B74327401954A54493CC3251E;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t94454BFD1698378EF89316298329B0EDE265094F;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF;
// System.Collections.Generic.IEnumerator`1<System.TimeSpan>
struct IEnumerator_1_tFBB9F963B0C6B30E9E0A562010BCC83BB5484EF4;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_tFD58DFEAB811B08E99F1194879CD74ECC67C3728;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2790AFF46E8616368C0C196E77307DAA14B1CFCC;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t0BBD0243936CC7808252B172CC5A780056A925AD;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t8676B7A2F2C1FB08F948399B0F2CFBEB6D0F534E;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_tBB2C204E95FBEFF1BA00A711757C51B749D5FADC;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct