// addr: 0x014ca5a0
// name: StdVectorUInt_copyRangeWithIteratorPair
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVectorUInt_copyRangeWithIteratorPair
                 (undefined4 param_1,void *param_2,undefined4 param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a contiguous range of 4-byte elements with memmove_s and returns the
                       advanced destination pointer. Called from the vector reserve/grow path at
                       014caaf0, which computes capacities in units of four bytes. */
  iVar1 = param_4 - (int)param_2 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_5,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (int)param_5);
}

