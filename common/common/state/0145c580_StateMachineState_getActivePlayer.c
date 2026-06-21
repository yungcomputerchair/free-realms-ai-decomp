// addr: 0x0145c580
// name: StateMachineState_getActivePlayer
// subsystem: common/common/rules
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall StateMachineState_getActivePlayer(int param_1)

{
                    /* Returns the active player through the owning StateMachine after asserting
                       mMachine is present. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x68);
  }
  StateMachine_getActivePlayerChecked();
  return;
}

