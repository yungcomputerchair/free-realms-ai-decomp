// addr: 0x01354450
// name: Game_logLostPlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logLostPlayer(void * game, int playerId_) */

void __thiscall Game_logLostPlayer(void *this,void *game,int playerId_)

{
                    /* Logs a lost player id to the general game log. */
  Game_logGeneral(this,"LostPlayer #%d",game);
  return;
}

