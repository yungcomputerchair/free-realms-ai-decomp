// addr: 0x0144e200
// name: CWState_collectAndRemovePlayerResponses
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWState_collectAndRemovePlayerResponses(void * this) */

void __fastcall CWState_collectAndRemovePlayerResponses(void *this)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *local_38;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects current state responses, stores a context field, and
                       removes/consumes response records, prioritizing the current player. */
  puStack_8 = &LAB_0169b108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  piVar4 = (int *)StateMachineState_getGame(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  (**(code **)(*piVar4 + 0xf4))(0,&local_1c);
  this_00 = (void *)StateMachineState_getCurrentTurn();
  uVar5 = get_field_8(this_00);
  *(uint *)((int)this + 0x13c) = uVar5;
  for (; (puVar9 = puStack_20, puVar8 = (undefined4 *)0x0, puStack_20 != (undefined4 *)0x0 &&
         (iVar6 = (int)local_1c - (int)puStack_20 >> 0x1f,
         ((int)local_1c - (int)puStack_20) / 0xc + iVar6 != iVar6)); local_1c = local_1c + -3) {
    bVar1 = false;
    local_38 = (undefined1 *)0x0;
    if (local_1c < puStack_20) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar3 = local_1c;
      if (local_1c < puStack_20) {
        FUN_00d83c2d();
      }
      if (auStack_24 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      puVar2 = puStack_20;
      if (puVar9 == puVar3) break;
      if (auStack_24 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (local_1c <= puVar9) {
        FUN_00d83c2d();
      }
      iVar6 = (**(code **)(*(int *)*puVar9 + 0x28))();
      if (((*(int *)(unaff_EBX + 0x13c) != 0) && (iVar7 = GamePlayer_getPlayerId(), iVar6 == iVar7))
         && (!bVar1)) {
        bVar1 = true;
        puVar8 = puVar9;
        local_38 = auStack_24;
      }
      if (local_1c <= puVar9) {
        FUN_00d83c2d();
      }
      puVar9 = puVar9 + 3;
    }
    if (!bVar1) {
      if (local_1c < puStack_20) {
        FUN_00d83c2d();
      }
      local_38 = auStack_24;
      puVar8 = puVar2;
    }
    if (local_38 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(local_38 + 8) <= puVar8) {
      FUN_00d83c2d();
    }
    FUN_01336520(puVar8);
    puVar9 = puVar8;
    while (puVar9 = puVar9 + 3, puVar9 != local_1c) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
      puVar8[2] = puVar9[2];
      puVar8 = puVar8 + 3;
    }
  }
  local_c = (void *)0xffffffff;
  if (puStack_20 == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_20);
}

