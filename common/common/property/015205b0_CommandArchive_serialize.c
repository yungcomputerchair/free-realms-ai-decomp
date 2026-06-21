// addr: 0x015205b0
// name: CommandArchive_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandArchive_serialize(void * this, void * serializer) */

void __thiscall CommandArchive_serialize(void *this,void *serializer)

{
                    /* Serializes a CommandArchive-like object: string member, multiple integer
                       fields, an int vector, a string, and a final integer. Evidence is the call to
                       CommandArchive_serializeStringMember and serializer/container calls. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x1c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x24);
  Serializer_appendString(serializer,(void *)((int)this + 0x34));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

