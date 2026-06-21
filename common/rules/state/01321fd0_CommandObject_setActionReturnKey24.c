// addr: 0x01321fd0
// name: CommandObject_setActionReturnKey24
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CommandObject_setActionReturnKey24(int *param_1)

{
                    /* Tiny wrapper that invokes a virtual method at +0x58 with constant 0x18,
                       likely setting a command/return action selector. Evidence is use from
                       action-play flows; exact semantic name is uncertain. */
  (**(code **)(*param_1 + 0x58))(0x18);
  return;
}

