// addr: 0x013c2140
// name: FUN_013c2140
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013c2140(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_8 [4];
  uint local_4;
  
                    /* Copies one chunk/page from a source vector into a destination vector after
                       clearing the destination. It computes start/end from param_1+0xc * param_4
                       and copies at most one chunk. */
  uVar1 = *(uint *)(param_3 + 8);
  if (uVar1 < *(uint *)(param_3 + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_3 + 4);
  if (*(uint *)(param_3 + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_012c6910(local_8,param_3,uVar2,param_3,uVar1);
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 == 0) {
    return;
  }
  if ((int)(*(uint *)(param_2 + 8) - uVar1) >> 2 == 0) {
    return;
  }
  param_4 = *(int *)(param_1 + 0xc) * param_4;
  if (*(uint *)(param_2 + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + param_4 * 4;
  if ((*(uint *)(param_2 + 8) < uVar1) || (uVar1 < *(uint *)(param_2 + 4))) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(param_2 + 8) - uVar2) >> 2;
  }
  local_4 = uVar1;
  if ((uint)(param_4 + *(int *)(param_1 + 0xc)) < uVar3) {
    uVar3 = uVar1 + *(int *)(param_1 + 0xc) * 4;
    if (uVar3 <= *(uint *)(param_2 + 8)) goto joined_r0x013c21ec;
  }
  else {
    uVar3 = *(uint *)(param_2 + 8);
joined_r0x013c21ec:
    if (uVar2 <= uVar3) goto LAB_013c21f3;
  }
  FUN_00d83c2d();
LAB_013c21f3:
  FUN_013c20a0(param_2,uVar1,param_2,uVar3,param_3);
  return;
}

