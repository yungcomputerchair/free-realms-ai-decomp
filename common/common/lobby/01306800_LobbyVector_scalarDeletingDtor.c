// addr: 0x01306800
// name: LobbyVector_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyVector_scalarDeletingDtor(void *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls LobbyVector_releaseStorage and conditionally frees the object if flags
                       bit 0 is set. This is a scalar deleting destructor thunk for a vector-like
                       object. */
  puStack_8 = &LAB_0167630b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  LobbyVector_releaseStorage((void *)((int)param_1 + 0xc));
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

