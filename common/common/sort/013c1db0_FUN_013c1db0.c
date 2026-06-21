// addr: 0x013c1db0
// name: FUN_013c1db0
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_013c1db0(int param_1,int param_2,int param_3,void *param_4,void **param_5,void *param_6,
            void **param_7)

{
  void *_Memory;
  uint *puVar1;
  uint uVar2;
  void **ppvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uStack_38;
  void *local_28;
  void **local_24;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01689400;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  if ((param_6 == (void *)0x0) || (puVar1 = &uStack_38, param_6 != param_4)) {
    FUN_00d83c2d();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar7 = (int)param_7 - (int)param_5 >> 2;
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc) - iVar5 >> 2;
  }
  uVar8 = CONCAT44(iVar6,iVar5);
  if (uVar7 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar5 >> 2;
    }
    local_24 = (void **)uVar7;
    if (0x3fffffffU - iVar5 < uVar7) {
      uVar8 = FUN_012b40a0();
    }
    local_18 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar2 = (uint)uVar8;
    if (uVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
    }
    if (local_18 < iVar5 + uVar7) {
      if (0x3fffffff - (local_18 >> 1) < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (uVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
      }
      if (local_18 < iVar5 + uVar7) {
        if (uVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
        }
        local_18 = iVar5 + uVar7;
      }
      local_1c = FUN_012b0b10(local_18);
      iVar5 = param_3;
      local_8 = 0;
      ppvVar3 = (void **)FUN_012c69d0(*(undefined4 *)(param_1 + 4),param_3,local_1c);
      ppvVar3 = FilterCriteriaVector_uninitializedCopyRange(param_4,param_5,param_6,param_7,ppvVar3)
      ;
      FUN_012c69d0(iVar5,*(undefined4 *)(param_1 + 8),ppvVar3);
      local_8 = 0xffffffff;
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(uint *)(param_1 + 0xc) = local_1c + local_18 * 4;
      *(uint *)(param_1 + 8) = local_1c + (uVar7 + iVar5) * 4;
      *(uint *)(param_1 + 4) = local_1c;
      ExceptionList = local_10;
      return;
    }
    local_1c = *(uint *)(param_1 + 8);
    if (local_1c < uVar2) {
      FUN_00d83c2d();
    }
    if (param_1 != param_2) {
      FUN_00d83c2d();
    }
    iVar5 = param_3;
    if ((uint)((int)(local_1c - param_3) >> 2) < uVar7) {
      FUN_012c69d0(param_3,*(undefined4 *)(param_1 + 8),uVar7 * 4 + param_3);
      local_28 = param_4;
      local_24 = param_5;
      puVar9 = &param_2;
      FUN_012c5f20(local_20);
      uVar4 = FUN_012c61c0(puVar9);
      FUN_013c1cf0(&local_28,uVar4);
      local_8 = 2;
      FilterCriteriaVector_uninitializedCopyRange
                (local_28,local_24,param_6,param_7,*(void ***)(param_1 + 8));
      local_8 = 0xffffffff;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar7 * 4;
      FUN_013c1d70(param_4,param_5,local_28,local_24,iVar5);
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(param_1 + 8);
    param_3 = iVar6 + (int)local_24 * -4;
    uVar4 = FUN_012c69d0(param_3,iVar6,iVar6);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_012c6690(iVar5,param_3,iVar6);
    FUN_013c1d70(param_4,param_5,param_6,param_7,iVar5);
  }
  ExceptionList = local_10;
  return;
}

