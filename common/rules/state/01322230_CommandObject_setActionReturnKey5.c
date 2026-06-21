// addr: 0x01322230
// name: CommandObject_setActionReturnKey5
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CommandObject_setActionReturnKey5(int *param_1)

{
                    /* Tiny wrapper that invokes a virtual method at +0x58 with constant 5, likely
                       selecting kActionReturn/action return behavior on a command object. Evidence
                       is use in action/cost checks and action-play flows. */
  (**(code **)(*param_1 + 0x58))(5);
  return;
}

