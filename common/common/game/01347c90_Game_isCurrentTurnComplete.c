// addr: 0x01347c90
// name: Game_isCurrentTurnComplete
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_isCurrentTurnComplete(void * this) */

bool __fastcall Game_isCurrentTurnComplete(void *this)

{
  int iVar1;
  
                    /* Asserts Game::mCurrentTurn then invokes the current turn virtual at offset
                       0x50 and returns whether it is nonzero. Name is inferred from current-turn
                       query behavior; exact turn method is not identified. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xbb2);
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x50))();
  return iVar1 != 0;
}

