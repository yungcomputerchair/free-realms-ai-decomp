// addr: 0x014c5df0
// name: LobbyCommand_ConfigureGroup_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_ConfigureGroup_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_ConfigureGroup; it calls the
                       class destructor and conditionally frees the object. Evidence is the direct
                       call to 014c5920 followed by flags-controlled _free. */
  LobbyCommand_ConfigureGroup_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

