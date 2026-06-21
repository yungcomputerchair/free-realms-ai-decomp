// addr: 0x0152e390
// name: EventCommand_RespondPlayerStats_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondPlayerStats_serialize(void * this, void * serializer)
    */

void __thiscall EventCommand_RespondPlayerStats_serialize(void *this,void *serializer)

{
                    /* Serializes RespondPlayerStats by writing the SerializableIntField base and a
                       sequence of statistic integers. The order matches the dense integer fields
                       initialized by the RespondPlayerStats constructor. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x1c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x30));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x34));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x38));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x3c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

