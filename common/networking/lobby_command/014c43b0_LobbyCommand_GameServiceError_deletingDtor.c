// addr: 0x014c43b0
// name: LobbyCommand_GameServiceError_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_GameServiceError_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_GameServiceError; it calls the
                       class destructor and conditionally frees the object. Evidence is the direct
                       call to 014c4240 followed by flags-controlled _free. */
  LobbyCommand_GameServiceError_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

