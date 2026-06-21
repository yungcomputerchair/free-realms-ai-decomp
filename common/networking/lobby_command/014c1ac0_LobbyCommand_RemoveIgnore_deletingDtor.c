// addr: 0x014c1ac0
// name: LobbyCommand_RemoveIgnore_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_RemoveIgnore_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for LobbyCommand_RemoveIgnore; it calls the
                       destructor and optionally frees object storage. */
  LobbyCommand_RemoveIgnore_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

