// addr: 0x014bbb40
// name: LobbyCommand_SetupDraft_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_SetupDraft_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for LobbyCommand_SetupDraft; it invokes the real
                       destructor and conditionally frees the object. */
  LobbyCommand_SetupDraft_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

