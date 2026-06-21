// addr: 0x01520f50
// name: FUN_01520f50
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01520f50(int param_1,uint param_2)

{
  int iVar1;
  
                    /* Returns a 4-byte element from a member vector at offsets +0x10/+0x14 after
                       bounds checking. Exact owning class is unclear. */
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (param_2 < (uint)(*(int *)(param_1 + 0x14) - iVar1 >> 2))) {
    return *(undefined4 *)(iVar1 + param_2 * 4);
  }
  FUN_00d83c2d();
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4);
}

