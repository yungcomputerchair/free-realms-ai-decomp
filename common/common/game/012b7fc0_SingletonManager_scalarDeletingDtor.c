// addr: 0x012b7fc0
// name: SingletonManager_scalarDeletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SingletonManager_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor: runs the object destructor and frees this when
                       the low delete flag is set. */
  SingletonManager_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

