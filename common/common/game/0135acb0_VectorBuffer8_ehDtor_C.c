// addr: 0x0135acb0
// name: VectorBuffer8_ehDtor_C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VectorBuffer8_ehDtor_C(void) */

void VectorBuffer8_ehDtor_C(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another compiler EH cleanup thunk for the vector-like destructor 0135abf0. It
                       frees/clears the same +8/+0xc/+0x10 buffer triplet for a different call site.
                        */
  puStack_8 = &LAB_0167e20b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0135abf0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

