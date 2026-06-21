// addr: 0x0142b040
// name: CommandObject_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_deletingDtor_thunk(void) */

void CommandObject_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk that forwards to CommandObject_deletingDtor. It appears to be
                       compiler-generated vtable/destructor glue. */
  CommandObject_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

