// addr: 0x014bb7e0
// name: LobbyCommand_StartTournamentRound_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_StartTournamentRound_dump(void * this, void * stream) */

void __thiscall LobbyCommand_StartTournamentRound_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_StartTournamentRound, including
                       tournamentID and round fields. Evidence is the Starting/Ending
                       LobbyCommand_StartTournamentRound strings and field labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_StartTournamentRound\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"round");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_StartTournamentRound\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

