// addr: 0x010dadd0
// name: Memory_reallocRoundedWithHeader
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * Memory_reallocRoundedWithHeader(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
                    /* Allocates, reallocates, or frees a buffer whose capacity is stored in the
                       word immediately before the returned pointer. Requested size is rounded up to
                       an alignment multiple and unchanged-capacity reallocations return the
                       original buffer. */
  param_3 = ((param_2 + -1 + param_3) / param_3) * param_3;
  if (param_3 == 0) {
    if (param_1 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(param_1 + -1);
    }
  }
  else {
    if (param_1 == (int *)0x0) {
      piVar1 = _malloc(param_3 + 4);
    }
    else {
      if (param_3 - param_1[-1] == 0) {
        return param_1;
      }
      piVar1 = (int *)FUN_00d8a744(param_1 + -1,param_3 + 4);
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_3;
      return piVar1 + 1;
    }
  }
  return (int *)0x0;
}

