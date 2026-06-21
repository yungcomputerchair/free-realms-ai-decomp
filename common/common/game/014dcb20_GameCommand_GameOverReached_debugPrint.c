// addr: 0x014dcb20
// name: GameCommand_GameOverReached_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_GameOverReached_debugPrint(void * this, void * out) */

void __thiscall GameCommand_GameOverReached_debugPrint(void *this,void *out)

{
                    /* Appends the 'Game Over Reached Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("Game Over Reached Game Command\n",0x1f);
  GameCommand_dump(this,out);
  return;
}

