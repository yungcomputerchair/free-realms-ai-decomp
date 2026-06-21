// addr: 0x014f9e60
// name: CommandObject_While_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_While_deletingDtor_thunk(void) */

void CommandObject_While_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk forwarding to CommandObject_While_deletingDtor, likely
                       compiler-generated destructor glue. */
  CommandObject_While_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

