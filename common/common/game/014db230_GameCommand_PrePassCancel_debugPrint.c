// addr: 0x014db230
// name: GameCommand_PrePassCancel_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_PrePassCancel_debugPrint(void * this, void * out) */

void __thiscall GameCommand_PrePassCancel_debugPrint(void *this,void *out)

{
                    /* Appends the 'Pre Pass Cancel Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("Pre Pass Cancel Game Command\n",0x1d);
  GameCommand_dump(this,out);
  return;
}

