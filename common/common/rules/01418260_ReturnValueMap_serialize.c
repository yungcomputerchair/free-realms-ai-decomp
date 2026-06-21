// addr: 0x01418260
// name: ReturnValueMap_serialize
// subsystem: common/common/rules
// source (binary assert): common/common/rules/ReturnValueMap.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ReturnValueMap_deserialize(void * map, void * serializer) */

void __thiscall ReturnValueMap_serialize(void *this,void *map,void *serializer)

{
  void *pvVar1;
  char cVar2;
  undefined4 unaff_retaddr;
  void *pvVar3;
  void **ppvVar4;
  void *pvVar5;
  
                    /* Deserializes a ReturnValueMap by invoking the serializer begin/read hooks,
                       reading the contained map data, asserting each step succeeds, and then
                       closing the serializer scope. [QA: ReturnValueMap.cpp:0x91/0x95; writes map
                       via virtual serialize calls with asserts. Real deserialize is 01386980.] */
  pvVar1 = map;
  ppvVar4 = &map;
  pvVar3 = map;
  cVar2 = (**(code **)(*(int *)this + 0x10))(map,ppvVar4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\rules\\ReturnValueMap.cpp",0x91);
  }
  pvVar5 = pvVar1;
  cVar2 = FUN_01418020((int)this + 4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\rules\\ReturnValueMap.cpp",0x95,pvVar3,ppvVar4,pvVar5,
                 unaff_retaddr);
  }
  (**(code **)(*(int *)this + 0x14))(pvVar1);
  return;
}

