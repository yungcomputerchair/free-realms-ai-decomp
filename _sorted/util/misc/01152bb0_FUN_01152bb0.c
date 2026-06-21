// addr: 0x01152bb0
// name: FUN_01152bb0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01152bb0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
                    /* Updates an owned Bullet mesh/shape AABB vector and calls a recalculation
                       helper. No exact class evidence, so left unnamed. */
  iVar1 = param_1[0xc];
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = param_2[1];
  *(undefined4 *)(iVar1 + 0x18) = param_2[2];
  *(undefined4 *)(iVar1 + 0x1c) = param_2[3];
  recalc_shape_local_aabb_from_support(param_1);
  return;
}

