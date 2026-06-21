// addr: 0x013ef1a0
// name: Exception_setPlayerID
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setPlayerID(void * this, int playerID) */

void __thiscall Exception_setPlayerID(void *this,int playerID)

{
                    /* Sets the Exception player id field at offset 0x5c. Game exception handling
                       fills it from Game::mMyPlayerID when missing and logs 'Player %d had an
                       error' through the matching getter. */
  *(int *)((int)this + 0x5c) = playerID;
  return;
}

