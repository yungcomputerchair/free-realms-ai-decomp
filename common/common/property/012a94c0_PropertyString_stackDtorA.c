// addr: 0x012a94c0
// name: PropertyString_stackDtorA
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyString_stackDtorA(void) */

void PropertyString_stackDtorA(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Protected destructor thunk for a stack/string temporary that delegates to the
                       SSO string cleanup helper. No class-specific evidence distinguishes it beyond
                       the cleanup target. */
  puStack_8 = &LAB_0166c2eb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  StdString_dtor_012a8f50((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

