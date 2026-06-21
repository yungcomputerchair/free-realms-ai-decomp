// addr: 0x014a5d10
// name: FUN_014a5d10
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_buildObjectArguments_A(void * ctx) */

bool __fastcall DisplayAction_buildObjectArguments_A(void *ctx)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *local_68;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [4];
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24 [2];
  undefined4 local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Builds display-action arguments from objects and integers, allocating helper
                       objects and appending them to vectors. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a4e9b;
  local_14 = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_14;
  DisplayActionManager_ensureSingleton();
  pvVar4 = Mem_Alloc(0x14);
  local_c = 0;
  if (pvVar4 == (void *)0x0) {
    local_68 = (void *)0x0;
  }
  else {
    local_68 = (void *)FUN_012f9eb0(uVar3);
  }
  local_c = 0xffffffff;
  FUN_012f8c70(0x2a);
  DisplayActionBuilder_addIntArg(local_68,*(int *)((int)ctx + 8));
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_c = 2;
  uVar3 = *(uint *)((int)ctx + 0x14);
  if (uVar3 < *(uint *)((int)ctx + 0x10)) {
    FUN_00d83c2d();
  }
  uVar7 = *(uint *)((int)ctx + 0x10);
  if (*(uint *)((int)ctx + 0x14) < uVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (ctx == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (uVar7 == uVar3) break;
    if (ctx == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)ctx + 0x14) <= uVar7) {
      FUN_00d83c2d();
    }
    InstanceID_copy_ctor(uVar7);
    puVar6 = local_30;
    local_c = CONCAT31(local_c._1_3_,3);
    if ((local_34 == (undefined4 *)0x0) ||
       ((uint)(local_2c - (int)local_34 >> 2) <= (uint)((int)local_30 - (int)local_34 >> 2))) {
      if (local_30 < local_34) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_58,local_38,puVar6,local_24);
    }
    else {
      *local_30 = local_24[0];
      local_30 = local_30 + 1;
    }
    puVar6 = local_40;
    if ((local_44 == (undefined4 *)0x0) ||
       ((uint)(local_3c - (int)local_44 >> 2) <= (uint)((int)local_40 - (int)local_44 >> 2))) {
      if (local_40 < local_44) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_50,local_48,puVar6,local_1c);
    }
    else {
      *local_40 = local_1c[0];
      local_40 = local_40 + 1;
    }
    local_c = CONCAT31(local_c._1_3_,2);
    InstanceID_dtor(local_28);
    if (*(uint *)((int)ctx + 0x14) <= uVar7) {
      FUN_00d83c2d();
    }
    uVar7 = uVar7 + 0x10;
  }
  DisplayActionBuilder_addObjectArg(local_68,local_38);
  DisplayActionBuilder_addObjectArg(local_68,local_48);
  puVar1 = local_30;
  puVar6 = local_34;
  if ((local_30 < local_34) && (FUN_00d83c2d(), puVar6 = local_34, local_30 < local_34)) {
    FUN_00d83c2d();
  }
  puVar2 = local_30;
  if (puVar6 != puVar1) {
    iVar5 = (int)local_30 - (int)puVar1 >> 2;
    puVar2 = puVar6 + iVar5;
    if (0 < iVar5) {
      _memmove_s(puVar6,iVar5 * 4,puVar1,iVar5 * 4);
    }
  }
  local_30 = puVar2;
  puVar1 = local_40;
  puVar6 = local_44;
  if ((local_40 < local_44) && (FUN_00d83c2d(), puVar6 = local_44, local_40 < local_44)) {
    FUN_00d83c2d();
  }
  puVar2 = local_40;
  if (puVar6 != puVar1) {
    iVar5 = (int)local_40 - (int)puVar1 >> 2;
    puVar2 = puVar6 + iVar5;
    if (0 < iVar5) {
      _memmove_s(puVar6,iVar5 * 4,puVar1,iVar5 * 4);
    }
  }
  local_40 = puVar2;
  uVar3 = *(uint *)((int)ctx + 0x24);
  if (uVar3 < *(uint *)((int)ctx + 0x20)) {
    FUN_00d83c2d();
  }
  uVar7 = *(uint *)((int)ctx + 0x20);
  if (*(uint *)((int)ctx + 0x24) < uVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (ctx == (void *)0xffffffe4) {
      FUN_00d83c2d();
    }
    if (uVar7 == uVar3) break;
    if (ctx == (void *)0xffffffe4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)ctx + 0x24) <= uVar7) {
      FUN_00d83c2d();
    }
    InstanceID_copy_ctor(uVar7);
    puVar6 = local_30;
    local_c = CONCAT31(local_c._1_3_,4);
    if ((local_34 == (undefined4 *)0x0) ||
       ((uint)(local_2c - (int)local_34 >> 2) <= (uint)((int)local_30 - (int)local_34 >> 2))) {
      if (local_30 < local_34) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_50,local_38,puVar6,local_24);
    }
    else {
      *local_30 = local_24[0];
      local_30 = local_30 + 1;
    }
    puVar6 = local_40;
    if ((local_44 == (undefined4 *)0x0) ||
       ((uint)(local_3c - (int)local_44 >> 2) <= (uint)((int)local_40 - (int)local_44 >> 2))) {
      if (local_40 < local_44) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_58,local_48,puVar6,local_1c);
    }
    else {
      *local_40 = local_1c[0];
      local_40 = local_40 + 1;
    }
    local_c = CONCAT31(local_c._1_3_,2);
    InstanceID_dtor(local_28);
    if (*(uint *)((int)ctx + 0x24) <= uVar7) {
      FUN_00d83c2d();
    }
    uVar7 = uVar7 + 0x10;
  }
  DisplayActionBuilder_addObjectArg(local_68,local_38);
  DisplayActionBuilder_addObjectArg(local_68,local_48);
  FUN_012d3550(local_68);
  local_c = CONCAT31(local_c._1_3_,1);
  if (local_44 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_c = 0xffffffff;
  if (local_34 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_14;
  return true;
}

