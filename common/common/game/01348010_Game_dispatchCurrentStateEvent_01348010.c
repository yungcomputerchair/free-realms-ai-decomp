// addr: 0x01348010
// name: Game_dispatchCurrentStateEvent_01348010
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_01348010(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_01348010(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Asserts mCurrentTurn and its current state machine, then forwards to a
                       current-state virtual through StateMachine. Exact event is not named in
                       available strings. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12a9);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12aa);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013efd20(pvVar1,extraout_EDX);
  return;
}

