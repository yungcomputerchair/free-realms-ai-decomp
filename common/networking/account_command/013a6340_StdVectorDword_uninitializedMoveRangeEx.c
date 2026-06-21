// addr: 0x013a6340
// name: StdVectorDword_uninitializedMoveRangeEx
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVectorDword_uninitializedMoveRangeEx
                 (undefined4 param_1,void *param_2,undefined4 param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Template vector helper that memmoves a dword range to dst and returns the
                       destination end pointer. */
  iVar1 = param_4 - (int)param_2 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_5,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (int)param_5);
}

