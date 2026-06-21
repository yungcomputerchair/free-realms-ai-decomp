// addr: 0x0141b760
// name: StateMachineState_setButtonPressed
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall StateMachineState_setButtonPressed(int param_1,undefined1 param_2)

{
                    /* Stores a boolean-like flag at offset 0x120 on a state object, used by reveal
                       and multi-action state flows to remember button cancellation/press state. */
  *(undefined1 *)(param_1 + 0x120) = param_2;
  return;
}

