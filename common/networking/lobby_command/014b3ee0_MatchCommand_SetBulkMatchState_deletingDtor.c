// addr: 0x014b3ee0
// name: MatchCommand_SetBulkMatchState_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall MatchCommand_SetBulkMatchState_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for MatchCommand_SetBulkMatchState; it calls the
                       non-deleting destructor at 014b3df0 and frees this when requested. Evidence
                       is the direct call to the SetBulkMatchState destructor and conditional _free.
                        */
  MatchCommand_SetBulkMatchState_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

