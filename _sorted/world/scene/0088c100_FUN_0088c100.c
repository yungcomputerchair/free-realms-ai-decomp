// addr: 0x0088c100
// name: FUN_0088c100
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0088c100(int param_1,int param_2)

{
                    /* Forwards a parameter to a virtual method on the object stored at this+0x10,
                       then updates/removes the visibility handle stored at param_2+0x15c. Exact
                       method name is unclear. */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(param_2);
  FUN_00dbf300(*(undefined4 *)(param_2 + 0x15c));
  return;
}

