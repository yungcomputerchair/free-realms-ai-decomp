// addr: 0x014bb370
// name: LobbyCommand_StartTournamentMsg_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_StartTournamentMsg_dump(void * this, void * stream) */

void __thiscall LobbyCommand_StartTournamentMsg_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_StartTournamentMsg, writing two
                       scalar fields after the base lobby command dump. Evidence is the Starting
                       LobbyCommand_StartTournamentMsg string and the stream-write shape. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_StartTournamentMsg\n");
  LobbyCommand_dump(this,stream,pvVar1);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

