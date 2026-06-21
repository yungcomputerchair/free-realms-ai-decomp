// addr: 0x014f4db0
// name: NetworkCommand_EULA_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_EULA_serialize(void * this, void * serializer) */

void __thiscall NetworkCommand_EULA_serialize(void *this,void *serializer)

{
                    /* Serializes EULA by writing its base/string data, two integer fields, and
                       three container/range members. */
  (**(code **)(*(int *)this + 8))(serializer);
  Serializer_appendString(serializer,(void *)((int)this + 4));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  FUN_014f4bc0((int)this + 0x28);
  FUN_013587f0((int)this + 0x34);
  FUN_013587f0((int)this + 0x40);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

