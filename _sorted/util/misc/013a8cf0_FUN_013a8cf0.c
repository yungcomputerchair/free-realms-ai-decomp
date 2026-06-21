// addr: 0x013a8cf0
// name: FUN_013a8cf0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_013a8cf0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a filtered/sorted vector of 4-byte entries using FUN_013a8b80 output,
                       removes/reorders elements, and inserts additional entries. */
  puStack_8 = &LAB_016860e1;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_013a8b80(local_1c);
  pvVar5 = local_14;
  local_4 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pvVar8 = local_18;
  if ((local_14 < local_18) && (FUN_00d83c2d(uVar6), pvVar8 = local_18, local_14 < local_18)) {
    FUN_00d83c2d(uVar6);
  }
  FUN_013a72a0(pvVar8,pvVar5,(int)pvVar5 - (int)pvVar8 >> 2,&LAB_013a3950);
  if (local_18 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)local_14 - (int)local_18 >> 2;
  }
  if (iVar7 < param_2) {
    if (local_18 == (void *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = (int)local_14 - (int)local_18 >> 2;
    }
  }
  uVar9 = 0;
  if (0 < param_2) {
    do {
      if ((local_18 == (void *)0x0) || ((uint)((int)local_14 - (int)local_18 >> 2) <= uVar9)) {
        FUN_00d83c2d(uVar6);
      }
      puVar1 = (undefined4 *)((int)local_18 + uVar9 * 4);
      uVar2 = *(uint *)(param_1 + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(param_1 + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(param_1 + 8) - uVar2) >> 2))) {
        uVar4 = *(uint *)(param_1 + 8);
        if (uVar4 < uVar2) {
          FUN_00d83c2d();
        }
        FUN_013a8180(local_24,param_1,uVar4,puVar1);
      }
      else {
        puVar3 = *(undefined4 **)(param_1 + 8);
        *puVar3 = *puVar1;
        *(undefined4 **)(param_1 + 8) = puVar3 + 1;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < param_2);
  }
  local_4 = local_4 & 0xffffff00;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return param_1;
}

