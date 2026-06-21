// addr: 0x012dad00
// name: PropertyVector_stackClearThunkA
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyVector_stackClearThunkA(void) */

void PropertyVector_stackClearThunkA(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH cleanup thunk that calls PropertyVector_clear for a compiler-selected
                       stack object. The body exists to run vector cleanup during unwinding. */
  puStack_8 = &LAB_01670f3b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  PropertyVector_clear(in_stack_00000004 + 0xc);
  ExceptionList = local_c;
  return;
}

