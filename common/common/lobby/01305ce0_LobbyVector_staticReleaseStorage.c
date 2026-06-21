// addr: 0x01305ce0
// name: LobbyVector_staticReleaseStorage
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyVector_staticReleaseStorage(void) */

void LobbyVector_staticReleaseStorage(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that calls LobbyVector_releaseStorage. This is compiler-generated
                       cleanup for a vector-like static object. */
  puStack_8 = &LAB_016761fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  LobbyVector_releaseStorage((void *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}

