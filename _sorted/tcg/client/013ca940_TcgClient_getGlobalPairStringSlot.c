// addr: 0x013ca940
// name: TcgClient_getGlobalPairStringSlot
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall TcgClient_getGlobalPairStringSlot(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_54 [8];
  undefined1 local_4c [4];
  void *local_48;
  undefined4 local_38;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Map operator[]-style accessor for a global string table keyed by two
                       integers; inserts a default entry if absent and returns the string value slot
                       at node+0x14. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168a390;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  iVar2 = FUN_013c6c30(param_2);
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (iVar2 != *(int *)(param_1 + 4)) {
    if ((*(int *)(iVar2 + 0xc) <= *param_2) &&
       ((*(int *)(iVar2 + 0xc) < *param_2 || (*(int *)(iVar2 + 0x10) <= param_2[1]))))
    goto LAB_013caa0e;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  local_4 = 0;
  uVar3 = FUN_013c7e10(param_2,local_4c);
  local_4._0_1_ = 1;
  piVar4 = (int *)FUN_013ca3b0(local_54,param_1,iVar2,uVar3);
  param_1 = *piVar4;
  iVar2 = piVar4[1];
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_013c7550();
  local_4 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
LAB_013caa0e:
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (iVar2 == *(int *)(param_1 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  ExceptionList = local_c;
  return iVar2 + 0x14;
}

