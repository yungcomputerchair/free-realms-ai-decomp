// addr: 0x01305c90
// name: LobbyVector_staticReleaseStateStorage
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyVector_staticReleaseStateStorage(void) */

void LobbyVector_staticReleaseStateStorage(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that calls the related vector storage release routine
                       FUN_01305a80. It appears to be compiler-generated cleanup for a static/vector
                       object. */
  puStack_8 = &LAB_016761cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01305a80(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

