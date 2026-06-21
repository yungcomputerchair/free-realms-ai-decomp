// addr: 0x0135cbb0
// name: VectorBuffer8_memberDtorAt0c_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorBuffer8_memberDtorAt0c_A(void * object) */

void __fastcall VectorBuffer8_memberDtorAt0c_A(void *object)

{
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor helper for a vector-like member at object+0xc, using 0135abf0 to
                       free the member's buffer at +8. This is compiler-generated cleanup for an
                       unidentified object. */
  puStack_8 = &LAB_0167e4c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = (int)object + 0xc;
  local_4 = 0xffffffff;
  FUN_0135abf0(DAT_01b839d8 ^ (uint)&local_10);
  ExceptionList = local_c;
  return;
}

