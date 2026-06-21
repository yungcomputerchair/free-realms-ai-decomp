// addr: 0x01347d00
// name: Game_updateCurrentTurn
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_updateCurrentTurn(void * this) */

void __fastcall Game_updateCurrentTurn(void *this)

{
                    /* Asserts Game::mCurrentTurn and forwards to a current-turn virtual at offset
                       0x58. Exact turn operation is not evident from strings. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xd2b);
  }
                    /* WARNING: Could not recover jumptable at 0x01347d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x68) + 0x58))();
  return;
}

