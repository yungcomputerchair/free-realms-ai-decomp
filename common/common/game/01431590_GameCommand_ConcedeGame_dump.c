// addr: 0x01431590
// name: GameCommand_ConcedeGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ConcedeGame_dump(void * this) */

void __thiscall GameCommand_ConcedeGame_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Concede Game command and then the common GameCommand fields. */
  FUN_01241650("Concede Game Game Command\n",0x1a);
  GameCommand_dump(this,in_stack_00000004);
  return;
}

