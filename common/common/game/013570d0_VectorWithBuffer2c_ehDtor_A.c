// addr: 0x013570d0
// name: VectorWithBuffer2c_ehDtor_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VectorWithBuffer2c_ehDtor_A(void) */

void VectorWithBuffer2c_ehDtor_A(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated EH cleanup thunk that destroys a stack/local object by
                       calling 01331b60, which frees a buffer at object+0x2c and clears its
                       size/capacity fields. No user-level class is identifiable. */
  puStack_8 = &LAB_0167d9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01331b60(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

