// addr: 0x014bac40
// name: FUN_014bac40
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x014bad37) */
/* Setting prototype: bool DisplayAction_buildObjectArguments_B(void * ctx) */

bool __fastcall DisplayAction_buildObjectArguments_B(void *ctx)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_68;
  undefined1 local_60 [8];
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
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Builds a similar display-action argument set from objects and integers for
                       another command path. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a8dd3;
  local_14 = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  pvVar5 = Mem_Alloc(0x14);
  local_c = 0;
  if (pvVar5 == (void *)0x0) {
    local_68 = (void *)0x0;
  }
  else {
    local_68 = (void *)FUN_012f9eb0(uVar4);
  }
  local_c = 0xffffffff;
  FUN_012f8c70(0x48);
  DisplayActionBuilder_addIntArg(local_68,*(int *)((int)ctx + 0x1c));
  DisplayActionBuilder_addIntArg(local_68,*(int *)((int)ctx + 8));
  DisplayActionBuilder_addIntArg(local_68,*(int *)((int)ctx + 0x20));
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_c = 3;
  uVar4 = *(uint *)((int)ctx + 0x14);
  if (uVar4 < *(uint *)((int)ctx + 0x10)) {
    FUN_00d83c2d();
  }
  uVar1 = *(uint *)((int)ctx + 0x10);
  if (*(uint *)((int)ctx + 0x14) < uVar1) {
    FUN_00d83c2d();
  }
  if (uVar1 != uVar4) {
    FUN_013083f0(uVar1,uVar4,0,0,&LAB_014c4600);
  }
  puVar2 = *(undefined4 **)((int)ctx + 0x14);
  if (puVar2 < *(undefined4 **)((int)ctx + 0x10)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)((int)ctx + 0x10);
  if (*(undefined4 **)((int)ctx + 0x14) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (ctx == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar2) break;
    if (ctx == (void *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)ctx + 0x14) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar3 = local_20;
    if ((local_24 == (undefined4 *)0x0) ||
       ((uint)(local_1c - (int)local_24 >> 2) <= (uint)((int)local_20 - (int)local_24 >> 2))) {
      if (local_20 < local_24) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_60,local_28,puVar3,puVar6);
    }
    else {
      *local_20 = *puVar6;
      local_20 = local_20 + 1;
    }
    if (*(undefined4 **)((int)ctx + 0x14) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar3 = local_30;
    if ((local_34 == (undefined4 *)0x0) ||
       ((uint)(local_2c - (int)local_34 >> 2) <= (uint)((int)local_30 - (int)local_34 >> 2))) {
      if (local_30 < local_34) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_58,local_38,puVar3,puVar6 + 1);
    }
    else {
      *local_30 = puVar6[1];
      local_30 = local_30 + 1;
    }
    if (*(undefined4 **)((int)ctx + 0x14) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar3 = local_40;
    if ((local_44 == (undefined4 *)0x0) ||
       ((uint)(local_3c - (int)local_44 >> 2) <= (uint)((int)local_40 - (int)local_44 >> 2))) {
      if (local_40 < local_44) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_50,local_48,puVar3,puVar6 + 2);
    }
    else {
      *local_40 = puVar6[2];
      local_40 = local_40 + 1;
    }
    if (*(undefined4 **)((int)ctx + 0x14) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 3;
  }
  DisplayActionBuilder_addObjectArg(local_68,local_28);
  DisplayActionBuilder_addObjectArg(local_68,local_38);
  DisplayActionBuilder_addObjectArg(local_68,local_48);
  DisplayActionBuilder_addIntArg(local_68,*(int *)((int)ctx + 0x24));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(local_68);
  uVar7 = *(undefined4 *)((int)ctx + 0x1c);
  FUN_012cfde0(uVar7);
  pvVar5 = (void *)FUN_012cc6b0(uVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_013084a0((int)ctx + 0xc);
    FUN_01301eb0(pvVar5,*(int *)((int)ctx + 0x24));
    FUN_01301e30(*(undefined4 *)((int)ctx + 0x20));
  }
  local_c = CONCAT31(local_c._1_3_,2);
  if (local_44 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  if (local_34 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_c = 0xffffffff;
  if (local_24 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_14;
  return true;
}

