// addr: 0x014da5b0
// name: GameCommand_Reshuffle_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_Reshuffle_debugPrint(void * this, void * out) */

void __thiscall GameCommand_Reshuffle_debugPrint(void *this,void *out)

{
                    /* Appends the 'Reshuffle Command' header and then emits the base GameCommand
                       game/player id fields. */
  FUN_01241650("Reshuffle Command\n",0x12);
  GameCommand_dump(this,out);
  return;
}

