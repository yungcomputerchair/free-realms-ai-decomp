// addr: 0x012db220
// name: PropertyVector_stackClearThunkB
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyVector_stackClearThunkB(void) */

void PropertyVector_stackClearThunkB(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another compiler-generated cleanup thunk that invokes PropertyVector_clear
                       through an SEH frame. It likely corresponds to a different local vector
                       lifetime/unwind state. */
  puStack_8 = &LAB_01670ffb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  PropertyVector_clear(in_stack_00000004 + 0xc);
  ExceptionList = local_c;
  return;
}

