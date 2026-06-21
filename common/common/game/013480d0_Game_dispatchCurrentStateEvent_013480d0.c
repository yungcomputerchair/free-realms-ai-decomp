// addr: 0x013480d0
// name: Game_dispatchCurrentStateEvent_013480d0
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_013480d0(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_013480d0(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Forwards a Game-level event to the current turn's current state after null
                       checks. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12b7);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12b8);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013efd80(pvVar1,extraout_EDX);
  return;
}

