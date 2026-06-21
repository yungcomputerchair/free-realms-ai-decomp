// addr: 0x0144fd20
// name: CWDoublePassState_activePlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void CWDoublePassState_activePlayer(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  void *pvVar7;
  void *this;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  char *fmt;
  uint local_20;
  void *local_1c;
  void *local_18;
  uint *local_14;
  undefined1 local_10 [12];
  
                    /* Implements the operation identified by referenced string
                       'CWDoublePassState::activePlayer: %d'. */
  pvVar7 = (void *)StateMachineState_getGame();
  pvVar7 = Game_getZoneCollection(pvVar7);
  local_1c = pvVar7;
  this = (void *)StateMachineState_getCurrentTurn();
  uVar8 = get_field_8(this);
  puVar10 = *(uint **)((int)pvVar7 + 8);
  if (puVar10 < *(uint **)((int)pvVar7 + 4)) {
    FUN_00d83c2d();
  }
  puVar1 = *(uint **)((int)pvVar7 + 4);
  puVar5 = puVar1;
  if (*(uint **)((int)pvVar7 + 8) < puVar1) {
    FUN_00d83c2d();
  }
  for (; (uVar6 = local_20, puVar5 != puVar10 && (*puVar5 != uVar8)); puVar5 = puVar5 + 1) {
  }
  uVar2 = *(uint *)(local_20 + 0x114);
  iVar11 = local_20 + 0x10c;
  local_18 = pvVar7;
  local_14 = puVar1;
  if (uVar2 < *(uint *)(local_20 + 0x110)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)(uVar6 + 0x110);
  if (*(uint *)(uVar6 + 0x114) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_01354e80(local_10,iVar11,uVar3,iVar11,uVar2);
  puVar10 = puVar5;
  if (uVar8 != 0) {
    uVar9 = GamePlayer_getPlayerId();
    fmt = "CWDoublePassState::activePlayer: %d";
    pvVar7 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar7,fmt,uVar9);
  }
  while( true ) {
    pvVar7 = local_1c;
    puVar1 = *(uint **)((int)local_1c + 8);
    if (puVar1 < *(uint **)((int)local_1c + 4)) {
      FUN_00d83c2d();
    }
    if ((local_18 == (void *)0x0) || (local_18 != pvVar7)) {
      FUN_00d83c2d();
    }
    if (puVar10 == puVar1) break;
    if (local_18 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint **)((int)local_18 + 8) <= puVar10) {
      FUN_00d83c2d();
    }
    uVar8 = *(uint *)(uVar6 + 0x110);
    local_20 = *puVar10;
    if ((uVar8 == 0) ||
       ((uint)((int)(*(int *)(uVar6 + 0x118) - uVar8) >> 2) <=
        (uint)((int)(*(int *)(uVar6 + 0x114) - uVar8) >> 2))) {
      uVar2 = *(uint *)(uVar6 + 0x114);
      if (uVar2 < uVar8) {
        FUN_00d83c2d();
      }
      FUN_01334d00(local_10,iVar11,uVar2,&local_20);
    }
    else {
      puVar1 = *(uint **)(uVar6 + 0x114);
      *puVar1 = local_20;
      *(uint **)(uVar6 + 0x114) = puVar1 + 1;
    }
    if (*(uint **)((int)local_18 + 8) <= puVar10) {
      FUN_00d83c2d();
    }
    puVar10 = puVar10 + 1;
  }
  puVar10 = *(uint **)((int)pvVar7 + 4);
  if (*(uint **)((int)pvVar7 + 8) < puVar10) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((pvVar7 == (void *)0x0) || (pvVar7 != local_18)) {
      FUN_00d83c2d();
    }
    if (puVar10 == puVar5) break;
    if (pvVar7 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint **)((int)pvVar7 + 8) <= puVar10) {
      FUN_00d83c2d();
    }
    uVar8 = *(uint *)(uVar6 + 0x110);
    local_1c = (void *)*puVar10;
    if ((uVar8 == 0) ||
       ((uint)((int)(*(int *)(uVar6 + 0x118) - uVar8) >> 2) <=
        (uint)((int)(*(int *)(uVar6 + 0x114) - uVar8) >> 2))) {
      uVar2 = *(uint *)(uVar6 + 0x114);
      if (uVar2 < uVar8) {
        FUN_00d83c2d();
      }
      FUN_01334d00(local_10,iVar11,uVar2,&local_1c);
    }
    else {
      piVar4 = *(int **)(uVar6 + 0x114);
      *piVar4 = (int)local_1c;
      *(int **)(uVar6 + 0x114) = piVar4 + 1;
    }
    if (*(uint **)((int)pvVar7 + 8) <= puVar10) {
      FUN_00d83c2d();
    }
    puVar10 = puVar10 + 1;
  }
  return;
}

