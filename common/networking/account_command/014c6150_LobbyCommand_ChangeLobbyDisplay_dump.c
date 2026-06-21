// addr: 0x014c6150
// name: LobbyCommand_ChangeLobbyDisplay_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_dump(void * this, void * stream) */

void __thiscall LobbyCommand_ChangeLobbyDisplay_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_ChangeLobbyDisplay, including
                       the GroupID field. Evidence is the Starting/Ending
                       LobbyCommand_ChangeLobbyDisplay strings and GroupID label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_ChangeLobbyDisplay\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"GroupID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LobbyCommand_ChangeLobbyDisplay\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

