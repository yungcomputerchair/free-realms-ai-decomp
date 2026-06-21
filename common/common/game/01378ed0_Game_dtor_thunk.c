// addr: 0x01378ed0
// name: Game_dtor_thunk
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Game_dtor_thunk(void) */

void Game_dtor_thunk(void)

{
  int in_ECX;
  byte in_stack_00000004;
  
                    /* Tiny thunk that forwards directly to the Game deleting destructor wrapper. */
  Game_deletingDtor((void *)(in_ECX + -0x10),in_stack_00000004);
  return;
}

