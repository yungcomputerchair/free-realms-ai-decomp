// addr: 0x0147edb0
// name: FUN_0147edb0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0147edb0(int param_1)

{
  int value_;
  
                    /* Clears state-machine related state with FUN_0145c550(0) and FUN_013fc390(0),
                       then pops the pending state and returns success. No class string is present.
                        */
  value_ = 0;
  StateMachineState_getCurrentTurn();
  EventEmissionDepthMap_setCurrentDepthValue(value_);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  return 1;
}

