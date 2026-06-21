// addr: 0x0045f0a1
// name: FUN_0045f0a1
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_0045f0a1(void *param_1,int param_2,void *param_3)

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

