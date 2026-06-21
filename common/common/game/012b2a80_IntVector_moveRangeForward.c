// addr: 0x012b2a80
// name: IntVector_moveRangeForward
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * IntVector_moveRangeForward(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves a range of 4-byte integer/pointer elements to dest and returns the
                       destination end pointer. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

