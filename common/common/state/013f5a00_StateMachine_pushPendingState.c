// addr: 0x013f5a00
// name: StateMachine_pushPendingState
// subsystem: common/rules/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 StateMachine_pushPendingState(int param_1)

{
                    /* Validates a non-null pending state object, then passes its address to the
                       StateMachine helper at 013f5550 and returns true. Evidence is
                       StateMachine.cpp assertion at line 0x2c3 and many state callers enqueueing
                       small follow-up states before continuing. */
  if (param_1 == 0) {
    FUN_012f5a60(&DAT_018e3654,"..\\common\\common\\state\\StateMachine.cpp",0x2c3);
  }
  FUN_013f5550(&param_1);
  return 1;
}

