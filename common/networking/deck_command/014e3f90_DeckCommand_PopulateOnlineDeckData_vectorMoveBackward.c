// addr: 0x014e3f90
// name: DeckCommand_PopulateOnlineDeckData_vectorMoveBackward
// subsystem: common/networking/deck_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DeckCommand_PopulateOnlineDeckData_vectorMoveBackward(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
                    /* STL-style move_backward helper for 4-byte vector elements; computes the
                       destination start before resultEnd and memmoves the source range there. */
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

