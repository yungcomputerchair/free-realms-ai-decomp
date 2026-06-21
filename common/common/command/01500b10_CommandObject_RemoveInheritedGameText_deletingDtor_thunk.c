// addr: 0x01500b10
// name: CommandObject_RemoveInheritedGameText_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_RemoveInheritedGameText_deletingDtor_thunk(void) */

void CommandObject_RemoveInheritedGameText_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk forwarding to CommandObject_RemoveInheritedGameText_deletingDtor,
                       likely compiler-generated destructor glue. */
  CommandObject_RemoveInheritedGameText_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

