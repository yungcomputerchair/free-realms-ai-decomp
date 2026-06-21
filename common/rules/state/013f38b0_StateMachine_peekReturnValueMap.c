// addr: 0x013f38b0
// name: StateMachine_peekReturnValueMap
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachine_peekReturnValueMap(int param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* Returns the last return-value map pointer from the vector at offsets
                       0x24/0x28 without popping, or null if empty. Evidence is same layout as
                       popReturnValueMap but without decrementing the end pointer. */
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
    return *(undefined4 *)(uVar2 - 4);
  }
  return 0;
}

