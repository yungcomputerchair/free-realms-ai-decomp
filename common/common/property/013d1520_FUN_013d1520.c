// addr: 0x013d1520
// name: FUN_013d1520
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_013d1520(void * this, void * serializer) */

void __thiscall FUN_013d1520(void *this,void *serializer)

{
  void *map;
  
                    /* Serializes a complex command/object payload containing multiple integers,
                       strings, two int-to-int maps, and a vector of strings. No strings, caller
                       names, or RTTI in the briefing identify the class safely. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendString(serializer,(void *)((int)this + 0x2c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x48));
  STLMap_intToInt_serialize_012fc6a0(&stack0x00000000,(void *)((int)this + 0x4c),(int)map);
  STLMap_intToInt_serialize_012fc6a0(&stack0x00000000,(void *)((int)this + 0x58),(int)map);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 100));
  Serializer_appendString(serializer,(void *)((int)this + 0x84));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xa0));
  Serializer_appendString(serializer,(void *)((int)this + 0xa4));
  Serializer_appendString(serializer,(void *)((int)this + 0x10));
  Serializer_appendString(serializer,(void *)((int)this + 0x68));
  STLVector_string_serialize((int)this + 0xf8);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

