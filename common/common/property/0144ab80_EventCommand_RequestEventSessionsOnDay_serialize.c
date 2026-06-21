// addr: 0x0144ab80
// name: EventCommand_RequestEventSessionsOnDay_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RequestEventSessionsOnDay_serialize(void *this,void *serializer)

{
                    /* Serializes the event-sessions-on-day request by writing its inherited
                       SerializableIntField value and three integer fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

