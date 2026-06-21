// addr: 0x01460b60
// name: RevealState_updateState
// subsystem: common/common/state
// source (binary assert): common/common/state/RevealState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x01460c55) */
/* WARNING: Removing unreachable block (ram,0x01461513) */
/* Setting prototype: uint RevealState_updateState(void * this) */

uint __fastcall RevealState_updateState(void *this)

{
  int ******ppppppiVar1;
  bool bVar2;
  void **item;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *******pppppppiVar13;
  uint *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_1ac [4];
  undefined1 local_1a8;
  undefined4 local_198;
  undefined1 uVar14;
  char *pcVar15;
  undefined1 auStack_16c [4];
  int ******local_168;
  int ******local_164;
  undefined1 local_15c [4];
  uint *local_158;
  uint *local_154;
  int local_150;
  undefined4 ******ppppppuStack_14c;
  undefined1 *puStack_148;
  int ******ppppppiStack_144;
  undefined1 auStack_140 [4];
  int ******ppppppiStack_13c;
  int ******ppppppiStack_138;
  undefined4 uStack_134;
  void *pvStack_130;
  undefined1 auStack_12c [4];
  uint *puStack_128;
  uint *puStack_124;
  undefined4 uStack_120;
  void *pvStack_11c;
  void *pvStack_118;
  undefined4 uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [4];
  void *pvStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [152];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_58 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_54 [4];
  int ******appppppiStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 ******appppppuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Updates RevealState by validating the chosen target/pile, handling
                       close/no-target cases, revealing pile cards, emitting reveal messages, and
                       leaving the state when no target is available. */
  puStack_10 = &LAB_0169d587;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)auStack_16c;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xfffffe88);
  ExceptionList = &local_14;
  local_158 = (uint *)0x0;
  local_154 = (uint *)0x0;
  local_150 = 0;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (*(int *)((int)this + 0x118) == 4) {
    pppppppiVar13 = *(int ********)((int)this + 0x148);
    if ((pppppppiVar13 == (int *******)0x0) ||
       (*(int *)((int)this + 0x14c) - (int)pppppppiVar13 >> 2 == 0)) {
      StateMachineState_getGame();
      Game_logGeneralFormatted();
      pcVar15 = "tried to reveal a pile with no cards in it!";
      pvVar3 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar3,pcVar15,item);
      local_c = 0xffffffff;
      if (local_158 == (uint *)0x0) {
        ExceptionList = local_14;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    if (*(int ********)((int)this + 0x14c) < pppppppiVar13) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_168 = *(int *******)((int)this + 0x14c);
      if (local_168 < *(int ********)((int)this + 0x148)) {
        FUN_00d83c2d();
      }
      if (pppppppiVar13 == (int *******)local_168) break;
      if (*(int ********)((int)this + 0x14c) <= pppppppiVar13) {
        FUN_00d83c2d();
      }
      local_168 = (int ******)PlayElement_getId();
      FUN_0042c155();
      if (*(int ********)((int)this + 0x14c) <= pppppppiVar13) {
        FUN_00d83c2d();
      }
      pppppppiVar13 = pppppppiVar13 + 1;
    }
    pcVar15 = "please let me rest.";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar15,item);
    local_164 = Mem_Alloc(0x14);
    local_c._0_1_ = 1;
    if (local_164 == (int ******)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_c._0_1_ = 0;
    uVar14 = (undefined1)local_c;
    local_c._0_1_ = 0;
    if (*(int *)((int)this + 0x154) == 0) {
      FUN_012f8c70();
      StateMachineState_getGame();
      iVar4 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar3,iVar4);
      pvVar5 = (void *)StateMachineState_getGame();
      uVar6 = DoublePassState_allocateLoopMarker(pvVar5);
      *(uint *)((int)this + 0x154) = uVar6;
      DisplayActionBuilder_addIntArg(pvVar3,uVar6);
      DisplayActionBuilder_addCStringArg(pvVar3,"");
      DisplayActionBuilder_addObjectArg(pvVar3,local_15c);
      pvVar5 = (void *)StateMachineState_getGame();
      iVar4 = Game_getMyPlayerID(pvVar5);
      if (*(int *)((int)this + 0xf8) == iVar4) {
        uVar14 = *(undefined1 *)((int)this + 0x159);
      }
      else {
        uVar14 = true;
      }
      DisplayActionBuilder_addBoolArg(pvVar3,(bool)uVar14);
      pvVar5 = (void *)StateMachineState_getGame();
      iVar4 = Game_getMyPlayerID(pvVar5);
      if (*(int *)((int)this + 0xf8) == iVar4) {
        uVar14 = *(undefined1 *)((int)this + 0x158);
      }
      else {
        uVar14 = false;
      }
      DisplayActionBuilder_addBoolArg(pvVar3,(bool)uVar14);
      if (*(char *)((int)this + 0x130) == '\0') {
        if (*(char *)((int)this + 0x15a) != '\0') {
          piVar7 = (int *)StateMachineState_getGame();
          local_164 = (int ******)&stack0xfffffe70;
          local_198 = 0x1460e6d;
          FUN_005f15f0();
          local_c._0_1_ = 4;
          local_168 = (int ******)abStack_1ac;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1ac,"");
          local_c._0_1_ = 0;
          (**(code **)(*piVar7 + 0x9c))
                    (*(undefined4 *)((int)this + 0x154),*(undefined4 *)((int)this + 0xf8),
                     *(undefined1 *)((int)this + 0x158),*(undefined1 *)((int)this + 0x131));
        }
        DisplayActionBuilder_addCStringArg(pvVar3,"");
        DisplayActionBuilder_addBoolArg(pvVar3,*(bool *)((int)this + 0x15a));
      }
      else {
        DisplayActionBuilder_addCStringArg(pvVar3,"close");
        piVar7 = (int *)StateMachineState_getGame();
        local_164 = (int ******)&stack0xfffffe70;
        local_198 = 0x1460dc2;
        FUN_005f15f0();
        local_c._0_1_ = 2;
        local_168 = (int ******)abStack_1ac;
        local_198 = 0;
        local_1a8 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (abStack_1ac,"close",5);
        local_c._0_1_ = 0;
        (**(code **)(*piVar7 + 0x9c))
                  (*(undefined4 *)((int)this + 0x154),*(undefined4 *)((int)this + 0xf8),
                   *(undefined1 *)((int)this + 0x158),*(undefined1 *)((int)this + 0x131));
        DisplayActionBuilder_addBoolArg(pvVar3,*(bool *)((int)this + 0x15a));
      }
    }
    else {
      local_c._0_1_ = uVar14;
      FUN_012f8c70();
      DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 0x154));
      DisplayActionBuilder_addObjectArg(pvVar3,local_15c);
      local_164 = (int ******)&stack0xfffffe74;
      FUN_005f15f0();
      local_c._0_1_ = 6;
      StateMachineState_getGame();
      local_c._0_1_ = 0;
      FUN_01365270();
    }
    if (*(char *)((int)this + 0x131) == '\0') {
      piVar7 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar7 + 0x150))();
    }
    else {
      piVar7 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar7 + 0x150))();
      pvVar3 = EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
      if (pvVar3 != (void *)0x0) {
        pvStack_fc = (void *)0x0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_3c = 0xf;
        uStack_40 = 0;
        appppppiStack_50[0] = (int ******)((uint)appppppiStack_50[0] & 0xffffff00);
        uStack_20 = 0xf;
        uStack_24 = 0;
        appppppuStack_34[0] = (undefined4 ******)((uint)appppppuStack_34[0] & 0xffffff00);
        local_c = CONCAT31(local_c._1_3_,9);
        piVar7 = EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
        pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (**(code **)(*piVar7 + 0x108))();
        puStack_10._0_1_ = 10;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (abStack_58,pbVar8,0,0xffffffff);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
        if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_11c);
        }
        uStack_108 = 0xf;
        uStack_10c = 0;
        pvStack_11c = (void *)((uint)pvStack_11c & 0xffffff00);
        piVar7 = EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
        iVar4 = (**(code **)(*piVar7 + 0x28))();
        pvVar3 = (void *)StateMachineState_getGame();
        pvStack_130 = PlayArea_findPlayerElementById(pvVar3,iVar4);
        local_164 = *(int *******)((int)this + 0x14c);
        if (local_164 < *(int ********)((int)this + 0x148)) {
          FUN_00d83c2d();
        }
        local_168 = *(int *******)((int)this + 0x148);
        if (*(int ********)((int)this + 0x14c) < local_168) {
          FUN_00d83c2d();
        }
        ppppppiStack_144 = local_168;
        ppppppuStack_14c = (undefined4 *******)0x2;
        while( true ) {
          if (this == (void *)0xfffffebc) {
            FUN_00d83c2d();
          }
          if (ppppppiStack_144 == local_164) break;
          if (this == (void *)0xfffffebc) {
            FUN_00d83c2d();
          }
          if (*(int ********)((int)this + 0x14c) <= ppppppiStack_144) {
            FUN_00d83c2d();
          }
          pppppppiVar13 = (int *******)*ppppppiStack_144;
          local_168 = (int ******)pppppppiVar13;
          PointerVector_pushBack(auStack_100,&local_168,item);
          (*(code *)(*pppppppiVar13)[0x42])();
          local_c._0_1_ = 0xb;
          StdString_appendSubstring();
          local_c = CONCAT31(local_c._1_3_,9);
          if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_118);
          }
          iVar4 = *(int *)((int)this + 0x148);
          uStack_104 = 0xf;
          uStack_108 = 0;
          pvStack_118 = (void *)((uint)pvStack_118 & 0xffffff00);
          if (iVar4 == 0) {
LAB_0146115f:
            pppppppuVar9 = (undefined4 *******)0x0;
LAB_0146116b:
            if ((undefined4 *******)ppppppuStack_14c == pppppppuVar9) goto LAB_01461178;
          }
          else {
            if ((undefined4 *******)(*(int *)((int)this + 0x14c) - iVar4 >> 2) <= ppppppuStack_14c)
            {
              if (iVar4 == 0) goto LAB_0146115f;
              pppppppuVar9 = (undefined4 *******)(*(int *)((int)this + 0x14c) - iVar4 >> 2);
              goto LAB_0146116b;
            }
LAB_01461178:
            FUN_01241650();
          }
          ppppppuStack_14c = (undefined4 ******)((int)ppppppuStack_14c + 1);
          if (*(int ********)((int)this + 0x14c) <= ppppppiStack_144) {
            FUN_00d83c2d();
          }
          ppppppiStack_144 = ppppppiStack_144 + 1;
        }
        if (pvStack_130 == (void *)0x0) {
          FUN_012f5a60();
        }
        pcVar15 = "%s: You reveal %s.";
        pvVar3 = pvStack_130;
        pvVar5 = (void *)StateMachineState_getGame();
        GamePlayer_logFormattedMessage(pvVar5,(int)pvVar3,pcVar15);
        puStack_128 = (uint *)0x0;
        puStack_124 = (uint *)0x0;
        uStack_120 = 0;
        local_c = CONCAT31(local_c._1_3_,0xc);
        StateMachineState_getGame();
        FUN_013630f0();
        local_164 = (int ******)puStack_124;
        if (puStack_124 < puStack_128) {
          FUN_00d83c2d();
        }
        puVar12 = puStack_128;
        if (puStack_124 < puStack_128) {
          FUN_00d83c2d();
        }
        puVar11 = auStack_12c;
        puStack_148 = puVar11;
        while( true ) {
          if ((puVar11 == (undefined1 *)0x0) || (puVar11 != auStack_12c)) {
            FUN_00d83c2d();
          }
          if ((int ******)puVar12 == local_164) break;
          if (puVar11 == (undefined1 *)0x0) {
            FUN_00d83c2d();
          }
          if (*(uint **)(puVar11 + 8) <= puVar12) {
            FUN_00d83c2d();
          }
          if ((void *)*puVar12 != pvStack_130) {
            Game_copyCommandObjectList(pvStack_130,&pvStack_11c);
            local_c._0_1_ = 0xd;
            ppppppuStack_14c = appppppuStack_34[0];
            if (uStack_20 < 0x10) {
              ppppppuStack_14c = appppppuStack_34;
            }
            if (uStack_3c < 0x10) {
              local_168 = (int ******)appppppiStack_50;
            }
            else {
              local_168 = appppppiStack_50[0];
            }
            if (*(uint **)(puStack_148 + 8) <= puVar12) {
              FUN_00d83c2d();
            }
            uVar6 = *puVar12;
            pcVar15 = "%s: %s reveals %s.";
            pvVar3 = (void *)StateMachineState_getGame();
            local_198 = 0x146133c;
            GamePlayer_logFormattedMessage(pvVar3,uVar6,pcVar15);
            local_c = CONCAT31(local_c._1_3_,0xc);
            if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_118);
            }
            uStack_104 = 0xf;
            uStack_108 = 0;
            pvStack_118 = (void *)((uint)pvStack_118 & 0xffffff00);
            puVar11 = puStack_148;
          }
          if (*(uint **)(puVar11 + 8) <= puVar12) {
            FUN_00d83c2d();
          }
          puVar12 = puVar12 + 1;
        }
        local_c = CONCAT31(local_c._1_3_,9);
        if (puStack_128 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_128);
        }
        puStack_128 = (uint *)0x0;
        puStack_124 = (uint *)0x0;
        uStack_120 = 0;
        local_c = CONCAT31(local_c._1_3_,8);
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          _free(appppppuStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        appppppuStack_34[0] = (undefined4 ******)((uint)appppppuStack_34[0] & 0xffffff00);
        local_c = CONCAT31(local_c._1_3_,7);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          _free(appppppiStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        appppppiStack_50[0] = (int ******)((uint)appppppiStack_50[0] & 0xffffff00);
        local_c._0_1_ = 0;
        if (pvStack_fc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_fc);
        }
        pvStack_fc = (void *)0x0;
        uStack_f8 = 0;
        uStack_f4 = 0;
      }
    }
  }
  puVar12 = local_154;
  if (*(char *)((int)this + 0x130) == '\0') {
    _Dst = local_158;
    if ((local_154 < local_158) && (FUN_00d83c2d(), _Dst = local_158, local_154 < local_158)) {
      FUN_00d83c2d();
    }
    if (_Dst != puVar12) {
      iVar4 = (int)local_154 - (int)puVar12 >> 2;
      local_164 = (int ******)(_Dst + iVar4);
      if (0 < iVar4) {
        _memmove_s(_Dst,iVar4 * 4,puVar12,iVar4 * 4);
      }
      local_154 = (uint *)local_164;
    }
    puVar12 = *(uint **)((int)this + 0x148);
    if (*(uint **)((int)this + 0x14c) < puVar12) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_164 = *(int *******)((int)this + 0x14c);
      if (local_164 < *(uint **)((int)this + 0x148)) {
        FUN_00d83c2d();
      }
      if ((int ******)puVar12 == local_164) break;
      if (*(uint **)((int)this + 0x14c) <= puVar12) {
        FUN_00d83c2d();
      }
      local_168 = (int ******)PlayElement_getId();
      if ((local_158 == (uint *)0x0) ||
         ((uint)(local_150 - (int)local_158 >> 2) <= (uint)((int)local_154 - (int)local_158 >> 2)))
      {
        local_164 = (int ******)local_154;
        if (local_154 < local_158) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc();
      }
      else {
        *local_154 = (uint)local_168;
        local_154 = local_154 + 1;
      }
      if (*(uint **)((int)this + 0x14c) <= puVar12) {
        FUN_00d83c2d();
      }
      puVar12 = puVar12 + 1;
    }
    pcVar15 = "Leaving Reveal State \'cause we\'re not getting a target";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar15,item);
    local_164 = Mem_Alloc(0x18);
    local_c._0_1_ = 0xe;
    if (local_164 != (void *)0x0) {
      ReturnValueMap_ctor();
    }
    local_c._0_1_ = 0;
    FUN_012fa910();
    local_c._0_1_ = 0xf;
    FUN_01300680();
    FUN_005f1e5c();
    FUN_014181b0();
    ReturnValueMap_setInteger();
    StateMachine_pushPendingState();
    local_c = (uint)local_c._1_3_ << 8;
    FUN_01300cd0();
    local_c = 0xffffffff;
    if (local_158 == (uint *)0x0) {
      ExceptionList = local_14;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  ppppppiStack_13c = (int ******)0x0;
  ppppppiStack_138 = (int ******)0x0;
  uStack_134 = 0;
  local_c = CONCAT31(local_c._1_3_,0x10);
  ValueDataList_assign(auStack_140,(void *)((int)this + 0x144));
  if (((int *******)ppppppiStack_13c == (int *******)0x0) ||
     ((int)ppppppiStack_138 - (int)ppppppiStack_13c >> 2 == 0)) {
    FUN_012f5a60();
  }
  EvaluationEnvironment_ctor();
  local_c = CONCAT31(local_c._1_3_,0x11);
  EvaluationEnvironment_copyFrom(auStack_f0,*(void **)((int)this + 0xe8),item);
  EvaluationEnvironment_setBooleanKey9();
  EvaluationEnvironment_setBooleanKey4();
  set_boolean_value_key_17(true);
  FUN_013815b0();
  EvaluationEnvironment_setTarget1Return();
  pvVar3 = (void *)StateMachineState_getGame();
  iVar4 = Game_getMyPlayerID(pvVar3);
  iVar10 = GamePlayer_getPlayerId();
  if (iVar10 != iVar4) {
    pvVar3 = (void *)StateMachineState_getGame();
    bVar2 = Game_getFlag_14d(pvVar3);
    pppppppiVar13 = (int *******)ppppppiStack_13c;
    if (!bVar2) {
      if (ppppppiStack_138 < ppppppiStack_13c) {
        FUN_00d83c2d();
      }
      while( true ) {
        ppppppiVar1 = ppppppiStack_138;
        ppppppiStack_144 = (int ******)pppppppiVar13;
        if (ppppppiStack_138 < ppppppiStack_13c) {
          FUN_00d83c2d();
        }
        if (pppppppiVar13 == (int *******)ppppppiVar1) break;
        if (ppppppiStack_138 <= pppppppiVar13) {
          FUN_00d83c2d();
        }
        local_168 = (int ******)PlayElement_getId();
        uVar6 = *(uint *)((int)this + 0x108);
        if ((uVar6 == 0) ||
           ((uint)((int)(*(int *)((int)this + 0x110) - uVar6) >> 2) <=
            (uint)((int)(*(int *)((int)this + 0x10c) - uVar6) >> 2))) {
          if (*(uint *)((int)this + 0x10c) < uVar6) {
            FUN_00d83c2d();
          }
          Vector_insertSingleAndReturnIterator_realloc();
          pppppppiVar13 = (int *******)ppppppiStack_144;
        }
        else {
          puVar12 = *(uint **)((int)this + 0x10c);
          *puVar12 = (uint)local_168;
          *(uint **)((int)this + 0x10c) = puVar12 + 1;
        }
        if (ppppppiStack_138 <= pppppppiVar13) {
          FUN_00d83c2d();
        }
        pppppppiVar13 = pppppppiVar13 + 1;
      }
      goto LAB_01461953;
    }
  }
  FUN_012fb470();
  pppppppiVar13 = (int *******)ppppppiStack_13c;
  if (ppppppiStack_138 < ppppppiStack_13c) {
    FUN_00d83c2d();
  }
  while( true ) {
    ppppppiVar1 = ppppppiStack_138;
    if (ppppppiStack_138 < ppppppiStack_13c) {
      FUN_00d83c2d();
    }
    if (pppppppiVar13 == (int *******)ppppppiVar1) break;
    if ((ppppppiStack_138 <= pppppppiVar13) && (FUN_00d83c2d(), ppppppiStack_138 <= pppppppiVar13))
    {
      FUN_00d83c2d();
    }
    iVar4 = Card_getPropertyMap();
    if (*(uint *)(iVar4 + 0x18) < 0x10) {
      iVar4 = iVar4 + 4;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4);
    }
    PlayElement_getId();
    pcVar15 = "RevealState::updateState valid target: %s (%d)";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar15,iVar4);
    if (ppppppiStack_138 <= pppppppiVar13) {
      FUN_00d83c2d();
    }
    local_168 = (int ******)PlayElement_getId();
    puVar12 = *(uint **)((int)this + 0x108);
    if ((puVar12 == (uint *)0x0) ||
       ((uint)(*(int *)((int)this + 0x110) - (int)puVar12 >> 2) <=
        (uint)(*(int *)((int)this + 0x10c) - (int)puVar12 >> 2))) {
      local_164 = *(int *******)((int)this + 0x10c);
      if (local_164 < puVar12) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc();
    }
    else {
      puVar12 = *(uint **)((int)this + 0x10c);
      *puVar12 = (uint)local_168;
      *(uint **)((int)this + 0x10c) = puVar12 + 1;
    }
    if (ppppppiStack_138 <= pppppppiVar13) {
      FUN_00d83c2d();
    }
    pppppppiVar13 = pppppppiVar13 + 1;
  }
LAB_01461953:
  *(undefined4 *)((int)this + 0x118) = 1;
  local_164 = Mem_Alloc(0x13c);
  local_c._0_1_ = 0x12;
  if (local_164 != (void *)0x0) {
    GetTargetState_ctor();
  }
  local_c._0_1_ = 0x11;
  StateMachineState_setButtonPressed();
  uStack_3c = 0xf;
  uStack_40 = 0;
  appppppiStack_50[0] = (int ******)((uint)appppppiStack_50[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_54,"close",5)
  ;
  local_c._0_1_ = 0x13;
  FUN_0145d850();
  local_c._0_1_ = 0x14;
  StateMachineState_setMessageText();
  local_c = CONCAT31(local_c._1_3_,0x13);
  if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_118);
  }
  uStack_104 = 0xf;
  uStack_108 = 0;
  pvStack_118 = (void *)((uint)pvStack_118 & 0xffffff00);
  local_c._0_1_ = 0x11;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    _free(appppppiStack_50[0]);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  appppppiStack_50[0] = (int ******)((uint)appppppiStack_50[0] & 0xffffff00);
  uVar6 = StateMachine_setCurrentState();
  local_c._0_1_ = 0x10;
  FUN_01385460();
  local_c = (uint)local_c._1_3_ << 8;
  if ((int *******)ppppppiStack_13c == (int *******)0x0) {
    ppppppiStack_13c = (int ******)0x0;
    ppppppiStack_138 = (int ******)0x0;
    uStack_134 = 0;
    local_c = 0xffffffff;
    if (local_158 == (uint *)0x0) {
      ExceptionList = local_14;
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
                    /* WARNING: Subroutine does not return */
  _free(ppppppiStack_13c);
}

