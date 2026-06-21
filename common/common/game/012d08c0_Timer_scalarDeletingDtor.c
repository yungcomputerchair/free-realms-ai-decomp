// addr: 0x012d08c0
// name: Timer_scalarDeletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Timer_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor wrapper for a timer-like object: runs the
                       destructor and optionally frees storage. */
  StdVector_destroyPolymorphicTriples(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

