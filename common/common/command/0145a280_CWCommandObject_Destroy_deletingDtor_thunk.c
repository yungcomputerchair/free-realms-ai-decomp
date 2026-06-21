// addr: 0x0145a280
// name: CWCommandObject_Destroy_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWCommandObject_Destroy_deletingDtor_thunk(void) */

void CWCommandObject_Destroy_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk forwarding to CWCommandObject_Destroy_deletingDtor, likely
                       compiler-generated destructor glue. */
  CWCommandObject_Destroy_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

