// addr: 0x0150fde0
// name: ProcessEventEmissionState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ProcessEventEmissionState_leaveState(int param_1)

{
  void *pvVar1;
  undefined4 unaff_ESI;
  char *fmt;
  int value_;
  uint value__00;
  
                    /* Logs 'ProcessEventEmissionState::leaveState()' and performs the state's leave
                       handling, typically popping the pending state when present. */
  fmt = "ProcessEventEmissionState::leaveState()";
  pvVar1 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar1,fmt,unaff_ESI);
  value_ = 0;
  StateMachineState_getCurrentTurn();
  EventEmissionDepthMap_setCurrentDepthValue(value_);
  StateMachineState_getGame();
  Game_decrementEventEmissionDepth();
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  value__00 = *(uint *)(param_1 + 0x100);
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  set_field_10(pvVar1,value__00);
  return 1;
}

