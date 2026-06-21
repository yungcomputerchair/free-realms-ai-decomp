// addr: 0x014d1350
// name: GuildCommand_GuildInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_GuildInfo_serialize(void * this, void * stream) */

void __thiscall GuildCommand_GuildInfo_serialize(void *this,void *stream)

{
                    /* Writes a guild-info style payload after base GuildCommand data: three integer
                       fields, two string members, and a boolean flag. */
  (**(code **)(*(int *)this + 8))(stream);
  GuildCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  Serializer_appendString(stream,(void *)((int)this + 0x14));
  Serializer_appendString(stream,(void *)((int)this + 0x30));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x4c));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

