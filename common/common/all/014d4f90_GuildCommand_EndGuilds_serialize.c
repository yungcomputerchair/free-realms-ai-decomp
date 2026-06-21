// addr: 0x014d4f90
// name: GuildCommand_EndGuilds_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_EndGuilds_serialize(void * this, void * stream) */

void __thiscall GuildCommand_EndGuilds_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GuildCommand_EndGuilds block via the common
                       GuildCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GuildCommand_EndGuilds\n");
  GuildCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GuildCommand_EndGuilds\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

