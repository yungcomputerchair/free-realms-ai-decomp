// addr: 0x014bc2a0
// name: LobbyCommand_SetTournament_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetTournament_dump(void * this, void * stream) */

void __thiscall LobbyCommand_SetTournament_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_SetTournament, including
                       tournamentID, round, timer, and groupID fields. Evidence is the
                       Starting/Ending LobbyCommand_SetTournament strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetTournament\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"round");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"timer: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"groupID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetTournament\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

