// addr: 0x004d6167
// name: FUN_004d6167
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_004d6167(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}

