// addr: 0x00f98810
// name: StringObjectMap_getOrCreateValue
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall StringObjectMap_getOrCreateValue(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a string-keyed rb-tree node, inserts a new node using generated key
                       data if missing, validates iterator, and returns the value field at
                       node+0x28. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162a260;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  iVar2 = FUN_00f94a90(param_2);
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (iVar2 != *(int *)(param_1 + 4)) {
    if (*(uint *)(iVar2 + 0x24) < 0x10) {
      iVar3 = iVar2 + 0x10;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
    iVar3 = FUN_00f942a0(0,*(undefined4 *)(param_2 + 0x14),iVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar3) goto LAB_00f98931;
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_4 = 0;
  uVar4 = FUN_00f95c10(param_2,local_60);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar5 = (int *)FUN_00f97f50(local_68,param_1,iVar2,uVar4);
  param_1 = *piVar5;
  iVar2 = piVar5[1];
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
LAB_00f98931:
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (iVar2 == *(int *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return iVar2 + 0x28;
}

