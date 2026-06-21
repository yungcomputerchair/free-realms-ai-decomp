// addr: 0x0142f7b0
// name: LobbyCommand_InfoEnumMessage_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_InfoEnumMessage_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor for LobbyCommand_InfoEnumMessage; calls the class
                       destructor and frees the object when flags bit 0 is set. Evidence is direct
                       call to the dtor plus conditional _free. */
  LobbyCommand_InfoEnumMessage_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

