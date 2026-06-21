// addr: 0x004d7093
// name: FUN_004d7093
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_004d7093(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

