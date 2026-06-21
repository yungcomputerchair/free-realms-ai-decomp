// addr: 0x005560dc
// name: FUN_005560dc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_005560dc(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  rsize_t _DstSize;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

