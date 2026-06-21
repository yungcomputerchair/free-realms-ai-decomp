// addr: 0x01348500
// name: Game_dispatchCurrentStateEvent_01348500
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEvent_01348500(void * this) */

void __fastcall Game_dispatchCurrentStateEvent_01348500(void *this)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Final wrapper in a sequence of Game current-state dispatch helpers; asserts
                       current turn/state machine then forwards. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x130a);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x130b);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013effc0(pvVar1,extraout_EDX);
  return;
}

