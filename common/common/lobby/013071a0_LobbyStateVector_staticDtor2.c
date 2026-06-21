// addr: 0x013071a0
// name: LobbyStateVector_staticDtor2
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyStateVector_staticDtor2(void) */

void LobbyStateVector_staticDtor2(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another static destructor wrapper for a vector-like object using
                       FUN_01305a80. The exact vector element type is not evident. */
  puStack_8 = &LAB_0167646b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01305a80(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

