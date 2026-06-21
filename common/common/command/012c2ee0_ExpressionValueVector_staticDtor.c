// addr: 0x012c2ee0
// name: ExpressionValueVector_staticDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ExpressionValueVector_staticDtor(void) */

void ExpressionValueVector_staticDtor(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped static/global destructor that calls the vector-like element
                       destructor at 012c2de0 for a global expression/value container. */
  puStack_8 = &LAB_0166e4eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_012c2de0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

