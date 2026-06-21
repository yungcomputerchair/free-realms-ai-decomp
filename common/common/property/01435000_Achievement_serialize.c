// addr: 0x01435000
// name: Achievement_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Achievement_serialize(void * this, void * serializer) */

void __thiscall Achievement_serialize(void *this,void *serializer)

{
                    /* Serializes Achievement fields by bracketing the serializer, writing seven
                       integer fields, then serializing the trailing string/vector-like member at
                       offset 0x20. */
  (**(code **)(*(int *)this + 8))(serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x1c));
  Serializer_appendString(serializer,(void *)((int)this + 0x20));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

