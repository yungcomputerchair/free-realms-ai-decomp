// addr: 0x014ce5f0
// name: LobbyCommand_AddIgnoreByName_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AddIgnoreByName_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_AddIgnoreByName. It calls the
                       destructor and frees the object when requested. */
  LobbyCommand_AddIgnoreByName_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

