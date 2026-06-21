// addr: 0x014c20c0
// name: LobbyCommand_RemoveGroups_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_RemoveGroups_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for LobbyCommand_RemoveGroups; it invokes the
                       main destructor and conditionally frees this. */
  LobbyCommand_RemoveGroups_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

