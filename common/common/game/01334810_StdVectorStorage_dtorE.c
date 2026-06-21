// addr: 0x01334810
// name: StdVectorStorage_dtorE
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorE(void * this) */

void __cdecl StdVectorStorage_dtorE(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around vector/storage cleanup helper 013323d0. It frees the heap
                       buffer at offset +8 and zeroes the three storage fields. */
  puStack_8 = &LAB_0167b15b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013323d0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

