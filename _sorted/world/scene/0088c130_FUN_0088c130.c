// addr: 0x0088c130
// name: FUN_0088c130
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0088c130(int param_1,undefined4 param_2)

{
                    /* Forwards a parameter to a virtual method at this+0x10, then updates a stack
                       transform through Umbra/visibility wrappers. Exact method name is unclear. */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  FUN_00dc2130(&stack0xffffffbc);
  FUN_00dc0750(&stack0xffffffbc);
  return;
}

