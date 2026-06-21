// addr: 0x014d1ce0
// name: GuildCommand_SetMOTD_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTD_serialize(void * this, void * stream) */

void __thiscall GuildCommand_SetMOTD_serialize(void *this,void *stream)

{
                    /* Writes a GuildCommand payload containing an integer field, a string member,
                       and a trailing boolean flag after the base GuildCommand fields. */
  (**(code **)(*(int *)this + 8))(stream);
  GuildCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendString(stream,(void *)((int)this + 0xc));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x28));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

