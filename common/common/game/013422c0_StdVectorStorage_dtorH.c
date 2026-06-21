// addr: 0x013422c0
// name: StdVectorStorage_dtorH
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorH(void * this) */

void __cdecl StdVectorStorage_dtorH(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around vector/storage cleanup helper 013419b0. It destroys a
                       simple heap buffer/vector triple but exposes no semantic type. */
  puStack_8 = &LAB_0167c5eb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013419b0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

