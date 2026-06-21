// addr: 0x004d5547
// name: FUN_004d5547
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_004d5547(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _DstSize = iVar1 * 2;
  if (0 < iVar1) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

