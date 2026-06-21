// addr: 0x014bb5b0
// name: LobbyCommand_StartTournamentRound_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_StartTournamentRound_dtor(void * this) */

void __fastcall LobbyCommand_StartTournamentRound_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_StartTournamentRound; it restores the class
                       vftable and invokes LobbyCommand base cleanup. Evidence is the
                       LobbyCommand_StartTournamentRound::vftable assignment. */
  puStack_8 = &LAB_016a8f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_StartTournamentRound::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

