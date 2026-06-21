// addr: 0x01401be0
// name: StateMachineState_getPreviousState
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachineState_getPreviousState(int param_1)

{
                    /* Returns the pointer at offset 4 from a state object, matching the common
                       mPreviousState field used by state restore flows. Evidence is use in
                       ActionPlayedState/CWActionPlayedState logic and GetTargetState mPreviousState
                       assertion nearby. */
  return *(undefined4 *)(param_1 + 4);
}

