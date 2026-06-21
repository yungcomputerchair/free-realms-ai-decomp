// addr: 0x014ca630
// name: StdVectorUInt_moveRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVectorUInt_moveRange(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves/copies a contiguous range of 4-byte vector elements with memmove_s and
                       returns the advanced destination pointer. The insert helper at 014cae90 uses
                       it to shift existing elements during growth and insertion. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

