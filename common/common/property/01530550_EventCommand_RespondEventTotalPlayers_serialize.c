// addr: 0x01530550
// name: EventCommand_RespondEventTotalPlayers_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventTotalPlayers_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RespondEventTotalPlayers_serialize(void *this,void *serializer)

{
                    /* Serializes RespondEventTotalPlayers by writing the SerializableIntField base
                       and one integer total field. Serializer begin/end virtual calls bracket the
                       operation. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

