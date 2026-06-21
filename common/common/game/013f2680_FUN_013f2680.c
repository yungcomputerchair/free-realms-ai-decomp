// addr: 0x013f2680
// name: FUN_013f2680
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_013f2680(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a non-empty range of 4-byte elements to a destination buffer with
                       memmove_s and returns dest plus the copied byte count. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

