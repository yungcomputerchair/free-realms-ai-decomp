// addr: 0x01301bc0
// name: ValueData_reconstructComponentFromData
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_reconstructComponentFromData(void * this, void * serializer) */

void __thiscall ValueData_reconstructComponentFromData(void *this,void *serializer)

{
  code *pcVar1;
  undefined4 unaff_EDI;
  undefined1 auStack_1c [4];
  void *local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  void *local_8;
  int local_4;
  
                    /* Deserializes/reconstructs a ValueData payload from serialized component data,
                       dispatching based on the stored type id and finalizing the serializer state.
                        */
  local_10 = serializer;
  local_18 = serializer;
  local_14 = serializer;
  local_c = serializer;
  local_8 = serializer;
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  Deserializer_readInteger(serializer,(int *)&stack0xffffffdc);
  FUN_01300680(unaff_EDI);
  Deserializer_readInteger(serializer,&local_4);
  switch(*(undefined4 *)((int)this + 4)) {
  case 1:
    Deserializer_readInteger(serializer,&local_4);
    pcVar1 = *(code **)(*(int *)this + 0x14);
    *(bool *)((int)this + 8) = local_4 != 0;
    (*pcVar1)(serializer);
    return;
  case 2:
    Deserializer_readInteger(serializer,(int *)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 3:
    Deserializer_readString(serializer,*(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  default:
    FUN_012f5a60("!\"Unhandled type in ValueData::reconstructComponentFromData()\"",
                 "..\\common\\common\\all\\ValueData.cpp",0x549);
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 5:
    PersistentComponent_deserializePointer(serializer,(void *)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 6:
    Deserializer_readIntegerVector(&stack0xffffffe0,*(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 7:
    Deserializer_readStringVector(auStack_1c,*(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 8:
    STLVector_serializablePointer_deserialize(&local_18,*(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 9:
    FUN_012faf70(serializer,(int)this + 8);
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 10:
    ValueData_deserializeComponentPtr(serializer,(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 0xd:
    Game_deserializeIntPairVector_01300190(&local_14,*(void **)((int)this + 8));
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  case 0xe:
    ValueData_deserializeComponentPairMap(&local_10);
    (**(code **)(*(int *)this + 0x14))(serializer);
    return;
  }
}

