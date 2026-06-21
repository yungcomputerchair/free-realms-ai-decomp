// addr: 0x013352f0
// name: StdVectorStorage_dtorF
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorF(void * this) */

void StdVectorStorage_dtorF(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around vector/storage cleanup helper 013323d0. Type-specific
                       semantics are not visible in this wrapper. */
  puStack_8 = &LAB_0167b28b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013323d0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

