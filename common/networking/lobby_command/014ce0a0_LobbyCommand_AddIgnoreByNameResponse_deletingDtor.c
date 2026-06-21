// addr: 0x014ce0a0
// name: LobbyCommand_AddIgnoreByNameResponse_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AddIgnoreByNameResponse_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_AddIgnoreByNameResponse. It
                       delegates to the destructor and conditionally frees this. */
  LobbyCommand_AddIgnoreByNameResponse_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

