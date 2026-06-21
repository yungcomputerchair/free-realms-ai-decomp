// addr: 0x014e1ed0
// name: StateCommand_setThirdIntArg
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall StateCommand_setThirdIntArg(int param_1,undefined4 param_2)

{
                    /* Stores a 32-bit value at offset 0x54 of a state/game command object, adjacent
                       to other command integer argument setters used during action-play command
                       construction. Evidence is callers in ActionPlayedState and
                       CWActionPlayedState update. */
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}

