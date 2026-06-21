// addr: 0x015210d0
// name: FUN_015210d0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_015210d0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
                    /* Writes a 4-byte element into a member vector at offsets +0x10/+0x14 after
                       bounds checking. Exact owning class is unclear. */
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (param_2 < (uint)(*(int *)(param_1 + 0x14) - iVar1 >> 2))) {
    *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
    return;
  }
  FUN_00d83c2d();
  *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4) = param_3;
  return;
}

