// addr: 0x013ca7f0
// name: FUN_013ca7f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_013ca7f0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Finds or inserts a card pronoun table entry for the supplied integer key and
                       returns the node value. */
  puStack_8 = &LAB_0168a360;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar6[1] + 0x2d) == '\0') {
    puVar2 = (undefined4 *)puVar6[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar6 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x2d) == '\0');
  }
  if ((puVar6 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar6[3])) {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4 = 0;
    uVar4 = FUN_013c7da0(param_2,local_48);
    local_4._0_1_ = 1;
    piVar5 = (int *)FUN_013ca1b0(local_50,param_1,puVar6,uVar4);
    param_1 = *piVar5;
    puVar6 = (undefined4 *)piVar5[1];
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_013c74e0();
    local_4 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (puVar6 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  ExceptionList = local_c;
  return puVar6 + 4;
}

