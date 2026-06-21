// addr: 0x01341b50
// name: StdVectorStorage_dtorG
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorG(void * this) */

void __cdecl StdVectorStorage_dtorG(void *this)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around 013419b0, a helper that frees the buffer at offset +8 and
                       clears vector begin/end/capacity fields. No owning class is visible. */
  puStack_8 = &LAB_0167c52b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013419b0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

