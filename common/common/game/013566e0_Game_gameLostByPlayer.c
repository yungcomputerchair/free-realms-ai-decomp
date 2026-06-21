// addr: 0x013566e0
// name: Game_gameLostByPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_gameLostByPlayer(void * this, int playerId_) */

void __thiscall Game_gameLostByPlayer(void *this,int playerId_)

{
  bool bVar1;
  undefined4 unaff_EDI;
  
                    /* Logs and writes the game-log entry for a player losing, unless the player is
                       already marked dead. Evidence: literal strings name Game::gameLostByPlayer
                       and the GAME LOST BY PLAYER log messages. */
  bVar1 = Game_isPlayerAllowedToAct(this,playerId_);
  if (bVar1) {
    Game_logGeneral(this,"Game::gameLostByPlayer: received when player was already dead.",unaff_EDI)
    ;
    return;
  }
  Game_logGeneral(this,"GAME LOST BY PLAYER: %d",playerId_);
  Game_writeGameLog(this,"#GAME LOST BY PLAYER: %d",playerId_);
  return;
}

