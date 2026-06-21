// addr: 0x014b4880
// name: MatchCommand_SelectStartPosition_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall MatchCommand_SelectStartPosition_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for MatchCommand_SelectStartPosition; it calls
                       the non-deleting destructor at 014b47b0 and conditionally frees this.
                       Evidence is the direct destructor call and delete-flag-controlled _free. */
  MatchCommand_SelectStartPosition_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

