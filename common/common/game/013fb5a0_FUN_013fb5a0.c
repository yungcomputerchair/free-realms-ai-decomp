// addr: 0x013fb5a0
// name: FUN_013fb5a0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_013fb5a0(void * this) */

void __cdecl sub_013fb5a0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped cleanup thunk for a dynamic array/vector object, delegating to
                       FUN_013fa510. */
  puStack_8 = &LAB_0168fc4b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_013fa510(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

