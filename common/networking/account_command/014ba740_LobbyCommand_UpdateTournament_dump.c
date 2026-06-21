// addr: 0x014ba740
// name: LobbyCommand_UpdateTournament_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateTournament_dump(int * this, void * stream) */

void __thiscall LobbyCommand_UpdateTournament_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_UpdateTournament with group id, tournament id, tournament
                       data, round, and substate. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_UpdateTournament\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"GroupID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(stream,"TournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  FUN_01400b20((int)this + 0xc);
  DebugStream_writeCString(stream,"Round");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(stream,"SubState");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending LobbyCommand_UpdateTournament\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

