// addr: 0x0146aff0
// name: MultiActionState_getCommandObjectList
// subsystem: common/common/state
// source (binary assert): common/common/state/MultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MultiActionState_getCommandObjectList(void * this, void * outList) */

void __thiscall MultiActionState_getCommandObjectList(void *this,void *outList)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 ****ppppuVar13;
  void *env;
  void *outVector;
  char in_stack_00000008;
  void *in_stack_0000000c;
  char *pcVar14;
  undefined1 *puVar15;
  void *pvStack_264;
  int *local_260;
  int *piStack_25c;
  int *piStack_258;
  int *piStack_254;
  void *local_250;
  undefined4 uStack_24c;
  void *pvStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int *piStack_23c;
  int *piStack_238;
  void *local_234;
  undefined1 auStack_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [12];
  undefined1 auStack_214 [4];
  void *pvStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_204 [4];
  void *pvStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined1 local_1f4 [4];
  void *pvStack_1f0;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [152];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [28];
  undefined1 auStack_c4 [28];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [28];
  undefined1 auStack_54 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [4];
  undefined4 ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Builds the command object list for a multi-action choice, creating
                       custom/play/play-with-target command objects and formatted action text for
                       the local or remote player. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0169e7c9;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)&pvStack_264;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffd90);
  ExceptionList = &local_14;
  pcVar14 = "MultiActionState::getCommandObjectList";
  local_250 = outList;
  local_234 = in_stack_0000000c;
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar14,pvVar2);
  local_260 = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x128),0,
                                  &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  pvVar3 = EvaluationEnvironment_getOriginCard(in_stack_0000000c);
  if (pvVar3 != (void *)0x0) {
    piVar4 = EvaluationEnvironment_getOriginCard(in_stack_0000000c);
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (**(code **)(*piVar4 + 0x108))(local_1f4);
    local_c._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_38,pbVar5,0,0xffffffff);
    local_c._0_1_ = 0;
    if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1f0);
    }
    uStack_1dc = 0xf;
    uStack_1e0 = 0;
    pvStack_1f0 = (void *)((uint)pvStack_1f0 & 0xffffff00);
  }
  switch(*(undefined4 *)((int)this + 0xfc)) {
  case 3:
  case 6:
    pcVar14 = "MultiActionState::getCommandObjectList: CustomCommandObject";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar14,pvVar2);
    EvaluationEnvironment_ctor();
    local_c = CONCAT31(local_c._1_3_,0xd);
    EvaluationEnvironment_copyFrom(auStack_198,in_stack_0000000c,pvVar2);
    FUN_013815c0(2);
    if (*(char *)((int)this + 0x161) != '\0') {
      FUN_013815c0(1);
    }
    FUN_012fa910();
    local_c._0_1_ = 0xe;
    CommandObjectList_evaluateToValueData((void *)((int)this + 0x154),env);
    if (*(char *)((int)this + 0x161) == '\0') {
      pvVar2 = PlayElementList_collectCommandObjects(auStack_198,outVector);
      local_c._0_1_ = 0x10;
      FUN_014135c0(pvVar2);
    }
    else {
      uVar12 = EvaluationEnvironment_addCommandObjectChecked(auStack_1d8);
      local_c._0_1_ = 0xf;
      FUN_014135c0(uVar12);
    }
    local_c._0_1_ = 0xe;
    FUN_01314560();
    uVar12 = FUN_01385f30(auStack_204);
    local_c._0_1_ = 0x11;
    EvaluationEnvironment_setRevealedCardsReturn(uVar12);
    local_c._0_1_ = 0xe;
    if (pvStack_200 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_200);
    }
    pvStack_200 = (void *)0x0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    pvVar2 = (void *)FUN_01385a50(auStack_214);
    local_c._0_1_ = 0x12;
    CommandObjectList_buildEventValueAction40(pvVar2);
    local_c._0_1_ = 0xe;
    if (pvStack_210 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_210);
    }
    pvStack_210 = (void *)0x0;
    uStack_20c = 0;
    uStack_208 = 0;
    uVar12 = Rules_getIntegerKey1B();
    EvaluationEnvironment_setCustomNumber2Return(uVar12);
    uVar12 = Rules_getDynamicCardReturnCard();
    EvaluationEnvironment_setDynamicCardReturn(uVar12);
    if (*(char *)((int)this + 0x161) != '\0') {
      pvVar2 = (void *)FUN_01385d90(local_1f4);
      local_c._0_1_ = 0x13;
      CommandObjectList_buildEventValueAction0E(pvVar2);
      local_c._0_1_ = 0xe;
      STLVector_int_clear(local_1f4);
    }
    local_c._0_1_ = 0xd;
    FUN_01300cd0();
    local_c = (uint)local_c._1_3_ << 8;
    FUN_01385460();
    break;
  case 4:
    pcVar14 = "MultiActionState::getCommandObjectList: PlayWithTargetCommandObject";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar14,pvVar2);
    if (in_stack_00000008 != '\0') {
      piVar4 = EvaluationEnvironment_getTargetCard(in_stack_0000000c);
      piStack_25c = piVar4;
      piStack_258 = EvaluationEnvironment_getTarget2Card(in_stack_0000000c);
      if ((piVar4 != (int *)0x0) && (piStack_258 != (int *)0x0)) {
        pvStack_264 = (void *)(**(code **)(*piStack_258 + 0x108))(auStack_c4);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
        iVar10 = (**(code **)(*piVar4 + 0x108))(auStack_100);
        local_c._0_1_ = 3;
        if ((uint)local_260[6] < 0x10) {
          piVar6 = local_260 + 1;
        }
        else {
          piVar6 = (int *)local_260[1];
        }
        if (*(uint *)(iVar10 + 0x18) < 0x10) {
          iVar10 = iVar10 + 4;
        }
        else {
          iVar10 = *(int *)(iVar10 + 4);
        }
        ppppuVar13 = (undefined4 ****)local_34[0];
        if (local_20 < 0x10) {
          ppppuVar13 = local_34;
        }
        iVar7 = *(int *)((int)this + 0xf8);
        pcVar14 = "%s: You play %s on %s";
        pvVar3 = (void *)StateMachineState_getGame
                                   (iVar7,"%s: You play %s on %s",ppppuVar13,iVar10,piVar6);
        GamePlayer_logFormattedMessage(pvVar3,iVar7,pcVar14);
        local_c._0_1_ = 2;
        FUN_0041f1d7();
        local_c._0_1_ = 0;
        FUN_0041f1d7();
        uStack_22c = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        local_c = CONCAT31(local_c._1_3_,4);
        puVar15 = auStack_230;
        StateMachineState_getGame(puVar15);
        FUN_013630f0(puVar15);
        puVar11 = (undefined4 *)FUN_01269090(auStack_1c0);
        piStack_23c = (int *)*puVar11;
        piStack_238 = (int *)puVar11[1];
        puVar11 = (undefined4 *)FUN_01269060(auStack_1a0);
        uStack_24c = *puVar11;
        pvStack_248 = (void *)puVar11[1];
        cVar1 = FUN_01268ea0(&piStack_23c);
        while (cVar1 != '\0') {
          piVar6 = (int *)FUN_01268e40();
          if (*piVar6 != *(int *)((int)this + 0xf8)) {
            iVar10 = (**(code **)(*piStack_258 + 0x108))(auStack_e0);
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
            iVar7 = (**(code **)(*piVar4 + 0x108))(auStack_90);
            local_c._0_1_ = 6;
            pvVar3 = Game_copyCommandObjectList(*(void **)((int)this + 0xf8),auStack_54);
            local_c._0_1_ = 7;
            if (*(uint *)(iVar10 + 0x18) < 0x10) {
              pvStack_264 = (void *)(iVar10 + 4);
            }
            else {
              pvStack_264 = *(void **)(iVar10 + 4);
            }
            if (*(uint *)(iVar7 + 0x18) < 0x10) {
              local_260 = (int *)(iVar7 + 4);
            }
            else {
              local_260 = *(int **)(iVar7 + 4);
            }
            if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
              iVar10 = (int)pvVar3 + 4;
            }
            else {
              iVar10 = *(int *)((int)pvVar3 + 4);
            }
            ppppuVar13 = (undefined4 ****)local_34[0];
            if (local_20 < 0x10) {
              ppppuVar13 = local_34;
            }
            piVar4 = (int *)FUN_01268e40();
            iVar7 = *piVar4;
            pcVar14 = "%s: %s plays %s on %s";
            pvVar3 = (void *)StateMachineState_getGame
                                       (iVar7,"%s: %s plays %s on %s",ppppuVar13,iVar10,local_260,
                                        pvStack_264);
            GamePlayer_logFormattedMessage(pvVar3,iVar7,pcVar14);
            local_c._0_1_ = 6;
            FUN_0041f1d7();
            local_c._0_1_ = 5;
            FUN_0041f1d7();
            local_c = CONCAT31(local_c._1_3_,4);
            FUN_0041f1d7();
            piVar4 = piStack_25c;
            in_stack_0000000c = local_234;
          }
          FUN_0132e500(auStack_220,0);
          cVar1 = FUN_01268ea0(&piStack_23c);
        }
        local_c._1_3_ = (uint3)((uint)local_c >> 8);
        local_c._0_1_ = 0;
        FUN_01269120();
      }
    }
    pvVar3 = EvaluationEnvironment_getOriginCard(in_stack_0000000c);
    pvVar8 = CommandObject_getActionFromEnvironment(in_stack_0000000c);
    pvVar9 = EvaluationEnvironment_getTargetCard(in_stack_0000000c);
    if (pvVar9 != (void *)0x0) {
      pvVar9 = EvaluationEnvironment_getTargetCard(in_stack_0000000c);
      set_play_element_id_field(in_stack_0000000c,pvVar9);
      piVar4 = EvaluationEnvironment_getTargetCard(in_stack_0000000c);
      uVar12 = (**(code **)(*piVar4 + 0xcc))();
      EvaluationEnvironment_setActionReturn(uVar12);
    }
    piStack_25c = Mem_Alloc(0x124);
    local_c._0_1_ = 8;
    if (piStack_25c == (int *)0x0) {
      pvStack_264 = (void *)0x0;
    }
    else {
      pvStack_264 = CommandObjectPlayCard_ctor(piStack_25c,in_stack_0000000c);
    }
    local_c = (uint)local_c._1_3_ << 8;
    set_play_element_id_field(in_stack_0000000c,pvVar3);
    EvaluationEnvironment_setActionReturn(pvVar8);
    CommandObjectVector_pushBack(local_250,&pvStack_264,pvVar2);
    break;
  case 5:
    pcVar14 = "MultiActionState::getCommandObjectList: PlayCommandObject";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar14,pvVar2);
    piStack_25c = EvaluationEnvironment_getTargetCard(in_stack_0000000c);
    if ((in_stack_00000008 != '\0') && (local_260 != (int *)0x0)) {
      iVar10 = Card_getPropertyMap();
      if (*(uint *)(iVar10 + 0x18) < 0x10) {
        iVar10 = iVar10 + 4;
      }
      else {
        iVar10 = *(int *)(iVar10 + 4);
      }
      ppppuVar13 = (undefined4 ****)local_34[0];
      if (local_20 < 0x10) {
        ppppuVar13 = local_34;
      }
      iVar7 = *(int *)((int)this + 0xf8);
      pcVar14 = "%s: You play %s.";
      pvVar3 = (void *)StateMachineState_getGame(iVar7,"%s: You play %s.",ppppuVar13,iVar10);
      GamePlayer_logFormattedMessage(pvVar3,iVar7,pcVar14);
      pvStack_248 = (void *)0x0;
      uStack_244 = 0;
      uStack_240 = 0;
      local_c = CONCAT31(local_c._1_3_,9);
      puVar11 = &uStack_24c;
      StateMachineState_getGame(puVar11);
      FUN_013630f0(puVar11);
      puVar11 = (undefined4 *)FUN_01269090(auStack_1c8);
      piStack_23c = (int *)*puVar11;
      piStack_238 = (int *)puVar11[1];
      puVar11 = (undefined4 *)FUN_01269060(auStack_1a8);
      piStack_258 = (int *)*puVar11;
      piStack_254 = (int *)puVar11[1];
      while( true ) {
        piVar4 = piStack_258;
        if ((piStack_258 == (int *)0x0) || (piStack_258 != piStack_23c)) {
          FUN_00d83c2d();
        }
        if (piStack_254 == piStack_238) break;
        if (piVar4 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if ((int *)piVar4[2] <= piStack_254) {
          FUN_00d83c2d();
        }
        if (*piStack_254 != *(int *)((int)this + 0xf8)) {
          iVar10 = (**(code **)(*local_260 + 0x108))(auStack_70);
          local_c._0_1_ = 10;
          pvVar3 = Game_copyCommandObjectList(*(void **)((int)this + 0xf8),auStack_a8);
          local_c._0_1_ = 0xb;
          if (*(uint *)(iVar10 + 0x18) < 0x10) {
            pvStack_264 = (void *)(iVar10 + 4);
          }
          else {
            pvStack_264 = *(void **)(iVar10 + 4);
          }
          if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
            iVar10 = (int)pvVar3 + 4;
          }
          else {
            iVar10 = *(int *)((int)pvVar3 + 4);
          }
          ppppuVar13 = (undefined4 ****)local_34[0];
          if (local_20 < 0x10) {
            ppppuVar13 = local_34;
          }
          piVar4 = (int *)FUN_01268e40();
          iVar7 = *piVar4;
          pcVar14 = "%s: %s plays %s.";
          pvVar3 = (void *)StateMachineState_getGame
                                     (iVar7,"%s: %s plays %s.",ppppuVar13,iVar10,pvStack_264);
          GamePlayer_logFormattedMessage(pvVar3,iVar7,pcVar14);
          local_c._0_1_ = 10;
          FUN_0041f1d7();
          local_c = CONCAT31(local_c._1_3_,9);
          FUN_0041f1d7();
          in_stack_0000000c = local_234;
        }
        FUN_0132e500(auStack_220,0);
      }
      local_c._0_1_ = 0;
      if (pvStack_248 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_248);
      }
      pvStack_248 = (void *)0x0;
      uStack_244 = 0;
      uStack_240 = 0;
    }
    piVar4 = piStack_25c;
    if (piStack_25c != (int *)0x0) {
      pvVar3 = EvaluationEnvironment_getOriginCard(in_stack_0000000c);
      piStack_25c = CommandObject_getActionFromEnvironment(in_stack_0000000c);
      set_play_element_id_field(in_stack_0000000c,piVar4);
      uVar12 = (**(code **)(*piVar4 + 0xcc))();
      EvaluationEnvironment_setActionReturn(uVar12);
      piStack_258 = Mem_Alloc(0x124);
      local_c._0_1_ = 0xc;
      if (piStack_258 == (int *)0x0) {
        pvStack_264 = (void *)0x0;
      }
      else {
        pvStack_264 = CommandObjectPlayCard_ctor(piStack_258,in_stack_0000000c);
      }
      local_c = (uint)local_c._1_3_ << 8;
      set_play_element_id_field(in_stack_0000000c,pvVar3);
      EvaluationEnvironment_setActionReturn(piStack_25c);
      CommandObjectVector_pushBack(local_250,&pvStack_264,pvVar2);
    }
    break;
  default:
    FUN_012f5a60("false","..\\common\\common\\state\\MultiActionState.cpp",0x1aa);
  }
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    _free(local_34[0]);
  }
  ExceptionList = local_14;
  return;
}

