// addr: 0x01347d90
// name: StateMachine_getCurrentState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachine_getCurrentState(int param_1)

{
                    /* Returns the dword at offset 0x14, which is used by StateMachine_serialize and
                       StateMachine_setCurrentState paths. It appears to expose the current state
                       id/pointer field. */
  return *(undefined4 *)(param_1 + 0x14);
}

