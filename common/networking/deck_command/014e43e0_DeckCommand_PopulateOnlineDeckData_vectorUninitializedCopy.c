// addr: 0x014e43e0
// name: DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy
// subsystem: common/networking/deck_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy
                 (void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* STL-style helper that copies a range of 4-byte elements to dst with memmove_s
                       and returns the end pointer after the copied range. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}

