// addr: 0x01343e70
// name: PlayElement_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayElement_deletingDtor_thunk(void) */

void PlayElement_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny thunk that forwards to the PlayElement scalar deleting destructor. */
  PlayElement_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

