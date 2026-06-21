// addr: 0x0135cb60
// name: VectorBuffer8_ehDtor_D
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VectorBuffer8_ehDtor_D(void) */

void VectorBuffer8_ehDtor_D(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler EH cleanup thunk that calls vector-like destructor 01357cd0 for a
                       local object. The destructor frees buffer storage and clears the buffer
                       triplet. */
  puStack_8 = &LAB_0167e48b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01357cd0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

