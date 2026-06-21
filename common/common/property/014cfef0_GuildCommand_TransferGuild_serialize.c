// addr: 0x014cfef0
// name: GuildCommand_TransferGuild_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_TransferGuild_serialize(void * this, void * serializer) */

void __thiscall GuildCommand_TransferGuild_serialize(void *this,void *serializer)

{
  void *vector;
  
                    /* Serializes/dumps a GuildCommand_TransferGuild by writing the base
                       guild-command fields, a serializable pointer vector at this+8, and a trailing
                       byte/int flag. Evidence is the Starting/Ending GuildCommand_TransferGuild
                       strings and serializer calls. */
  vector = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting GuildCommand_TransferGuild\n");
  GuildCommand_serialize(this,serializer);
  STLVector_serializablePointer_serialize_014cfbd0
            (&stack0x00000000,(void *)((int)this + 8),(int)vector);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x18));
  DebugStream_writeCString(serializer,"Ending GuildCommand_TransferGuild\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

