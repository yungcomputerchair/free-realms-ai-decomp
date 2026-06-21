// addr: 0x013eee70
// name: NetworkCommand_Disconnect_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall NetworkCommand_Disconnect_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for NetworkCommand_Disconnect; calls its
                       destructor and frees when flags bit 0 is set. Evidence is direct dtor call
                       followed by conditional _free. */
  NetworkCommand_Disconnect_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

