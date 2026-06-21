// addr: 0x01348130
// name: Game_dispatchCurrentStateEvent_01348130
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_01348130(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_01348130(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Checks the current turn/state machine and dispatches to an unnamed
                       current-state virtual. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12be);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12bf);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013efdb0(pvVar1,extraout_EDX);
  return;
}

