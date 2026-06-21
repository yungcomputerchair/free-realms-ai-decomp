// addr: 0x0139b7a0
// name: Card_collectType5ArchetypeRelations
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_collectType5ArchetypeRelations(void * this) */

void __fastcall Card_collectType5ArchetypeRelations(void *this)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *local_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Collects archetype/play-element relationships for collection type 5,
                       resolving each PlayElement id and sending results to two output sinks. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684f30;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  local_40 = (undefined4 *)0x5;
  uVar7 = FUN_01326fd0(&local_40);
  FUN_012c7fe0(uVar7);
  local_4 = 0;
  local_40 = (undefined4 *)0x5;
  iVar8 = FUN_01326fd0(&local_40);
  uVar1 = *(uint *)(iVar8 + 8);
  if (uVar1 < *(uint *)(iVar8 + 4)) {
    FUN_00d83c2d(uVar6);
  }
  uVar2 = *(uint *)(iVar8 + 4);
  if (*(uint *)(iVar8 + 8) < uVar2) {
    FUN_00d83c2d(uVar6);
  }
  FUN_012b2960(&local_34,iVar8,uVar2,iVar8,uVar1);
  puVar5 = local_14;
  puVar4 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
    if (puVar5 < puVar4) {
      FUN_00d83c2d();
    }
  }
  local_34 = local_1c;
  local_30 = puVar4;
  while( true ) {
    puVar4 = local_30;
    puVar3 = local_34;
    if ((local_34 == (undefined1 *)0x0) || (local_34 != local_1c)) {
      FUN_00d83c2d();
    }
    if (puVar4 == local_14) {
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      ExceptionList = local_c;
      return;
    }
    if (puVar3 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(puVar3 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    local_28 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    local_20 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*(int *)*puVar4 + 100))(local_2c);
    local_40 = local_24;
    if (local_24 < local_28) {
      FUN_00d83c2d();
    }
    puVar4 = local_28;
    if (local_24 < local_28) {
      FUN_00d83c2d();
    }
    puStack_3c = local_2c;
    puStack_38 = puVar4;
    while( true ) {
      puVar4 = puStack_38;
      puVar3 = puStack_3c;
      if ((puStack_3c == (undefined1 *)0x0) || (puStack_3c != local_2c)) {
        FUN_00d83c2d();
      }
      if (puVar4 == local_40) break;
      if (puVar3 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(puVar3 + 8) <= puVar4) {
        FUN_00d83c2d();
      }
      iVar8 = *(int *)((int)this + 0x48);
      uVar7 = *puVar4;
      uVar9 = PlayElement_getId();
      uVar9 = FUN_01322200(this,uVar7,uVar9);
      uVar9 = FUN_013221d0(uVar9);
      (**(code **)(iVar8 + 8))(uVar9);
      iVar8 = **(int **)((int)this + 0x30);
      uVar9 = PlayElement_getId();
      uVar7 = FUN_01322200(this,uVar7,uVar9);
      uVar7 = FUN_013221d0(uVar7);
      (**(code **)(iVar8 + 8))(uVar7);
      if (*(undefined4 **)(puStack_3c + 8) <= puStack_38) {
        FUN_00d83c2d();
      }
      puStack_38 = puStack_38 + 1;
    }
    local_4 = local_4 & 0xffffff00;
    if (local_28 != (undefined4 *)0x0) break;
    local_28 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    local_20 = 0;
    if (*(undefined4 **)(local_34 + 8) <= local_30) {
      FUN_00d83c2d();
    }
    local_30 = local_30 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}

