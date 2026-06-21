// addr: 0x01358120
// name: VectorBuffer8_ehDtor_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VectorBuffer8_ehDtor_A(void) */

void VectorBuffer8_ehDtor_A(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler EH cleanup thunk that destroys a vector-like object by calling
                       01357cd0, which frees the buffer at object+8 and clears begin/end/capacity
                       fields. The concrete element type is unknown. */
  puStack_8 = &LAB_0167db8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01357cd0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

