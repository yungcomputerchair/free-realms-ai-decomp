// addr: 0x0139f170
// name: FUN_0139f170
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0139f170(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_retaddr;
  int iVar7;
  undefined1 auStack_34 [24];
  uint *local_1c;
  uint *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685650;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar7 = param_1[0xc];
  uVar5 = FUN_013487b0(iVar7,DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  FUN_01419f30(uVar5,iVar7);
  local_18 = (uint *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 1;
  (**(code **)(*param_1 + 0x34))(&local_1c);
  puVar1 = local_18;
  if (local_1c == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (int)local_18 - (int)local_1c >> 2;
  }
  if (uVar6 < unaff_retaddr) {
    if (local_1c == (uint *)0x0) {
      unaff_retaddr = 0;
    }
    else {
      unaff_retaddr = (int)local_18 - (int)local_1c >> 2;
    }
  }
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  puVar3 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  if (puVar3 != puVar1) {
    STLVector_dword_shuffle_0139e3e0(puVar3,puVar1);
  }
  puVar1 = local_18;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  puVar3 = local_1c;
  if (local_18 < local_1c) {
    FUN_00d83c2d();
  }
  if (puVar3 != puVar1) {
    STLVector_dword_shuffle_0139e3e0(puVar3,puVar1);
  }
  uVar6 = 0;
  if (0 < (int)unaff_retaddr) {
    do {
      puVar1 = local_1c;
      if ((local_1c == (uint *)0x0) || ((uint)((int)local_18 - (int)local_1c >> 2) <= uVar6)) {
        FUN_0139e690();
        break;
      }
      if (local_18 < local_1c) {
        FUN_00d83c2d();
      }
      puVar1 = puVar1 + uVar6;
      if ((local_18 < puVar1) || (puVar1 < local_1c)) {
        FUN_00d83c2d();
      }
      if (local_18 <= puVar1) {
        FUN_00d83c2d();
      }
      uVar2 = *(uint *)(param_2 + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(param_2 + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(param_2 + 8) - uVar2) >> 2))) {
        uVar4 = *(uint *)(param_2 + 8);
        if (uVar4 < uVar2) {
          FUN_00d83c2d();
        }
        FUN_012619f0(auStack_34,param_2,uVar4,puVar1);
      }
      else {
        puVar3 = *(uint **)(param_2 + 8);
        *puVar3 = *puVar1;
        *(uint **)(param_2 + 8) = puVar3 + 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)unaff_retaddr);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_14 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01419f50();
  ExceptionList = local_10;
  return;
}

