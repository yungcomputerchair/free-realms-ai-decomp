// addr: 0x012d92c0
// name: PropertyVector_stackDestructorThunk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyVector_stackDestructorThunk(void) */

void PropertyVector_stackDestructorThunk(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated SEH cleanup thunk that forwards to PropertyVector_clear
                       for a stack vector selected through the cookie expression. It has no explicit
                       semantic work beyond unwind cleanup. */
  puStack_8 = &LAB_01670c0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_clear(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}

