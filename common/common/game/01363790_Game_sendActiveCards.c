// addr: 0x01363790
// name: Game_sendActiveCards
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_sendActiveCards(void * this) */

bool __fastcall Game_sendActiveCards(void *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *this_00;
  int *unaff_EBX;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 local_51;
  void *pvStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  void *local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a list of active card ids for the local/selected player, merges
                       tracked card ids, and sends them in an outgoing packet. It logs "Done with
                       getActiveCards." before serializing the list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f3cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x14d) == '\0') {
    if (*(int *)((int)this + 0x13c) == 0) {
      FUN_012f5a60("mMyPlayerID","..\\common\\common\\game\\Game.cpp",0x10a5,
                   DAT_01b839d8 ^ (uint)&stack0xffffff9c);
    }
    iVar7 = *(int *)((int)this + 0x13c);
    iVar5 = GamePlayer_getPlayerId();
    if (iVar5 != iVar7) {
      ExceptionList = local_c;
      return false;
    }
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  iVar7 = *(int *)this;
  uVar6 = GamePlayer_getPlayerId(&local_1c);
  (**(code **)(iVar7 + 0xf0))();
  Game_logGeneral(this,"Done with getActiveCards.",uVar6);
  uVar4 = local_1c;
  if (local_1c < local_20) {
    FUN_00d83c2d();
  }
  uVar8 = local_20;
  if (local_1c < local_20) {
    FUN_00d83c2d();
  }
  puStack_44 = &local_24;
  while( true ) {
    puVar1 = puStack_44;
    if ((puStack_44 == (undefined4 *)0x0) || (puStack_44 != &local_24)) {
      FUN_00d83c2d();
    }
    if (uVar8 == uVar4) break;
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00d83c2d();
    }
    if ((uint)puVar1[2] <= uVar8) {
      FUN_00d83c2d();
    }
    pvStack_4c = (void *)PlayElement_getId();
    piVar2 = piStack_2c;
    if ((piStack_30 == (int *)0x0) ||
       ((uint)((int)local_28 - (int)piStack_30 >> 2) <=
        (uint)((int)piStack_2c - (int)piStack_30 >> 2))) {
      if (piStack_2c < piStack_30) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_3c,&uStack_34,piVar2,&pvStack_4c);
    }
    else {
      *piStack_2c = (int)pvStack_4c;
      piStack_2c = piStack_2c + 1;
    }
    if ((uint)puStack_44[2] <= uVar8) {
      FUN_00d83c2d();
    }
    uVar8 = uVar8 + 4;
  }
  puVar1 = *(undefined4 **)((int)this + 0xac);
  puVar9 = (undefined4 *)*puVar1;
  while( true ) {
    puStack_48 = puVar9;
    if (this == (int *)0xffffff58) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar1) break;
    if (this == (int *)0xffffff58) {
      FUN_00d83c2d();
    }
    if (puVar9 == *(undefined4 **)((int)this + 0xac)) {
      FUN_00d83c2d();
    }
    iVar7 = PlayElement_getId();
    piVar2 = piStack_2c;
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    piVar10 = piStack_30;
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    piVar3 = piStack_2c;
    puStack_44 = &uStack_34;
    piStack_40 = piVar10;
    for (; (piVar10 != piVar2 && (*piVar10 != iVar7)); piVar10 = piVar10 + 1) {
    }
    if (piStack_2c < piStack_30) {
      FUN_00d83c2d();
    }
    if ((puStack_44 == (undefined4 *)0x0) || (puStack_44 != &uStack_34)) {
      FUN_00d83c2d();
    }
    puVar9 = puStack_48;
    if (piVar10 != piVar3) {
      if (puStack_48 == (undefined4 *)unaff_EBX[0x2b]) {
        FUN_00d83c2d();
      }
      piVar2 = piStack_2c;
      if ((piStack_30 == (int *)0x0) ||
         ((uint)((int)local_28 - (int)piStack_30 >> 2) <=
          (uint)((int)piStack_2c - (int)piStack_30 >> 2))) {
        if (piStack_2c < piStack_30) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_3c,&uStack_34,piVar2,puVar9 + 2);
      }
      else {
        *piStack_2c = puVar9[2];
        piStack_2c = piStack_2c + 1;
      }
    }
    if (puVar9 == (undefined4 *)unaff_EBX[0x2b]) {
      FUN_00d83c2d();
    }
    puVar9 = (undefined4 *)*puVar9;
    this = unaff_EBX;
  }
  pvStack_4c = Mem_Alloc(0x14);
  local_c._0_1_ = 2;
  if (pvStack_4c == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_012f9eb0();
  }
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  FUN_012f8c70(0x71);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 0x14));
  DisplayActionBuilder_addObjectArg(this_00,&uStack_34);
  DisplayActionBuilder_addIntArg(this_00,1);
  iVar7 = *(int *)this;
  uVar6 = GamePlayer_getPlayerId(this_00);
  (**(code **)(iVar7 + 0x150))(uVar6);
  local_4 = local_4 & 0xffffff00;
  if (local_18 == (void *)0x0) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0xffffffff;
    if (local_28 == (void *)0x0) {
      local_51 = (undefined1)(uVar4 >> 0x18);
      ExceptionList = local_c;
      return (bool)local_51;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

