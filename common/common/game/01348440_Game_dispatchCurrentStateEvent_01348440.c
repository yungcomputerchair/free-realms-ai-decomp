// addr: 0x01348440
// name: Game_dispatchCurrentStateEvent_01348440
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_01348440(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_01348440(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Game wrapper that invokes an unnamed current-state event on the current
                       turn's state machine. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12fb);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12fc);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013eff60(pvVar1,extraout_EDX);
  return;
}

