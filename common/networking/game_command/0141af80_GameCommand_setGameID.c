// addr: 0x0141af80
// name: GameCommand_setGameID
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_setGameID(void * this, int gameID) */

void __thiscall GameCommand_setGameID(void *this,int gameID)

{
                    /* Sets the base GameCommand GameID field at offset 0x0c. The GameCommand
                       serializer labels this field 'GameID', and clone code copies it through this
                       setter. */
  *(int *)((int)this + 0xc) = gameID;
  return;
}

