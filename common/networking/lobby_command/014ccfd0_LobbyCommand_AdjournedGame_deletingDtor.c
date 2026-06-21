// addr: 0x014ccfd0
// name: LobbyCommand_AdjournedGame_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AdjournedGame_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_AdjournedGame. It calls the real
                       destructor and frees this when the low flag bit is set. */
  LobbyCommand_AdjournedGame_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

