// addr: 0x014504d0
// name: FUN_014504d0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014504d0(int param_1)

{
  int value_;
  
                    /* Clears/sets state-machine related flags via FUN_0145c550(0), FUN_013fc390(0),
                       then pops the pending state and returns success. Class identity is not
                       visible. */
  value_ = 0;
  StateMachineState_getCurrentTurn();
  EventEmissionDepthMap_setCurrentDepthValue(value_);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  return 1;
}

