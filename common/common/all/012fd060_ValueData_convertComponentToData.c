// addr: 0x012fd060
// name: ValueData_convertComponentToData
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_convertComponentToData(void * this, void * serializer) */

void __thiscall ValueData_convertComponentToData(void *this,void *serializer)

{
  void *map;
  void *local_10;
  void *local_c;
  void *local_8;
  void *local_4;
  
                    /* Serializes a ValueData component: writes the type id and ownership flag, then
                       dispatches by type to serialize primitive, pointer, vector, and map payloads.
                        */
  local_c = serializer;
  local_10 = serializer;
  local_8 = serializer;
  local_4 = serializer;
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting ValueData:\n");
  DebugStream_writeCString(serializer,"TypeID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"mOwningReference: ");
  Serializer_appendInteger(serializer,(uint)(*(int *)((int)this + 4) != 5));
  switch(*(undefined4 *)((int)this + 4)) {
  case 1:
    Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 8));
    break;
  case 2:
    Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
    break;
  case 3:
    Serializer_appendString(serializer,*(void **)((int)this + 8));
    break;
  default:
    FUN_012f5a60("!\"Unhandled type in ValueData::convertComponentToData()\"",
                 "..\\common\\common\\all\\ValueData.cpp",0x588);
    break;
  case 5:
    PersistentComponent_serializePointer(serializer,*(void **)((int)this + 8));
    break;
  case 6:
    STLVector_int_serialize(&stack0x00000000,*(int *)((int)this + 8));
    break;
  case 7:
    STLVector_string_serialize(*(int *)((int)this + 8));
    break;
  case 8:
    STLVector_serializablePointer_serialize(&local_10,*(int *)((int)this + 8));
    break;
  case 9:
    PersistentComponent_serializePointer(serializer,*(void **)((int)this + 8));
    break;
  case 10:
    PersistentComponent_serializePointer(serializer,*(void **)((int)this + 8));
    break;
  case 0xd:
    STLMap_intToInt_serialize_012fc6a0(&local_c,*(void **)((int)this + 8),(int)map);
    break;
  case 0xe:
    STLMap_intToSerializablePointer_serialize(&local_8,*(int *)((int)this + 8));
  }
  DebugStream_writeCString(serializer,"Ending ValueData:\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

