// addr: 0x012d8b00
// name: FUN_012d8b00
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_012d8b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Returns/copies the vector<int>-like value for a key in a map, falling back to
                       key 0 and then an empty vector if neither exists. It uses FUN_012d70a0 lookup
                       and vector copy helper 012c7fe0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670a71;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_012d70a0(local_1c,&param_3);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar3 = *(int *)(param_1 + 4);
  if (param_1 != iVar1) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar3 == iVar2) {
    param_3 = 0;
    piVar5 = (int *)FUN_012d70a0(local_1c,&param_3);
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    iVar3 = *(int *)(param_1 + 4);
    if (param_1 != iVar1) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar3 == iVar2) {
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 1;
      FUN_012c7fe0(local_1c);
      local_4 = local_4 & 0xffffff00;
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
    }
    else {
      if (iVar1 == 0) {
        FUN_00d83c2d(uVar4);
      }
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_012c7fe0(iVar2 + 0x10);
    }
  }
  else {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    FUN_012c7fe0(iVar2 + 0x10);
  }
  ExceptionList = local_c;
  return param_2;
}

