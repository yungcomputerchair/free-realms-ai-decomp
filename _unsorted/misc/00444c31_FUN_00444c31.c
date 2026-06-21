// addr: 0x00444c31
// name: FUN_00444c31
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_00444c31(void *param_1,int param_2,int param_3)

{
  rsize_t _DstSize;
  
  _DstSize = param_2 - (int)param_1;
  if (0 < (int)_DstSize) {
    _memmove_s((void *)(param_3 - _DstSize),_DstSize,param_1,_DstSize);
  }
  return (void *)(param_3 - _DstSize);
}

