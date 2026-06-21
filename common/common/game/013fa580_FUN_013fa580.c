// addr: 0x013fa580
// name: FUN_013fa580
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_013fa580(void * this) */

void __cdecl sub_013fa580(void *this)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped destructor/helper for a small dynamic array/vector object,
                       delegating all cleanup to FUN_013fa510. */
  puStack_8 = &LAB_0168faeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013fa510(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

