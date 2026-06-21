// addr: 0x01530e70
// name: SerializableIntFieldExtended_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializableIntFieldExtended_serialize(void * this, void * serializer) */

void __thiscall SerializableIntFieldExtended_serialize(void *this,void *serializer)

{
  void *map;
  
                    /* Serializes an object derived from SerializableIntField with several
                       integer/byte fields, two strings, two int-to-int-vector maps, and trailing
                       integers. Evidence is the base call to SerializableIntField_serialize. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x28));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x30));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x34));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x38));
  Serializer_appendString(serializer,(void *)((int)this + 0x3c));
  Serializer_appendString(serializer,(void *)((int)this + 0x58));
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0xc),map);
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0x18),map);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x74));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x78));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

