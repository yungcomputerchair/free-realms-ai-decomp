// addr: 0x014bb130
// name: LobbyCommand_StartTournamentMsg_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_StartTournamentMsg_dtor(void * this) */

void __fastcall LobbyCommand_StartTournamentMsg_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_StartTournamentMsg; it restores the class vftable
                       and invokes LobbyCommand base cleanup. Evidence is the
                       LobbyCommand_StartTournamentMsg::vftable assignment. */
  puStack_8 = &LAB_016a8e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_StartTournamentMsg::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

