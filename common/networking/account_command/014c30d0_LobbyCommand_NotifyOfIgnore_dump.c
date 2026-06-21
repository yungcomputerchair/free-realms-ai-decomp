// addr: 0x014c30d0
// name: LobbyCommand_NotifyOfIgnore_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_NotifyOfIgnore_dump(void * this, void * stream) */

void __thiscall LobbyCommand_NotifyOfIgnore_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_NotifyOfIgnore, including
                       target user id and ignore status. Evidence is the Starting/Ending
                       LobbyCommand_NotifyOfIgnore strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_NotifyOfIgnore\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Target UserID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ignore status: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_NotifyOfIgnore\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

