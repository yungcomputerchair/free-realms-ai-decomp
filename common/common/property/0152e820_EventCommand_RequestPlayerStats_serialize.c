// addr: 0x0152e820
// name: EventCommand_RequestPlayerStats_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestPlayerStats_serialize(void * this, void * serializer)
    */

void __thiscall EventCommand_RequestPlayerStats_serialize(void *this,void *serializer)

{
                    /* Serializes RequestPlayerStats by writing the
                       SerializableIntField/EventCommand base plus two integer fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

