// addr: 0x01441020
// name: EventCommand_DebugFields_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_DebugFields_serialize(void * this, void * stream) */

void __thiscall EventCommand_DebugFields_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes an event command payload by writing base fields,
                       three string members, and a trailing boolean/integer field. */
  (**(code **)(*(int *)this + 8))(stream);
  UChatCommand_dump(this,stream);
  Serializer_appendString(stream,(void *)((int)this + 0x44));
  Serializer_appendString(stream,(void *)((int)this + 0x60));
  Serializer_appendString(stream,(void *)((int)this + 0x7c));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x98));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

