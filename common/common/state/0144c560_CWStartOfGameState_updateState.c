// addr: 0x0144c560
// name: CWStartOfGameState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CWStartOfGameState_updateState(int *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  bool *pbVar7;
  DWORD seedValue_;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int unaff_EBX;
  int unaff_EBP;
  int iVar13;
  int unaff_ESI;
  uint uVar14;
  char *pcVar15;
  void *pvVar16;
  int iStack_11c;
  void *local_118;
  int local_114;
  undefined4 local_110;
  int *local_108;
  void *local_104;
  int *local_100;
  void *local_fc;
  undefined1 auStack_f8 [4];
  void *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  void *local_e8 [2];
  void *local_e0;
  void *local_dc;
  undefined4 uStack_d8;
  undefined1 auStack_c8 [8];
  int iStack_c0;
  void *pvStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'CWStartOfGameState::updateState kEndStartOfGameState'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ade8;
  local_c = ExceptionList;
  piVar5 = (int *)(DAT_01b839d8 ^ (uint)&stack0xfffffed4);
  ExceptionList = &local_c;
  pcVar15 = "CWStartOfGameState::updateState";
  local_100 = param_1;
  pvVar6 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar6,pcVar15,piVar5);
  switch(param_1[0x3d]) {
  case 0:
  case 5:
    pcVar15 = "CWStartOfGameState::updateState kEndStartOfGameState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar15,piVar5);
    local_fc = Mem_Alloc(0x14);
    local_4 = 10;
    if (local_fc == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x1adbd);
    StateMachineState_getGame();
    iVar9 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar6,iVar9);
    DisplayActionBuilder_addBoolArg(pvVar6,false);
    piVar5 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar5 + 0x154))(pvVar6);
    pvVar6 = (void *)StateMachineState_getGame();
    Game_getZoneCollection(pvVar6);
    puVar11 = (undefined4 *)FUN_0144c390(0);
    uVar12 = *puVar11;
    StateMachineState_getCurrentTurn(uVar12);
    GameTurn_startForPlayer(uVar12);
  default:
    uVar12 = 3;
    break;
  case 1:
    pcVar15 = "CWStartOfGameState::updateState kInitialStartOfGameState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar15,piVar5);
    local_e8[0] = Mem_Alloc(0x14);
    pvVar6 = (void *)0x0;
    local_4 = 0;
    if (local_e8[0] != (void *)0x0) {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x1adbd);
    StateMachineState_getGame();
    iVar9 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar6,iVar9);
    DisplayActionBuilder_addBoolArg(pvVar6,true);
    piVar8 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar8 + 0x154))(pvVar6);
    StateMachineState_getGame();
    Game_getVector_24();
    piVar8 = (int *)FUN_01268fd0(auStack_a8);
    local_108 = (int *)piVar8[1];
    iVar9 = *piVar8;
    piVar8 = (int *)FUN_01268fa0(auStack_b0);
    iVar13 = *piVar8;
    piVar8 = (int *)piVar8[1];
    while( true ) {
      if ((iVar13 == 0) || (iVar13 != iVar9)) {
        FUN_00d83c2d();
      }
      if (piVar8 == local_108) break;
      if (iVar13 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar13 + 8) <= piVar8) {
        FUN_00d83c2d();
      }
      if (*piVar8 != 0) {
        local_100 = (int *)GamePlayer_getPlayerId();
        pbVar7 = IntToBoolMap_getOrInsert(param_1 + 0x3e,&local_100,piVar5);
        *pbVar7 = false;
      }
      if (*(int **)(iVar13 + 8) <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    param_1[0x3d] = 2;
    pvVar6 = (void *)StateMachineState_getGame();
    bVar3 = Game_getPendingFlag_131(pvVar6);
    if (bVar3) {
      pcVar15 = "Game Ended is set, going to next game and clearing everything.";
      pvVar6 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar6,pcVar15,piVar5);
      bVar3 = false;
      pvVar6 = (void *)StateMachineState_getGame();
      Game_setPendingFlag_131(pvVar6,bVar3);
      pcVar1 = *(code **)(*param_1 + 0x3c);
      param_1[0x3d] = 6;
      uVar12 = (*pcVar1)();
      ExceptionList = local_c;
      return uVar12;
    }
  case 2:
    pcVar15 = "CWStartOfGameState::updateState kWaitForDeckStartOfGameState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar15,piVar5);
    cVar4 = FUN_0144c250();
    if (cVar4 == '\0') {
      uVar12 = 2;
    }
    else {
      uVar12 = 1;
      StateMachineState_getGame(1);
      FUN_01347b90(uVar12);
      pcVar1 = *(code **)(*param_1 + 0x3c);
      param_1[0x3d] = 3;
      uVar12 = (*pcVar1)();
    }
    break;
  case 3:
  case 6:
    pcVar15 = "CWStartOfGameState::updateState kDisplayAvatarStartOfGameState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar15,piVar5);
    local_f4 = (void *)0x0;
    local_f0 = 0;
    local_ec = 0;
    local_4 = 1;
    pvVar6 = (void *)StateMachineState_getGame();
    local_104 = pvVar6;
    EvaluationEnvironment_ctor();
    local_4._0_1_ = 2;
    EvaluationEnvironment_copyFrom(local_a0,(void *)param_1[0x3a],piVar5);
    pvVar6 = Game_getZoneCollection(pvVar6);
    FUN_0126a940(pvVar6);
    local_4 = CONCAT31(local_4._1_3_,3);
    pvVar6 = (void *)StateMachineState_getGame();
    bVar3 = Game_getFlag_14d(pvVar6);
    if (bVar3) {
      StateMachineState_getGame();
      cVar4 = Game_getFlag_318();
      if (cVar4 != '\0') {
        seedValue_ = GetTickCount();
        StateMachineState_getGame();
        pvVar6 = (void *)FUN_013487b0();
        MTRandom_seed(pvVar6,seedValue_);
        pvVar16 = (void *)0x2;
        pvVar6 = (void *)StateMachineState_getGame();
        CWGame_doReshuffleFor(pvVar6,pvVar16,(int)piVar5);
      }
    }
    pvVar16 = local_dc;
    pvVar6 = local_e0;
    if (local_dc < local_e0) {
      FUN_00d83c2d();
    }
    local_108 = pvVar6;
    while( true ) {
      piVar5 = local_108;
      if (pvVar16 < pvVar6) {
        FUN_00d83c2d();
      }
      if (piVar5 == pvVar16) break;
      local_118 = (void *)0x0;
      local_114 = 0;
      local_110 = 0;
      local_4._0_1_ = 4;
      FUN_012fa9f0(0x222e3);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pvVar16 <= piVar5) {
        FUN_00d83c2d();
      }
      piVar8 = (int *)PlayElement_getGame();
      uVar12 = (**(code **)(*piVar8 + 0x48))
                         (6,local_a0,0,&PlayArea::RTTI_Type_Descriptor,
                          &PilePlayArea::RTTI_Type_Descriptor,0);
      piVar8 = (int *)FUN_00d8d382(uVar12);
      if (pvVar16 <= piVar5) {
        FUN_00d83c2d();
      }
      iVar9 = GamePlayer_getPlayerId(0,&Card::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
      pvVar6 = (void *)StateMachineState_getGame();
      pvVar6 = PlayArea_findPlayerElementById(pvVar6,iVar9);
      iVar9 = unknown_getField30(pvVar6);
      piVar10 = (int *)FUN_00d8d382(iVar9);
      (**(code **)(*piVar10 + 0x198))(0);
      if (pvVar16 <= piVar5) {
        FUN_00d83c2d();
      }
      iVar9 = GamePlayer_getPlayerId();
      if (iVar9 == 1) {
        pvVar6 = (void *)StateMachineState_getGame();
        bVar3 = Game_getFlag_14d(pvVar6);
        if (((bVar3) && (cVar4 = FUN_01408db0(auStack_c8), cVar4 != '\0')) &&
           (local_e8[0] = pvStack_b4, pvStack_b4 != (void *)0x0)) {
          iVar9 = 0;
          do {
            local_fc = Mem_Alloc(0x150);
            local_4._0_1_ = 6;
            if (local_fc == (void *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)CWCard_ctor();
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            if (local_dc <= piVar5) {
              FUN_00d83c2d();
            }
            iVar13 = *piVar8;
            uVar12 = GamePlayer_getPlayerId();
            uVar12 = StateMachineState_getGame(uVar12);
            (**(code **)(iVar13 + 0x44))(uVar12);
            (**(code **)(*piVar8 + 0xb4))(local_f0);
            (**(code **)(*piVar8 + 0x198))(0);
            iVar13 = *piVar8;
            uVar12 = FUN_0132e1d0();
            (**(code **)(iVar13 + 0x128))(uVar12);
            (**(code **)(*piVar8 + 0x10))(0x22971,local_e8);
            (**(code **)(*piVar8 + 0x1ac))(iVar9 + 0x22645);
            iVar9 = iVar9 + 1;
            piVar5 = local_108;
          } while (iVar9 < 4);
        }
        else {
          (**(code **)(*piVar8 + 0x34))(&iStack_11c);
          uVar14 = 0;
          do {
            if ((local_118 == (void *)0x0) || ((uint)(local_114 - (int)local_118 >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)((int)local_118 + uVar14 * 4) + 0x198))(0);
            if ((iStack_11c == 0) || ((uint)((int)local_118 - iStack_11c >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            iVar9 = **(int **)(iStack_11c + uVar14 * 4);
            uVar12 = FUN_0132e1d0();
            (**(code **)(iVar9 + 0x128))(uVar12);
            if ((unaff_EBX == 0) || ((uint)(iStack_11c - unaff_EBX >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)(unaff_EBX + uVar14 * 4) + 0x10))(0x22971,&local_dc);
            if ((unaff_ESI == 0) || ((uint)(unaff_EBP - unaff_ESI >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)(unaff_ESI + uVar14 * 4) + 0x1ac))(uVar14 + 0x22645);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < 4);
        }
      }
      else {
        pvVar6 = (void *)StateMachineState_getGame();
        bVar3 = Game_getFlag_14d(pvVar6);
        if (((bVar3) && (cVar4 = FUN_01408db0(auStack_c8), iVar9 = iStack_c0, cVar4 != '\0')) &&
           (iStack_c0 != 0)) {
          iVar13 = 0;
          do {
            local_fc = Mem_Alloc(0x150);
            local_4._0_1_ = 7;
            if (local_fc == (void *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = (int *)CWCard_ctor();
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            if (local_dc <= local_108) {
              FUN_00d83c2d();
            }
            iVar2 = *piVar5;
            uVar12 = GamePlayer_getPlayerId();
            uVar12 = StateMachineState_getGame(uVar12);
            (**(code **)(iVar2 + 0x44))(uVar12);
            (**(code **)(*piVar5 + 0xb4))(iVar9);
            (**(code **)(*piVar5 + 0x198))(0);
            iVar2 = *piVar5;
            uVar12 = FUN_0132e1d0();
            (**(code **)(iVar2 + 0x128))(uVar12);
            (**(code **)(*piVar5 + 0x10))(0x22971,local_e8);
            (**(code **)(*piVar5 + 0x1ac))(iVar13 + 0x22645);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 4);
        }
        else {
          (**(code **)(*piVar8 + 0x34))(&iStack_11c);
          uVar14 = 0;
          do {
            if ((local_118 == (void *)0x0) || ((uint)(local_114 - (int)local_118 >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)((int)local_118 + uVar14 * 4) + 0x198))(0);
            if ((iStack_11c == 0) || ((uint)((int)local_118 - iStack_11c >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            iVar9 = **(int **)(iStack_11c + uVar14 * 4);
            uVar12 = FUN_0132e1d0();
            (**(code **)(iVar9 + 0x128))(uVar12);
            if ((unaff_EBX == 0) || ((uint)(iStack_11c - unaff_EBX >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)(unaff_EBX + uVar14 * 4) + 0x10))(0x22971,&local_dc);
            if ((unaff_ESI == 0) || ((uint)(unaff_EBP - unaff_ESI >> 2) <= uVar14)) {
              FUN_00d83c2d();
            }
            (**(code **)(**(int **)(unaff_ESI + uVar14 * 4) + 0x1ac))(uVar14 + 0x22645);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < 4);
        }
      }
      local_4._0_1_ = 4;
      FUN_01300cd0();
      local_4 = CONCAT31(local_4._1_3_,3);
      if (local_118 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = (void *)0x0;
      local_114 = 0;
      local_110 = 0;
      if (local_dc <= local_108) {
        FUN_00d83c2d();
      }
      local_108 = (int *)((int)local_108 + 4);
      param_1 = local_100;
      pvVar6 = local_e0;
      pvVar16 = local_dc;
    }
    param_1[0x3d] = 4;
    uVar12 = (**(code **)(*(int *)param_1[2] + 0x40))();
    GameResult_appendValue(auStack_f8);
    uVar12 = StateMachine_setCurrentState(uVar12);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
    local_e0 = (void *)0x0;
    local_dc = (void *)0x0;
    uStack_d8 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_01385460();
    local_4 = 0xffffffff;
    if (local_f4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_f4);
    }
    break;
  case 4:
    pcVar15 = "CWStartOfGameState::updateState kDrawCardsStartOfGameState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar15,piVar5);
    pvVar6 = (void *)0x0;
    local_f4 = (void *)0x0;
    local_f0 = 0;
    local_ec = 0;
    local_4 = 8;
    local_fc = Mem_Alloc(0x14);
    local_4._0_1_ = 9;
    if (local_fc != (void *)0x0) {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_012f8c70(0xab);
    StateMachineState_getGame();
    iVar9 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar6,iVar9);
    piVar5 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar5 + 0x154))(pvVar6);
    uVar12 = (**(code **)(*(int *)param_1[2] + 0x40))();
    GameResult_appendValue(auStack_f8);
    param_1[0x3d] = 5;
    uVar12 = StateMachine_setCurrentState(uVar12);
    local_4 = 0xffffffff;
    FUN_01314560();
  }
  ExceptionList = local_c;
  return uVar12;
}

