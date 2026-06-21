// addr: 0x013484a0
// name: Game_dispatchCurrentStateEvent_013484a0
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_013484a0(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_013484a0(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Checks and forwards to a current-state virtual method through the current
                       turn's StateMachine. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x1303);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x1304);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013eff90(pvVar1,extraout_EDX);
  return;
}

