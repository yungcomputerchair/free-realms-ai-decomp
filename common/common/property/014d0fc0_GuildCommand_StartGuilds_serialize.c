// addr: 0x014d0fc0
// name: GuildCommand_StartGuilds_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_StartGuilds_serialize(void * this, void * stream) */

void __thiscall GuildCommand_StartGuilds_serialize(void *this,void *stream)

{
                    /* Writes GuildCommand_StartGuilds debug/serialized output: base GuildCommand
                       fields plus one integer field. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GuildCommand_StartGuilds\n");
  GuildCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending GuildCommand_StartGuilds\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

