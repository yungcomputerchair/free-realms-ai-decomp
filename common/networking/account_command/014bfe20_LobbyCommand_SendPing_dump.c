// addr: 0x014bfe20
// name: LobbyCommand_SendPing_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendPing_dump(void * this, void * stream) */

void __thiscall LobbyCommand_SendPing_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_SendPing, including target user
                       id and group id fields. Evidence is the Starting/Ending LobbyCommand_SendPing
                       strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SendPing\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Target UserID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Group ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SendPing\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

