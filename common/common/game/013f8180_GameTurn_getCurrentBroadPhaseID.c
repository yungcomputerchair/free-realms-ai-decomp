// addr: 0x013f8180
// name: GameTurn_getCurrentBroadPhaseID
// subsystem: common/common/game
// source (binary assert): common/common/game/GameTurn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameTurn_getCurrentBroadPhaseID(void * this) */

int __fastcall GameTurn_getCurrentBroadPhaseID(void *this)

{
                    /* Returns broad phase id 0 and asserts if the current phase field is nonzero,
                       matching the embedded GameTurn::getCurrentBroadPhaseID assert. */
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_012f5a60("!\"Invalid phase in GameTurn::getCurrentBroadPhaseID()\"",
                 "..\\common\\common\\game\\GameTurn.cpp",0x24f);
  }
  return 0;
}

