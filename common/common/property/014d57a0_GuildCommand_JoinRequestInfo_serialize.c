// addr: 0x014d57a0
// name: GuildCommand_JoinRequestInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_JoinRequestInfo_serialize(void * this, void * stream) */

void __thiscall GuildCommand_JoinRequestInfo_serialize(void *this,void *stream)

{
                    /* Writes a guild join/request-style payload with four integer fields, three
                       string members, and a trailing boolean flag after base GuildCommand data. */
  (**(code **)(*(int *)this + 8))(stream);
  GuildCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  Serializer_appendString(stream,(void *)((int)this + 0x18));
  Serializer_appendString(stream,(void *)((int)this + 0x34));
  Serializer_appendString(stream,(void *)((int)this + 0x50));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x6c));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

