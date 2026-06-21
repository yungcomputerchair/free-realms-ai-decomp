// addr: 0x01306d10
// name: LobbyStateVector_staticDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyStateVector_staticDtor(void) */

void LobbyStateVector_staticDtor(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that destroys a vector-like static object through FUN_01305a80.
                       No domain-specific fields are visible. */
  puStack_8 = &LAB_0167639b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01305a80(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

