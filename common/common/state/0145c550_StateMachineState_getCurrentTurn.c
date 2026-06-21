// addr: 0x0145c550
// name: StateMachineState_getCurrentTurn
// subsystem: common/rules/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall StateMachineState_getCurrentTurn(int param_1)

{
                    /* Checks mMachine on a StateMachineState and forwards to
                       StateMachine_getCurrentTurn. Evidence includes the callee name and
                       StateMachineState.cpp mMachine assert. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  StateMachine_getCurrentTurn(*(void **)(param_1 + 8));
  return;
}

