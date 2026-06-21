// addr: 0x008a5d20
// name: FUN_008a5d20
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_008a5d20(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor thunk: calls FUN_009c9b90 and frees this when
                       requested. No class evidence, so left unnamed. */
  FUN_009c9b90();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

