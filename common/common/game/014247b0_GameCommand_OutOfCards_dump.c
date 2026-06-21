// addr: 0x014247b0
// name: GameCommand_OutOfCards_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OutOfCards_dump(void * this) */

void __thiscall GameCommand_OutOfCards_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps an Out of Cards game command and then the common GameCommand fields. */
  FUN_01241650("Out of Cards Game Command\n",0x1a);
  GameCommand_dump(this,in_stack_00000004);
  return;
}

