// addr: 0x0133baa0
// name: Game_processQueuedDisplayActions
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall Game_processQueuedDisplayActions(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int **ppiVar5;
  uint *_Src;
  bool bVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  void *this;
  undefined4 *extraout_EAX;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  undefined4 uVar17;
  uint *puStack_d4;
  uint *local_d0;
  undefined4 *local_cc;
  void *local_c8;
  undefined4 *local_c4;
  int *local_c0;
  int *local_bc;
  int iStack_b8;
  int *local_b4;
  undefined4 *local_b0;
  char cStack_a9;
  undefined1 local_a8 [4];
  undefined4 *local_a4;
  undefined4 *local_a0;
  int local_9c;
  undefined4 *local_98;
  int local_94;
  undefined4 local_90;
  int iStack_8c;
  undefined4 *local_88;
  uint *puStack_84;
  int **ppiStack_80;
  undefined1 local_78 [4];
  int *local_74;
  int *local_70;
  int local_68;
  undefined4 *puStack_64;
  undefined4 *local_60 [3];
  undefined1 local_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  uint *puStack_38;
  uint *puStack_34;
  uint *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Processes queued and text display actions, logging reveal ids and dispatching
                       display/action events to players and state machines. It also copies command
                       lists and handles pending action/event dispatch. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0167bd7a;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)&puStack_d4;
  piVar7 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff20);
  if ((char)param_1[0xe2] == '\0') {
    return;
  }
  ExceptionList = &local_14;
  param_1[99] = 3;
  Game_logGeneral(param_1,"Processing Queued DisplayActions",piVar7);
  local_88 = (undefined4 *)param_1[0x3d];
  local_c0 = param_1 + 0x3c;
  local_bc = (int *)*local_88;
  while( true ) {
    piVar3 = local_bc;
    piVar2 = local_c0;
    if ((local_c0 == (int *)0x0) || (local_c0 != param_1 + 0x3c)) {
      FUN_00d83c2d();
    }
    if (piVar3 == local_88) break;
    if (piVar2 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar3 == (undefined4 *)piVar2[1]) {
      FUN_00d83c2d();
    }
    piVar3 = local_bc;
    local_b0 = (undefined4 *)local_bc[5];
    puVar13 = local_bc + 4;
    local_c4 = puVar13;
    if (local_bc == (undefined4 *)piVar2[1]) {
      FUN_00d83c2d();
    }
    puVar11 = *(undefined4 **)piVar3[5];
    while( true ) {
      local_cc = puVar11;
      if (puVar13 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar11 == local_b0) break;
      if (puVar13 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar11 == (undefined4 *)puVar13[1]) {
        FUN_00d83c2d();
      }
      iVar9 = param_1[0x37];
      local_c8 = (void *)FUN_012d1bc0(iVar9,*(undefined4 *)(iVar9 + 4),local_cc + 2);
      FUN_012d2590(1);
      *(void **)(iVar9 + 4) = local_c8;
      **(undefined4 **)((int)local_c8 + 4) = local_c8;
      if (local_cc == (undefined4 *)local_c4[1]) {
        FUN_00d83c2d();
      }
      puVar11 = (undefined4 *)*local_cc;
      puVar13 = local_c4;
    }
    FUN_0132eea0();
  }
  FUN_01336630(*(undefined4 *)(param_1[0x3d] + 4));
  *(int *)(param_1[0x3d] + 4) = param_1[0x3d];
  param_1[0x3e] = 0;
  *(int *)param_1[0x3d] = param_1[0x3d];
  *(int *)(param_1[0x3d] + 8) = param_1[0x3d];
  Game_logGeneral(param_1,"Processing text DisplayActions",piVar7);
  local_88 = (undefined4 *)param_1[0x40];
  local_c0 = param_1 + 0x3f;
  local_bc = (int *)*local_88;
  while( true ) {
    piVar3 = local_bc;
    piVar2 = local_c0;
    if ((local_c0 == (int *)0x0) || (local_c0 != param_1 + 0x3f)) {
      FUN_00d83c2d();
    }
    if (piVar3 == local_88) break;
    if (piVar2 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar3 == (undefined4 *)piVar2[1]) {
      FUN_00d83c2d();
    }
    piVar3 = local_bc;
    local_b0 = (undefined4 *)local_bc[5];
    puVar13 = local_bc + 4;
    local_c4 = puVar13;
    if (local_bc == (undefined4 *)piVar2[1]) {
      FUN_00d83c2d();
    }
    puVar11 = *(undefined4 **)piVar3[5];
    while( true ) {
      local_cc = puVar11;
      if (puVar13 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar11 == local_b0) break;
      if (puVar13 == (undefined4 *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar11 == (undefined4 *)puVar13[1]) {
        FUN_00d83c2d();
      }
      local_c8 = (void *)local_cc[2];
      iVar9 = param_1[0x37];
      local_c8 = (void *)FUN_012d1bc0(iVar9,*(undefined4 *)(iVar9 + 4),&local_c8);
      FUN_012d2590(1);
      *(void **)(iVar9 + 4) = local_c8;
      **(undefined4 **)((int)local_c8 + 4) = local_c8;
      if (local_cc == (undefined4 *)local_c4[1]) {
        FUN_00d83c2d();
      }
      puVar11 = (undefined4 *)*local_cc;
      puVar13 = local_c4;
    }
    FUN_0132eea0();
  }
  FUN_01336630(*(undefined4 *)(param_1[0x40] + 4));
  *(int *)(param_1[0x40] + 4) = param_1[0x40];
  param_1[0x41] = 0;
  *(int *)param_1[0x40] = param_1[0x40];
  *(int *)(param_1[0x40] + 8) = param_1[0x40];
  param_1[99] = 0;
  FUN_01348d70();
  pvVar8 = Game_getStringField34(param_1);
  FUN_005f15f0(pvVar8);
  local_c = 0;
  if (local_70 < local_74) {
    FUN_00d83c2d();
  }
  local_a4 = (undefined4 *)0x0;
  local_a0 = (undefined4 *)0x0;
  local_9c = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  if (local_70 < local_74) {
    FUN_00d83c2d();
  }
  local_c0 = (int *)local_78;
  local_bc = local_74;
  while( true ) {
    piVar3 = local_bc;
    piVar2 = local_c0;
    if ((local_c0 == (int *)0x0) || (local_c0 != (int *)local_78)) {
      FUN_00d83c2d();
    }
    if (piVar3 == local_70) break;
    if (piVar2 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)piVar2 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    local_c8 = PlayArea_findPlayerElementById(param_1,*local_bc);
    puVar13 = local_a0;
    if ((local_a4 == (undefined4 *)0x0) ||
       ((uint)(local_9c - (int)local_a4 >> 2) <= (uint)((int)local_a0 - (int)local_a4 >> 2))) {
      if (local_a0 < local_a4) {
        FUN_00d83c2d();
      }
      FUN_01334d00(&local_68,local_a8,puVar13,&local_c8);
    }
    else {
      *local_a0 = local_c8;
      local_a0 = local_a0 + 1;
    }
    if (*(int **)((int)local_c0 + 8) <= local_bc) {
      FUN_00d83c2d();
    }
    local_bc = local_bc + 1;
  }
  local_60[0] = local_a0;
  if (local_a0 < local_a4) {
    FUN_00d83c2d();
  }
  local_94 = FUN_004eeaa9();
  puVar13 = local_a4;
  *(undefined1 *)(local_94 + 0x15) = 1;
  *(int *)(local_94 + 4) = local_94;
  *(int *)local_94 = local_94;
  *(int *)(local_94 + 8) = local_94;
  local_90 = 0;
  local_c = CONCAT31(local_c._1_3_,3);
  if (local_a0 < local_a4) {
    FUN_00d83c2d();
  }
  local_b4 = (int *)local_a8;
  do {
    piVar2 = local_b4;
    local_b0 = puVar13;
    if ((local_b4 == (int *)0x0) || (local_b4 != (int *)local_a8)) {
      FUN_00d83c2d();
    }
    if (puVar13 == local_60[0]) {
      puStack_64 = (undefined4 *)param_1[0x81];
      local_b4 = param_1 + 0x80;
      local_b0 = (undefined4 *)*puStack_64;
      while( true ) {
        puVar13 = local_b0;
        piVar7 = local_b4;
        if ((local_b4 == (int *)0x0) || (local_b4 != param_1 + 0x80)) {
          FUN_00d83c2d();
        }
        if (puVar13 == puStack_64) {
          pvVar8 = Game_getCurrentTurn(param_1);
          pvVar8 = GameTurn_getCurrentStateMachine(pvVar8);
          StateMachine_dispatchPendingActionOrEvent(pvVar8);
          piVar7 = Game_getCurrentTurn(param_1);
          (**(code **)(*piVar7 + 0x60))();
          FUN_01410050();
          pvVar8 = Game_getCurrentTurn(param_1);
          pvVar8 = CWPlayer_dynamicCastFromGamePlayer(pvVar8);
          if (pvVar8 != (void *)0x0) {
            local_c0 = Mem_Alloc(0x14);
            local_c._0_1_ = 0xf;
            if (local_c0 == (int *)0x0) {
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = (void *)FUN_012f9eb0();
            }
            local_c = CONCAT31(local_c._1_3_,3);
            FUN_012f8c70(0x1adb1);
            iVar9 = StateMachine_getCurrentState();
            DisplayActionBuilder_addIntArg(pvVar8,iVar9);
            iVar9 = GamePlayer_getPlayerId();
            DisplayActionBuilder_addIntArg(pvVar8,iVar9);
            (**(code **)(*param_1 + 0x154))(pvVar8);
          }
          VirtualObject_discardGeneratedString(param_1);
          local_c0 = Mem_Alloc(0x14);
          local_c._0_1_ = 0x10;
          if (local_c0 == (void *)0x0) {
            pvVar8 = (void *)0x0;
          }
          else {
            pvVar8 = (void *)FUN_012f9eb0();
          }
          local_c = CONCAT31(local_c._1_3_,3);
          FUN_012f8c70(0xab);
          iVar9 = StateMachine_getCurrentState();
          DisplayActionBuilder_addIntArg(pvVar8,iVar9);
          (**(code **)(*param_1 + 0x154))(pvVar8);
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
          FUN_005152ac(local_60,&local_9c,*local_98,&local_9c,local_98);
                    /* WARNING: Subroutine does not return */
          _free(local_98);
        }
        if (piVar7 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if (puVar13 == (undefined4 *)piVar7[1]) {
          FUN_00d83c2d();
        }
        local_c8 = (void *)puVar13[3];
        if (puVar13 == (undefined4 *)piVar7[1]) {
          FUN_00d83c2d();
        }
        iStack_b8 = puVar13[4];
        if (puVar13 == (undefined4 *)piVar7[1]) {
          FUN_00d83c2d();
        }
        local_d0 = (uint *)CONCAT31(local_d0._1_3_,*(undefined1 *)(puVar13 + 5));
        if (puVar13 == (undefined4 *)piVar7[1]) {
          FUN_00d83c2d();
        }
        cStack_a9 = *(char *)(puVar13 + 6);
        if (puVar13 == (undefined4 *)piVar7[1]) {
          FUN_00d83c2d();
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        puStack_34 = (uint *)((uint)puStack_34 & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&puStack_38,
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (puVar13 + 7),0,0xffffffff);
        local_c._0_1_ = 0xd;
        local_c0 = Mem_Alloc(0x14);
        local_c._0_1_ = 0xe;
        if (local_c0 == (int *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = (void *)FUN_012f9eb0();
        }
        local_c = CONCAT31(local_c._1_3_,0xd);
        FUN_012f8c70(0x6b);
        iVar9 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(pvVar8,iVar9);
        DisplayActionBuilder_addIntArg(pvVar8,(int)local_c8);
        Game_logGeneral(param_1,"revealID: %d",local_c8);
        DisplayActionBuilder_addCStringArg(pvVar8,"");
        if (puVar13 == (undefined4 *)local_b4[1]) {
          FUN_00d83c2d();
        }
        DisplayActionBuilder_addObjectArg(pvVar8,puVar13 + 0xe);
        DisplayActionBuilder_addBoolArg(pvVar8,true);
        iVar9 = Game_getMyPlayerID(param_1);
        puVar12 = local_d0;
        if (iStack_b8 != iVar9) {
          puVar12 = (uint *)0x0;
        }
        DisplayActionBuilder_addBoolArg(pvVar8,SUB41(puVar12,0));
        DisplayActionBuilder_addStringArg(pvVar8,&puStack_38);
        if (cStack_a9 == '\0') {
          (**(code **)(*param_1 + 0x150))(iStack_b8,pvVar8);
        }
        else {
          (**(code **)(*param_1 + 0x154))();
        }
        local_c = CONCAT31(local_c._1_3_,3);
        if (0xf < uStack_20) break;
        uStack_20 = 0xf;
        uStack_24 = 0;
        puStack_34 = (uint *)((uint)puStack_34 & 0xffffff00);
        FUN_0132f390();
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_34);
    }
    if (piVar2 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)piVar2 + 8) <= puVar13) {
      FUN_00d83c2d();
    }
    pvVar8 = (void *)FUN_00d8d382(*puVar13,0,&Player::RTTI_Type_Descriptor,
                                  &CWPlayer::RTTI_Type_Descriptor,0);
    local_c8 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      uVar17 = 0;
      pTVar16 = &CWDeck::RTTI_Type_Descriptor;
      pTVar15 = &Deck::RTTI_Type_Descriptor;
      uVar14 = 0;
      iVar9 = unknown_getField28(pvVar8);
      iVar9 = FUN_00d8d382(iVar9,uVar14,pTVar15,pTVar16,uVar17);
      if (iVar9 == 0) {
        bVar6 = Game_getFlag_14d(param_1);
        if (!bVar6) {
          iVar9 = Game_getMyPlayerID(param_1);
          iVar10 = GamePlayer_getPlayerId();
          if (iVar10 == iVar9) {
            local_d0 = Mem_Alloc(0x24);
            local_c._0_1_ = 6;
            if (local_d0 == (uint *)0x0) {
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = (void *)FUN_0141a120(param_1);
            }
            local_c = CONCAT31(local_c._1_3_,3);
            iVar9 = Game_getMyPlayerID(param_1);
            Game_dispatchCommandToPlayer(param_1,iVar9,pvVar8);
          }
        }
      }
      else {
        local_d0 = Mem_Alloc(0x14);
        local_c._0_1_ = 4;
        if (local_d0 == (uint *)0x0) {
          this = (void *)0x0;
        }
        else {
          this = (void *)FUN_012f9eb0();
        }
        local_c._0_1_ = 3;
        FUN_012f8c70(0x67);
        iVar9 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(this,iVar9);
        unknown_getField30(pvVar8);
        iVar9 = PlayElement_getId();
        DisplayActionBuilder_addIntArg(this,iVar9);
        iVar9 = GamePlayer_getPlayerId();
        DisplayActionBuilder_addIntArg(this,iVar9);
        pvVar8 = Game_copyCommandObjectList(pvVar8,local_54);
        local_c._0_1_ = 5;
        DisplayActionBuilder_addStringArg(this,pvVar8);
        local_c = CONCAT31(local_c._1_3_,3);
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          _free(local_50);
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = (void *)((uint)local_50 & 0xffffff00);
        (**(code **)(*param_1 + 0x154))(this);
      }
      if (0 < param_1[0x91]) {
        local_c4 = (undefined4 *)GamePlayer_getPlayerId();
        local_d0 = Mem_Alloc(0x14);
        local_c._0_1_ = 7;
        if (local_d0 == (uint *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)FUN_012f9eb0();
        }
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_012f8c70(0x44);
        DisplayActionBuilder_addIntArg(piVar7,param_1[5]);
        DisplayActionBuilder_addIntArg(piVar7,(int)local_c4);
        DisplayActionBuilder_addIntArg(piVar7,param_1[0x91]);
        (**(code **)(*param_1 + 0x154))();
        StdRbTreeInt_find(param_1 + 0x92,local_60,&local_c8,piVar7);
        piVar7 = (int *)*extraout_EAX;
        iStack_8c = extraout_EAX[1];
        local_68 = param_1[0x93];
        local_bc = (int *)0x0;
        if ((piVar7 == (int *)0x0) || (piVar7 != param_1 + 0x92)) {
          FUN_00d83c2d();
        }
        if (iStack_8c != local_68) {
          if (piVar7 == (int *)0x0) {
            FUN_00d83c2d();
          }
          if (iStack_8c == piVar7[1]) {
            FUN_00d83c2d();
          }
          local_bc = *(int **)(iStack_8c + 0x10);
        }
        puStack_d4 = Mem_Alloc(0x14);
        puStack_10._0_1_ = 8;
        if (puStack_d4 == (uint *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = (void *)FUN_012f9eb0();
        }
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
        FUN_012f8c70(0x45);
        DisplayActionBuilder_addIntArg(pvVar8,param_1[5]);
        DisplayActionBuilder_addIntArg(pvVar8,(int)local_c8);
        iVar9 = param_1[0x91] - (int)local_bc;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        DisplayActionBuilder_addIntArg(pvVar8,iVar9);
        (**(code **)(*param_1 + 0x154))(pvVar8);
      }
      iStack_b8 = PlayElement_getGame();
      puStack_34 = (uint *)0x0;
      puStack_30 = (uint *)0x0;
      uStack_2c = 0;
      local_c = CONCAT31(local_c._1_3_,10);
      iVar9 = Game_getMyPlayerID(param_1);
      iVar10 = GamePlayer_getPlayerId();
      if (iVar10 == iVar9) {
        piVar7 = (int *)FUN_0139d7c0();
        (**(code **)(*piVar7 + 0x34))(&puStack_38);
        local_c4 = (undefined4 *)FUN_0139d7c0();
        puStack_84 = puStack_30;
        if (puStack_30 < puStack_34) {
          FUN_00d83c2d();
        }
        puVar12 = puStack_34;
        if (puStack_30 < puStack_34) {
          FUN_00d83c2d();
        }
        ppiStack_80 = (int **)&puStack_38;
        while( true ) {
          ppiVar5 = ppiStack_80;
          if (((uint **)ppiStack_80 == (uint **)0x0) || ((uint **)ppiStack_80 != &puStack_38)) {
            FUN_00d83c2d();
          }
          if (puVar12 == puStack_84) break;
          if ((uint **)ppiVar5 == (uint **)0x0) {
            FUN_00d83c2d();
          }
          if (ppiVar5[2] <= puVar12) {
            FUN_00d83c2d();
          }
          local_d0 = (uint *)*puVar12;
          local_c0 = Mem_Alloc(0x14);
          local_c._0_1_ = 0xb;
          if (local_c0 == (int *)0x0) {
            pvVar8 = (void *)0x0;
          }
          else {
            pvVar8 = (void *)FUN_012f9eb0();
          }
          local_c = CONCAT31(local_c._1_3_,10);
          FUN_012f8c70(0x73);
          iVar9 = StateMachine_getCurrentState();
          DisplayActionBuilder_addIntArg(pvVar8,iVar9);
          iVar9 = PlayElement_getId();
          DisplayActionBuilder_addIntArg(pvVar8,iVar9);
          DisplayActionBuilder_addIntArg(pvVar8,0);
          iVar9 = PlayElement_getId();
          DisplayActionBuilder_addIntArg(pvVar8,iVar9);
          DisplayActionBuilder_addIntArg(pvVar8,3);
          (**(code **)(*param_1 + 0x154))(pvVar8);
          if (ppiStack_80[2] <= puVar12) {
            FUN_00d83c2d();
          }
          puVar12 = puVar12 + 1;
        }
      }
      puVar4 = puStack_30;
      puVar12 = puStack_34;
      if ((puStack_30 < puStack_34) &&
         (FUN_00d83c2d(), puVar12 = puStack_34, puStack_30 < puStack_34)) {
        FUN_00d83c2d();
      }
      if (puVar12 != puVar4) {
        iVar9 = (int)puStack_30 - (int)puVar4 >> 2;
        local_d0 = puVar12 + iVar9;
        if (0 < iVar9) {
          _memmove_s(puVar12,iVar9 * 4,puVar4,iVar9 * 4);
        }
        puStack_30 = local_d0;
      }
      piVar7 = (int *)Player_getDiscardPile();
      (**(code **)(*piVar7 + 0x34))(&puStack_38);
      local_c8 = (void *)Player_getDiscardPile();
      puStack_d4 = puStack_34;
      if (puStack_34 < puStack_38) {
        FUN_00d83c2d();
      }
      puVar12 = puStack_38;
      if (puStack_34 < puStack_38) {
        FUN_00d83c2d();
      }
      puStack_84 = &local_3c;
      while( true ) {
        puVar4 = puStack_84;
        if ((puStack_84 == (uint *)0x0) || (puStack_84 != &local_3c)) {
          FUN_00d83c2d();
        }
        _Src = puStack_34;
        if (puVar12 == puStack_d4) break;
        if (puVar4 == (uint *)0x0) {
          FUN_00d83c2d();
        }
        if ((uint *)puVar4[2] <= puVar12) {
          FUN_00d83c2d();
        }
        local_88 = (undefined4 *)*puVar12;
        local_c4 = Mem_Alloc(0x14);
        puStack_10._0_1_ = 0xc;
        if (local_c4 == (undefined4 *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = (void *)FUN_012f9eb0();
        }
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
        FUN_012f8c70(0x73);
        iVar9 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(pvVar8,iVar9);
        iVar9 = PlayElement_getId();
        DisplayActionBuilder_addIntArg(pvVar8,iVar9);
        DisplayActionBuilder_addIntArg(pvVar8,0);
        iVar9 = PlayElement_getId();
        DisplayActionBuilder_addIntArg(pvVar8,iVar9);
        DisplayActionBuilder_addIntArg(pvVar8,3);
        (**(code **)(*param_1 + 0x154))(pvVar8);
        if ((uint *)puStack_84[2] <= puVar12) {
          FUN_00d83c2d();
        }
        puVar12 = puVar12 + 1;
      }
      puVar12 = puStack_38;
      if ((puStack_34 < puStack_38) &&
         (FUN_00d83c2d(), puVar12 = puStack_38, puStack_34 < puStack_38)) {
        FUN_00d83c2d();
      }
      if (puVar12 != _Src) {
        iVar9 = (int)puStack_34 - (int)_Src >> 2;
        puStack_d4 = puVar12 + iVar9;
        if (0 < iVar9) {
          _memmove_s(puVar12,iVar9 * 4,_Src,iVar9 * 4);
        }
        puStack_34 = puStack_d4;
      }
      puVar13 = local_cc;
      uVar14 = 0;
      unknown_getField30(local_cc);
      Card_callWithSuppressNotifications(uVar14);
      puStack_d4 = (uint *)unknown_getField30(puVar13);
      uVar1 = *puStack_d4;
      PlayElement_getGame(0);
      uVar14 = FUN_0139d7c0();
      (**(code **)(uVar1 + 0x6c))(uVar14);
      piVar7 = (int *)unknown_getField30(puVar13);
      iVar9 = *piVar7;
      PlayElement_getGame(0);
      uVar14 = Player_getDiscardPile();
      (**(code **)(iVar9 + 0x6c))(uVar14);
      piVar7 = (int *)unknown_getField30(puVar13);
      iVar9 = *piVar7;
      PlayElement_getGame(0);
      uVar14 = FUN_0139d7a0();
      (**(code **)(iVar9 + 0x6c))(uVar14);
      local_c = CONCAT31(local_c._1_3_,3);
      if (puStack_34 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_34);
      }
      puStack_34 = (uint *)0x0;
      puStack_30 = (uint *)0x0;
      uStack_2c = 0;
      puVar13 = local_b0;
    }
    if (*(undefined4 **)((int)local_b4 + 8) <= puVar13) {
      FUN_00d83c2d(piVar7);
    }
    puVar13 = puVar13 + 1;
  } while( true );
}

