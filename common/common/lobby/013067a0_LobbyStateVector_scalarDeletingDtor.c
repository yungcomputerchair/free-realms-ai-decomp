// addr: 0x013067a0
// name: LobbyStateVector_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyStateVector_scalarDeletingDtor(void *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls vector storage cleanup and frees this when the deleting-destructor flag
                       is set. This is compiler-generated scalar deleting destructor code. */
  puStack_8 = &LAB_016762db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01305a80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

