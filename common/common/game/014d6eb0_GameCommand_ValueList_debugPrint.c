// addr: 0x014d6eb0
// name: GameCommand_ValueList_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ValueList_debugPrint(void * this, void * out) */

void __thiscall GameCommand_ValueList_debugPrint(void *this,void *out)

{
                    /* Appends the 'ValueList Command' header and then emits the base GameCommand
                       game/player id fields. */
  FUN_01241650("ValueList Command\n",0x12);
  GameCommand_dump(this,out);
  return;
}

