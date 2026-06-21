// addr: 0x014ba8d0
// name: LobbyCommand_UpdateTournament_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_UpdateTournament_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for LobbyCommand_UpdateTournament; it calls the
                       non-deleting destructor at 014ba800 and conditionally frees this. Evidence is
                       the direct destructor call and delete-flag-controlled _free. */
  LobbyCommand_UpdateTournament_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

