// addr: 0x01332680
// name: StdVectorStorage_dtorD
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorD(void * this) */

void __cdecl StdVectorStorage_dtorD(void *this)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that destroys a vector/storage triple via 013323d0, freeing the
                       buffer at offset +8 and clearing begin/end/capacity fields. No owning type is
                       exposed. */
  puStack_8 = &LAB_0167accb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013323d0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

