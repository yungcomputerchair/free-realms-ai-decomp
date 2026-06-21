// addr: 0x005563b8
// name: FUN_005563b8
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_005563b8(void *param_1,int param_2,int param_3)

{
  rsize_t _DstSize;
  
  _DstSize = param_2 - (int)param_1;
  if (0 < (int)_DstSize) {
    _memmove_s((void *)(param_3 - _DstSize),_DstSize,param_1,_DstSize);
  }
  return (void *)(param_3 - _DstSize);
}

