// addr: 0x01475aa0
// name: DiscardCardState_discardCards
// subsystem: common/common/rules
// source (binary assert): common/common/state/DiscardCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall DiscardCardState_discardCards(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *key_;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *****pppppuVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  void *unaff_EDI;
  undefined8 uVar16;
  int iVar17;
  char *pcVar18;
  int iStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *local_78;
  int *piStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  void *pvStack_68;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 auStack_50 [4];
  void *pvStack_4c;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [4];
  int *piStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  undefined4 ****ppppuStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_18;
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Selects and discards cards for DiscardCardState, including random-card
                       selection, GameCommand_DiscardCard creation, dispatch, and player log
                       messages. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f88d;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&iStack_98);
  key_ = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff58);
  ExceptionList = &local_c;
  uVar12 = 0;
  local_78 = param_1;
  if ((param_1[0x47] == 0) || (param_1[0x48] - param_1[0x47] >> 2 == 0)) {
    pvVar3 = EvaluationEnvironment_getMember14((void *)param_1[0x3a]);
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("player","..\\common\\common\\state\\DiscardCardState.cpp",0x6b);
    }
    piVar4 = (int *)PlayElement_getGame();
    uVar5 = (**(code **)(*piVar4 + 0x48))(param_1[0x42],param_1[0x3a]);
    piVar4 = (int *)FUN_00d8d382(uVar5,0,&PlayArea::RTTI_Type_Descriptor,
                                 &PilePlayArea::RTTI_Type_Descriptor,0);
    piStack_84 = piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_012f5a60(&DAT_018f33f4,"..\\common\\common\\state\\DiscardCardState.cpp",0x6e);
    }
    uVar16 = StateMachineState_getGame(param_1[0x3f]);
    pvVar3 = find_play_element_in_maps((void *)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    iStack_70 = FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor
                             ,0);
    piStack_94 = (int *)0x0;
    piStack_90 = (int *)0x0;
    uStack_8c = 0;
    uStack_4 = 0;
    if ((char)param_1[0x43] == '\0') {
      PlayElement_collectCards(param_1[0x41],&iStack_98);
    }
    else {
      FUN_0139f170(param_1[0x41],&iStack_98);
      EvaluationEnvironment_logCardList((void *)param_1[0x3a],"Random Cards returned: ",&iStack_98);
      ppppuStack_28 = (undefined4 ****)0x0;
      iStack_24 = 0;
      uStack_20 = 0;
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      (**(code **)(*piVar4 + 0x34))(abStack_2c);
      if (ppppuStack_28 != (undefined4 ****)0x0) {
        uVar12 = iStack_24 - (int)ppppuStack_28 >> 2;
      }
      if ((uint)param_1[0x41] < uVar12) {
        piStack_88 = piStack_90;
        if (piStack_90 < piStack_94) {
          FUN_00d83c2d();
        }
        piStack_80 = piStack_94;
        if (piStack_90 < piStack_94) {
          FUN_00d83c2d();
        }
        piVar14 = piStack_90;
        piVar9 = piStack_94;
        piVar6 = (int *)FUN_01355ae0(auStack_34,&iStack_98,piStack_80,&iStack_98,piStack_88,
                                     &iStack_70);
        piVar4 = (int *)*piVar6;
        piStack_30 = (int *)piVar6[1];
        piStack_88 = (void *)0x0;
        piStack_80 = piVar14;
        while( true ) {
          piVar14 = piStack_80;
          if (piStack_80 < piVar9) {
            FUN_00d83c2d();
            piVar9 = piStack_94;
            piVar14 = piStack_90;
          }
          if ((piVar4 == (int *)0x0) || (piVar4 != &iStack_98)) {
            FUN_00d83c2d();
            piVar9 = piStack_94;
            piVar14 = piStack_90;
          }
          if (piStack_30 == piStack_80) break;
          if (999 < (int)piStack_88) goto LAB_01475dd5;
          piVar4 = piVar14;
          if (piVar14 < piVar9) {
            FUN_00d83c2d();
            piVar9 = piStack_94;
            piVar4 = piStack_90;
          }
          if (piVar4 < piVar9) {
            FUN_00d83c2d();
            piVar4 = piStack_90;
          }
          piVar6 = piStack_90;
          if (piVar9 != piVar14) {
            iVar15 = (int)piVar4 - (int)piVar14 >> 2;
            piVar6 = piVar9 + iVar15;
            if (0 < iVar15) {
              _memmove_s(piVar9,iVar15 * 4,piVar14,iVar15 * 4);
            }
          }
          piStack_90 = piVar6;
          piVar4 = local_78;
          FUN_0139f170(local_78[0x41],&iStack_98);
          EvaluationEnvironment_logCardList
                    ((void *)piVar4[0x3a],"Random Cards returned: ",&iStack_98);
          piVar9 = piStack_90;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar14 = piStack_94;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar4 = &iStack_98;
          for (piStack_30 = piVar14; (piStack_30 != piVar9 && (*piStack_30 != iStack_70));
              piStack_30 = piStack_30 + 1) {
          }
          piStack_88 = (int *)((int)piStack_88 + 1);
          piVar9 = piStack_94;
          piStack_80 = piStack_90;
          param_1 = local_78;
          piStack_7c = piVar14;
        }
        if ((int)piStack_88 < 1000) goto LAB_01475dea;
LAB_01475dd5:
        pcVar18 = 
        "infinite loop stopped when trying to find random card that isn\'t the origin card.";
        pvVar3 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar3,pcVar18,key_);
      }
LAB_01475dea:
      uStack_4 = uStack_4 & 0xffffff00;
      if (ppppuStack_28 != (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(ppppuStack_28);
      }
      ppppuStack_28 = (undefined4 ****)0x0;
      iStack_24 = 0;
      uStack_20 = 0;
    }
    piStack_84 = piStack_90;
    if (piStack_90 < piStack_94) {
      FUN_00d83c2d();
    }
    uVar12 = param_1[0x48];
    if (uVar12 < (uint)param_1[0x47]) {
      FUN_00d83c2d();
    }
    uVar1 = param_1[0x47];
    if ((uint)param_1[0x48] < uVar1) {
      FUN_00d83c2d();
    }
    FUN_0041f5e6(auStack_34,param_1 + 0x46,uVar1,param_1 + 0x46,uVar12);
    piVar4 = piStack_94;
    if (piStack_90 < piStack_94) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x98) {
        FUN_00d83c2d();
      }
      if (piVar4 == piStack_84) break;
      if (&stack0x00000000 == (undefined1 *)0x98) {
        FUN_00d83c2d();
      }
      if (piStack_90 <= piVar4) {
        FUN_00d83c2d();
      }
      if (*piVar4 != 0) {
        piStack_80 = (int *)PlayElement_getId();
        FUN_0042c155(&piStack_80);
      }
      if (piStack_90 <= piVar4) {
        FUN_00d83c2d();
      }
      piVar4 = piVar4 + 1;
    }
    uStack_4 = 0xffffffff;
    if (piStack_94 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_94);
    }
    piStack_94 = (int *)0x0;
    piStack_90 = (int *)0x0;
    uStack_8c = 0;
  }
  uStack_4 = 0xffffffff;
  iVar15 = param_1[0x47];
  if (iVar15 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_1[0x48] - iVar15 >> 2;
  }
  uVar1 = param_1[0x45];
  if (uVar1 < uVar12) {
    if ((iVar15 == 0) || ((uint)(param_1[0x48] - iVar15 >> 2) <= uVar1)) {
      FUN_00d83c2d();
    }
    uVar16 = StateMachineState_getGame(*(undefined4 *)(param_1[0x47] + uVar1 * 4));
    pvVar3 = find_play_element_in_maps((void *)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    piVar4 = (int *)FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    piStack_80 = piVar4;
    if (piVar4 != (int *)0x0) {
      uStack_14 = 0xf;
      iStack_18 = 0;
      ppppuStack_28 = (undefined4 ****)((uint)ppppuStack_28 & 0xffffff00);
      uStack_4 = 2;
      EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
      pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               Card_getPropertyMap();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_2c,pbVar7,0,0xffffffff);
      StateMachineState_getGame();
      cVar2 = Game_getFlag_318();
      if (cVar2 != '\0') {
        pvVar3 = (void *)FUN_013402b0();
        piStack_88 = pvVar3;
        if (iStack_18 == 0) {
          iVar15 = (**(code **)(*piVar4 + 0x108))(auStack_6c);
          uStack_4._0_1_ = 3;
          if (*(uint *)(iVar15 + 0x18) < 0x10) {
            iVar15 = iVar15 + 4;
          }
          else {
            iVar15 = *(int *)(iVar15 + 4);
          }
          pcVar18 = "You discard %s.";
          pvVar8 = (void *)StateMachineState_getGame(pvVar3,"You discard %s.",iVar15);
          GamePlayer_logFormattedMessage(pvVar8,(int)pvVar3,pcVar18);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_68);
          }
          uStack_54 = 0xf;
          uStack_58 = 0;
          pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
          piStack_94 = (int *)0x0;
          piStack_90 = (int *)0x0;
          uStack_8c = 0;
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          piVar9 = &iStack_98;
          StateMachineState_getGame(piVar9);
          FUN_013630f0(piVar9);
          piStack_84 = piStack_90;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar9 = piStack_94;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar14 = &iStack_98;
          piStack_80 = piVar14;
          while( true ) {
            piStack_7c = piVar9;
            if ((piVar14 == (int *)0x0) || (piVar14 != &iStack_98)) {
              FUN_00d83c2d();
            }
            if (piVar9 == piStack_84) break;
            if (piVar14 == (int *)0x0) {
              FUN_00d83c2d();
            }
            if ((int *)piVar14[2] <= piVar9) {
              FUN_00d83c2d();
            }
            if ((void *)*piVar9 != piStack_88) {
              iVar15 = (**(code **)(*piVar4 + 0x108))(auStack_50);
              uStack_4._0_1_ = 5;
              pvVar3 = Game_copyCommandObjectList(piStack_88,auStack_6c);
              uStack_4._0_1_ = 6;
              if (*(uint *)(iVar15 + 0x18) < 0x10) {
                iVar15 = iVar15 + 4;
              }
              else {
                iVar15 = *(int *)(iVar15 + 4);
              }
              if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
                iVar13 = (int)pvVar3 + 4;
              }
              else {
                iVar13 = *(int *)((int)pvVar3 + 4);
              }
              if ((int *)piStack_80[2] <= piStack_7c) {
                FUN_00d83c2d();
              }
              iVar17 = *piStack_7c;
              pcVar18 = "%s discards %s.";
              pvVar3 = (void *)StateMachineState_getGame(iVar17,"%s discards %s.",iVar13,iVar15);
              GamePlayer_logFormattedMessage(pvVar3,iVar17,pcVar18);
              uStack_4 = CONCAT31(uStack_4._1_3_,5);
              if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_68);
              }
              uStack_54 = 0xf;
              uStack_58 = 0;
              pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
              uStack_4 = CONCAT31(uStack_4._1_3_,4);
              if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_4c);
              }
              uStack_38 = 0xf;
              uStack_3c = 0;
              pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
              piVar14 = piStack_80;
              piVar9 = piStack_7c;
            }
            if ((int *)piVar14[2] <= piVar9) {
              FUN_00d83c2d();
            }
            piVar9 = piVar9 + 1;
          }
        }
        else {
          iVar15 = (**(code **)(*piVar4 + 0x108))(auStack_50);
          uStack_4._0_1_ = 7;
          if (*(uint *)(iVar15 + 0x18) < 0x10) {
            iVar15 = iVar15 + 4;
          }
          else {
            iVar15 = *(int *)(iVar15 + 4);
          }
          pppppuVar11 = (undefined4 *****)ppppuStack_28;
          if (uStack_14 < 0x10) {
            pppppuVar11 = &ppppuStack_28;
          }
          pcVar18 = "%s: You discard %s.";
          pvVar8 = (void *)StateMachineState_getGame
                                     (pvVar3,"%s: You discard %s.",pppppuVar11,iVar15);
          GamePlayer_logFormattedMessage(pvVar8,(int)pvVar3,pcVar18);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_4c);
          }
          uStack_38 = 0xf;
          uStack_3c = 0;
          pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
          piStack_94 = (int *)0x0;
          piStack_90 = (int *)0x0;
          uStack_8c = 0;
          uStack_4 = CONCAT31(uStack_4._1_3_,8);
          piVar9 = &iStack_98;
          StateMachineState_getGame(piVar9);
          FUN_013630f0(piVar9);
          piStack_84 = piStack_90;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar9 = piStack_94;
          if (piStack_90 < piStack_94) {
            FUN_00d83c2d();
          }
          piVar14 = &iStack_98;
          local_78 = piVar14;
          while( true ) {
            piStack_74 = piVar9;
            if ((piVar14 == (int *)0x0) || (piVar14 != &iStack_98)) {
              FUN_00d83c2d();
            }
            if (piVar9 == piStack_84) break;
            if (piVar14 == (int *)0x0) {
              FUN_00d83c2d();
            }
            if ((int *)piVar14[2] <= piVar9) {
              FUN_00d83c2d();
            }
            if ((void *)*piVar9 != piStack_88) {
              iVar15 = (**(code **)(*piVar4 + 0x108))(auStack_6c);
              uStack_4._0_1_ = 9;
              pvVar3 = Game_copyCommandObjectList(piStack_88,auStack_50);
              uStack_4._0_1_ = 10;
              if (*(uint *)(iVar15 + 0x18) < 0x10) {
                iVar15 = iVar15 + 4;
              }
              else {
                iVar15 = *(int *)(iVar15 + 4);
              }
              if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
                iVar13 = (int)pvVar3 + 4;
              }
              else {
                iVar13 = *(int *)((int)pvVar3 + 4);
              }
              pppppuVar11 = (undefined4 *****)ppppuStack_28;
              if (uStack_14 < 0x10) {
                pppppuVar11 = &ppppuStack_28;
              }
              if ((int *)local_78[2] <= piStack_74) {
                FUN_00d83c2d();
              }
              iVar17 = *piStack_74;
              pcVar18 = "%s: %s discards %s.";
              pvVar3 = (void *)StateMachineState_getGame
                                         (iVar17,"%s: %s discards %s.",pppppuVar11,iVar13,iVar15);
              GamePlayer_logFormattedMessage(pvVar3,iVar17,pcVar18);
              uStack_4 = CONCAT31(uStack_4._1_3_,9);
              if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_4c);
              }
              uStack_38 = 0xf;
              uStack_3c = 0;
              pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
              uStack_4 = CONCAT31(uStack_4._1_3_,8);
              if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_68);
              }
              uStack_54 = 0xf;
              uStack_58 = 0;
              pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
              piVar4 = piStack_80;
              piVar14 = local_78;
              piVar9 = piStack_74;
            }
            if ((int *)piVar14[2] <= piVar9) {
              FUN_00d83c2d();
            }
            piVar9 = piVar9 + 1;
          }
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        if (piStack_94 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_94);
        }
        uStack_8c = 0;
        piStack_90 = (int *)0x0;
        piStack_94 = (int *)0x0;
      }
      (**(code **)(*piVar4 + 0x150))();
      if (*(char *)((int)param_1 + 0x10d) == '\x01') {
        EvaluationEnvironment_setPlayElementReturn(piVar4,(int)key_,unaff_EDI);
      }
      piVar9 = Mem_Alloc(0x50);
      uStack_4._0_1_ = 0xb;
      piStack_84 = piVar9;
      if (piVar9 == (int *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)StateMachineState_getGame();
        pvVar3 = GameCommand_DiscardCard_ctor(piVar9,pvVar3);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      GameCommand_DiscardCard_setupCard(pvVar3,piVar4);
      uVar12 = (**(code **)(*piVar4 + 0x28))();
      set_field_4(pvVar3,uVar12);
      GameCommand_DiscardCard_setRandomFlag(pvVar3,*(bool *)((int)param_1 + 0x10d));
      GameCommand_DiscardCard_setupParentCardName(abStack_2c);
      iVar15 = 0;
      pvVar8 = (void *)StateMachineState_getGame();
      Game_dispatchCommandToPlayer(pvVar8,iVar15,pvVar3);
      pcVar18 = "adding Gamecommand_DiscardCard";
      pvVar3 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar3,pcVar18,key_);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
        _free(ppppuStack_28);
      }
      uStack_14 = 0xf;
      iStack_18 = 0;
      ppppuStack_28 = (undefined4 ****)((uint)ppppuStack_28 & 0xffffff00);
    }
  }
  pvVar3 = Mem_Alloc(0x3c);
  uStack_4 = 0xc;
  piStack_84 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)StateMachineState_getGame();
    puVar10 = GameCommand_SynchPoint_ctor(pvVar3,puVar10,key_);
  }
  uStack_4 = 0xffffffff;
  pvVar3 = (void *)StateMachineState_getGame();
  Game_dispatchCommandToAllPlayers(pvVar3,puVar10);
  (**(code **)(*param_1 + 0xb0))(param_1[0x3e]);
  ExceptionList = local_10;
  return;
}

