// addr: 0x015036d0
// name: CommandObject_MultiAction_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_MultiAction_deletingDtor_thunk(void) */

void CommandObject_MultiAction_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk forwarding to CommandObject_MultiAction_deletingDtor, likely
                       compiler-generated destructor glue. */
  CommandObject_MultiAction_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

