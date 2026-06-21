// addr: 0x0143e750
// name: LobbyCommand_AddGroups_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AddGroups_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Runs LobbyCommand_AddGroups_dtor and frees this when requested by the
                       deleting-destructor flag. */
  LobbyCommand_AddGroups_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

