// addr: 0x01324800
// name: StdVectorStorage_dtorB
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorStorage_dtorB(void * this) */

void __cdecl StdVectorStorage_dtorB(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around vector/storage cleanup helper 01323ff0, freeing the buffer
                       and zeroing the three vector pointers. No higher-level type is visible in
                       this wrapper. */
  puStack_8 = &LAB_0167933b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01323ff0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

