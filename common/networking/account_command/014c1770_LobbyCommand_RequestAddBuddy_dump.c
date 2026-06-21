// addr: 0x014c1770
// name: LobbyCommand_RequestAddBuddy_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RequestAddBuddy_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RequestAddBuddy_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RequestAddBuddy, including the
                       target user id. Evidence is the Starting/Ending LobbyCommand_RequestAddBuddy
                       strings and Target UserID label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RequestAddBuddy\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Target UserID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LobbyCommand_RequestAddBuddy\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

