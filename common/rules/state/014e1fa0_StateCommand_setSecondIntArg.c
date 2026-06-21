// addr: 0x014e1fa0
// name: StateCommand_setSecondIntArg
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall StateCommand_setSecondIntArg(int param_1,undefined4 param_2)

{
                    /* Stores a 32-bit value at offset 0x50 of a state/game command object, adjacent
                       to other command integer argument setters used during action-play command
                       construction. Evidence is paired use with 014e1ed0 in
                       ActionPlayedState/CWActionPlayedState. */
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}

