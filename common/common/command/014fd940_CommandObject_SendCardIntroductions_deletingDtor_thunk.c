// addr: 0x014fd940
// name: CommandObject_SendCardIntroductions_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_SendCardIntroductions_deletingDtor_thunk(void) */

void CommandObject_SendCardIntroductions_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk forwarding to CommandObject_SendCardIntroductions_deletingDtor,
                       likely compiler-generated destructor glue. */
  CommandObject_SendCardIntroductions_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

