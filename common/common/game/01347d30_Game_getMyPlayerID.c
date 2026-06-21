// addr: 0x01347d30
// name: Game_getMyPlayerID
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getMyPlayerID(void * this) */

int __fastcall Game_getMyPlayerID(void *this)

{
                    /* Returns Game::mMyPlayerID after asserting it is nonzero. */
  if (*(int *)((int)this + 0x13c) == 0) {
    FUN_012f5a60("mMyPlayerID","..\\common\\common\\game\\Game.cpp",0x10a5);
  }
  return *(int *)((int)this + 0x13c);
}

