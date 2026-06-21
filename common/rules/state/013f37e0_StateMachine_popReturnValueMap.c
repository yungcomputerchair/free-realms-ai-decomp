// addr: 0x013f37e0
// name: StateMachine_popReturnValueMap
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachine_popReturnValueMap(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
                    /* Pops and returns the last return-value map pointer from a vector at offsets
                       0x24/0x28, returning null if empty. Evidence is callers immediately checking
                       returnValueMap and later releasing it. */
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((uVar1 != 0) && ((int)(*(int *)(param_1 + 0x28) - uVar1) >> 2 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 < uVar1) {
      FUN_00d83c2d();
    }
    if ((*(uint *)(param_1 + 0x28) < uVar2 - 4) || (uVar2 - 4 < *(uint *)(param_1 + 0x24))) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_1 + 0x28) <= (undefined4 *)(uVar2 - 4)) {
      FUN_00d83c2d();
    }
    uVar3 = *(undefined4 *)(uVar2 - 4);
    if ((*(int *)(param_1 + 0x24) != 0) &&
       (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2 != 0)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
    }
    return uVar3;
  }
  return 0;
}

