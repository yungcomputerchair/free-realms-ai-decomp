// addr: 0x0135ac60
// name: VectorBuffer8_ehDtor_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VectorBuffer8_ehDtor_B(void) */

void VectorBuffer8_ehDtor_B(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler EH cleanup thunk for a vector-like object whose destructor is
                       0135abf0. That destructor frees the buffer at +8 and clears
                       begin/end/capacity. */
  puStack_8 = &LAB_0167e1db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0135abf0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

