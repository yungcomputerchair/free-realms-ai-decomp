// addr: 0x013071f0
// name: LobbyVector_staticDtor2
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyVector_staticDtor2(void) */

void LobbyVector_staticDtor2(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another static destructor wrapper that releases vector storage via
                       LobbyVector_releaseStorage. It contains no domain-specific logic. */
  puStack_8 = &LAB_0167649b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  LobbyVector_releaseStorage((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

