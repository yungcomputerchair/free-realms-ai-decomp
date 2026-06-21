// addr: 0x014d68d0
// name: GuildCommand_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_serialize(void * this, void * stream) */

void __thiscall GuildCommand_serialize(void *this,void *stream)

{
                    /* Writes common GuildCommand debug/serialized output by emitting the base
                       command data and the AccountID field between GuildCommand start/end markers.
                        */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GuildCommand\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"AccountID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending GuildCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

