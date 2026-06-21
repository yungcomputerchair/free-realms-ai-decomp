// addr: 0x013240b0
// name: StdVectorStorage_dtorA
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorA(void * this) */

void __cdecl StdVectorStorage_dtorA(void *this)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that destroys a vector/storage triple by freeing the buffer at
                       offset +8 and zeroing begin/end/capacity. The underlying helper is 01323ff0.
                        */
  puStack_8 = &LAB_0167919b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01323ff0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

