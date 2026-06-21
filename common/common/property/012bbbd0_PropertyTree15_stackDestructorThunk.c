// addr: 0x012bbbd0
// name: PropertyTree15_stackDestructorThunk
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyTree15_stackDestructorThunk(void) */

void PropertyTree15_stackDestructorThunk(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH cleanup thunk that invokes the tree clear/free-header routine 012bbb60
                       for a compiler-generated stack object selected through the security cookie
                       expression. It has no explicit user parameters and exists for unwind cleanup.
                        */
  puStack_8 = &LAB_0166db4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyTree15_clearAndFreeHeader(in_ECX + 4);
  ExceptionList = puStack_8;
  return;
}

