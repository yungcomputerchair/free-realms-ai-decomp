// addr: 0x0088cc00
// name: FUN_0088cc00
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0088cc00(int param_1,int param_2)

{
                    /* Adds an object to an intrusive list rooted at owner offsets 0x150/0x154 when
                       the candidate is valid and not already linked. Exact DPVS/visibility class
                       role is not proven. */
  if (((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 0)) &&
     (*(int *)(param_1 + 0x150) != param_2)) {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x154) != 0) {
      *(int *)(*(int *)(param_1 + 0x154) + 0x18) = param_2;
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
      *(int *)(param_1 + 0x154) = param_2;
      return;
    }
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    *(int *)(param_1 + 0x150) = param_2;
    *(int *)(param_1 + 0x154) = param_2;
  }
  return;
}

