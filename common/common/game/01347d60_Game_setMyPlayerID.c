// addr: 0x01347d60
// name: Game_setMyPlayerID
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setMyPlayerID(void * this, int playerid) */

void __thiscall Game_setMyPlayerID(void *this,int playerid)

{
                    /* Sets Game::mMyPlayerID, asserting the incoming playerid is nonzero. */
  if (playerid == 0) {
    FUN_012f5a60("playerid","..\\common\\common\\game\\Game.cpp",0x10ab);
  }
  *(int *)((int)this + 0x13c) = playerid;
  return;
}

