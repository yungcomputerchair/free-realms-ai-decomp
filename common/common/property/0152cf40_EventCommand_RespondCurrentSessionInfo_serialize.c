// addr: 0x0152cf40
// name: EventCommand_RespondCurrentSessionInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondCurrentSessionInfo_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RespondCurrentSessionInfo_serialize(void *this,void *serializer)

{
                    /* Serializes current event session info after the SerializableIntField base,
                       writing four integer fields and a trailing byte/boolean field. Begin/end
                       serializer virtual calls wrap the payload. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x18));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

