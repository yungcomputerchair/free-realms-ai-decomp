// addr: 0x0145c4d0
// name: StateMachineState_getGame
// subsystem: common/rules/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall StateMachineState_getGame(int param_1)

{
                    /* Checks that mMachine is present on a StateMachineState and forwards to a
                       StateMachine accessor. Callers use the return as Game for logging and game
                       queries; assert string is mMachine in StateMachineState.cpp. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4(*(void **)(param_1 + 8));
  return;
}

