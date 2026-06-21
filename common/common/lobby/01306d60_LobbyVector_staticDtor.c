// addr: 0x01306d60
// name: LobbyVector_staticDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyVector_staticDtor(void) */

void LobbyVector_staticDtor(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that destroys a vector-like static object through
                       LobbyVector_releaseStorage. This is compiler-generated cleanup code. */
  puStack_8 = &LAB_016763cb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  LobbyVector_releaseStorage((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

