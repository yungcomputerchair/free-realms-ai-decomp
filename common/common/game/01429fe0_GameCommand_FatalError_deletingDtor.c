// addr: 0x01429fe0
// name: GameCommand_FatalError_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall GameCommand_FatalError_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor for GameCommand_FatalError; runs its destructor and frees
                       this when the delete flag is set. */
  GameCommand_FatalError_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

