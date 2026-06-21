// addr: 0x013f7e70
// name: StateMachine_setContinueWaiting
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall StateMachine_setContinueWaiting(int param_1,undefined1 param_2)

{
                    /* Stores a boolean at offset 0x44, used by state code paths when a state should
                       continue waiting or resume after a pending return. Evidence includes caller
                       StateMachineState_shouldContinueWaiting. */
  *(undefined1 *)(param_1 + 0x44) = param_2;
  return;
}

