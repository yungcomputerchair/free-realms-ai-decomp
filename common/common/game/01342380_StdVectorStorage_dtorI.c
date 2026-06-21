// addr: 0x01342380
// name: StdVectorStorage_dtorI
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorI(void * this) */

void StdVectorStorage_dtorI(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around 013419b0 that frees vector/storage memory and restores
                       empty fields. The specific instantiation type is unknown. */
  puStack_8 = &LAB_0167c64b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013419b0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

