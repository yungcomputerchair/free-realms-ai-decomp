// addr: 0x013a63a0
// name: StdVectorDword_uninitializedMoveRange
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StdVectorDword_uninitializedMoveRange(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves a dword range to uninitialized vector storage and returns the
                       destination end pointer. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

