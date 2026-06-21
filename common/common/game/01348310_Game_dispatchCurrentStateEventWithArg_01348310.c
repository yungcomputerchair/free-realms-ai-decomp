// addr: 0x01348310
// name: Game_dispatchCurrentStateEventWithArg_01348310
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dispatchCurrentStateEventWithArg_01348310(void * this, int arg) */

void __thiscall Game_dispatchCurrentStateEventWithArg_01348310(void *this,int arg)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  
                    /* Checks current turn/state machine and forwards one argument to an unnamed
                       current-state virtual dispatch. */
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x12e1);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentTurn->getCurrentStateMachine()","..\\common\\common\\game\\Game.cpp",
                 0x12e2);
  }
  pvVar1 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  StateMachine_sub_013efea0(pvVar1,extraout_EDX);
  return;
}

