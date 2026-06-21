// addr: 0x014ddf40
// name: GameCommand_EndGame_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_EndGame_debugPrint(void * this, void * out) */

void __thiscall GameCommand_EndGame_debugPrint(void *this,void *out)

{
                    /* Appends the 'End Game Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("End Game Game Command\n",0x16);
  GameCommand_dump(this,out);
  return;
}

