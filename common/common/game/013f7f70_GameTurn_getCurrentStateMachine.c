// addr: 0x013f7f70
// name: GameTurn_getCurrentStateMachine
// subsystem: common/common/game
// source (binary assert): common/common/game/GameTurn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameTurn_getCurrentStateMachine(void * this) */

void * __fastcall GameTurn_getCurrentStateMachine(void *this)

{
                    /* Returns GameTurn::mCurrentStateMachine after asserting it is non-null. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentStateMachine","..\\common\\common\\game\\GameTurn.cpp",0x1b5);
  }
  return *(void **)((int)this + 0x18);
}

