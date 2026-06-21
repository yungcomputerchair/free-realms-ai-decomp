// addr: 0x004d5f97
// name: FUN_004d5f97
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_004d5f97(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

