// addr: 0x013ef5a0
// name: Exception_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Exception_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for Exception; it calls Exception_dtor and frees
                       the object when requested. */
  Exception_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

