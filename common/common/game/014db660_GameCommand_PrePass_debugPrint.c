// addr: 0x014db660
// name: GameCommand_PrePass_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_PrePass_debugPrint(void * this, void * out) */

void __thiscall GameCommand_PrePass_debugPrint(void *this,void *out)

{
                    /* Appends the 'Pre Pass Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("Pre Pass Game Command\n",0x16);
  GameCommand_dump(this,out);
  return;
}

