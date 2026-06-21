// addr: 0x014d4070
// name: GuildCommand_GuildName_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_GuildName_serialize(void * this, void * stream) */

void __thiscall GuildCommand_GuildName_serialize(void *this,void *stream)

{
                    /* Writes a GuildCommand payload with one integer id and one string/name member
                       after the base GuildCommand fields. */
  (**(code **)(*(int *)this + 8))(stream);
  GuildCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendString(stream,(void *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

