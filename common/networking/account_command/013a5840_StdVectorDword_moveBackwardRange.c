// addr: 0x013a5840
// name: StdVectorDword_moveBackwardRange
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVectorDword_moveBackwardRange(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
                    /* Moves a dword range backward into storage ending at result_end and returns
                       the new destination start. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

