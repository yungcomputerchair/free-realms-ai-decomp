// addr: 0x013248e0
// name: StdVectorStorage_dtorC
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorC(void * this) */

void StdVectorStorage_dtorC(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around vector/storage cleanup helper 01323ff0, freeing a heap
                       buffer stored at offset +8 and clearing vector bounds. Type is not
                       identifiable here. */
  puStack_8 = &LAB_0167939b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01323ff0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

