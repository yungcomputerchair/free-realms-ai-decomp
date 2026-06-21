// addr: 0x01429870
// name: GameCommand_OutOfSync_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OutOfSync_dump(void * this) */

void __thiscall GameCommand_OutOfSync_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps an Out Of Sync game command and then the common GameCommand fields. */
  FUN_01241650("Out Of Sync Game Command\n",0x19);
  GameCommand_dump(this,in_stack_00000004);
  return;
}

