// addr: 0x012a9510
// name: PropertyString_stackDtorB
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyString_stackDtorB(void) */

void PropertyString_stackDtorB(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Second protected destructor thunk for a stack/string temporary that delegates
                       to the SSO string cleanup helper. It appears as another unwind cleanup site
                       for the same string layout. */
  puStack_8 = &LAB_0166c31b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  StdString_dtor_012a8f50((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

