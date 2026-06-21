// addr: 0x00dca480
// name: FUN_00dca480
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dca480(int param_1,int param_2)

{
                    /* Links a node into the head of an intrusive list rooted at this+0x14, updating
                       the previous head back-pointer when present. Exact container/class is
                       unclear. */
  *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*(int *)(param_2 + 0x18) + 0x18) != 0) {
    *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x18) + 0x18) + 8) + 0x14) = param_2 + 0x10;
  }
  *(int *)(param_1 + 0x14) = param_2 + 0x10;
  return;
}

