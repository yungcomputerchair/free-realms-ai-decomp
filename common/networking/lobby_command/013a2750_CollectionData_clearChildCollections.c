// addr: 0x013a2750
// name: CollectionData_clearChildCollections
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CollectionData_clearChildCollections(void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  undefined4 *puVar4;
  int local_38;
  undefined4 *local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Copies the current child collection pointers from the CollectionData
                       tree/vector and then removes each one. Evidence: used by
                       LobbyCommandSetLeagueCollection and LobbyCommandSetDraft after
                       obtaining/creating collection data, and the removal callee erases child
                       pointers from a tree at offsets 0x58/0x5c. */
  puStack_10 = &LAB_016859b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_c = 0;
  puVar4 = *(undefined4 **)((int)param_1 + 0x5c);
  local_34 = (undefined4 *)*puVar4;
  local_38 = (int)param_1 + 0x58;
  while( true ) {
    puVar2 = local_34;
    iVar1 = local_38;
    if ((local_38 == 0) || (local_38 != (int)param_1 + 0x58)) {
      FUN_00d83c2d();
      param_2 = extraout_EDX;
    }
    puVar3 = local_20;
    if (puVar2 == puVar4) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    puVar3 = local_20;
    if ((local_24 == (undefined4 *)0x0) ||
       ((uint)(local_1c - (int)local_24 >> 2) <= (uint)((int)local_20 - (int)local_24 >> 2))) {
      if (local_20 < local_24) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_30,local_28,puVar3,puVar2 + 3);
      CollectionDataChildIterator_increment(&local_38);
      param_2 = extraout_EDX_01;
    }
    else {
      *local_20 = puVar2[3];
      local_20 = local_20 + 1;
      CollectionDataChildIterator_increment(&local_38);
      param_2 = extraout_EDX_00;
    }
  }
  if (local_20 < local_24) {
    FUN_00d83c2d();
    param_2 = extraout_EDX_02;
  }
  puVar4 = local_24;
  if (local_20 < local_24) {
    FUN_00d83c2d();
    param_2 = extraout_EDX_03;
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x28) {
      FUN_00d83c2d();
      param_2 = extraout_EDX_04;
    }
    if (puVar4 == puVar3) break;
    if (&stack0x00000000 == (undefined1 *)0x28) {
      FUN_00d83c2d();
      param_2 = extraout_EDX_05;
    }
    if (local_20 <= puVar4) {
      FUN_00d83c2d();
      param_2 = extraout_EDX_06;
    }
    CollectionData_removeChildCollectionByKey(param_1,param_2);
    param_2 = extraout_EDX_07;
    if (local_20 <= puVar4) {
      FUN_00d83c2d();
      param_2 = extraout_EDX_08;
    }
    puVar4 = puVar4 + 1;
  }
  local_c = 0xffffffff;
  if (local_24 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_14;
  return;
}

