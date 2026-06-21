// addr: 0x013bbe80
// name: UChatCommand_RequestIgnoreStatus_copyIntRange
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * UChatCommand_RequestIgnoreStatus_copyIntRange(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a possibly non-zero range of 4-byte entries into a destination buffer
                       and returns the advanced destination pointer; used by RequestIgnoreStatus
                       vector assignment. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

