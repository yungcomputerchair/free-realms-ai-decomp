// addr: 0x01418ba0
// name: CWPlayer_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall CWPlayer_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor for CWPlayer; calls the CWPlayer destructor and frees the
                       object if requested. */
  CWPlayer_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

