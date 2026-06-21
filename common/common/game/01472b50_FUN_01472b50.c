// addr: 0x01472b50
// name: FUN_01472b50
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_01472b50(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a non-empty range of 4-byte elements with memmove_s and returns the
                       destination advanced by the copied byte count. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

