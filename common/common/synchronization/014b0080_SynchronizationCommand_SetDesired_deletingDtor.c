// addr: 0x014b0080
// name: SynchronizationCommand_SetDesired_deletingDtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SynchronizationCommand_SetDesired_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for SynchronizationCommand_SetDesired; runs its
                       destructor and optionally frees the object. */
  SynchronizationCommand_SetDesired_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

