// addr: 0x014d8df0
// name: GameCommand_SetPlayer_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetPlayer_debugPrint(void * this, void * out) */

void __thiscall GameCommand_SetPlayer_debugPrint(void *this,void *out)

{
                    /* Appends the 'Set Player Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("Set Player Game Command\n",0x18);
  GameCommand_dump(this,out);
  return;
}

