// addr: 0x0139e010
// name: PlayerPlayArea_deletingDtor_thunk
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayerPlayArea_deletingDtor_thunk(void) */

void PlayerPlayArea_deletingDtor_thunk(void)

{
  int in_ECX;
  char in_stack_00000004;
  
                    /* Tiny vtable thunk that forwards to PlayerPlayArea_deletingDtor. */
  PlayerPlayArea_deletingDtor((void *)(in_ECX + -8),in_stack_00000004);
  return;
}

