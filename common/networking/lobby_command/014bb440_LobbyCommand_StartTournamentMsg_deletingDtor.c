// addr: 0x014bb440
// name: LobbyCommand_StartTournamentMsg_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
LobbyCommand_StartTournamentMsg_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_StartTournamentMsg; it performs base
                       cleanup and conditionally frees this. Evidence is the
                       LobbyCommand_StartTournamentMsg::vftable assignment and conditional _free. */
  puStack_8 = &LAB_016a8ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_StartTournamentMsg::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

