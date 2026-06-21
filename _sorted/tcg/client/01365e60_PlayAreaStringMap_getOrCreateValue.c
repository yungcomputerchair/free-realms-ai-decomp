// addr: 0x01365e60
// name: PlayAreaStringMap_getOrCreateValue
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall PlayAreaStringMap_getOrCreateValue(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
                    /* Looks up a string-keyed rb-tree node using a key string; if not found,
                       derives key data and inserts a new node, then returns the value field at
                       node+0x28. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f758;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  iVar3 = FUN_01355690(param_2);
  if (param_1 == 0) {
    FUN_00d83c2d(uVar2);
  }
  if (iVar3 != *(int *)(param_1 + 4)) {
    if (*(uint *)(iVar3 + 0x24) < 0x10) {
      iVar4 = iVar3 + 0x10;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x10);
    }
    iVar4 = FUN_00f942a0(0,*(undefined4 *)(iVar1 + 0x14),iVar4,*(undefined4 *)(iVar3 + 0x20));
    if (-1 < iVar4) goto LAB_01365f0a;
  }
  param_2 = 0;
  uVar5 = FUN_01357e10(iVar1,&param_2);
  local_4 = 0;
  piVar6 = (int *)FUN_013621e0(local_34,param_1,iVar3,uVar5);
  param_1 = *piVar6;
  iVar3 = piVar6[1];
  local_4 = 0xffffffff;
  FUN_0131dc50();
LAB_01365f0a:
  if (param_1 == 0) {
    FUN_00d83c2d(uVar2);
  }
  if (iVar3 == *(int *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return iVar3 + 0x28;
}

