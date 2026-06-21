// addr: 0x01437a10
// name: FUN_01437a10
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_01437a10(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  void *_Memory;
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uStack_38;
  int local_28;
  uint local_24;
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
  puStack_c = &LAB_016971b0;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  if ((param_6 == 0) || (puVar1 = &uStack_38, param_6 != param_4)) {
    FUN_00d83c2d();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar6 = param_7 - param_5 >> 2;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc) - iVar4 >> 2;
  }
  uVar7 = CONCAT44(iVar5,iVar4);
  if (uVar6 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - iVar4 >> 2;
    }
    local_24 = uVar6;
    if (0x3fffffffU - iVar4 < uVar6) {
      uVar7 = FUN_012b40a0();
    }
    local_18 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
    }
    if (local_18 < iVar4 + uVar6) {
      if (0x3fffffff - (local_18 >> 1) < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (uVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
      }
      if (local_18 < iVar4 + uVar6) {
        if (uVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(*(int *)(param_1 + 8) - uVar2) >> 2;
        }
        local_18 = iVar4 + uVar6;
      }
      local_1c = FUN_012b0b10(local_18);
      iVar4 = param_3;
      local_8 = 0;
      uVar3 = FUN_012c69d0(*(undefined4 *)(param_1 + 4),param_3,local_1c);
      uVar3 = FUN_014372b0(param_4,param_5,param_6,param_7,uVar3);
      FUN_012c69d0(iVar4,*(undefined4 *)(param_1 + 8),uVar3);
      local_8 = 0xffffffff;
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(uint *)(param_1 + 0xc) = local_1c + local_18 * 4;
      *(uint *)(param_1 + 8) = local_1c + (uVar6 + iVar4) * 4;
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
    iVar4 = param_3;
    if ((uint)((int)(local_1c - param_3) >> 2) < uVar6) {
      FUN_012c69d0(param_3,*(undefined4 *)(param_1 + 8),uVar6 * 4 + param_3);
      local_28 = param_4;
      local_24 = param_5;
      puVar8 = &param_2;
      FUN_012c5f20(local_20);
      uVar3 = FUN_012c61c0(puVar8);
      FUN_01436df0(&local_28,uVar3);
      local_8 = 2;
      FUN_014372b0(local_28,local_24,param_6,param_7,*(undefined4 *)(param_1 + 8));
      local_8 = 0xffffffff;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar6 * 4;
      FUN_01436e30(param_4,param_5,local_28,local_24,iVar4);
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)(param_1 + 8);
    param_3 = iVar5 + local_24 * -4;
    uVar3 = FUN_012c69d0(param_3,iVar5,iVar5);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_012c6690(iVar4,param_3,iVar5);
    FUN_01436e30(param_4,param_5,param_6,param_7,iVar4);
  }
  ExceptionList = local_10;
  return;
}

