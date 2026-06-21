// addr: 0x014ce8b0
// name: LobbyCommand_AddIgnore_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AddIgnore_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_AddIgnore. It invokes the object
                       destructor and conditionally frees this. */
  LobbyCommand_AddIgnore_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

