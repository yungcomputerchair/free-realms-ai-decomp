// addr: 0x014241a0
// name: PropertySet_copyPropertiesFrom_thunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertySet_copyPropertiesFrom_thunk(void) */

void PropertySet_copyPropertiesFrom_thunk(void)

{
  int in_stack_00000004;
  
                    /* Simple thunk that forwards directly to PropertySet_copyPropertiesFrom. No
                       lobby-specific logic is present. */
  PropertySet_copyPropertiesFrom(in_stack_00000004);
  return;
}

