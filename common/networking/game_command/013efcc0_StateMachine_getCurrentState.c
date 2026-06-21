// addr: 0x013efcc0
// name: StateMachine_getCurrentState
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachine_getCurrentState(int param_1)

{
                    /* Returns the current StateMachineState pointer stored at offset 0x18.
                       GameCommandButtonPressed and GameCommandFinishMultiaction use the result as a
                       StateMachineState/GetTargetState. */
  return *(undefined4 *)(param_1 + 0x18);
}

