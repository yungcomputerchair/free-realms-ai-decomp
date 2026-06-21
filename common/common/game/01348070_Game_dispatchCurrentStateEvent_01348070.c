// addr: 0x01348070
// name: Game_dispatchCurrentStateEvent_01348070
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_01348070(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_01348070(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Asserts mCurrentTurn and current state machine, then dispatches to another
                       current-state virtual method. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12b0);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12b1);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013efd50(pvVar1,extraout_EDX);
  return;
}

