// addr: 0x007889e0
// name: FUN_007889e0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_007889e0(int param_1,undefined4 param_2)

{
                    /* Replaces/updates the referenced object via 00764c50, then if present invokes
                       a virtual callback on the stored object with this+0x160 and notifies active
                       owners. Exact method name is unclear. */
  FUN_00764c50(param_2);
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x160);
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_007351c0();
  }
  return;
}

