// addr: 0x0144b400
// name: EventCommand_RequestEventSessionInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionInfo_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RequestEventSessionInfo_serialize(void *this,void *serializer)

{
                    /* Serializes the event-session-info request by writing its inherited
                       SerializableIntField value and one integer field. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

