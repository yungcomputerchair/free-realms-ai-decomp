// addr: 0x01464440
// name: ProcessEventEmissionState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProcessEventEmissionState_leaveState(void * this) */

void __fastcall ProcessEventEmissionState_leaveState(void *this)

{
  void *pvVar1;
  undefined4 unaff_ESI;
  char *fmt;
  int value_;
  uint value__00;
  
                    /* Logs ProcessEventEmissionState leaveState, decrements event emission depth,
                       pops pending state, and performs cleanup. */
  fmt = "ProcessEventEmissionState::leaveState()";
  pvVar1 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar1,fmt,unaff_ESI);
  value_ = 0;
  StateMachineState_getCurrentTurn();
  EventEmissionDepthMap_setCurrentDepthValue(value_);
  StateMachineState_getGame();
  Game_decrementEventEmissionDepth();
  StateMachine_popPendingState(*(void **)((int)this + 8));
  value__00 = *(uint *)((int)this + 0x100);
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  set_field_10(pvVar1,value__00);
  return;
}

